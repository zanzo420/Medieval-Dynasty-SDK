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

// BlueprintGeneratedClass BTTask_StartInteractField.BTTask_StartInteractField_C
// 0x01C0 (FullSize[0x0268] - InheritedSize[0x00A8])
class UBTTask_StartInteractField_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       Pawn_Reference;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentResourceState;                                      // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Task;                                                      // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentTask;                                               // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ResourceName;                                              // 0x0180(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentResourceName;                                       // 0x01A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Seeds;                                                     // 0x01D0(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<E_Tools_E_Tools>                       L_ToolType;                                                // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WAQL[0x3];                                     // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NameOfResource;                                            // 0x01FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_64YB[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      LookAtTarget;                                              // 0x0208(0x0028) (Edit, BlueprintVisible)
	struct FST_FieldTasksLists                         TaskList;                                                  // 0x0230(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_StartInteractField.BTTask_StartInteractField_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CheckItem(TEnumAsByte<E_Tools_E_Tools> ToolType);
	void ExecuteUbergraph_BTTask_StartInteractField(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
