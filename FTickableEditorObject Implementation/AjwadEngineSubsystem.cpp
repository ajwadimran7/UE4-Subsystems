// Copyright Mian Ajwad Imran 2020

#include "AjwadEngineSubsystem.h"

void UAjwadEngineSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UAjwadEngineSubsystem::Deinitialize()
{
}

void UAjwadEngineSubsystem::Tick(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("Ajwad Engine Subsystem is Ticking."));
}

TStatId UAjwadEngineSubsystem::GetStatId() const
{
	return GetStatID();
}
