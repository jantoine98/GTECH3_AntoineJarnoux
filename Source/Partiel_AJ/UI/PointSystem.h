// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PointSystem.generated.h"

UCLASS()
class PARTIEL_AJ_API APointSystem : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
	int32 PlayerScore;

	UFUNCTION(BlueprintCallable, Category = "Score")
	void CollectObject();

	UFUNCTION(BlueprintCallable, Category = "Score")
	void KillMonster();

	UFUNCTION(BlueprintCallable, Category = "Score")
	void AccomplishObjective();
	
public:	
	// Sets default values for this actor's properties
	APointSystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
