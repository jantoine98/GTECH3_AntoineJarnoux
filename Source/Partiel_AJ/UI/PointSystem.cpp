// Fill out your copyright notice in the Description page of Project Settings.


#include "Partiel_AJ/UI/PointSystem.h"

// Sets default values
APointSystem::APointSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerScore = 0;

}

// Called when the game starts or when spawned
void APointSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APointSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APointSystem::CollectObject()
{
	PlayerScore += 10; // Augmenter le score lorsque le joueur collecte un objet
}

void APointSystem::KillMonster()
{
	PlayerScore += 50; // Augmenter le score lorsque le joueur tue un monstre
}

void APointSystem::AccomplishObjective()
{
	PlayerScore += 100; // Augmenter le score lorsque le joueur accomplit un objectif
}

