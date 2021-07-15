#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint
struct UBPCppHelperFunctions_SetCurrentAspectRatioConstraint_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAspectRatioAxisConstraint>     ConstraintMode;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.SetActorName
struct UBPCppHelperFunctions_SetActorName_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.GetSectionPosition
struct UBPCppHelperFunctions_GetSectionPosition_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SectionName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.GetOnlineSubsystem
struct UBPCppHelperFunctions_GetOnlineSubsystem_Params
{
	class UObject*                                     InWorldContextObject;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.GetFiles
struct UBPCppHelperFunctions_GetFiles_Params
{
	TArray<struct FString>                             Files;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     RootFolderFullPath;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ext;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FileNameFilter;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FilesToExclude;                                            // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.GetCurrentAspectRatioConstraint
struct UBPCppHelperFunctions_GetCurrentAspectRatioConstraint_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAspectRatioAxisConstraint>     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.FStrToInt64
struct UBPCppHelperFunctions_FStrToInt64_Params
{
	struct FString                                     String;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.CopyCurve
struct UBPCppHelperFunctions_CopyCurve_Params
{
	class UAnimSequence*                               Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.Array_Empty
struct UBPCppHelperFunctions_Array_Empty_Params
{
	TArray<int>                                        TargetArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.BPCppHelperFunctions.AdjustTeleportLocation
struct UBPCppHelperFunctions_AdjustTeleportLocation_Params
{
	class AActor*                                      TestActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlaceLocation;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PlaceRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomCapsuleComponent.SetBoxExtent
struct UCustomCapsuleComponent_SetBoxExtent_Params
{
	struct FVector                                     InBoxExtent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateOverlaps;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomCapsuleComponent.GetUnscaledBoxExtent
struct UCustomCapsuleComponent_GetUnscaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomCapsuleComponent.GetScaledBoxExtent
struct UCustomCapsuleComponent_GetScaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSlowdownAtGoal
struct ACustomDetourCrowdAIC_SetCrowdSlowdownAtGoal_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSimulationState
struct ACustomDetourCrowdAIC_SetCrowdSimulationState_Params
{
	Medieval_Dynasty_EDetourCrowdSimulationState       NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSeparationWeight
struct ACustomDetourCrowdAIC_SetCrowdSeparationWeight_Params
{
	float                                              Weight;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdSeparation
struct ACustomDetourCrowdAIC_SetCrowdSeparation_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdRotateToVelocity
struct ACustomDetourCrowdAIC_SetCrowdRotateToVelocity_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdPathOptimizationRange
struct ACustomDetourCrowdAIC_SetCrowdPathOptimizationRange_Params
{
	float                                              Range;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdPathOffset
struct ACustomDetourCrowdAIC_SetCrowdPathOffset_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdOptimizeVisibility
struct ACustomDetourCrowdAIC_SetCrowdOptimizeVisibility_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdOptimizeTopology
struct ACustomDetourCrowdAIC_SetCrowdOptimizeTopology_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdObstacleAvoidance
struct ACustomDetourCrowdAIC_SetCrowdObstacleAvoidance_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdCollisionQueryRange
struct ACustomDetourCrowdAIC_SetCrowdCollisionQueryRange_Params
{
	float                                              Range;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAvoidanceRangeMultiplier
struct ACustomDetourCrowdAIC_SetCrowdAvoidanceRangeMultiplier_Params
{
	float                                              Multiplier;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAnticipateTurns
struct ACustomDetourCrowdAIC_SetCrowdAnticipateTurns_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAgent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.SetCrowdAffectFallingVelocity
struct ACustomDetourCrowdAIC_SetCrowdAffectFallingVelocity_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSlowdownAtGoalEnabled
struct ACustomDetourCrowdAIC_IsCrowdSlowdownAtGoalEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulatioSuspended
struct ACustomDetourCrowdAIC_IsCrowdSimulatioSuspended_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulationEnabled
struct ACustomDetourCrowdAIC_IsCrowdSimulationEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSimulationActive
struct ACustomDetourCrowdAIC_IsCrowdSimulationActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSeparationEnabled
struct ACustomDetourCrowdAIC_IsCrowdSeparationEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdSeparationActive
struct ACustomDetourCrowdAIC_IsCrowdSeparationActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdRotateToVelocityEnabled
struct ACustomDetourCrowdAIC_IsCrowdRotateToVelocityEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdPathOffsetEnabled
struct ACustomDetourCrowdAIC_IsCrowdPathOffsetEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeVisibilityEnabled
struct ACustomDetourCrowdAIC_IsCrowdOptimizeVisibilityEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeTopologyEnabled
struct ACustomDetourCrowdAIC_IsCrowdOptimizeTopologyEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdOptimizeTopologyActive
struct ACustomDetourCrowdAIC_IsCrowdOptimizeTopologyActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdObstacleAvoidanceEnabled
struct ACustomDetourCrowdAIC_IsCrowdObstacleAvoidanceEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdObstacleAvoidanceActive
struct ACustomDetourCrowdAIC_IsCrowdObstacleAvoidanceActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAnticipateTurnsEnabled
struct ACustomDetourCrowdAIC_IsCrowdAnticipateTurnsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAnticipateTurnsActive
struct ACustomDetourCrowdAIC_IsCrowdAnticipateTurnsActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.IsCrowdAffectFallingVelocityEnabled
struct ACustomDetourCrowdAIC_IsCrowdAffectFallingVelocityEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdSimulationState
struct ACustomDetourCrowdAIC_GetCrowdSimulationState_Params
{
	Medieval_Dynasty_EDetourCrowdSimulationState       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdSeparationWeight
struct ACustomDetourCrowdAIC_GetCrowdSeparationWeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdPathOptimizationRange
struct ACustomDetourCrowdAIC_GetCrowdPathOptimizationRange_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdCollisionQueryRange
struct ACustomDetourCrowdAIC_GetCrowdCollisionQueryRange_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Medieval_Dynasty.CustomDetourCrowdAIC.GetCrowdAvoidanceRangeMultiplier
struct ACustomDetourCrowdAIC_GetCrowdAvoidanceRangeMultiplier_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
