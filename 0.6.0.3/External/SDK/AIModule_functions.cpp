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

void FAIDamageEvent::AfterRead()
{
	READ_PTR_FULL(DamagedActor, AActor);
	READ_PTR_FULL(Instigator, AActor);
}

void FAIDamageEvent::BeforeDelete()
{
	DELE_PTR_FULL(DamagedActor);
	DELE_PTR_FULL(Instigator);
}

void FAINoiseEvent::AfterRead()
{
	READ_PTR_FULL(Instigator, AActor);
}

void FAINoiseEvent::BeforeDelete()
{
	DELE_PTR_FULL(Instigator);
}

void FAIPredictionEvent::AfterRead()
{
	READ_PTR_FULL(Requestor, AActor);
	READ_PTR_FULL(PredictedActor, AActor);
}

void FAIPredictionEvent::BeforeDelete()
{
	DELE_PTR_FULL(Requestor);
	DELE_PTR_FULL(PredictedActor);
}

void FAITeamStimulusEvent::AfterRead()
{
	READ_PTR_FULL(Broadcaster, AActor);
	READ_PTR_FULL(Enemy, AActor);
}

void FAITeamStimulusEvent::BeforeDelete()
{
	DELE_PTR_FULL(Broadcaster);
	DELE_PTR_FULL(Enemy);
}

void FAITouchEvent::AfterRead()
{
	READ_PTR_FULL(TouchReceiver, AActor);
	READ_PTR_FULL(OtherActor, AActor);
}

void FAITouchEvent::BeforeDelete()
{
	DELE_PTR_FULL(TouchReceiver);
	DELE_PTR_FULL(OtherActor);
}

void FAISenseAffiliationFilter::AfterRead()
{
}

void FAISenseAffiliationFilter::BeforeDelete()
{
}

void FAIMoveRequest::AfterRead()
{
	READ_PTR_FULL(GoalActor, AActor);
}

void FAIMoveRequest::BeforeDelete()
{
	DELE_PTR_FULL(GoalActor);
}

void FBTDecoratorLogic::AfterRead()
{
}

void FBTDecoratorLogic::BeforeDelete()
{
}

void FBehaviorTreeTemplateInfo::AfterRead()
{
	READ_PTR_FULL(Asset, UBehaviorTree);
	READ_PTR_FULL(Template, UBTCompositeNode);
}

void FBehaviorTreeTemplateInfo::BeforeDelete()
{
	DELE_PTR_FULL(Asset);
	DELE_PTR_FULL(Template);
}

void FBlackboardEntry::AfterRead()
{
	READ_PTR_FULL(KeyType, UBlackboardKeyType);
}

void FBlackboardEntry::BeforeDelete()
{
	DELE_PTR_FULL(KeyType);
}

void FBTCompositeChild::AfterRead()
{
	READ_PTR_FULL(ChildComposite, UBTCompositeNode);
	READ_PTR_FULL(ChildTask, UBTTaskNode);
}

void FBTCompositeChild::BeforeDelete()
{
	DELE_PTR_FULL(ChildComposite);
	DELE_PTR_FULL(ChildTask);
}

void FBlackboardKeySelector::AfterRead()
{
	READ_PTR_FULL(SelectedKeyType, UClass);
}

void FBlackboardKeySelector::BeforeDelete()
{
	DELE_PTR_FULL(SelectedKeyType);
}

void FAIDataProviderValue::AfterRead()
{
	READ_PTR_FULL(DataBinding, UAIDataProvider);
}

void FAIDataProviderValue::BeforeDelete()
{
	DELE_PTR_FULL(DataBinding);
}

void FAIDataProviderTypedValue::AfterRead()
{
	FAIDataProviderValue::AfterRead();

	READ_PTR_FULL(PropertyType, UClass);
}

void FAIDataProviderTypedValue::BeforeDelete()
{
	FAIDataProviderValue::BeforeDelete();

	DELE_PTR_FULL(PropertyType);
}

void FAIDataProviderFloatValue::AfterRead()
{
	FAIDataProviderTypedValue::AfterRead();

}

void FAIDataProviderFloatValue::BeforeDelete()
{
	FAIDataProviderTypedValue::BeforeDelete();

}

void FEnvNamedValue::AfterRead()
{
}

void FEnvNamedValue::BeforeDelete()
{
}

void FCrowdAvoidanceConfig::AfterRead()
{
}

void FCrowdAvoidanceConfig::BeforeDelete()
{
}

void FCrowdAvoidanceSamplingPattern::AfterRead()
{
}

void FCrowdAvoidanceSamplingPattern::BeforeDelete()
{
}

void FAIDynamicParam::AfterRead()
{
}

void FAIDynamicParam::BeforeDelete()
{
}

void FEQSParametrizedQueryExecutionRequest::AfterRead()
{
	READ_PTR_FULL(QueryTemplate, UEnvQuery);
}

void FEQSParametrizedQueryExecutionRequest::BeforeDelete()
{
	DELE_PTR_FULL(QueryTemplate);
}

void FIntervalCountdown::AfterRead()
{
}

void FIntervalCountdown::BeforeDelete()
{
}

void FAIDataProviderBoolValue::AfterRead()
{
	FAIDataProviderTypedValue::AfterRead();

}

void FAIDataProviderBoolValue::BeforeDelete()
{
	FAIDataProviderTypedValue::BeforeDelete();

}

void FEnvTraceData::AfterRead()
{
	READ_PTR_FULL(NavigationFilter, UClass);
}

void FEnvTraceData::BeforeDelete()
{
	DELE_PTR_FULL(NavigationFilter);
}

void FAIDataProviderIntValue::AfterRead()
{
	FAIDataProviderTypedValue::AfterRead();

}

void FAIDataProviderIntValue::BeforeDelete()
{
	FAIDataProviderTypedValue::BeforeDelete();

}

void FEnvDirection::AfterRead()
{
	READ_PTR_FULL(LineFrom, UClass);
	READ_PTR_FULL(LineTo, UClass);
	READ_PTR_FULL(Rotation, UClass);
}

void FEnvDirection::BeforeDelete()
{
	DELE_PTR_FULL(LineFrom);
	DELE_PTR_FULL(LineTo);
	DELE_PTR_FULL(Rotation);
}

void FEnvQueryInstanceCache::AfterRead()
{
	READ_PTR_FULL(Template, UEnvQuery);
}

void FEnvQueryInstanceCache::BeforeDelete()
{
	DELE_PTR_FULL(Template);
}

void FEnvOverlapData::AfterRead()
{
}

void FEnvOverlapData::BeforeDelete()
{
}

void FPawnActionStack::AfterRead()
{
	READ_PTR_FULL(TopAction, UPawnAction);
}

void FPawnActionStack::BeforeDelete()
{
	DELE_PTR_FULL(TopAction);
}

void FPawnActionEvent::AfterRead()
{
	READ_PTR_FULL(Action, UPawnAction);
}

void FPawnActionEvent::BeforeDelete()
{
	DELE_PTR_FULL(Action);
}

void FAIRequestID::AfterRead()
{
}

void FAIRequestID::BeforeDelete()
{
}

void FAIStimulus::AfterRead()
{
}

void FAIStimulus::BeforeDelete()
{
}

void FActorPerceptionUpdateInfo::AfterRead()
{
}

void FActorPerceptionUpdateInfo::BeforeDelete()
{
}

void FAIDataProviderStructValue::AfterRead()
{
	FAIDataProviderValue::AfterRead();

}

void FAIDataProviderStructValue::BeforeDelete()
{
	FAIDataProviderValue::BeforeDelete();

}

void FActorPerceptionBlueprintInfo::AfterRead()
{
	READ_PTR_FULL(Target, AActor);
}

void FActorPerceptionBlueprintInfo::BeforeDelete()
{
	DELE_PTR_FULL(Target);
}

void FAISightEvent::AfterRead()
{
	READ_PTR_FULL(SeenActor, AActor);
	READ_PTR_FULL(Observer, AActor);
}

void FAISightEvent::BeforeDelete()
{
	DELE_PTR_FULL(SeenActor);
	DELE_PTR_FULL(Observer);
}

void FEnvQueryRequest::AfterRead()
{
	READ_PTR_FULL(QueryTemplate, UEnvQuery);
	READ_PTR_FULL(Owner, UObject);
	READ_PTR_FULL(World, UWorld);
}

void FEnvQueryRequest::BeforeDelete()
{
	DELE_PTR_FULL(QueryTemplate);
	DELE_PTR_FULL(Owner);
	DELE_PTR_FULL(World);
}

void FEnvQueryResult::AfterRead()
{
	READ_PTR_FULL(ItemType, UClass);
}

void FEnvQueryResult::BeforeDelete()
{
	DELE_PTR_FULL(ItemType);
}

void FGenericTeamId::AfterRead()
{
}

void FGenericTeamId::BeforeDelete()
{
}

// Function AIModule.AIController.UseBlackboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    BlackboardComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	AAIController_UseBlackboard_Params params;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = params.BlackboardComponent;


	return params.ReturnValue;
}


// Function AIModule.AIController.UnclaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::UnclaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	AAIController_UnclaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.SetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPathFollowingComponent* NewPFComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetPathFollowingComponent");

	AAIController_SetPathFollowingComponent_Params params;
	params.NewPFComponent = NewPFComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.SetMoveBlockDetection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::SetMoveBlockDetection(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	AAIController_SetMoveBlockDetection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.RunBehaviorTree
// (Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*           BTAsset                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	AAIController_RunBehaviorTree_Params params;
	params.BTAsset = BTAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    BlackboardComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	AAIController_OnUsingBlackBoard_Params params;
	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (Native, Public)
// Parameters:
// struct FGameplayResourceSet    NewlyClaimed                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FGameplayResourceSet    FreshlyReleased                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	AAIController_OnGameplayTaskResourcesClaimed_Params params;
	params.NewlyClaimed = NewlyClaimed;
	params.FreshlyReleased = FreshlyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.MoveToLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Dest                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bProjectDestinationToNavigation (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingRequestResult> AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	AAIController_MoveToLocation_Params params;
	params.Dest = Dest;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Goal                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingRequestResult> AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	AAIController_MoveToActor_Params params;
	params.Goal = Goal;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.K2_SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewFocus                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::K2_SetFocus(class AActor* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	AAIController_K2_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.K2_SetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 FP                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::K2_SetFocalPoint(const struct FVector& FP)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	AAIController_K2_SetFocalPoint_Params params;
	params.FP = FP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.K2_ClearFocus
// (Final, Native, Public, BlueprintCallable)
void AAIController::K2_ClearFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	AAIController_K2_ClearFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIController.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAIController::HasPartialPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	AAIController_HasPartialPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPathFollowingComponent* AAIController::GetPathFollowingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	AAIController_GetPathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingStatus> AAIController::GetMoveStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	AAIController_GetMoveStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetImmediateMoveDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AAIController::GetImmediateMoveDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	AAIController_GetImmediateMoveDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocusActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AAIController::GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	AAIController_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPointOnActor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	AAIController_GetFocalPointOnActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AAIController::GetFocalPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	AAIController_GetFocalPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.GetAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	AAIController_GetAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIController.ClaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIController::ClaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	AAIController_ClaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAIController::AfterRead()
{
	AController::AfterRead();

	READ_PTR_FULL(PathFollowingComponent, UPathFollowingComponent);
	READ_PTR_FULL(BrainComponent, UBrainComponent);
	READ_PTR_FULL(PerceptionComponent, UAIPerceptionComponent);
	READ_PTR_FULL(ActionsComp, UPawnActionsComponent);
	READ_PTR_FULL(Blackboard, UBlackboardComponent);
	READ_PTR_FULL(CachedGameplayTasksComponent, UGameplayTasksComponent);
	READ_PTR_FULL(DefaultNavigationFilterClass, UClass);
}

void AAIController::BeforeDelete()
{
	AController::BeforeDelete();

	DELE_PTR_FULL(PathFollowingComponent);
	DELE_PTR_FULL(BrainComponent);
	DELE_PTR_FULL(PerceptionComponent);
	DELE_PTR_FULL(ActionsComp);
	DELE_PTR_FULL(Blackboard);
	DELE_PTR_FULL(CachedGameplayTasksComponent);
	DELE_PTR_FULL(DefaultNavigationFilterClass);
}

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params params;
	params.RequestID = RequestID;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIAsyncTaskBlueprintProxy::AfterRead()
{
	UObject::AfterRead();

}

void UAIAsyncTaskBlueprintProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");

	UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  PawnClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*           BehaviorTree                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bNoCollisionFail               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIBlueprintHelperLibrary::STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");

	UAIBlueprintHelperLibrary_SpawnAIFromClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PawnClass = PawnClass;
	params.BehaviorTree = BehaviorTree;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bNoCollisionFail = bNoCollisionFail;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation");

	UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor");

	UAIBlueprintHelperLibrary_SimpleMoveToActor_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Message                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 MessageSource                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");

	UAIBlueprintHelperLibrary_SendAIMessage_Params params;
	params.Target = Target;
	params.Message = Message;
	params.MessageSource = MessageSource;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");

	UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::STATIC_IsValidAIRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");

	UAIBlueprintHelperLibrary_IsValidAIRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::STATIC_IsValidAILocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");

	UAIBlueprintHelperLibrary_IsValidAILocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 DirectionVector                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::STATIC_IsValidAIDirection(const struct FVector& DirectionVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection");

	UAIBlueprintHelperLibrary_IsValidAIDirection_Params params;
	params.DirectionVector = DirectionVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAIBlueprintHelperLibrary::STATIC_GetNextNavLinkIndex(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex");

	UAIBlueprintHelperLibrary_GetNextNavLinkIndex_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UAIBlueprintHelperLibrary::STATIC_GetCurrentPathPoints(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints");

	UAIBlueprintHelperLibrary_GetCurrentPathPoints_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAIBlueprintHelperLibrary::STATIC_GetCurrentPathIndex(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex");

	UAIBlueprintHelperLibrary_GetCurrentPathIndex_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UAIBlueprintHelperLibrary::STATIC_GetCurrentPath(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath");

	UAIBlueprintHelperLibrary_GetCurrentPath_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardComponent* UAIBlueprintHelperLibrary::STATIC_GetBlackboard(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");

	UAIBlueprintHelperLibrary_GetBlackboard_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ControlledActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AAIController* UAIBlueprintHelperLibrary::STATIC_GetAIController(class AActor* ControlledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetAIController");

	UAIBlueprintHelperLibrary_GetAIController_Params params;
	params.ControlledActor = ControlledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  targetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* targetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");

	UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Destination = Destination;
	params.targetActor = targetActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAIBlueprintHelperLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAIBlueprintHelperLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UAIDataProvider::AfterRead()
{
	UObject::AfterRead();

}

void UAIDataProvider::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAIDataProvider_QueryParams::AfterRead()
{
	UAIDataProvider::AfterRead();

}

void UAIDataProvider_QueryParams::BeforeDelete()
{
	UAIDataProvider::BeforeDelete();

}

void UAIDataProvider_Random::AfterRead()
{
	UAIDataProvider_QueryParams::AfterRead();

}

void UAIDataProvider_Random::BeforeDelete()
{
	UAIDataProvider_QueryParams::BeforeDelete();

}

void UAIHotSpotManager::AfterRead()
{
	UObject::AfterRead();

}

void UAIHotSpotManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnable                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::SetSenseEnabled(class UClass* SenseClass, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSenseEnabled");

	UAIPerceptionComponent_SetSenseEnabled_Params params;
	params.SenseClass = SenseClass;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (Final, Native, Public, BlueprintCallable)
void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");

	UAIPerceptionComponent_RequestStimuliListenerUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");

	UAIPerceptionComponent_OnOwnerEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense");

	UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");

	UAIPerceptionComponent_GetPerceivedHostileActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");

	UAIPerceptionComponent_GetPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors");

	UAIPerceptionComponent_GetKnownPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAIPerceptionComponent::GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors");

	UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorPerceptionBlueprintInfo Info                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIPerceptionComponent::GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");

	UAIPerceptionComponent_GetActorsPerception_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;


	return params.ReturnValue;
}


// Function AIModule.AIPerceptionComponent.ForgetAll
// (Final, Native, Public, BlueprintCallable)
void UAIPerceptionComponent::ForgetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.ForgetAll");

	UAIPerceptionComponent_ForgetAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIPerceptionComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DominantSense, UClass);
	READ_PTR_FULL(AIOwner, AAIController);
}

void UAIPerceptionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DominantSense);
	DELE_PTR_FULL(AIOwner);
}

void UAIPerceptionListenerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPerceptionListenerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	UAIPerceptionStimuliSourceComponent_RegisterForSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIPerceptionStimuliSourceComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UAIPerceptionStimuliSourceComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UAISubsystem::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AISystem, UAISystem);
}

void UAISubsystem::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AISystem);
}

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	UAIPerceptionSystem_ReportPerceptionEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	UAIPerceptionSystem_ReportEvent_Params params;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIPerceptionSystem::STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sense = Sense;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus             Stimulus                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UAIPerceptionSystem::STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	UAIPerceptionSystem_GetSenseClassForStimulus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAIPerceptionSystem::AfterRead()
{
	UAISubsystem::AfterRead();

}

void UAIPerceptionSystem::BeforeDelete()
{
	UAISubsystem::BeforeDelete();

}

void UAIResourceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIResourceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIResource_Movement::AfterRead()
{
	UGameplayTaskResource::AfterRead();

}

void UAIResource_Movement::BeforeDelete()
{
	UGameplayTaskResource::BeforeDelete();

}

void UAIResource_Logic::AfterRead()
{
	UGameplayTaskResource::AfterRead();

}

void UAIResource_Logic::BeforeDelete()
{
	UGameplayTaskResource::BeforeDelete();

}

void UAISense::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PerceptionSystemInstance, UAIPerceptionSystem);
}

void UAISense::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PerceptionSystemInstance);
}

// Function AIModule.AISense_Blueprint.OnUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UAISenseEvent*>   EventsToProcess                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	UAISense_Blueprint_OnUpdate_Params params;
	params.EventsToProcess = EventsToProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	UAISense_Blueprint_OnListenerUpdated_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	UAISense_Blueprint_OnListenerUnregistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	UAISense_Blueprint_OnListenerRegistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::K2_OnNewPawn(class APawn* NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	UAISense_Blueprint_K2_OnNewPawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIPerceptionComponent*> ListenerComponents             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	UAISense_Blueprint_GetAllListenerComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ListenerComponents != nullptr)
		*ListenerComponents = params.ListenerComponents;

}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ListenerActors                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAISense_Blueprint::GetAllListenerActors(TArray<class AActor*>* ListenerActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	UAISense_Blueprint_GetAllListenerActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ListenerActors != nullptr)
		*ListenerActors = params.ListenerActors;

}


void UAISense_Blueprint::AfterRead()
{
	UAISense::AfterRead();

	READ_PTR_FULL(ListenerDataType, UClass);
}

void UAISense_Blueprint::BeforeDelete()
{
	UAISense::BeforeDelete();

	DELE_PTR_FULL(ListenerDataType);
}

// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EventLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Damage::STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	UAISense_Damage_ReportDamageEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DamagedActor = DamagedActor;
	params.Instigator = Instigator;
	params.DamageAmount = DamageAmount;
	params.EventLocation = EventLocation;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAISense_Damage::AfterRead()
{
	UAISense::AfterRead();

}

void UAISense_Damage::BeforeDelete()
{
	UAISense::BeforeDelete();

}

// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Hearing::STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	UAISense_Hearing_ReportNoiseEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NoiseLocation = NoiseLocation;
	params.Loudness = Loudness;
	params.Instigator = Instigator;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAISense_Hearing::AfterRead()
{
	UAISense::AfterRead();

}

void UAISense_Hearing::BeforeDelete()
{
	UAISense::BeforeDelete();

}

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Requestor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Prediction::STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	UAISense_Prediction_RequestPawnPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Requestor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Prediction::STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	UAISense_Prediction_RequestControllerPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAISense_Prediction::AfterRead()
{
	UAISense::AfterRead();

}

void UAISense_Prediction::BeforeDelete()
{
	UAISense::BeforeDelete();

}

void UAISense_Sight::AfterRead()
{
	UAISense::AfterRead();

}

void UAISense_Sight::BeforeDelete()
{
	UAISense::BeforeDelete();

}

void UAISense_Team::AfterRead()
{
	UAISense::AfterRead();

}

void UAISense_Team::BeforeDelete()
{
	UAISense::BeforeDelete();

}

void UAISense_Touch::AfterRead()
{
	UAISense::AfterRead();

}

void UAISense_Touch::BeforeDelete()
{
	UAISense::BeforeDelete();

}

void UAISenseBlueprintListener::AfterRead()
{
	UUserDefinedStruct::AfterRead();

}

void UAISenseBlueprintListener::BeforeDelete()
{
	UUserDefinedStruct::BeforeDelete();

}

void UAISenseConfig::AfterRead()
{
	UObject::AfterRead();

}

void UAISenseConfig::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAISenseConfig_Blueprint::AfterRead()
{
	UAISenseConfig::AfterRead();

	READ_PTR_FULL(Implementation, UClass);
}

void UAISenseConfig_Blueprint::BeforeDelete()
{
	UAISenseConfig::BeforeDelete();

	DELE_PTR_FULL(Implementation);
}

void UAISenseConfig_Damage::AfterRead()
{
	UAISenseConfig::AfterRead();

	READ_PTR_FULL(Implementation, UClass);
}

void UAISenseConfig_Damage::BeforeDelete()
{
	UAISenseConfig::BeforeDelete();

	DELE_PTR_FULL(Implementation);
}

void UAISenseConfig_Hearing::AfterRead()
{
	UAISenseConfig::AfterRead();

	READ_PTR_FULL(Implementation, UClass);
}

void UAISenseConfig_Hearing::BeforeDelete()
{
	UAISenseConfig::BeforeDelete();

	DELE_PTR_FULL(Implementation);
}

void UAISenseConfig_Prediction::AfterRead()
{
	UAISenseConfig::AfterRead();

}

void UAISenseConfig_Prediction::BeforeDelete()
{
	UAISenseConfig::BeforeDelete();

}

void UAISenseConfig_Sight::AfterRead()
{
	UAISenseConfig::AfterRead();

	READ_PTR_FULL(Implementation, UClass);
}

void UAISenseConfig_Sight::BeforeDelete()
{
	UAISenseConfig::BeforeDelete();

	DELE_PTR_FULL(Implementation);
}

void UAISenseConfig_Team::AfterRead()
{
	UAISenseConfig::AfterRead();

}

void UAISenseConfig_Team::BeforeDelete()
{
	UAISenseConfig::BeforeDelete();

}

void UAISenseConfig_Touch::AfterRead()
{
	UAISenseConfig::AfterRead();

}

void UAISenseConfig_Touch::BeforeDelete()
{
	UAISenseConfig::BeforeDelete();

}

void UAISenseEvent::AfterRead()
{
	UObject::AfterRead();

}

void UAISenseEvent::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAISenseEvent_Damage::AfterRead()
{
	UAISenseEvent::AfterRead();

}

void UAISenseEvent_Damage::BeforeDelete()
{
	UAISenseEvent::BeforeDelete();

}

void UAISenseEvent_Hearing::AfterRead()
{
	UAISenseEvent::AfterRead();

}

void UAISenseEvent_Hearing::BeforeDelete()
{
	UAISenseEvent::BeforeDelete();

}

void UAISightTargetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAISightTargetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AIModule.AISystem.AILoggingVerbose
// (Exec, Native, Public)
void UAISystem::AILoggingVerbose()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	UAISystem_AILoggingVerbose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISystem.AIIgnorePlayers
// (Exec, Native, Public)
void UAISystem::AIIgnorePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	UAISystem_AIIgnorePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAISystem::AfterRead()
{
	UAISystemBase::AfterRead();

	READ_PTR_FULL(BehaviorTreeManager, UBehaviorTreeManager);
	READ_PTR_FULL(EnvironmentQueryManager, UEnvQueryManager);
	READ_PTR_FULL(PerceptionSystem, UAIPerceptionSystem);
	READ_PTR_FULL(HotSpotManager, UAIHotSpotManager);
	READ_PTR_FULL(NavLocalGrids, UNavLocalGridManager);
}

void UAISystem::BeforeDelete()
{
	UAISystemBase::BeforeDelete();

	DELE_PTR_FULL(BehaviorTreeManager);
	DELE_PTR_FULL(EnvironmentQueryManager);
	DELE_PTR_FULL(PerceptionSystem);
	DELE_PTR_FULL(HotSpotManager);
	DELE_PTR_FULL(NavLocalGrids);
}

void UAITask::AfterRead()
{
	UGameplayTask::AfterRead();

	READ_PTR_FULL(OwnerController, AAIController);
}

void UAITask::BeforeDelete()
{
	UGameplayTask::BeforeDelete();

	DELE_PTR_FULL(OwnerController);
}

void UAITask_LockLogic::AfterRead()
{
	UAITask::AfterRead();

}

void UAITask_LockLogic::BeforeDelete()
{
	UAITask::BeforeDelete();

}

// Function AIModule.AITask_MoveTo.AIMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 GoalLocation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  GoalActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockAILogic                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseContinuosGoalTracking      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> ProjectGoalOnNavigation        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_MoveTo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAITask_MoveTo* UAITask_MoveTo::STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<AIModule_EAIOptionFlag> ProjectGoalOnNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	UAITask_MoveTo_AIMoveTo_Params params;
	params.Controller = Controller;
	params.GoalLocation = GoalLocation;
	params.GoalActor = GoalActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.StopOnOverlap = StopOnOverlap;
	params.AcceptPartialPath = AcceptPartialPath;
	params.bUsePathfinding = bUsePathfinding;
	params.bLockAILogic = bLockAILogic;
	params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
	params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAITask_MoveTo::AfterRead()
{
	UAITask::AfterRead();

}

void UAITask_MoveTo::BeforeDelete()
{
	UAITask::BeforeDelete();

}

// Function AIModule.AITask_RunEQS.RunEQS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_RunEQS*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAITask_RunEQS* UAITask_RunEQS::STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_RunEQS.RunEQS");

	UAITask_RunEQS_RunEQS_Params params;
	params.Controller = Controller;
	params.QueryTemplate = QueryTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAITask_RunEQS::AfterRead()
{
	UAITask::AfterRead();

}

void UAITask_RunEQS::BeforeDelete()
{
	UAITask::BeforeDelete();

}

void UBehaviorTree::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RootNode, UBTCompositeNode);
	READ_PTR_FULL(BlackboardAsset, UBlackboardData);
}

void UBehaviorTree::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RootNode);
	DELE_PTR_FULL(BlackboardAsset);
}

// Function AIModule.BrainComponent.StopLogic
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBrainComponent::StopLogic(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	UBrainComponent_StopLogic_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.StartLogic
// (Native, Public, BlueprintCallable)
void UBrainComponent::StartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StartLogic");

	UBrainComponent_StartLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.RestartLogic
// (Native, Public, BlueprintCallable)
void UBrainComponent::RestartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	UBrainComponent_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.IsRunning
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBrainComponent::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	UBrainComponent_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BrainComponent.IsPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBrainComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	UBrainComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBrainComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(BlackboardComp, UBlackboardComponent);
	READ_PTR_FULL(AIOwner, AAIController);
}

void UBrainComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(BlackboardComp);
	DELE_PTR_FULL(AIOwner);
}

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            InjectTag                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*           BehaviorAsset                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	UBehaviorTreeComponent_SetDynamicSubtree_Params params;
	params.InjectTag = InjectTag;
	params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            CooldownTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	UBehaviorTreeComponent_GetTagCooldownEndTime_Params params;
	params.CooldownTag = CooldownTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            CooldownTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CooldownDuration               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAddToExistingDuration         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	UBehaviorTreeComponent_AddCooldownTagDuration_Params params;
	params.CooldownTag = CooldownTag;
	params.CooldownDuration = CooldownDuration;
	params.bAddToExistingDuration = bAddToExistingDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBehaviorTreeComponent::AfterRead()
{
	UBrainComponent::AfterRead();

	READ_PTR_FULL(DefaultBehaviorTreeAsset, UBehaviorTree);
}

void UBehaviorTreeComponent::BeforeDelete()
{
	UBrainComponent::BeforeDelete();

	DELE_PTR_FULL(DefaultBehaviorTreeAsset);
}

void UBehaviorTreeManager::AfterRead()
{
	UObject::AfterRead();

}

void UBehaviorTreeManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UBehaviorTreeTypes::AfterRead()
{
	UObject::AfterRead();

}

void UBehaviorTreeTypes::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardData* UBlackboardAssetProvider::GetBlackboardAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardAssetProvider.GetBlackboardAsset");

	UBlackboardAssetProvider_GetBlackboardAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBlackboardAssetProvider::AfterRead()
{
	UInterface::AfterRead();

}

void UBlackboardAssetProvider::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 VectorValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	UBlackboardComponent_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	UBlackboardComponent_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                VectorValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	UBlackboardComponent_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	UBlackboardComponent_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	UBlackboardComponent_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	UBlackboardComponent_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	UBlackboardComponent_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	UBlackboardComponent_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	UBlackboardComponent_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	UBlackboardComponent_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	UBlackboardComponent_IsVectorValueSet_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBlackboardComponent::GetValueAsVector(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	UBlackboardComponent_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlackboardComponent::GetValueAsString(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	UBlackboardComponent_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UBlackboardComponent::GetValueAsRotator(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	UBlackboardComponent_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UBlackboardComponent::GetValueAsObject(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	UBlackboardComponent_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBlackboardComponent::GetValueAsName(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	UBlackboardComponent_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBlackboardComponent::GetValueAsInt(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	UBlackboardComponent_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlackboardComponent::GetValueAsFloat(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	UBlackboardComponent_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBlackboardComponent::GetValueAsEnum(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	UBlackboardComponent_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UBlackboardComponent::GetValueAsClass(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	UBlackboardComponent_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	UBlackboardComponent_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ResultRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	UBlackboardComponent_GetRotationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ResultLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	UBlackboardComponent_GetLocationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::ClearValue(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	UBlackboardComponent_ClearValue_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBlackboardComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(BrainComp, UBrainComponent);
	READ_PTR_FULL(DefaultBlackboardAsset, UBlackboardData);
	READ_PTR_FULL(BlackboardAsset, UBlackboardData);
}

void UBlackboardComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(BrainComp);
	DELE_PTR_FULL(DefaultBlackboardAsset);
	DELE_PTR_FULL(BlackboardAsset);
}

void UBlackboardData::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(Parent, UBlackboardData);
}

void UBlackboardData::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(Parent);
}

void UBlackboardKeyType::AfterRead()
{
	UObject::AfterRead();

}

void UBlackboardKeyType::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UBlackboardKeyType_Bool::AfterRead()
{
	UBlackboardKeyType::AfterRead();

}

void UBlackboardKeyType_Bool::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

}

void UBlackboardKeyType_Class::AfterRead()
{
	UBlackboardKeyType::AfterRead();

	READ_PTR_FULL(BaseClass, UClass);
}

void UBlackboardKeyType_Class::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

	DELE_PTR_FULL(BaseClass);
}

void UBlackboardKeyType_Enum::AfterRead()
{
	UBlackboardKeyType::AfterRead();

	READ_PTR_FULL(EnumType, UEnum);
}

void UBlackboardKeyType_Enum::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

	DELE_PTR_FULL(EnumType);
}

void UBlackboardKeyType_Float::AfterRead()
{
	UBlackboardKeyType::AfterRead();

}

void UBlackboardKeyType_Float::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

}

void UBlackboardKeyType_Int::AfterRead()
{
	UBlackboardKeyType::AfterRead();

}

void UBlackboardKeyType_Int::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

}

void UBlackboardKeyType_Name::AfterRead()
{
	UBlackboardKeyType::AfterRead();

}

void UBlackboardKeyType_Name::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

}

void UBlackboardKeyType_NativeEnum::AfterRead()
{
	UBlackboardKeyType::AfterRead();

	READ_PTR_FULL(EnumType, UEnum);
}

void UBlackboardKeyType_NativeEnum::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

	DELE_PTR_FULL(EnumType);
}

void UBlackboardKeyType_Object::AfterRead()
{
	UBlackboardKeyType::AfterRead();

	READ_PTR_FULL(BaseClass, UClass);
}

void UBlackboardKeyType_Object::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

	DELE_PTR_FULL(BaseClass);
}

void UBlackboardKeyType_Rotator::AfterRead()
{
	UBlackboardKeyType::AfterRead();

}

void UBlackboardKeyType_Rotator::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

}

void UBlackboardKeyType_String::AfterRead()
{
	UBlackboardKeyType::AfterRead();

}

void UBlackboardKeyType_String::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

}

void UBlackboardKeyType_Vector::AfterRead()
{
	UBlackboardKeyType::AfterRead();

}

void UBlackboardKeyType_Vector::BeforeDelete()
{
	UBlackboardKeyType::BeforeDelete();

}

void UBTNode::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(TreeAsset, UBehaviorTree);
	READ_PTR_FULL(ParentNode, UBTCompositeNode);
}

void UBTNode::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(TreeAsset);
	DELE_PTR_FULL(ParentNode);
}

void UBTAuxiliaryNode::AfterRead()
{
	UBTNode::AfterRead();

}

void UBTAuxiliaryNode::BeforeDelete()
{
	UBTNode::BeforeDelete();

}

void UBTCompositeNode::AfterRead()
{
	UBTNode::AfterRead();

}

void UBTCompositeNode::BeforeDelete()
{
	UBTNode::BeforeDelete();

}

void UBTComposite_Selector::AfterRead()
{
	UBTCompositeNode::AfterRead();

}

void UBTComposite_Selector::BeforeDelete()
{
	UBTCompositeNode::BeforeDelete();

}

void UBTComposite_Sequence::AfterRead()
{
	UBTCompositeNode::AfterRead();

}

void UBTComposite_Sequence::BeforeDelete()
{
	UBTCompositeNode::BeforeDelete();

}

void UBTComposite_SimpleParallel::AfterRead()
{
	UBTCompositeNode::AfterRead();

}

void UBTComposite_SimpleParallel::BeforeDelete()
{
	UBTCompositeNode::BeforeDelete();

}

void UBTDecorator::AfterRead()
{
	UBTAuxiliaryNode::AfterRead();

}

void UBTDecorator::BeforeDelete()
{
	UBTAuxiliaryNode::BeforeDelete();

}

void UBTDecorator_BlackboardBase::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_BlackboardBase::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_Blackboard::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

}

void UBTDecorator_Blackboard::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	UBTDecorator_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	UBTDecorator_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<AIModule_EBTNodeResult> NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<AIModule_EBTNodeResult> NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	UBTDecorator_BlueprintBase_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBTDecorator_BlueprintBase::AfterRead()
{
	UBTDecorator::AfterRead();

	READ_PTR_FULL(AIOwner, AAIController);
	READ_PTR_FULL(ActorOwner, AActor);
}

void UBTDecorator_BlueprintBase::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

	DELE_PTR_FULL(AIOwner);
	DELE_PTR_FULL(ActorOwner);
}

void UBTDecorator_CheckGameplayTagsOnActor::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_CheckGameplayTagsOnActor::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_CompareBBEntries::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_CompareBBEntries::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_ConditionalLoop::AfterRead()
{
	UBTDecorator_Blackboard::AfterRead();

}

void UBTDecorator_ConditionalLoop::BeforeDelete()
{
	UBTDecorator_Blackboard::BeforeDelete();

}

void UBTDecorator_ConeCheck::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_ConeCheck::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_Cooldown::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_Cooldown::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_DoesPathExist::AfterRead()
{
	UBTDecorator::AfterRead();

	READ_PTR_FULL(FilterClass, UClass);
}

void UBTDecorator_DoesPathExist::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

	DELE_PTR_FULL(FilterClass);
}

void UBTDecorator_ForceSuccess::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_ForceSuccess::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_IsAtLocation::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

}

void UBTDecorator_IsAtLocation::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

}

void UBTDecorator_IsBBEntryOfClass::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

	READ_PTR_FULL(TestClass, UClass);
}

void UBTDecorator_IsBBEntryOfClass::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(TestClass);
}

void UBTDecorator_KeepInCone::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_KeepInCone::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_Loop::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_Loop::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_ReachedMoveGoal::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_ReachedMoveGoal::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_SetTagCooldown::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_SetTagCooldown::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_TagCooldown::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_TagCooldown::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_TimeLimit::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_TimeLimit::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");

	UBTFunctionLibrary_StopUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");

	UBTFunctionLibrary_StartUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");

	UBTFunctionLibrary_SetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");

	UBTFunctionLibrary_SetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator");

	UBTFunctionLibrary_SetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");

	UBTFunctionLibrary_SetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");

	UBTFunctionLibrary_SetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");

	UBTFunctionLibrary_SetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");

	UBTFunctionLibrary_SetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");

	UBTFunctionLibrary_SetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");

	UBTFunctionLibrary_SetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");

	UBTFunctionLibrary_SetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardComponent* UBTFunctionLibrary::STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard");

	UBTFunctionLibrary_GetOwnersBlackboard_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTreeComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBehaviorTreeComponent* UBTFunctionLibrary::STATIC_GetOwnerComponent(class UBTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnerComponent");

	UBTFunctionLibrary_GetOwnerComponent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBTFunctionLibrary::STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");

	UBTFunctionLibrary_GetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBTFunctionLibrary::STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");

	UBTFunctionLibrary_GetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UBTFunctionLibrary::STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator");

	UBTFunctionLibrary_GetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UBTFunctionLibrary::STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");

	UBTFunctionLibrary_GetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBTFunctionLibrary::STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");

	UBTFunctionLibrary_GetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBTFunctionLibrary::STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");

	UBTFunctionLibrary_GetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBTFunctionLibrary::STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");

	UBTFunctionLibrary_GetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBTFunctionLibrary::STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");

	UBTFunctionLibrary_GetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UBTFunctionLibrary::STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");

	UBTFunctionLibrary_GetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTFunctionLibrary::STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");

	UBTFunctionLibrary_GetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UBTFunctionLibrary::STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");

	UBTFunctionLibrary_GetBlackboardValueAsActor_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");

	UBTFunctionLibrary_ClearBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValue");

	UBTFunctionLibrary_ClearBlackboardValue_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UBTFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UBTService::AfterRead()
{
	UBTAuxiliaryNode::AfterRead();

}

void UBTService::BeforeDelete()
{
	UBTAuxiliaryNode::BeforeDelete();

}

void UBTService_BlackboardBase::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_BlackboardBase::BeforeDelete()
{
	UBTService::BeforeDelete();

}

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	UBTService_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	UBTService_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	UBTService_BlueprintBase_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	UBTService_BlueprintBase_ReceiveSearchStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	UBTService_BlueprintBase_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	UBTService_BlueprintBase_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	UBTService_BlueprintBase_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveActivation(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	UBTService_BlueprintBase_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTService_BlueprintBase::IsServiceActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	UBTService_BlueprintBase_IsServiceActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBTService_BlueprintBase::AfterRead()
{
	UBTService::AfterRead();

	READ_PTR_FULL(AIOwner, AAIController);
	READ_PTR_FULL(ActorOwner, AActor);
}

void UBTService_BlueprintBase::BeforeDelete()
{
	UBTService::BeforeDelete();

	DELE_PTR_FULL(AIOwner);
	DELE_PTR_FULL(ActorOwner);
}

void UBTService_DefaultFocus::AfterRead()
{
	UBTService_BlackboardBase::AfterRead();

}

void UBTService_DefaultFocus::BeforeDelete()
{
	UBTService_BlackboardBase::BeforeDelete();

}

void UBTTaskNode::AfterRead()
{
	UBTNode::AfterRead();

}

void UBTTaskNode::BeforeDelete()
{
	UBTNode::BeforeDelete();

}

void UBTTask_RunBehaviorDynamic::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(DefaultBehaviorAsset, UBehaviorTree);
	READ_PTR_FULL(BehaviorAsset, UBehaviorTree);
}

void UBTTask_RunBehaviorDynamic::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(DefaultBehaviorAsset);
	DELE_PTR_FULL(BehaviorAsset);
}

void UBTTask_BlackboardBase::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_BlackboardBase::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_RunEQSQuery::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(QueryTemplate, UEnvQuery);
}

void UBTTask_RunEQSQuery::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(QueryTemplate);
}

void UBTTask_SetTagCooldown::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_SetTagCooldown::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_Wait::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_Wait::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_WaitBlackboardTime::AfterRead()
{
	UBTTask_Wait::AfterRead();

}

void UBTTask_WaitBlackboardTime::BeforeDelete()
{
	UBTTask_Wait::BeforeDelete();

}

void UCrowdAgentInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCrowdAgentInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathFollowingComponent::OnNavDataRegistered(class ANavigationData* NavData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	UPathFollowingComponent_OnNavDataRegistered_Params params;
	params.NavData = NavData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UPathFollowingComponent::OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	UPathFollowingComponent_OnActorBump_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPathFollowingComponent::GetPathDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	UPathFollowingComponent_GetPathDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingAction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingAction> UPathFollowingComponent::GetPathActionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	UPathFollowingComponent_GetPathActionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPathFollowingComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MovementComp, UNavMovementComponent);
	READ_PTR_FULL(MyNavData, ANavigationData);
}

void UPathFollowingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MovementComp);
	DELE_PTR_FULL(MyNavData);
}

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	UCrowdFollowingComponent_SuspendCrowdSteering_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCrowdFollowingComponent::AfterRead()
{
	UPathFollowingComponent::AfterRead();

}

void UCrowdFollowingComponent::BeforeDelete()
{
	UPathFollowingComponent::BeforeDelete();

}

void UBTService_RunEQS::AfterRead()
{
	UBTService_BlackboardBase::AfterRead();

}

void UBTService_RunEQS::BeforeDelete()
{
	UBTService_BlackboardBase::BeforeDelete();

}

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	UBTTask_BlueprintBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	UBTTask_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	UBTTask_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	UBTTask_BlueprintBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	UBTTask_BlueprintBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	UBTTask_BlueprintBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveAbort(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	UBTTask_BlueprintBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTTask_BlueprintBase::IsTaskExecuting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	UBTTask_BlueprintBase_IsTaskExecuting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTTask_BlueprintBase::IsTaskAborting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	UBTTask_BlueprintBase_IsTaskAborting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	UBTTask_BlueprintBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)
void UBTTask_BlueprintBase::FinishAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	UBTTask_BlueprintBase_FinishAbort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_BlueprintBase::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(AIOwner, AAIController);
	READ_PTR_FULL(ActorOwner, AActor);
}

void UBTTask_BlueprintBase::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(AIOwner);
	DELE_PTR_FULL(ActorOwner);
}

void UBTTask_FinishWithResult::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_FinishWithResult::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_GameplayTaskBase::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_GameplayTaskBase::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_MakeNoise::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_MakeNoise::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_MoveTo::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(FilterClass, UClass);
}

void UBTTask_MoveTo::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(FilterClass);
}

void UBTTask_MoveDirectlyToward::AfterRead()
{
	UBTTask_MoveTo::AfterRead();

}

void UBTTask_MoveDirectlyToward::BeforeDelete()
{
	UBTTask_MoveTo::BeforeDelete();

}

void UBTTask_PawnActionBase::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_PawnActionBase::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_PlayAnimation::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(AnimationToPlay, UAnimationAsset);
	READ_PTR_FULL(MyOwnerComp, UBehaviorTreeComponent);
	READ_PTR_FULL(CachedSkelMesh, USkeletalMeshComponent);
}

void UBTTask_PlayAnimation::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(AnimationToPlay);
	DELE_PTR_FULL(MyOwnerComp);
	DELE_PTR_FULL(CachedSkelMesh);
}

void UBTTask_PlaySound::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(SoundToPlay, USoundCue);
}

void UBTTask_PlaySound::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(SoundToPlay);
}

void UBTTask_PushPawnAction::AfterRead()
{
	UBTTask_PawnActionBase::AfterRead();

	READ_PTR_FULL(Action, UPawnAction);
}

void UBTTask_PushPawnAction::BeforeDelete()
{
	UBTTask_PawnActionBase::BeforeDelete();

	DELE_PTR_FULL(Action);
}

void UBTTask_RotateToFaceBBEntry::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_RotateToFaceBBEntry::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_RunBehavior::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(BehaviorAsset, UBehaviorTree);
}

void UBTTask_RunBehavior::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(BehaviorAsset);
}

void UCrowdManager::AfterRead()
{
	UCrowdManagerBase::AfterRead();

	READ_PTR_FULL(MyNavData, ANavigationData);
}

void UCrowdManager::BeforeDelete()
{
	UCrowdManagerBase::BeforeDelete();

	DELE_PTR_FULL(MyNavData);
}

void ADetourCrowdAIController::AfterRead()
{
	AAIController::AfterRead();

}

void ADetourCrowdAIController::BeforeDelete()
{
	AAIController::BeforeDelete();

}

void UEnvQuery::AfterRead()
{
	UDataAsset::AfterRead();

}

void UEnvQuery::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEnvQueryContext::AfterRead()
{
	UObject::AfterRead();

}

void UEnvQueryContext::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ResultingLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");

	UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");

	UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ResultingLocationSet           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");

	UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ResultingActorsSet             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");

	UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;

}


void UEnvQueryContext_BlueprintBase::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_BlueprintBase::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_Item::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_Item::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_Querier::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_Querier::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryDebugHelpers::AfterRead()
{
	UObject::AfterRead();

}

void UEnvQueryDebugHelpers::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEnvQueryNode::AfterRead()
{
	UObject::AfterRead();

}

void UEnvQueryNode::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEnvQueryGenerator::AfterRead()
{
	UEnvQueryNode::AfterRead();

	READ_PTR_FULL(ItemType, UClass);
}

void UEnvQueryGenerator::BeforeDelete()
{
	UEnvQueryNode::BeforeDelete();

	DELE_PTR_FULL(ItemType);
}

void UEnvQueryGenerator_ActorsOfClass::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

	READ_PTR_FULL(SearchedActorClass, UClass);
	READ_PTR_FULL(SearchCenter, UClass);
}

void UEnvQueryGenerator_ActorsOfClass::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

	DELE_PTR_FULL(SearchedActorClass);
	DELE_PTR_FULL(SearchCenter);
}

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	UEnvQueryGenerator_BlueprintBase_GetQuerier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector> ContextLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params params;
	params.ContextLocations = ContextLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 GeneratedVector                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params params;
	params.GeneratedVector = GeneratedVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AActor*                  GeneratedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* GeneratedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params params;
	params.GeneratedActor = GeneratedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEnvQueryGenerator_BlueprintBase::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

	READ_PTR_FULL(Context, UClass);
	READ_PTR_FULL(GeneratedItemType, UClass);
}

void UEnvQueryGenerator_BlueprintBase::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

	DELE_PTR_FULL(Context);
	DELE_PTR_FULL(GeneratedItemType);
}

void UEnvQueryGenerator_Composite::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

	READ_PTR_FULL(ForcedItemType, UClass);
}

void UEnvQueryGenerator_Composite::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

	DELE_PTR_FULL(ForcedItemType);
}

void UEnvQueryGenerator_ProjectedPoints::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

}

void UEnvQueryGenerator_ProjectedPoints::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

}

void UEnvQueryGenerator_Cone::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(CenterActor, UClass);
}

void UEnvQueryGenerator_Cone::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(CenterActor);
}

void UEnvQueryGenerator_CurrentLocation::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

	READ_PTR_FULL(QueryContext, UClass);
}

void UEnvQueryGenerator_CurrentLocation::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

	DELE_PTR_FULL(QueryContext);
}

void UEnvQueryGenerator_Donut::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(Center, UClass);
}

void UEnvQueryGenerator_Donut::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(Center);
}

void UEnvQueryGenerator_OnCircle::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(CircleCenter, UClass);
}

void UEnvQueryGenerator_OnCircle::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(CircleCenter);
}

void UEnvQueryGenerator_SimpleGrid::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(GenerateAround, UClass);
}

void UEnvQueryGenerator_SimpleGrid::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(GenerateAround);
}

void UEnvQueryGenerator_PathingGrid::AfterRead()
{
	UEnvQueryGenerator_SimpleGrid::AfterRead();

	READ_PTR_FULL(NavigationFilter, UClass);
}

void UEnvQueryGenerator_PathingGrid::BeforeDelete()
{
	UEnvQueryGenerator_SimpleGrid::BeforeDelete();

	DELE_PTR_FULL(NavigationFilter);
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FVector>         ResultLocations                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations");

	UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultLocations != nullptr)
		*ResultLocations = params.ResultLocations;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<class AActor*>          ResultActors                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<class AActor*>* ResultActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors");

	UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultActors != nullptr)
		*ResultActors = params.ResultActors;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEnvQueryInstanceBlueprintWrapper::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ItemType, UClass);
}

void UEnvQueryInstanceBlueprintWrapper::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ItemType);
}

void UEnvQueryItemType::AfterRead()
{
	UObject::AfterRead();

}

void UEnvQueryItemType::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEnvQueryItemType_VectorBase::AfterRead()
{
	UEnvQueryItemType::AfterRead();

}

void UEnvQueryItemType_VectorBase::BeforeDelete()
{
	UEnvQueryItemType::BeforeDelete();

}

void UEnvQueryItemType_ActorBase::AfterRead()
{
	UEnvQueryItemType_VectorBase::AfterRead();

}

void UEnvQueryItemType_ActorBase::BeforeDelete()
{
	UEnvQueryItemType_VectorBase::BeforeDelete();

}

void UEnvQueryItemType_Actor::AfterRead()
{
	UEnvQueryItemType_ActorBase::AfterRead();

}

void UEnvQueryItemType_Actor::BeforeDelete()
{
	UEnvQueryItemType_ActorBase::BeforeDelete();

}

void UEnvQueryItemType_Direction::AfterRead()
{
	UEnvQueryItemType_VectorBase::AfterRead();

}

void UEnvQueryItemType_Direction::BeforeDelete()
{
	UEnvQueryItemType_VectorBase::BeforeDelete();

}

void UEnvQueryItemType_Point::AfterRead()
{
	UEnvQueryItemType_VectorBase::AfterRead();

}

void UEnvQueryItemType_Point::BeforeDelete()
{
	UEnvQueryItemType_VectorBase::BeforeDelete();

}

// Function AIModule.EnvQueryManager.RunEQSQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Querier                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  WrapperClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQueryInstanceBlueprintWrapper* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::STATIC_RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	UEnvQueryManager_RunEQSQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QueryTemplate = QueryTemplate;
	params.Querier = Querier;
	params.RunMode = RunMode;
	params.WrapperClass = WrapperClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UEnvQueryManager::AfterRead()
{
	UAISubsystem::AfterRead();

}

void UEnvQueryManager::BeforeDelete()
{
	UAISubsystem::BeforeDelete();

}

void UEnvQueryOption::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Generator, UEnvQueryGenerator);
}

void UEnvQueryOption::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Generator);
}

void UEnvQueryTest::AfterRead()
{
	UEnvQueryNode::AfterRead();

}

void UEnvQueryTest::BeforeDelete()
{
	UEnvQueryNode::BeforeDelete();

}

void UEnvQueryTest_Distance::AfterRead()
{
	UEnvQueryTest::AfterRead();

	READ_PTR_FULL(DistanceTo, UClass);
}

void UEnvQueryTest_Distance::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

	DELE_PTR_FULL(DistanceTo);
}

void UEnvQueryTest_Dot::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UEnvQueryTest_Dot::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

void UEnvQueryTest_GameplayTags::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UEnvQueryTest_GameplayTags::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

void UEnvQueryTest_Overlap::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UEnvQueryTest_Overlap::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

void UEnvQueryTest_Pathfinding::AfterRead()
{
	UEnvQueryTest::AfterRead();

	READ_PTR_FULL(Context, UClass);
	READ_PTR_FULL(FilterClass, UClass);
}

void UEnvQueryTest_Pathfinding::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

	DELE_PTR_FULL(Context);
	DELE_PTR_FULL(FilterClass);
}

void UEnvQueryTest_PathfindingBatch::AfterRead()
{
	UEnvQueryTest_Pathfinding::AfterRead();

}

void UEnvQueryTest_PathfindingBatch::BeforeDelete()
{
	UEnvQueryTest_Pathfinding::BeforeDelete();

}

void UEnvQueryTest_Project::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UEnvQueryTest_Project::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

void UEnvQueryTest_Random::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UEnvQueryTest_Random::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

void UEnvQueryTest_Trace::AfterRead()
{
	UEnvQueryTest::AfterRead();

	READ_PTR_FULL(Context, UClass);
}

void UEnvQueryTest_Trace::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

	DELE_PTR_FULL(Context);
}

void UEnvQueryTest_Volume::AfterRead()
{
	UEnvQueryTest::AfterRead();

	READ_PTR_FULL(VolumeContext, UClass);
	READ_PTR_FULL(VolumeClass, UClass);
}

void UEnvQueryTest_Volume::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

	DELE_PTR_FULL(VolumeContext);
	DELE_PTR_FULL(VolumeClass);
}

void UEnvQueryTypes::AfterRead()
{
	UObject::AfterRead();

}

void UEnvQueryTypes::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEQSQueryResultSourceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UEQSQueryResultSourceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UEQSRenderingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UEQSRenderingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void AEQSTestingPawn::AfterRead()
{
	ACharacter::AfterRead();

	READ_PTR_FULL(QueryTemplate, UEnvQuery);
}

void AEQSTestingPawn::BeforeDelete()
{
	ACharacter::BeforeDelete();

	DELE_PTR_FULL(QueryTemplate);
}

void UGenericTeamAgentInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGenericTeamAgentInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AGridPathAIController::AfterRead()
{
	AAIController::AfterRead();

}

void AGridPathAIController::BeforeDelete()
{
	AAIController::BeforeDelete();

}

void UGridPathFollowingComponent::AfterRead()
{
	UPathFollowingComponent::AfterRead();

	READ_PTR_FULL(GridManager, UNavLocalGridManager);
}

void UGridPathFollowingComponent::BeforeDelete()
{
	UPathFollowingComponent::BeforeDelete();

	DELE_PTR_FULL(GridManager);
}

void UNavFilter_AIControllerDefault::AfterRead()
{
	UNavigationQueryFilter::AfterRead();

}

void UNavFilter_AIControllerDefault::BeforeDelete()
{
	UNavigationQueryFilter::BeforeDelete();

}

// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	ANavLinkProxy_SetSmartLinkEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLinkProxy.ResumePathFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Agent                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANavLinkProxy::ResumePathFollowing(class AActor* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	ANavLinkProxy_ResumePathFollowing_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  Agent                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Destination                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANavLinkProxy::ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	ANavLinkProxy_ReceiveSmartLinkReached_Params params;
	params.Agent = Agent;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ANavLinkProxy::IsSmartLinkEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	ANavLinkProxy_IsSmartLinkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLinkProxy.HasMovingAgents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ANavLinkProxy::HasMovingAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	ANavLinkProxy_HasMovingAgents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ANavLinkProxy::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SmartLinkComp, UNavLinkCustomComponent);
}

void ANavLinkProxy::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SmartLinkComp);
}

// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLocalGridManager::STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity");

	UNavLocalGridManager_SetLocalNavigationGridDensity_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CellSize = CellSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GridId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavLocalGridManager::STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid");

	UNavLocalGridManager_RemoveLocalNavigationGrid_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GridId = GridId;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         PathPoints                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLocalGridManager::STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath");

	UNavLocalGridManager_FindLocalNavigationGridPath_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints");

	UNavLocalGridManager_AddLocalNavigationGridForPoints_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Locations = Locations;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint");

	UNavLocalGridManager_AddLocalNavigationGridForPoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CapsuleRadius                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CapsuleHalfHeight              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule");

	UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox");

	UNavLocalGridManager_AddLocalNavigationGridForBox_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNavLocalGridManager::AfterRead()
{
	UObject::AfterRead();

}

void UNavLocalGridManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UPathFollowingManager::AfterRead()
{
	UObject::AfterRead();

}

void UPathFollowingManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AIModule.PawnAction.GetActionPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<AIModule_EAIRequestPriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EAIRequestPriority> UPawnAction::GetActionPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	UPawnAction_GetActionPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnAction.Finish
// (Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction::Finish(TEnumAsByte<AIModule_EPawnActionResult> WithResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	UPawnAction_Finish_Params params;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction.CreateActionInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPawnAction* UPawnAction::STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	UPawnAction_CreateActionInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPawnAction::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ChildAction, UPawnAction);
	READ_PTR_FULL(ParentAction, UPawnAction);
	READ_PTR_FULL(OwnerComponent, UPawnActionsComponent);
	READ_PTR_FULL(Instigator, UObject);
	READ_PTR_FULL(BrainComp, UBrainComponent);
}

void UPawnAction::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ChildAction);
	DELE_PTR_FULL(ParentAction);
	DELE_PTR_FULL(OwnerComponent);
	DELE_PTR_FULL(Instigator);
	DELE_PTR_FULL(BrainComp);
}

// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");

	UPawnAction_BlueprintBase_ActionTick_Params params;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionStart(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");

	UPawnAction_BlueprintBase_ActionStart_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionResume(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");

	UPawnAction_BlueprintBase_ActionResume_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionPause(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");

	UPawnAction_BlueprintBase_ActionPause_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionFinished(class APawn* ControlledPawn, TEnumAsByte<AIModule_EPawnActionResult> WithResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");

	UPawnAction_BlueprintBase_ActionFinished_Params params;
	params.ControlledPawn = ControlledPawn;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPawnAction_BlueprintBase::AfterRead()
{
	UPawnAction::AfterRead();

}

void UPawnAction_BlueprintBase::BeforeDelete()
{
	UPawnAction::BeforeDelete();

}

void UPawnAction_Move::AfterRead()
{
	UPawnAction::AfterRead();

	READ_PTR_FULL(GoalActor, AActor);
	READ_PTR_FULL(FilterClass, UClass);
}

void UPawnAction_Move::BeforeDelete()
{
	UPawnAction::BeforeDelete();

	DELE_PTR_FULL(GoalActor);
	DELE_PTR_FULL(FilterClass);
}

void UPawnAction_Repeat::AfterRead()
{
	UPawnAction::AfterRead();

	READ_PTR_FULL(ActionToRepeat, UPawnAction);
	READ_PTR_FULL(RecentActionCopy, UPawnAction);
}

void UPawnAction_Repeat::BeforeDelete()
{
	UPawnAction::BeforeDelete();

	DELE_PTR_FULL(ActionToRepeat);
	DELE_PTR_FULL(RecentActionCopy);
}

void UPawnAction_Sequence::AfterRead()
{
	UPawnAction::AfterRead();

	READ_PTR_FULL(RecentActionCopy, UPawnAction);
}

void UPawnAction_Sequence::BeforeDelete()
{
	UPawnAction::BeforeDelete();

	DELE_PTR_FULL(RecentActionCopy);
}

void UPawnAction_Wait::AfterRead()
{
	UPawnAction::AfterRead();

}

void UPawnAction_Wait::BeforeDelete()
{
	UPawnAction::BeforeDelete();

}

// Function AIModule.PawnActionsComponent.K2_PushAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             NewAction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<AIModule_EAIRequestPriority> Priority, class UObject* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	UPawnActionsComponent_K2_PushAction_Params params;
	params.NewAction = NewAction;
	params.Priority = Priority;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*             Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPawnActionsComponent::STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<AIModule_EAIRequestPriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	UPawnActionsComponent_K2_PerformAction_Params params;
	params.Pawn = Pawn;
	params.Action = Action;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPawnActionAbortState> UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	UPawnActionsComponent_K2_ForceAbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPawnActionAbortState> UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	UPawnActionsComponent_K2_AbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPawnActionsComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ControlledPawn, APawn);
	READ_PTR_FULL(currentAction, UPawnAction);
}

void UPawnActionsComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ControlledPawn);
	DELE_PTR_FULL(currentAction);
}

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	UPawnSensingComponent_SetSensingUpdatesEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewSensingInterval             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	UPawnSensingComponent_SetSensingInterval_Params params;
	params.NewSensingInterval = NewSensingInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPeripheralVisionAngle       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	UPawnSensingComponent_SetPeripheralVisionAngle_Params params;
	params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPawnSensingComponent::GetPeripheralVisionCosine()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	UPawnSensingComponent_GetPeripheralVisionCosine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPawnSensingComponent::GetPeripheralVisionAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	UPawnSensingComponent_GetPeripheralVisionAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPawnSensingComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UPawnSensingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UVisualLoggerExtension::AfterRead()
{
	UObject::AfterRead();

}

void UVisualLoggerExtension::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
