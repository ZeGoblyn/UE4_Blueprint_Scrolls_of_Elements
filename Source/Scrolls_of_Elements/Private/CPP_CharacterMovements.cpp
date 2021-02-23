// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CharacterMovements.h"

// Sets default values
ACPP_CharacterMovements::ACPP_CharacterMovements()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_CharacterMovements::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_CharacterMovements::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_CharacterMovements::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ACPP_CharacterMovements::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ACPP_CharacterMovements::MoveRight);

}

void ACPP_CharacterMovements::MoveForward(float AxisValue)
{
	AddMovementInput(this->GetActorForwardVector(), AxisValue);
}

void ACPP_CharacterMovements::MoveRight(float AxisValue)
{
	AddMovementInput(this->GetActorRightVector(), AxisValue);
}

