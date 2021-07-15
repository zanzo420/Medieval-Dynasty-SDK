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

// AnimBlueprintGeneratedClass Donkey_AnimBP.Donkey_AnimBP_C
// 0x25D0 (FullSize[0x2888] - InheritedSize[0x02B8])
class UDonkey_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_CC2X[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x02C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x02F0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0318(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x0338(0x00E8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0420(0x0020)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2;                                    // 0x0440(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                      // 0x05D0(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x0760(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                      // 0x08B8(0x0048)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                               // 0x0900(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x09A0(0x0158)
	unsigned char                                      UnknownData_2GZI[0x8];                                     // 0x0AF8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_DragonFeetSolver                  AnimGraphNode_DragonFeetSolver;                            // 0x0B00(0x0710)
	struct FAnimNode_DragonSpineSolver                 AnimGraphNode_DragonSpineSolver;                           // 0x1210(0x0860)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1A70(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x1A90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x1AB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x1AE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x1B08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x1B30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x1B58(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x1B80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x1BA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x1BD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x1BF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x1C20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x1C48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x1C70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x1C98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x1CC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x1CE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x1D10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x1D38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x1D60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x1D88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x1DB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x1DD8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x1E00(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x1EE8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x1F18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x1F40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x1F68(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1F90(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x2010(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x2040(0x00E8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x2128(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x2170(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x21A0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x2288(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x22B8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x22E0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x2308(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x23C8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x2410(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x2440(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x24C0(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x2560(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x25A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x2620(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x2650(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x2700(0x0030)
	struct FTransform                                  ReinsIKRight;                                              // 0x2730(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMoving;                                                  // 0x2760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9E3N[0x3];                                     // 0x2761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x2764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsResting;                                                 // 0x2768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSleeping;                                                // 0x2769(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5P2Z[0x2];                                     // 0x276A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpeedSide;                                                 // 0x276C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableIK;                                                 // 0x2770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QHOJ[0x3];                                     // 0x2771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x2774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x2778(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x2798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3F2T[0x3];                                     // 0x2799(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x279C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x27A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FT6O[0x4];                                     // 0x27A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Donkey_Male_C*                           Donkey;                                                    // 0x27A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMountSpecial;                                            // 0x27B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_MovementMode_E_MovementMode>         PrevMovementMode;                                          // 0x27B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // 0x27B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EU8D[0x1];                                     // 0x27B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Velocity;                                                  // 0x27B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RightVector;                                               // 0x27C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OXHU[0x4];                                     // 0x27CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                JumpMontage;                                               // 0x27D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MRB0[0x8];                                     // 0x27D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ReinsIKLeft;                                               // 0x27E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StirrsIKRight;                                             // 0x2810(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StirrsIKLeft;                                              // 0x2840(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasDriver;                                                 // 0x2870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UH2E[0x7];                                     // 0x2871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DonkeySpeedCurve;                                          // 0x2878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementPlayRate;                                          // 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeshScaleX;                                                // 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Donkey_AnimBP.Donkey_AnimBP_C");
		return ptr;
	}



	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);
	void GetAnimalHeight(float* Height);
	void GetAnimalWorldLocation(struct FVector* Location);
	void GetPrice_Sell(int* Price);
	void GetPrice_Buy(int* Price);
	void GetForSale(bool* ForSale);
	void GetAnimal(class ABP_AnimalBase_C** AnimalBase);
	void GetFear(int* FearFactor);
	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);
	void CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void GetInventoryComponent(class UInventoryComponent_C** InventoryComponent);
	void GetMountCameraRotation(struct FRotator* Rotation);
	void GetSprintKeyDown(bool* IsSprintKeyDown);
	void GetShouldSprint(bool* ShouldSprint);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetVariablesFromPawn();
	void UpdateIKState();
	void DismountPressed(const struct FKey& Key);
	void DismountReleased(const struct FKey& Key);
	void WalkPressed(const struct FKey& Key);
	void WalkReleased(const struct FKey& Key);
	void SetShouldSprint(bool ShouldSprint);
	void LookAtOnMount(const struct FRotator& Rotation);
	void Left_Axis(float Axis_Value);
	void Backwards_Axis(float Axis_Value);
	void Down_Axis(float Axis_Value);
	void UpdateMountCameraFoV(float FieldOfView);
	void Right_Axis(float Axis_Value);
	void SetIsInWater(bool InWater, float Intensity);
	void SprintReleased(const struct FKey& Key);
	void UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData);
	void SprintPressed(const struct FKey& Key);
	void SetForSale(bool ForSale);
	void CauseBleeding(float BleedDamage, float BleedDuration);
	void OnSleep();
	void Starving(float HungerDamage);
	void OnWakeUp();
	void SetEngageTargetBPI(class AActor* Causer);
	void SetFear(int Fear);
	void AddItemToHouse();
	void UnpauseBrain();
	void PauseBrain();
	void CheckDistance(const struct FVector& PlayerLocation);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F38A5E9B4D01D39B42413E9C2D169BC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_AC07F75D4F04A33E4B57618DD2E3CCF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_DE8A259341F82F2FCAEE9F89F41E0232();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_E1DAF7F74E23865EFC414A976E51C053();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1BD8204B4BF4A899E2E369BCB87AB9B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_8B44F79242835E23FA8A0C96EF18B58C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_79F67D0F457A483C4B5039B85C1FCCA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_FD98DED146BCD49BE01E4694D6574960();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_F363ED58481D41BE666AC582C553B615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_ED040B3244A8D17EDA056FB8C78C3777();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_542F020342A797703780D085299BB234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_7ACF85974C63D468BA0B0FAFDE1994B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EB6AF1FE4AF1607EBF1F03A1DA4E1B2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_0CCD45AA48637E72D8064DB0AAB650F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_C3D1752546EDB410B7089B961B902293();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_1D5E00D24CF7848E2CCE0991721A38D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_EFCB7BBD4012213B758CBD9D0E294419();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_AnimBP_AnimGraphNode_TransitionResult_782D43F6483652CF9DCC738EEEB556D5();
	void AnimNotify_Jump();
	void AnimNotify_Land();
	void MountSpecial();
	void AnimNotify_StopMountSpecial();
	void SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode);
	void MountStop();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void JumpReleased(const struct FKey& Key);
	void JumpPressed(const struct FKey& Key);
	void Remove();
	void ExecuteUbergraph_Donkey_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
