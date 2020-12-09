// Copyright 2020 Mian Ajwad Imran. All Rights Reserved.

#include "AjwadGameInstanceSubsystem.h"
#include "RogerioGameInstanceSubsystem.h"
#include "Subsystems/SubsystemCollection.h"

void UAjwadGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Collection.InitializeDependency(URogerioGameInstanceSubsystem::StaticClass());
	UE_LOG(LogTemp, Warning, TEXT("Initialize the Ajwad Game Instance Subsystem."));
}

void UAjwadGameInstanceSubsystem::Deinitialize()
{
}
