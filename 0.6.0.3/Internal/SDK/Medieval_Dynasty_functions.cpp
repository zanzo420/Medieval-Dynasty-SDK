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

// Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAspectRatioAxisConstraint> ConstraintMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBPCppHelperFunctions::STATIC_SetCurrentAspectRatioConstraint(class APlayerController* Controller, TEnumAsByte<Engine_EAspectRatioAxisConstraint> ConstraintMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint");

	UBPCppHelperFunctions_SetCurrentAspectRatioConstraint_Params params;
	params.Controller = Controller;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.BPCppHelperFunctions.SetActorName
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBPCppHelperFunctions::STATIC_SetActorName(class UObject* Object, const struct FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetActorName");

	UBPCppHelperFunctions_SetActorName_Params params;
	params.Object = Object;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.BPCppHelperFunctions.GetSectionPosition
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBPCppHelperFunctions::STATIC_GetSectionPosition(class UAnimMontage* Montage, const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetSectionPosition");

	UBPCppHelperFunctions_GetSectionPosition_Params params;
	params.Montage = Montage;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.BPCppHelperFunctions.GetOnlineSubsystem
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 InWorldContextObject           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBPCppHelperFunctions::STATIC_GetOnlineSubsystem(class UObject* InWorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetOnlineSubsystem");

	UBPCppHelperFunctions_GetOnlineSubsystem_Params params;
	params.InWorldContextObject = InWorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.BPCppHelperFunctions.GetFiles
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         Files                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 RootFolderFullPath             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ext                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FileNameFilter                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         FilesToExclude                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPCppHelperFunctions::STATIC_GetFiles(TArray<struct FString>* Files, const struct FString& RootFolderFullPath, const struct FString& Ext, const struct FString& FileNameFilter, TArray<struct FString> FilesToExclude)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetFiles");

	UBPCppHelperFunctions_GetFiles_Params params;
	params.RootFolderFullPath = RootFolderFullPath;
	params.Ext = Ext;
	params.FileNameFilter = FileNameFilter;
	params.FilesToExclude = FilesToExclude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Files != nullptr)
		*Files = params.Files;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.BPCppHelperFunctions.GetCurrentAspectRatioConstraint
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAspectRatioAxisConstraint> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_EAspectRatioAxisConstraint> UBPCppHelperFunctions::STATIC_GetCurrentAspectRatioConstraint(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetCurrentAspectRatioConstraint");

	UBPCppHelperFunctions_GetCurrentAspectRatioConstraint_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.BPCppHelperFunctions.FStrToInt64
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int64_t UBPCppHelperFunctions::STATIC_FStrToInt64(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.FStrToInt64");

	UBPCppHelperFunctions_FStrToInt64_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.BPCppHelperFunctions.CopyCurve
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UAnimSequence*           Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*           Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBPCppHelperFunctions::STATIC_CopyCurve(class UAnimSequence* Source, class UAnimSequence* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CopyCurve");

	UBPCppHelperFunctions_CopyCurve_Params params;
	params.Source = Source;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.BPCppHelperFunctions.Array_Empty
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPCppHelperFunctions::STATIC_Array_Empty(TArray<int> TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.Array_Empty");

	UBPCppHelperFunctions_Array_Empty_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.BPCppHelperFunctions.AdjustTeleportLocation
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TestActor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PlaceLocation                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                PlaceRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPCppHelperFunctions::STATIC_AdjustTeleportLocation(class AActor* TestActor, struct FVector* PlaceLocation, const struct FRotator& PlaceRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.AdjustTeleportLocation");

	UBPCppHelperFunctions_AdjustTeleportLocation_Params params;
	params.TestActor = TestActor;
	params.PlaceRotation = PlaceRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlaceLocation != nullptr)
		*PlaceLocation = params.PlaceLocation;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomCapsuleComponent.SetBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InBoxExtent                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCustomCapsuleComponent::SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomCapsuleComponent.SetBoxExtent");

	UCustomCapsuleComponent_SetBoxExtent_Params params;
	params.InBoxExtent = InBoxExtent;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomCapsuleComponent.GetUnscaledBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UCustomCapsuleComponent::GetUnscaledBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomCapsuleComponent.GetUnscaledBoxExtent");

	UCustomCapsuleComponent_GetUnscaledBoxExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomCapsuleComponent.GetScaledBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UCustomCapsuleComponent::GetScaledBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomCapsuleComponent.GetScaledBoxExtent");

	UCustomCapsuleComponent_GetScaledBoxExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSlowdownAtGoal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdSlowdownAtGoal(bool bEnable, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSlowdownAtGoal");

	ACustomDetourCrowdAIC_SetCrowdSlowdownAtGoal_Params params;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSimulationState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Medieval_Dynasty_EDetourCrowdSimulationState NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdSimulationState(Medieval_Dynasty_EDetourCrowdSimulationState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSimulationState");

	ACustomDetourCrowdAIC_SetCrowdSimulationState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSeparationWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdSeparationWeight(float Weight, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSeparationWeight");

	ACustomDetourCrowdAIC_SetCrowdSeparationWeight_Params params;
	params.Weight = Weight;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSeparation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdSeparation(bool bEnable, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSeparation");

	ACustomDetourCrowdAIC_SetCrowdSeparation_Params params;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdRotateToVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdRotateToVelocity(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdRotateToVelocity");

	ACustomDetourCrowdAIC_SetCrowdRotateToVelocity_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdPathOptimizationRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdPathOptimizationRange(float Range, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdPathOptimizationRange");

	ACustomDetourCrowdAIC_SetCrowdPathOptimizationRange_Params params;
	params.Range = Range;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdPathOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdPathOffset(bool bEnable, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdPathOffset");

	ACustomDetourCrowdAIC_SetCrowdPathOffset_Params params;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdOptimizeVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdOptimizeVisibility(bool bEnable, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdOptimizeVisibility");

	ACustomDetourCrowdAIC_SetCrowdOptimizeVisibility_Params params;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdOptimizeTopology
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdOptimizeTopology(bool bEnable, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdOptimizeTopology");

	ACustomDetourCrowdAIC_SetCrowdOptimizeTopology_Params params;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdObstacleAvoidance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdObstacleAvoidance(bool bEnable, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdObstacleAvoidance");

	ACustomDetourCrowdAIC_SetCrowdObstacleAvoidance_Params params;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdCollisionQueryRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdCollisionQueryRange(float Range, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdCollisionQueryRange");

	ACustomDetourCrowdAIC_SetCrowdCollisionQueryRange_Params params;
	params.Range = Range;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAvoidanceRangeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdAvoidanceRangeMultiplier(float Multiplier, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAvoidanceRangeMultiplier");

	ACustomDetourCrowdAIC_SetCrowdAvoidanceRangeMultiplier_Params params;
	params.Multiplier = Multiplier;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAnticipateTurns
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateAgent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdAnticipateTurns(bool bEnable, bool bUpdateAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAnticipateTurns");

	ACustomDetourCrowdAIC_SetCrowdAnticipateTurns_Params params;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAffectFallingVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomDetourCrowdAIC::SetCrowdAffectFallingVelocity(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAffectFallingVelocity");

	ACustomDetourCrowdAIC_SetCrowdAffectFallingVelocity_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSlowdownAtGoalEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdSlowdownAtGoalEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSlowdownAtGoalEnabled");

	ACustomDetourCrowdAIC_IsCrowdSlowdownAtGoalEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulatioSuspended
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdSimulatioSuspended()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulatioSuspended");

	ACustomDetourCrowdAIC_IsCrowdSimulatioSuspended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdSimulationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulationEnabled");

	ACustomDetourCrowdAIC_IsCrowdSimulationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulationActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdSimulationActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulationActive");

	ACustomDetourCrowdAIC_IsCrowdSimulationActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSeparationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdSeparationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSeparationEnabled");

	ACustomDetourCrowdAIC_IsCrowdSeparationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSeparationActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdSeparationActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSeparationActive");

	ACustomDetourCrowdAIC_IsCrowdSeparationActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdRotateToVelocityEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdRotateToVelocityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdRotateToVelocityEnabled");

	ACustomDetourCrowdAIC_IsCrowdRotateToVelocityEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdPathOffsetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdPathOffsetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdPathOffsetEnabled");

	ACustomDetourCrowdAIC_IsCrowdPathOffsetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeVisibilityEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdOptimizeVisibilityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeVisibilityEnabled");

	ACustomDetourCrowdAIC_IsCrowdOptimizeVisibilityEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeTopologyEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdOptimizeTopologyEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeTopologyEnabled");

	ACustomDetourCrowdAIC_IsCrowdOptimizeTopologyEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeTopologyActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdOptimizeTopologyActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeTopologyActive");

	ACustomDetourCrowdAIC_IsCrowdOptimizeTopologyActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdObstacleAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdObstacleAvoidanceEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdObstacleAvoidanceEnabled");

	ACustomDetourCrowdAIC_IsCrowdObstacleAvoidanceEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdObstacleAvoidanceActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdObstacleAvoidanceActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdObstacleAvoidanceActive");

	ACustomDetourCrowdAIC_IsCrowdObstacleAvoidanceActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAnticipateTurnsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdAnticipateTurnsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAnticipateTurnsEnabled");

	ACustomDetourCrowdAIC_IsCrowdAnticipateTurnsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAnticipateTurnsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdAnticipateTurnsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAnticipateTurnsActive");

	ACustomDetourCrowdAIC_IsCrowdAnticipateTurnsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAffectFallingVelocityEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomDetourCrowdAIC::IsCrowdAffectFallingVelocityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAffectFallingVelocityEnabled");

	ACustomDetourCrowdAIC_IsCrowdAffectFallingVelocityEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdSimulationState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Medieval_Dynasty_EDetourCrowdSimulationState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Medieval_Dynasty_EDetourCrowdSimulationState ACustomDetourCrowdAIC::GetCrowdSimulationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdSimulationState");

	ACustomDetourCrowdAIC_GetCrowdSimulationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdSeparationWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ACustomDetourCrowdAIC::GetCrowdSeparationWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdSeparationWeight");

	ACustomDetourCrowdAIC_GetCrowdSeparationWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdPathOptimizationRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ACustomDetourCrowdAIC::GetCrowdPathOptimizationRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdPathOptimizationRange");

	ACustomDetourCrowdAIC_GetCrowdPathOptimizationRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdCollisionQueryRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ACustomDetourCrowdAIC::GetCrowdCollisionQueryRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdCollisionQueryRange");

	ACustomDetourCrowdAIC_GetCrowdCollisionQueryRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdAvoidanceRangeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ACustomDetourCrowdAIC::GetCrowdAvoidanceRangeMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdAvoidanceRangeMultiplier");

	ACustomDetourCrowdAIC_GetCrowdAvoidanceRangeMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
