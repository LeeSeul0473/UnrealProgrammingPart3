// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ABPlayerController.h"
#include "ArenaBattle.h"
#include "UI/ABHUDWidget.h"
#include "Kismet/GameplayStatics.h"
#include "ABSaveGame.h"

DEFINE_LOG_CATEGORY(LogABPlayerController);

AABPlayerController::AABPlayerController()
{
	static ConstructorHelpers::FClassFinder<UABHUDWidget> ABHUDWidgetRef(TEXT("/Game/ArenaBattle/UI/WBP_ABHUD.WBP_ABHUD_C"));
	if (ABHUDWidgetRef.Class)
	{
		ABHUDWidgetClass = ABHUDWidgetRef.Class;
	}
}

void AABPlayerController::PostInitializeComponents()
{
	AB_LOG(LogAB, Log, TEXT("%s"), TEXT("Begin"));
	Super::PostInitializeComponents();
	AB_LOG(LogAB, Log, TEXT("%s"), TEXT("End"));
}

void AABPlayerController::PostNetInit()
{
	AB_LOG(LogAB, Log, TEXT("%s"), TEXT("Begin"));
	Super::PostNetInit();
	AB_LOG(LogAB, Log, TEXT("%s"), TEXT("End"));
}

void AABPlayerController::BeginPlay()
{
	AB_LOG(LogAB, Log, TEXT("%s"), TEXT("Begin"));

	Super::BeginPlay();

	AB_LOG(LogAB, Log, TEXT("%s"), TEXT("End"));

	//FInputModeGameOnly GameOnlyInputMode;
	//SetInputMode(GameOnlyInputMode);
}
