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

// BlueprintGeneratedClass BTTask_FindField.BTTask_FindField_C
// 0x0188 (FullSize[0x0230] - InheritedSize[0x00A8])
class UBTTask_FindField_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnReference;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      NPCBehavior;                                               // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceName;                                              // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentResourceName;                                       // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TaskState;                                                 // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x0180(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Seeds;                                                     // 0x01A8(0x0028) (Edit, BlueprintVisible)
	struct FST_FieldTasksLists                         TaskList;                                                  // 0x01D0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      RotateToPlayer;                                            // 0x0208(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FindField.BTTask_FindField_C");
		return ptr;
	}



	void CheckItem(TEnumAsByte<E_Tools_E_Tools> ItemName);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FindField(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
