// Copyright 2020 Mian Ajwad Imran. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AjwadGameInstanceSubsystem.generated.h"

UCLASS()
class SINGLETONTEST_API UAjwadGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};
