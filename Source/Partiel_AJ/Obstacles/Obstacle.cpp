// Fill out your copyright notice in the Description page of Project Settings.


#include "Partiel_AJ/Obstacles/Obstacle.h"
#include "Player/PlayerCharacter.h

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SetActorEnableCollision(true);
    SetActorTickEnabled(false);

}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyObstacleActor::OnObstacleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    APlayerCharacter* PlayerCharacter = Cast<AYourPlayerCharacter>(OtherActor);
    if (PlayerCharacter)
    {
        // Affichez le message de "Game Over"
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Game Over"));

        // Vous pouvez également ajouter d'autres logiques de gestion du "Game Over" ici, comme la réinitialisation du niveau ou l'affichage d'un menu de fin de partie
    }
}

