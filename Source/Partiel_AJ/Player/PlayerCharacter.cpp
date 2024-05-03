// Fill out your copyright notice in the Description page of Project Settings.


#include "Partiel_AJ/Player/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerCharacter::OnObstacleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    // Vérifie si l'objet touché est un obstacle (vous pouvez modifier ceci en fonction de votre logique)
    if (OtherActor->ActorHasTag("Obstacle"))
    {
        // Affiche "Game Over"
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Game Over"));

        // Termine le jeu (vous pouvez modifier ceci en fonction de votre logique)
        UGameplayStatics::OpenLevel(GetWorld(), "MainMenuLevel");
    }
}

