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

// BlueprintGeneratedClass BP_MasterHoldableItem.BP_MasterHoldableItem_C
// 0x0472 (FullSize[0x0692] - InheritedSize[0x0220])
class ABP_MasterHoldableItem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             AttachComponent;                                           // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemResource                            Item;                                                      // 0x0238(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         PlayerCharacterReference;                                  // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RRH3[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Damage;                                                    // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Extraction;                                                // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_HandsForHolstering_E_HandsForHolstering> HolsterHand;                                               // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseCondition;                                              // 0x026D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V23B[0x2];                                     // 0x026E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HPCostPerAction;                                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsToolTurnedInInteraction_;                                // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G0HS[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaminaCost;                                               // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_39XI[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // 0x0280(0x0050) (Edit, BlueprintVisible)
	float                                              AnimationSpeed;                                            // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseExtraction;                                            // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LeftKeyDown;                                               // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_POOH[0x7];                                     // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerHandle;                                               // 0x02E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               RightKeyDown;                                              // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L13C[0x3];                                     // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Capacity;                                                  // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> OverridenMontageType;                                      // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideMontage;                                           // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldSetToolPosition;                                     // 0x02F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MCSE[0x1];                                     // 0x02F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentHP;                                                 // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                     ItemHitLocation;                                           // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAnimOnly;                                                // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InteractionEnabled;                                        // 0x0305(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A04N[0x2];                                     // 0x0306(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_HoldableItemInput_Stage>         InputMappingStages;                                        // 0x0308(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	int                                                InputStage;                                                // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DecreaseToolHP;                                            // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6SMR[0x3];                                     // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_ToolTransforms                          ToolTransforms;                                            // 0x0320(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ToolTransforms                          FlippedToolTransforms;                                     // 0x04D0(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDestroyed;                                               // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5CE2[0x7];                                     // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  SC_WeaponLoad;                                             // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HadAnotherTool;                                            // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ScaleOnSpawn;                                              // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterHoldableItem.BP_MasterHoldableItem_C");
		return ptr;
	}



	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FluidType);
	void OnLoopStart(bool* CanStart);
	void CheckForTorchEquipableItems();
	void ChangeInputStage(int InputStage);
	void HitBoneDetection(const struct FName& HitBoneName, float* DamagePercent);
	void OnEndInteraction();
	void OnStartInteraction();
	void On_Tool_Interact_with_Foliage(int FoliageAmount, const struct FVector& Location);
	void GetHoldableFlippedTransform(struct FTransform* HoldableTransform);
	void GetHoldableTransform(struct FTransform* HoldableTransform);
	void DecreaseHoldableItemCapacity();
	void Set_Montage_Settings(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key, const struct FST_MontagesSettings& MontageSettings, TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings>* MontagesSettings);
	void SetStatsFromAbilities(class UBP_CharacterStatsComponent_C** CharacterStatsComponentReference, bool OnlyAnimSpeed);
	void GetMontageSettings(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key, struct FST_MontagesSettings* MontageSettings);
	void DecreaseHoldableItemHP(float Value, bool Offhand);
	void UserConstructionScript();
	void LeftMouseInput(bool KeyDown);
	void RightMouseInput(bool KeyDown);
	void ResetHoldable();
	void FlipRotation(bool UnFlip);
	void OnLoopFinish();
	void PerformInteraction();
	void MontageComplete(class UAnimMontage* Montage);
	void MontageInterrupted(class UAnimMontage* Montage);
	void MontageBlendOut(class UAnimMontage* Montage);
	void HitMontageComplete(class UAnimMontage* Montage);
	void HitMontageInterrupted(class UAnimMontage* Montage);
	void HitMontageBlendOut(class UAnimMontage* Montage);
	void SetTickEnabled(bool bEnabled);
	void ReceiveBeginPlay();
	void CheckForInteraction();
	void StartTimer();
	void SpawnItem();
	void DespawnItem();
	void HoldableNotify(const struct FName& NotifyName);
	void ExecuteUbergraph_BP_MasterHoldableItem(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
