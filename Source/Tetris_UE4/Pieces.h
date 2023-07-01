// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include <functional>
#include "Pieces.generated.h"

UCLASS()
class TETRIS_UE4_API APieces : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APieces();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY()
    class USceneComponent* SceneComponent;
    
    UPROPERTY()
    class USoundCue* RotateSoundCue;
    
    UPROPERTY()
    class USoundCue* MoveLeftRightSoundCue;
    
    UPROPERTY()
    TArray<class UMaterial*> Colors;
    
    void DrawDebugLines();
    
    void TestRotate();
    void MoveLeft();
    void MoveRight();
    bool MoveDown(bool PlaySound=true);
    void Dismiss();
    // 检查当前的形状在某个位置时是否会与其它方块碰撞。
    bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);
    void Index();
    void Eliminar();
private:
    int Indice;
    TArray<ABlock*> Blocks;
public:
    void SpawnBlocks();
    void setIndex(int _index) { Indice = _index; }
    int getIndex() { return Indice; }

};
