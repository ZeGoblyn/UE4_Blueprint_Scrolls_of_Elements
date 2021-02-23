// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_AirDeadZone.generated.h"

UCLASS()
class SCROLLS_OF_ELEMENTS_API ACPP_AirDeadZone : public AActor
{
	GENERATED_BODY()

	/*UPROPERTY(VisibleAnywhere, Category = "Trigger Box")
	class UTriggerBoxComponent* TriggerBox;*/
	
public:	
	// Sets default values for this actor's properties
	ACPP_AirDeadZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
