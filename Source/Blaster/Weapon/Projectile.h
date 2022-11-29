// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class BLASTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
	class UBoxComponent* CollisionBox;
	
protected:
	virtual void BeginPlay() override;

public:
	AProjectile();
	virtual void Tick(float DeltaTime) override;

};
