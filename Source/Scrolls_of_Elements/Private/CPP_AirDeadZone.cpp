// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_AirDeadZone.h"

// Sets default values
ACPP_AirDeadZone::ACPP_AirDeadZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*OnActorBeginOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapEnd);*/

}

// Called when the game starts or when spawned
void ACPP_AirDeadZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_AirDeadZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FComponentBeginOverlapSignature OnComponentBeginOverlap;

}

/*
void ACPP_AirDeadZone::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // check if Actors do not equal nullptr and that 
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor enters trigger box

    }
}

void ACPP_AirDeadZone::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor leaves trigger box
       
    }
}
*/
