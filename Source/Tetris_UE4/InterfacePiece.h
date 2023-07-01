// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfacePiece.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfacePiece : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API IInterfacePiece
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void DrawDebugLines() = 0;
	virtual void TestRotate() = 0;
	virtual void MoveLeft() = 0;
	virtual void MoveRight() = 0;
	virtual bool MoveDown(bool _Sonido) = 0;
	virtual void Dismiss() = 0;
	//virtual bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck) = 0;
	virtual void SpawnBlocks() = 0;
};
