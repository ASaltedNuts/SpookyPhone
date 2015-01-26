// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/UMG/Public/UMG.h"
#include "Slate.h"

#include "GameFramework/Pawn.h"
#include "CellPhoneActor.generated.h"

/**
 * 
 */
UCLASS()
class CELLPHONE_API ACellPhoneActor : public APawn
{
	GENERATED_BODY()
	
public:
	ACellPhoneActor(const FObjectInitializer& ObjectInitializer);
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly, Category = StaticMesh)
	UStaticMeshComponent* m_phoneMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Material)
	UMaterial* m_phoneMaterial;

	UPROPERTY(VisibleDefaultsOnly, Category = StaticMesh)
	UStaticMeshComponent* m_screenMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Material)
	UMaterial* m_screenMaterial;

	int32 m_numApps;
};
