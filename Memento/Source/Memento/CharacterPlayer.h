// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "Components/ActorComponent.h"
#include "CharacterPlayer.generated.h"

UCLASS()
class MEMENTO_API ACharacterPlayer : public AActor
{
	GENERATED_BODY()
	
public:

	// Sets default values for this actor's properties
	ACharacterPlayer();
    UPROPERTY(VisibleInstanceOnly)
             UTextRenderComponent* _displayText;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame    
	virtual void Tick(float DeltaTime) override;
    
private:
    
    APlayerController* currentPlayerController;
    UTextRenderComponent* textRenderer;
};
