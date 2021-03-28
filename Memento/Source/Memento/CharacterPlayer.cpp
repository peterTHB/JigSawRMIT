// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterPlayer.h"

// Sets default values
ACharacterPlayer::ACharacterPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.    
    
	PrimaryActorTick.bCanEverTick = true;
    
   
    
}

// Called when the game starts or when spawned
void ACharacterPlayer::BeginPlay()
{
    Super::BeginPlay();
    
    currentPlayerController = UGameplayStatics::GetPlayerController(this, 0);
    
}

// Called every frame
void ACharacterPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    
    if (currentPlayerController != NULL)
     {
         if (currentPlayerController->WasInputKeyJustPressed(EKeys::I))
         {
             if(GEngine)
                   GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Pressed I"));
             
             // Interact with puzzle here after checking if colliding 
         }
     }

    
}



