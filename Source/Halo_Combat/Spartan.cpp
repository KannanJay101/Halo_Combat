// Fill out your copyright notice in the Description page of Project Settings.


// Spartan.cpp
#include "Spartan.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Halo_CombatCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
// NEW INCLUDES FOR INPUT
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

// Sets default values
ASpartan::ASpartan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating Capsule over skeleton mesh
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    // Prevent the capsule from blocking the camera (optional but good practice)
    GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	// Position the mesh so that the capsule is the root and the mesh is aligned properly
    GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -96.f));

    // Rotate the mesh to face the Blue Arrow (Forward)
    GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));

	// Don't rotate character with camera (for third-person style)
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;  // Character rotates with camera yaw
	bUseControllerRotationRoll = false;

	// Create and attach the first-person camera
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(0.f, 0.f, 64.f)); // Eye height
	FirstPersonCameraComponent->bUsePawnControlRotation = true; // Camera follows controller rotation
}

void ASpartan::Move(const FInputActionValue& Value)
{
	//Input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// Find out which way is forward
		// Note: The template usually provides X/Y, we just apply it.
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ASpartan::Look(const FInputActionValue& Value)
{

	FVector2D LookAxisVector = Value.Get<FVector2D>();

	UE_LOG(LogTemp, Display, TEXT("LookAxisVector: %s "), *LookAxisVector.ToString());

	// route the input
	DoLook(LookAxisVector.X, LookAxisVector.Y);

}

//void ASpartan::DoJumpStart()
//{
//	// pass Jump to the character
//	Jump();
//	UE_LOG(LogTemp, Display, TEXT("Jumping"));
//}
//
//void ASpartan::DoJumpEnd()
//{
//	// pass StopJumping to the character
//	StopJumping();
//
//}


// Called when the game starts or when spawned
void ASpartan::BeginPlay()
{
	Super::BeginPlay();

	//Adding Input Mapping Context 
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller)) //Telling computer to use the keyboard layout defined in this file 
	{
		if(UEnhancedInputLocalPlayerSubsystem * Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}

	} 
	
}

// Called every frame
void ASpartan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpartan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASpartan::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASpartan::Look);
	}

}

void ASpartan::DoLook(float Yaw, float Pitch)
{
	if (GetController() != nullptr)
	{
		// add yaw and pitch input to controller

		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}