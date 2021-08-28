// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"

#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"


void APawnTurret::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);

	PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}


// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APawnTurret::CheckFireCondition()
{
	// if player == null || is dead then BAIL!
	if (!PlayerPawn)
	{
		return;
	}

	// if player IS in range THEN FIRE!
	if (ReturnDistanceToPlayer() <= FireRange)
	{
		// TODO FIRE!
	UE_LOG(LogTemp, Warning, TEXT("Fire condition success!"));
	}

}

float APawnTurret::ReturnDistanceToPlayer()
{
	if (!PlayerPawn)
	{
		return 0.f;
	}

	return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());	
}
