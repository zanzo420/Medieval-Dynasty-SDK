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

// BlueprintGeneratedClass BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C
// 0x0020 (FullSize[0x0508] - InheritedSize[0x04E8])
class ABP_FurnitureWorkbench_SpinningWheel_C : public ABP_MasterFurniture_Workbench_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                               Box;                                                       // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SpinningWheelMaterial;                                     // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureWorkbench_SpinningWheel.BP_FurnitureWorkbench_SpinningWheel_C");
		return ptr;
	}



	void GetNPCInteractTime(float* Time);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void DisableGhost();
	void ReceiveBeginPlay();
	void PlayWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character);
	void StopWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void FinishFurniture(bool Load);
	void SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption);
	void ExecuteUbergraph_BP_FurnitureWorkbench_SpinningWheel(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
