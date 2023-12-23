// Copyright 2023, Dakota Dawe, All rights reserved

#pragma once

#include "CoreMinimal.h"

#include "SKGAnimationBudgetAllocatorFunctionsLibrary.generated.h"

class USkeletalMeshComponentBudgeted;

UCLASS()
class SKGANIMATIONBUDGETALLOCATORHELPER_API
	USKGAnimationBudgetAllocatorFunctionsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "SKGAnimationBudgetAllocator")
	static void RegisterSkeletalMeshComponentBudgeted(USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted);
};
