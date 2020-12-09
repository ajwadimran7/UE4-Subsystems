// Copyright Mian Ajwad Imran 2020

#include "AjwadEngineSubsystem.h"

void UAjwadEngineSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UAjwadEngineSubsystem::Deinitialize()
{
}

void UAjwadEngineSubsystem::TickObjects(const float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("Ajwad Engine Subsystem is Ticking."));
}
