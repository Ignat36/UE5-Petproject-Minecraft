// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chunk.generated.h"

enum class EDirection
{
	Forward,
	Right,
	Back,
	Left,
	Up,
	Down
};

enum class EBlock
{
	None,
	Air,
	Stone,
	Dirt,
	Grass
};

class UProceduralMeshComponent;
class UFastNoiseWrapper;

UCLASS()
class UEMINECRAFT_API AChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	AChunk();

	UPROPERTY(EditAnywhere, Category = "Chunk")
	FIntVector Size = FIntVector(32, 32, 32);

	UPROPERTY(EditAnywhere, Category = "Chunk")
	int32 Scale = 1;

	UPROPERTY(EditAnywhere, Category = "Chunk")
	bool IsShadowCasted = false;

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Chunk")
	UProceduralMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Chunk")
	UFastNoiseWrapper* Noise;

	UPROPERTY(EditAnywhere, Category = "Chunk")
	float Frequency = 0.03f;

private:	

	int32 Seed = 1337;

	TArray<EBlock> Blocks;

	TArray<FVector> VertexData;
	TArray<int32> TriangleData;
	TArray<FVector2D> UVData;

	int32 VertexCount = 0;

	const FVector BlockVertexData[8] = {
		FVector(100, 100, 100),
		FVector(100, 0, 100),
		FVector(100, 0, 0),
		FVector(100, 100, 0),
		FVector(0, 0, 100),
		FVector(0, 100, 100),
		FVector(0, 100, 0),
		FVector(0, 0, 0),
	};

	const int32 BlockTriangleData[24] = {
		0, 1, 2, 3, // Forward
		5, 0, 3, 6, // Right
		4, 5, 6, 7, // Back
		1, 4, 7, 2, // Left
		5, 4, 1, 0, // Up
		3, 2, 7, 6  // Down
	};

	void GenerateBlocks();

	void GenerateMesh();

	void ApplyMesh() const;

	bool Check(FVector Position) const;

	void CreateFace(EDirection Direction, FVector Position);

	TArray<FVector> GetFaceVertecies(EDirection Direction, FVector Position) const;

	FVector GetPositionInDirection(EDirection Direction, FVector Position) const;

	int32 GetBlockIndex(FIntVector Position) const;

	int32 GetBlockIndex(int32 X, int32 Y, int32 Z) const;
};
