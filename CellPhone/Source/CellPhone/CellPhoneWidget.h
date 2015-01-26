// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "CellPhoneWidget.generated.h"

/**
 * 
 */
UCLASS()
class CELLPHONE_API UCellPhoneWidget : public UUserWidget
{
	GENERATED_BODY()
	
private:
	
	UPROPERTY(VisibleDefaultsOnly)
	int32 m_apps;

};
