// Copyright 2023, Dakota Dawe, All rights reserved

#include "Statics/SKGAnimationBudgetAllocatorFunctionsLibrary.h"

#include "SkeletalMeshComponentBudgeted.h"
#include "IAnimationBudgetAllocator.h"

void USKGAnimationBudgetAllocatorFunctionsLibrary::RegisterSkeletalMeshComponentBudgeted(
	USkeletalMeshComponentBudgeted* SkeletalMeshBudgeted)
{
	if (SkeletalMeshBudgeted)
	{
		if (IAnimationBudgetAllocator* BudgetAllocator = IAnimationBudgetAllocator::Get(SkeletalMeshBudgeted->GetWorld()))
		{
			BudgetAllocator->RegisterComponent(SkeletalMeshBudgeted);
		}
	}
}
