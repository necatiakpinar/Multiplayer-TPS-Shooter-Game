// Fill out your copyright notice in the Description page of Project Settings.


#include "Casing.h"
#include "Engine/SkeletalMeshSocket.h"

ACasing::ACasing()
{
	PrimaryActorTick.bCanEverTick = true;

	CasingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CasingMesh"));
	SetRootComponent(CasingMesh);
}

void ACasing::BeginPlay()
{
	Super::BeginPlay();
	
}


