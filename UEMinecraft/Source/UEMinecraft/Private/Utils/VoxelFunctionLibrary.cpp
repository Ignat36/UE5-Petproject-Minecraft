// Fill out your copyright notice in the Description page of Project Settings.


#include "Utils/VoxelFunctionLibrary.h"

FIntVector UVoxelFunctionLibrary::WorldToBlockPosition(const FVector& Position)
{
	return FIntVector(Position) / 100;
}

FIntVector UVoxelFunctionLibrary::WorldToLocalBlockPosition(const FVector& Position, const FIntVector& Size)
{
	const auto ChunkPos = WorldToChunkPosition(Position, Size);
	
	auto Result = WorldToBlockPosition(Position) - ChunkPos * Size;

	// Negative Normalization
	if (ChunkPos.X < 0) Result.X--;
	if (ChunkPos.Y < 0) Result.Y--;
	if (ChunkPos.Z < 0) Result.Z--;

	return Result;
}

FIntVector UVoxelFunctionLibrary::WorldToChunkPosition(const FVector& Position, const FIntVector& Size)
{
	FIntVector Result;

	const FIntVector Factor = Size * 100;
	const auto IntPosition = FIntVector(Position);

	if (IntPosition.X < 0) Result.X = (int)(Position.X / Factor.X) - 1;
	else Result.X = (int)(Position.X / Factor.X);

	if (IntPosition.Y < 0) Result.Y = (int)(Position.Y / Factor.Y) - 1;
	else Result.Y = (int)(Position.Y / Factor.Y);

	if (IntPosition.Z < 0) Result.Z = (int)(Position.Z / Factor.Z) - 1;
	else Result.Z = (int)(Position.Z / Factor.Z);
	
	return Result;
}
