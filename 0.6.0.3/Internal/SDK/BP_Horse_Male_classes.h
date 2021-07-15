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

// BlueprintGeneratedClass BP_Horse_Male.BP_Horse_Male_C
// 0x0130 (FullSize[0x0E11] - InheritedSize[0x0CE1])
class ABP_Horse_Male_C : public ABP_HusbandryAI_C
{
public:
	unsigned char                                      UnknownData_6R2A[0x7];                                     // 0x0CE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        StaticMesh_R;                                              // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh_L;                                              // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*                 PhysicsConstraint_R;                                       // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*                 PhysicsConstraint_L;                                       // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleCollider_Head;                                      // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleCollider_Body;                                      // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SaddleBag;                                                 // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Saddle;                                                    // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UInventoryComponent_C*                       InventoryComponent;                                        // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    HorseDynamicMaterial;                                      // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DynamicMaterialIndex;                                      // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GPLO[0xC];                                     // 0x0D44(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ReinsIKLeft;                                               // 0x0D50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  ReinsIKRight;                                              // 0x0D80(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StirrsIKLeft;                                              // 0x0DB0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StirrsIKRight;                                             // 0x0DE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReinsHidden;                                               // 0x0E10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Horse_Male.BP_Horse_Male_C");
		return ptr;
	}



	void UpdateMovementVars();
	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);
	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);
	void HideReins();
	void UpdateTalentsForHorse();
	void CalculateEssentialVariables();
	void UpdateAnimalMovementSettings();
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed);
	void GetInventoryComponent(class UInventoryComponent_C** InventoryComponent);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void UserConstructionScript();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void ReceiveBeginPlay();
	void UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData);
	void EventDead();
	void ReceiveTick(float DeltaSeconds);
	void EnableNPC();
	void DisableNPC();
	void CloseOptimization();
	void MediumOptimization();
	void NoneOptimization();
	void FarOptimization();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Horse_Male(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
