// Fill out your copyright notice in the Description page of Project Settings.


#include "Spartan.h"
#include "Components/CapsuleComponent.h"      // For the Root
#include "Components/SkeletalMeshComponent.h" // For the Body
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ASpartan::ASpartan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    //Creating Capsule
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    // Prevent the capsule from blocking the camera (optional but good practice)
    GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

    // -------------------------------------------------------------------------
    // 2. THE BODY (Skeletal Mesh) - ALREADY EXISTS
    // -------------------------------------------------------------------------
    // We access it using GetMesh().
    // ACharacter uses "SkeletalMesh" because characters need bones to animate.

    // Move the mesh DOWN so the feet align with the bottom of the capsule.
    // If we don't do this, the character floats in the middle of the collision.
    GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -96.f));

    // Rotate the mesh to face the Blue Arrow (Forward)
    GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));


}

// Called when the game starts or when spawned
void ASpartan::BeginPlay()
{
	Super::BeginPlay();
	
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

}

