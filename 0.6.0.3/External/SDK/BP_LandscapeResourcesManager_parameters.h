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

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindDuplicates_ResourceDeposit
struct ABP_LandscapeResourcesManager_C_FindDuplicates_ResourceDeposit_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliageDepleted
struct ABP_LandscapeResourcesManager_C_AddFoliageDepleted_Params
{
	struct FTransform                                  Transform;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                NumberOfSeasonToReset;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindFoliageDepleted
struct ABP_LandscapeResourcesManager_C_FindFoliageDepleted_Params
{
	struct FTransform                                  Transform;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindFoliageCondition
struct ABP_LandscapeResourcesManager_C_FindFoliageCondition_Params
{
	struct FTransform                                  InteractFoliageTransform;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RestoreResourceDeposit
struct ABP_LandscapeResourcesManager_C_RestoreResourceDeposit_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.SaveDataFromSystemToFile
struct ABP_LandscapeResourcesManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ClearFoliageQueue
struct ABP_LandscapeResourcesManager_C_ClearFoliageQueue_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CompareByLocationInteractiveFoliageInstance
struct ABP_LandscapeResourcesManager_C_CompareByLocationInteractiveFoliageInstance_Params
{
	struct FST_FoliageTarget                           FoliageTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               Correct;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindInteractiveFoliageInstances
struct ABP_LandscapeResourcesManager_C_FindInteractiveFoliageInstances_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<E_Resources_E_Resources>>       ResourceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_FoliageTargetsData>              FoliageTargets;                                            // (Parm, OutParm, ContainsInstancedReference)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveTreesInBox
struct ABP_LandscapeResourcesManager_C_MoveTreesInBox_Params
{
	bool                                               UpOrDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RemoveForever;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AtBeginning;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Start;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HalfSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Orientation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveFoliagesInSphere
struct ABP_LandscapeResourcesManager_C_MoveFoliagesInSphere_Params
{
	bool                                               UpOrDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Center;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveForever;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AtBeginning;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveFoliageInstance
struct ABP_LandscapeResourcesManager_C_MoveFoliageInstance_Params
{
	class UFoliageType_InstancedStaticMesh*            FoliageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterFoliage_C*                         InstancedStaticMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InstanceIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpOrDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumberOfSeasonToReset;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveForever;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AtBeginning;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CreateAdditionalInstances
struct ABP_LandscapeResourcesManager_C_CreateAdditionalInstances_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.LoadSaveFileIntoSystem
struct ABP_LandscapeResourcesManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckForAvailableSpace
struct ABP_LandscapeResourcesManager_C_CheckForAvailableSpace_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ObstacleDetected;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.Init
struct ABP_LandscapeResourcesManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RestoreFoliageInstances
struct ABP_LandscapeResourcesManager_C_RestoreFoliageInstances_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.InteractFoliageInstanceDetection
struct ABP_LandscapeResourcesManager_C_InteractFoliageInstanceDetection_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_TimerResourceFoliage_C*                  HitComponent;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawDotLandscapeRT
struct ABP_LandscapeResourcesManager_C_DrawDotLandscapeRT_Params
{
	struct FVector                                     V;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.UpdateFoliageQueue
struct ABP_LandscapeResourcesManager_C_UpdateFoliageQueue_Params
{
	struct FTransform                                  InteractFoliageTransform;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              BaseCondition;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Extraction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoImmediately;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AddToFoliageDepleted;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SeasonsToReset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawLineLandscapeRT
struct ABP_LandscapeResourcesManager_C_DrawLineLandscapeRT_Params
{
	struct FVector                                     V0;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v1;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Thickness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliageInstance
struct ABP_LandscapeResourcesManager_C_AddFoliageInstance_Params
{
	class UFoliageType_InstancedStaticMesh*            FoliageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  InstanceTransform;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                InstanceIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFoliageInstancedStaticMeshComponent*        InstanceComponent;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ClearLandscapeRT
struct ABP_LandscapeResourcesManager_C_ClearLandscapeRT_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawQuadrangleLandscapeRT
struct ABP_LandscapeResourcesManager_C_DrawQuadrangleLandscapeRT_Params
{
	struct FVector                                     V0;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v1;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v2;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     V3;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RemoveFoliagesOccupied
struct ABP_LandscapeResourcesManager_C_RemoveFoliagesOccupied_Params
{
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliagesOccupied
struct ABP_LandscapeResourcesManager_C_AddFoliagesOccupied_Params
{
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckFoliagesOccupied
struct ABP_LandscapeResourcesManager_C_CheckFoliagesOccupied_Params
{
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFree;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToEmptyInstance
struct ABP_LandscapeResourcesManager_C_ReplaceFoliageInstanceToEmptyInstance_Params
{
	class UFoliageType_InstancedStaticMesh*            FoliageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFoliageType_InstancedStaticMesh*            TargetFoliageType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterFoliage_C*                         InstancedStaticMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InstanceIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfSeasonToReset;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToAdditionalStage
struct ABP_LandscapeResourcesManager_C_ReplaceFoliageInstanceToAdditionalStage_Params
{
	class UBP_MasterFoliage_C*                         InstancedStaticMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InstanceIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFoliageType_InstancedStaticMesh*            FoliageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFoliageType_InstancedStaticMesh*            TargetFoliageType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      StageClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfSeasonToReset;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToEmptyInstanceWithDropItem
struct ABP_LandscapeResourcesManager_C_ReplaceFoliageInstanceToEmptyInstanceWithDropItem_Params
{
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InstaceIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFoliageType*                                FoliageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResource>                    Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckFoliageActors
struct ABP_LandscapeResourcesManager_C_CheckFoliageActors_Params
{
	class AActor*                                      FoliageActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.UserConstructionScript
struct ABP_LandscapeResourcesManager_C_UserConstructionScript_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReceiveBeginPlay
struct ABP_LandscapeResourcesManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReceiveTick
struct ABP_LandscapeResourcesManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.InitFoliage
struct ABP_LandscapeResourcesManager_C_InitFoliage_Params
{
};

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ExecuteUbergraph_BP_LandscapeResourcesManager
struct ABP_LandscapeResourcesManager_C_ExecuteUbergraph_BP_LandscapeResourcesManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
