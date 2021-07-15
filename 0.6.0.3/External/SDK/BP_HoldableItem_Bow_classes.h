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

// BlueprintGeneratedClass BP_HoldableItem_Bow.BP_HoldableItem_Bow_C
// 0x00C8 (FullSize[0x0798] - InheritedSize[0x06D0])
class ABP_HoldableItem_Bow_C : public ABP_MasterRangeHoldableItem_Skeletal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        ArrowPivot;                                                // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAudioComponent*                             SC_Draw;                                                   // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Arrow;                                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BowStretch_Alpha_56CBF49D41F591109E6AC1B32B363B67;         // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BowStretch__Direction_56CBF49D41F591109E6AC1B32B363B67;    // 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MJ6Z[0x3];                                     // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BowStretch;                                                // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               IsArrow;                                                   // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GK69[0x7];                                     // 0x0701(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       WarningText;                                               // 0x0708(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_ItemAmmo                                CurrentArrow;                                              // 0x0720(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               isReloading;                                               // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UZSX[0x7];                                     // 0x0751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                StaminaTimerHandle;                                        // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    InitialArrowPivotRot;                                      // 0x0760(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    FinalArrowPivotRot;                                        // 0x076C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TimelineStretch;                                           // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AimOffsetComponent_C*                    AimOffsetCompRef;                                          // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StretchSpeedBowTypeModifier;                               // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HitMontage;                                                // 0x078C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N5UE[0x3];                                     // 0x078D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  SC_Shoot;                                                  // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoldableItem_Bow.BP_HoldableItem_Bow_C");
		return ptr;
	}



	class UAnimInstance* GetAnimInstance();
	void Set_Bow_Stretch(float Stretch);
	void Shooting(const struct FVector& Start, const struct FVector& End);
	void InteractionRange(float Range, struct FVector* Start, struct FVector* End);
	void BowStretch__FinishedFunc();
	void BowStretch__UpdateFunc();
	void RightMouseInput(bool KeyDown);
	void LeftMouseInput(bool KeyDown);
	void Reload(bool PlayAnimation);
	void StartAiming();
	void StopAiming();
	void Stamina_Update();
	void Shoot();
	void UpdateStance();
	void HitMontageComplete(class UAnimMontage* Montage);
	void OnLoopFinish();
	void StartBowStretch();
	void ReverseBowStretch(float NewRate);
	void MontageBlendOut(class UAnimMontage* Montage);
	void HitMontageBlendOut(class UAnimMontage* Montage);
	void MontageInterrupted(class UAnimMontage* Montage);
	void HitMontageInterrupted(class UAnimMontage* Montage);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void LeftInputAction();
	void ExecuteUbergraph_BP_HoldableItem_Bow(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
