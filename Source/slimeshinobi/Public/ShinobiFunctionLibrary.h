// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShinobiFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SLIMESHINOBI_API UShinobiFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Cloning")
	static AActor* CloneActor(AActor* OriginalActor, UObject* Outer = nullptr);
};
