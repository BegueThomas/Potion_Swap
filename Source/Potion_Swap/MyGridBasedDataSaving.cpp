// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGridBasedDataSaving.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFileManager.h"

void UMyGridBasedDataSaving::GetSlotFileSize(FString SlotName, int& FileSize, FString& DebugFilePath)
{
	FString SaveDirectory = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("SaveGames"));
	FString SaveFileName = SlotName + TEXT(".sav");
	FString FullFilePath = FPaths::Combine(SaveDirectory, SaveFileName);

	DebugFilePath = FullFilePath;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	int64 ActualFileSize = PlatformFile.FileSize(*FullFilePath);

	FileSize = ActualFileSize / 1000;
}
