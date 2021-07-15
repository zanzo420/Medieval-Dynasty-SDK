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

// BlueprintGeneratedClass BP_StageInteractionComponent.BP_StageInteractionComponent_C
// 0x00B0 (FullSize[0x0160] - InheritedSize[0x00B0])
class UBP_StageInteractionComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay;                                            // 0x00B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                MontageToPlay;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InteractedActor;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FinishedBeginningStage;                                    // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FinishedLoopStage;                                         // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FinishedEndingStage;                                       // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LoopInteracton;                                            // 0x0123(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseCameraFade;                                             // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P6PX[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopStageSpeedMultiplier;                                  // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q0AP[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLoopStageFinished;                                       // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsPerformingStageInteraction;                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AutomaticPlay;                                             // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MPYN[0x2];                                     // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfAutomaticLoops;                                    // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfLoops;                                             // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SwapItemsOnInteraction;                                    // 0x014C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZF04[0x3];                                     // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    AllLoopsFinished;                                          // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StageInteractionComponent.BP_StageInteractionComponent_C");
		return ptr;
	}



	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FluidType);
	void OnLoopStart(bool* CanStart);
	void GetSwapItemsOnInteraction(bool* SwapItemsOnInteraction);
	void SetSwapItemsOnInteraction(bool SwapItemsOnInteraction);
	void GetFinishedBeginningStage(bool* FinishedBeginningStage);
	void SetNumberOfAutomaticLoops(int NumberOfAutomaticLoops);
	void GetNumberOfAutomaticLoops(int* NumberOfAutomaticLoops);
	void SetAutomaticPlay(bool AutomaticPlay);
	void GetAutomaticPlay(bool* AutomaticPlay);
	void Get_Is_Performing_Stage_Interaction(bool* IsPerformingStageInteraction);
	void GetLoopStageSpeedMultiplier(float* LoopStageSpeedMultiplier);
	void SetLoopStageSpeedMultiplier(float LoopStageSpeedMultiplier);
	void GetOwningCharacter(class ABP_BaseCharacter_C** AsBaseCharacter);
	void SetFinishedEndingStage(bool FinishedEndingStage);
	void SetFinishedLoopStage(bool FinishedLoopStage);
	void SetFinishedBeginningStage(bool FinishedBeginningStage);
	class UAnimInstance* GetOwningCharacterAnimInstance();
	void GetInteractedActor(class AActor** InteractedActor);
	void GetMontageParameters(float* PlayRate, float* StartingPosition);
	void GetTargetMontage(class UAnimMontage** MontageToPlay);
	void GetSectionsName(TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName>* SectionsToPlay);
	void SetInteractedActor(class AActor* InteractedActor);
	void SetMontageParameters(float PlayRate, float StartingPosition);
	void SetTargetMontage(class UAnimMontage* MontageToPlay);
	void SetSectionsName(TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay);
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
	void StartStageInteraction();
	void EndStageInteraction();
	void LoopStageInteraction();
	void InitializeStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int NumberOfAutomaticLoops, bool SwapItemsOnInteraction);
	void ResetParameters();
	void ResetBeginningDoOnce();
	void ResetEndingDoOnce();
	void ResetLoopDoOnce();
	void LeftMouseInput(bool KeyDown);
	void ExecuteUbergraph_BP_StageInteractionComponent(int EntryPoint);
	void AllLoopsFinished__DelegateSignature();
	void OnLoopStageFinished__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
