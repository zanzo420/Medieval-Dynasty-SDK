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

// BlueprintGeneratedClass BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C
// 0x00A0 (FullSize[0x04E8] - InheritedSize[0x0448])
class ABP_MasterFurniture_Workbench_C : public ABP_MasterFurniture_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                             InteractPoint;                                             // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LFVE[0x7];                                     // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 WorkbenchCategories;                                       // 0x0460(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_BaseCharacter_C*                         InteractedCharacter;                                       // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APC_Player_C*                                PC_Player;                                                 // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      MontageSkeletalMesh;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                PlayerMontage;                                             // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                NPCMontage;                                                // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeCamera;                                              // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseLocation;                                               // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseLookAt;                                                 // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_94SJ[0x1];                                     // 0x049B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    LookAtRotation;                                            // 0x049C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ResetPitchForInteraction;                                  // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X087[0x7];                                     // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InteractedCharacterName;                                   // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ShouldStopCrafting;                                        // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInteracted;                                              // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DAP6[0x2];                                     // 0x04C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     EndInteractLocation;                                       // 0x04C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CloseCraftingLocation;                                     // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WaitInteractLocation;                                      // 0x04DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C");
		return ptr;
	}



	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void OnNotifyEnd_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName);
	void OnNotifyBegin_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName);
	void OnInterrupted_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName);
	void OnBlendOut_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName);
	void OnCompleted_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName);
	void OnNotifyEnd_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName);
	void OnNotifyBegin_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName);
	void OnInterrupted_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName);
	void OnBlendOut_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName);
	void OnCompleted_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName);
	void OnNotifyEnd_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName);
	void OnNotifyBegin_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName);
	void OnInterrupted_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName);
	void OnBlendOut_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName);
	void OnCompleted_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName);
	void OnNotifyEnd_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName);
	void OnNotifyBegin_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName);
	void OnInterrupted_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName);
	void OnBlendOut_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName);
	void OnCompleted_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void CraftingStarted();
	void CraftingEnded();
	void PlayWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character);
	void StopWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character);
	void CraftingStopping();
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void WaitWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character);
	void StopFurnitureAnim(class ABP_BaseCharacter_C* Base_Character_Ref);
	void WaitCrafting();
	void BlendOutCrafting(class USkeletalMeshComponent* SkeletalMesh);
	void CraftingAnimEnd();
	void StartWorkbench();
	void SynchronizeWorkbenchAnim(float StartingPosition);
	void CraftingStarted_NPC();
	void CraftingEnded_NPC();
	void ExecuteUbergraph_BP_MasterFurniture_Workbench(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
