// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

#include "Engine/Engine.h"
#include "GameFramework/GameStateBase.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	int32 NumberOfPlayers = GameState.Get()->PlayerArray.Num();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
		-1,
		15.f,
		FColor::Orange,
		TEXT("Player is joined!")
		);
	}

	if (NumberOfPlayers >= 2)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
			-1,
			15.f,
			FColor::Orange,
			TEXT("Can Travel!")
			);
		}
		UWorld* World = GetWorld();
		if (World)
		{
			bUseSeamlessTravel = true;
			World->ServerTravel(FString("/Game/Maps/BlasterMap?listen"));
		}
		
	}
}
