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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C
// 0x00BC (FullSize[0x0164] - InheritedSize[0x00A8])
class UBP_BTT_Roam_RandomLocationNavMesh_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnRef;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SearchRadius;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaitAtDestination;                                         // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      AnimalBase;                                                // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      RoamBehavior;                                              // 0x00C8(0x0028) (Edit, BlueprintVisible)
	bool                                               UseHomeBase_;                                              // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KEBK[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MoveRadius;                                                // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Moving;                                                    // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RoamingLocation;                                           // 0x0120(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     MoveLocation;                                              // 0x0148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AnimalSpawnLocation;                                       // 0x0158(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTT_Roam_RandomLocationNavMesh.BP_BTT_Roam_RandomLocationNavMesh_C");
		return ptr;
	}



	void OnFail_91CA5EB0432B0806BA1A22AFF7BEC705(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_91CA5EB0432B0806BA1A22AFF7BEC705(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_Roam_RandomLocationNavMesh(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
