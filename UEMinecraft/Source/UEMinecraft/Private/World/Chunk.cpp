// Fill out your copyright notice in the Description page of Project Settings.


#include "Landskape/Chunk.h"
#include "ProceduralMeshComponent.h"
#include "FastNoiseWrapper.h"

// Sets default values
AChunk::AChunk()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");
	Noise = CreateDefaultSubobject<UFastNoiseWrapper>("Noise");

	Blocks.SetNum(Size.X * Size.Y * Size.Z);

	Mesh->SetCastShadow(IsShadowCasted);

	SetRootComponent(Mesh);
}

void AChunk::BeginPlay()
{
	Super::BeginPlay();

	check(Noise);
	check(Mesh);

	Noise->SetupFastNoise(EFastNoise_NoiseType::Perlin, Seed, Frequency);
	
	GenerateBlocks();
	GenerateMesh();
	ApplyMesh();

	if (!Noise->IsInitialized())
	{
		UE_LOG(LogTemp, Display, TEXT("fuck you"))
	}
}

void AChunk::GenerateBlocks()
{
	const auto Location = GetActorLocation();

	for (int x = 0; x < Size.X; x++)
	{
		for (int y = 0; y < Size.Y; y++)
		{
			const float Xpos = (x * 100 + Location.X) / 100;
			const float Ypos = (y * 100 + Location.Y) / 100;

			const int32 Height = FMath::Clamp(FMath::RoundToInt((Noise->GetNoise2D(Xpos, Ypos) + 1) * Size.Z / 2), 0, Size.Z);

			UE_LOG(LogTemp, Display, TEXT("%f : %f : %f"), Noise->GetNoise2D(Xpos, Ypos), Xpos, Ypos);

			for (int z = 0; z < Height; z++)
			{
				Blocks[GetBlockIndex(x, y, z)] = EBlock::Stone;
			}

			for (int z = Height; z < Size.Z; z++)
			{
				Blocks[GetBlockIndex(x, y, z)] = EBlock::Air;
			}
		}
	}
}

void AChunk::GenerateMesh()
{
	for (int32 x = 0; x < Size.X; x++)
	{
		for (int32 y = 0; y < Size.Y; y++)
		{
			for (int32 z = 0; z < Size.Z; z++)
			{
				if (Blocks[GetBlockIndex(x, y, z)] != EBlock::Air)
				{
					const auto Position = FVector(x, y, z);

					for (auto Direction : { EDirection::Forward, EDirection::Right, EDirection::Back, EDirection::Left, EDirection::Up, EDirection::Down })
					{
						if (Check(GetPositionInDirection(Direction, Position)))
						{
							CreateFace(Direction, Position * 100);
						}
					}
				}
			}
		}
	}
}

void AChunk::ApplyMesh() const
{
	Mesh->CreateMeshSection
	(
		0,
		VertexData,
		TriangleData,
		TArray<FVector>(),
		UVData,
		TArray<FColor>(),
		TArray<FProcMeshTangent>(),
		false
	);
}

bool AChunk::Check(FVector Position) const
{
	if (Position.X >= Size.X || Position.Y >= Size.Y || Position.X >= Size.Z ||
		Position.X < 0 || Position.Y < 0 || Position.Z < 0)
	{
		return true;
	}

	return Blocks[GetBlockIndex(FIntVector(Position))] == EBlock::Air;
}

void AChunk::CreateFace(EDirection Direction, FVector Position)
{
	VertexData.Append(GetFaceVertecies(Direction, Position));
	UVData.Append({ FVector2D(1, 1), FVector2D(1, 0), FVector2D(0, 0) , FVector2D(0, 1) });
	TriangleData.Append({ VertexCount + 3, VertexCount + 2, VertexCount, VertexCount + 2, VertexCount + 1, VertexCount });
	VertexCount += 4;
}

TArray<FVector> AChunk::GetFaceVertecies(EDirection Direction, FVector Position) const
{
	TArray<FVector> Vertices;

	for (int32 i = 0; i < 4; i++)
	{
		Vertices.Add(BlockVertexData[BlockTriangleData[i + static_cast<int32>(Direction) * 4]] * Scale + Position);
	}

	return Vertices;
}

FVector AChunk::GetPositionInDirection(EDirection Direction, FVector Position) const
{
	switch (Direction)
	{
	case EDirection::Forward: return Position + FVector::ForwardVector; 
	case EDirection::Right: return Position + FVector::RightVector;
	case EDirection::Back: return Position + FVector::BackwardVector; 
	case EDirection::Left: return Position + FVector::LeftVector; 
	case EDirection::Up: return Position + FVector::UpVector; 
	case EDirection::Down: return Position + FVector::DownVector;
	default: UE_LOG(LogTemp, Error, TEXT("Unknown EDirection parameter")); return FVector::ZeroVector;
	}
}

int32 AChunk::GetBlockIndex(FIntVector Position) const
{
	return Position.X + Position.Y * Size.X + Position.Z * Size.X * Size.Y;
}

int32 AChunk::GetBlockIndex(int32 X, int32 Y, int32 Z) const
{
	return X + (Y * Size.X) + (Z * Size.X * Size.Y);
}
