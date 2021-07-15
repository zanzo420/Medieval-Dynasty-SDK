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

// BlueprintGeneratedClass BP_Sheep.BP_Sheep_C
// 0x0047 (FullSize[0x0D28] - InheritedSize[0x0CE1])
class ABP_Sheep_C : public ABP_HusbandryAI_C
{
public:
	unsigned char                                      UnknownData_P30H[0x7];                                     // 0x0CE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                             ShearingPosition1;                                         // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                             ShearingPosition;                                          // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCapsuleComponent*                           PelvisCapsule;                                             // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleCollider_Body;                                      // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    FurDynamicMaterial;                                        // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    FurLODDynamicMaterial;                                     // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sheep.BP_Sheep_C");
		return ptr;
	}



	void UpdateFur();
	void AddItems(class ABP_BaseCharacter_C* BaseCharacter);
	void UpdateCapacity();
	void SetHusbandryDataFromSave(const struct FST_SAVE_HusbandryAnimals& HusbandryData);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void ReceiveBeginPlay();
	void EventDead();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void InteractInput(bool KeyDown);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void OnMoveFinish();
	void SetTaskInActor(const struct FST_TaskList& Task);
	void ChangeTaskIsOccupied();
	void ExecuteUbergraph_BP_Sheep(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
