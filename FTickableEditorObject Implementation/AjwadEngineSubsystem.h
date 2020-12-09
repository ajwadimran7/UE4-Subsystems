// Copyright Mian Ajwad Imran 2020

#pragma once

#include "CoreMinimal.h"
#include "TickableEditorObject.h"
#include "Subsystems/EngineSubsystem.h"
#include "AjwadEngineSubsystem.generated.h"

UCLASS()
class SINGLETONTEST_API UAjwadEngineSubsystem : public UEngineSubsystem, public FTickableEditorObject
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	/** FTickableGameObject methods */
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Always; }
	virtual TStatId GetStatId() const override;
};
