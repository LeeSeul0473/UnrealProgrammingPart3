// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define AB_LOG(CatName, Verbosity, Format, ...) UE_LOG(CatName, Verbosity, TEXT("%s"), *FString::Printf(Format, ##__VA_ARGS__))

DECLARE_LOG_CATEGORY_EXTERN(LogABNetwork, Log, All);