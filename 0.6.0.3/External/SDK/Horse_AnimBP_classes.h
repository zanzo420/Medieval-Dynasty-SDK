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

// AnimBlueprintGeneratedClass Horse_AnimBP.Horse_AnimBP_C
// 0x25CC (FullSize[0x2884] - InheritedSize[0x02B8])
class UHorse_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_IXI9[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x02C8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x02E8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0310(0x0020)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2;                                    // 0x0330(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                      // 0x04C0(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x0650(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x07A8(0x00E8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                      // 0x0890(0x0048)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                               // 0x08D8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x0978(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x09A0(0x0158)
	unsigned char                                      UnknownData_MO56[0x8];                                     // 0x0AF8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
	unsigned char                                      UnknownData_U969[0x3];                                     // 0x2761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x2764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsResting;                                                 // 0x2768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSleeping;                                                // 0x2769(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VVO9[0x2];                                     // 0x276A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpeedSide;                                                 // 0x276C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableIK;                                                 // 0x2770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DI40[0x3];                                     // 0x2771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x2774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x2778(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x2798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9BPB[0x3];                                     // 0x2799(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x279C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x27A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y0LT[0x4];                                     // 0x27A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Horse_Male_C*                            Horse;                                                     // 0x27A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMountSpecial;                                            // 0x27B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_MovementMode_E_MovementMode>         PrevMovementMode;                                          // 0x27B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // 0x27B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8L25[0x1];                                     // 0x27B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Velocity;                                                  // 0x27B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RightVector;                                               // 0x27C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RJWV[0x4];                                     // 0x27CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                JumpMontage;                                               // 0x27D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6H9V[0x8];                                     // 0x27D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ReinsIKLeft;                                               // 0x27E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StirrsIKRight;                                             // 0x2810(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StirrsIKLeft;                                              // 0x2840(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasDriver;                                                 // 0x2870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GQGI[0x7];                                     // 0x2871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 HorseSpeedCurve;                                           // 0x2878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementPlayRate;                                          // 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Horse_AnimBP.Horse_AnimBP_C");
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
	void WalkPressed(const struct FKey& Key);
	void WalkReleased(const struct FKey& Key);
	void SetShouldSprint(bool ShouldSprint);
	void LookAtOnMount(const struct FRotator& Rotation);
	void Left_Axis(float Axis_Value);
	void Backwards_Axis(float Axis_Value);
	void DismountReleased(const struct FKey& Key);
	void UpdateMountCameraFoV(float FieldOfView);
	void DismountPressed(const struct FKey& Key);
	void SetIsInWater(bool InWater, float Intensity);
	void Down_Axis(float Axis_Value);
	void UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData);
	void Right_Axis(float Axis_Value);
	void SetForSale(bool ForSale);
	void SprintReleased(const struct FKey& Key);
	void CauseBleeding(float BleedDamage, float BleedDuration);
	void SprintPressed(const struct FKey& Key);
	void OnSleep();
	void Starving(float HungerDamage);
	void OnWakeUp();
	void SetEngageTargetBPI(class AActor* Causer);
	void SetFear(int Fear);
	void AddItemToHouse();
	void UnpauseBrain();
	void PauseBrain();
	void CheckDistance(const struct FVector& PlayerLocation);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_A8DB794B41593F27EF8D97911605ED39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_E4A098B9444699CBB695739D0F09F994();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_601262234323DF25CC4EC8A1BE7845E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_7AC284024B23490DC06359B56BA804A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_55898F674C2570128A8675B05C4F1396();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_72BFF5414B1EFE366DFBB4B8585D615C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_75A3B3194728299D82789782473B7809();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_22CBD7EE49299B0E580FFFA59CC0C09E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_706A7CDA4BA32D2D83B9A6A29DB6E7EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_165765D64BEFBBE544D541A57138C7DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_9A1E85C94879E335D01CE38BE43EBA89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_C6818B68450F4105641286ADDB824AFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_507D7BED46C4A961BD7BDAA9198488A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8270577C453D644E59808D8D576D9B59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_AEE891E64626A70BF37EBDB782F9D295();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_1CBDBD8B45921714F8B2E1B9EBD49235();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_609D44CB4DA548A84DF5B5A755931D7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_AnimBP_AnimGraphNode_TransitionResult_8BC502A044529729A89A06BB3B56DDF7();
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
	void ExecuteUbergraph_Horse_AnimBP(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
