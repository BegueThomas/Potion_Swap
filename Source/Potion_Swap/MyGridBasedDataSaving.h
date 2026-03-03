// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyGridBasedDataSaving.generated.h"

/**
 * 
 */
UCLASS()
class POTION_SWAP_API UMyGridBasedDataSaving : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static void GetSlotFileSize(FString SlotName, int& FileSize, FString& DebugFilePath);
};
