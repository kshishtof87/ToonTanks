// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
	// get ref and game win/lose conditions
	// call HandleGameStart() to initialise the start countdown, turret activation, pawn check etc
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	// check what type of Actor died. IF turret, tally, if Player -> go to lose condition.
	UE_LOG(LogTemp, Warning, TEXT("APawn Died"));
	
}

void ATankGameModeBase::HandleGameStart()
{
	// initialise start countdown, turrent activation, pawn check etc
	// call Blueprint version of GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	// see if player has destroyed all turrets, show win result
	// else if turret destroyed player, show lose result.
	// call Blueprint version GameOver();
}
