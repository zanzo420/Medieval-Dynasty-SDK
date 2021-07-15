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

// AnimBlueprintGeneratedClass Chick_AnimBP.Chick_AnimBP_C
// 0x1A7E (FullSize[0x1D36] - InheritedSize[0x02B8])
class UChick_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_K3UI[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x02F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x03B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x03E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x0408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x0430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x0458(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x0480(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x04A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x04D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x04F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x0520(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x0548(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x0570(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0598(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x05C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x05E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0610(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x0690(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x06C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x06E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0710(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0738(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x07B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x07E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0830(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x08B0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x08E0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x09C8(0x0030)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x09F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0A70(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0AA0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0B50(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0B70(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0B90(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0CE8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0D10(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0D30(0x0028)
	unsigned char                                      UnknownData_TAVZ[0x8];                                     // 0x0D58(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_DragonFeetSolver                  AnimGraphNode_DragonFeetSolver;                            // 0x0D60(0x0710)
	struct FAnimNode_DragonSpineSolver                 AnimGraphNode_DragonSpineSolver;                           // 0x1470(0x0860)
	bool                                               IsMoving;                                                  // 0x1CD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1K0W[0x3];                                     // 0x1CD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x1CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedSide;                                                 // 0x1CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QEAF[0x4];                                     // 0x1CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_HusbandryAI_C*                           ChickenRef;                                                // 0x1CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableIK;                                                 // 0x1CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R2MN[0x3];                                     // 0x1CE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x1CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x1CF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x1D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KT5E[0x3];                                     // 0x1D11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x1D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x1D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Velocity;                                                  // 0x1D1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RightVector;                                               // 0x1D28(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         PrevMovementMode;                                          // 0x1D34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // 0x1D35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Chick_AnimBP.Chick_AnimBP_C");
		return ptr;
	}



	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);
	void GetAnimalHeight(float* Height);
	void GetAnimalWorldLocation(struct FVector* Location);
	void GetAnimal(class ABP_AnimalBase_C** AnimalBase);
	void GetFear(int* FearFactor);
	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);
	void CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void GetInventoryComponent(class UInventoryComponent_C** InventoryComponent);
	void GetForSale(bool* ForSale);
	void GetPrice_Buy(int* Price);
	void GetPrice_Sell(int* Price);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetVariablesFromPawn();
	void UpdateIKState();
	void SetEngageTargetBPI(class AActor* Causer);
	void SetFear(int Fear);
	void OnWakeUp();
	void AddItemToHouse();
	void UnpauseBrain();
	void SetIsInWater(bool InWater, float Intensity);
	void PauseBrain();
	void UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData);
	void CheckDistance(const struct FVector& PlayerLocation);
	void SetForSale(bool ForSale);
	void Remove();
	void CauseBleeding(float BleedDamage, float BleedDuration);
	void OnSleep();
	void Starving(float HungerDamage);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_36CC17D04F9DA85408D500AC5DD1BD20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_639772E940BB0053174512A0DD8EC7BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_0CA1C7794D1E04E530F4E1AF5AC67669();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_464698D44D1413F99FAE1FABDD9C1CEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_3D2B4FEA4BEFF684162361BFCCDD88E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_1F5B963A4338FD78F6CD578AE244C5FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_14426250427DFDD8DCBD4C928ECF2319();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_FEFEF2614A3E8D20FEE25288A7DB544F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_730FFA5B47D6F97301FE0F9CECC8FC2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_7E86924943FAA6D81EF77E90709568CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_29D3F51D47154D4F67EE53BBE491BEA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_A37603FA4CCC5EEBC1E35B887A61B374();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_B2E6F3624AB997785DD07C8E99B4296F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_F8BBD4B04E91D6B2D75D06B10692D005();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chick_AnimBP_AnimGraphNode_TransitionResult_8139127542D93C0FA4A012AE731BE052();
	void SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_Land();
	void ExecuteUbergraph_Chick_AnimBP(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
