// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FChaosHandlerSet::AfterRead()
{
}

void FChaosHandlerSet::BeforeDelete()
{
}

void FBreakEventCallbackWrapper::AfterRead()
{
}

void FBreakEventCallbackWrapper::BeforeDelete()
{
}

void FChaosDebugSubstepControl::AfterRead()
{
}

void FChaosDebugSubstepControl::BeforeDelete()
{
}

void FChaosPhysicsCollisionInfo::AfterRead()
{
	READ_PTR_FULL(Component, UPrimitiveComponent);
	READ_PTR_FULL(OtherComponent, UPrimitiveComponent);
}

void FChaosPhysicsCollisionInfo::BeforeDelete()
{
	DELE_PTR_FULL(Component);
	DELE_PTR_FULL(OtherComponent);
}

void FChaosBreakEvent::AfterRead()
{
	READ_PTR_FULL(Component, UPrimitiveComponent);
}

void FChaosBreakEvent::BeforeDelete()
{
	DELE_PTR_FULL(Component);
}

void UChaosDebugDrawComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UChaosDebugDrawComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UChaosEventListenerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UChaosEventListenerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UChaosGameplayEventDispatcher::AfterRead()
{
	UChaosEventListenerComponent::AfterRead();

}

void UChaosGameplayEventDispatcher::BeforeDelete()
{
	UChaosEventListenerComponent::BeforeDelete();

}

void UChaosNotifyHandlerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UChaosNotifyHandlerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChaosPhysicsCollisionInfo PhysicsCollision               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FHitResult UChaosSolverEngineBlueprintLibrary::STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult");

	UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params params;
	params.PhysicsCollision = PhysicsCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UChaosSolverEngineBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UChaosSolverEngineBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UChaosSolver::AfterRead()
{
	UObject::AfterRead();

}

void UChaosSolver::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AChaosSolverActor::SetSolverActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive");

	AChaosSolverActor_SetSolverActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
// (Final, Native, Public, BlueprintCallable)
void AChaosSolverActor::SetAsCurrentWorldSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver");

	AChaosSolverActor_SetAsCurrentWorldSolver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AChaosSolverActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpriteComponent, UBillboardComponent);
	READ_PTR_FULL(GameplayEventDispatcherComponent, UChaosGameplayEventDispatcher);
}

void AChaosSolverActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpriteComponent);
	DELE_PTR_FULL(GameplayEventDispatcherComponent);
}

void UChaosSolverSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UChaosSolverSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
