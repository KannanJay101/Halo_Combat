// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h" 
#include "Spartan.generated.h"


class UCameraComponent;
class UInputMappingContext; 
class UInputAction;

UCLASS()
class HALO_COMBAT_API ASpartan : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASpartan();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(VisibleAnywhere, Category = "Components")
	//class UCameraComponent* FirstPersonCameraComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
