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

// AnimBlueprintGeneratedClass Sheep_AnimBP.Sheep_AnimBP_C
// 0x1A7C (FullSize[0x1D34] - InheritedSize[0x02B8])
class USheep_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_TGMT[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x03B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x03E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0458(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0480(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x04A8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x04D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x0550(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x0580(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x0600(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0630(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x06B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x06E0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x0760(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0790(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x0810(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0840(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x08C0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x08F0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x09D8(0x0030)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x0A08(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0A80(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0AB0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0B60(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0B80(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0BA0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0CF8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0D20(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0D40(0x0028)
	unsigned char                                      UnknownData_D70J[0x8];                                     // 0x0D68(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_DragonFeetSolver                  AnimGraphNode_DragonFeetSolver;                            // 0x0D70(0x0710)
	struct FAnimNode_DragonSpineSolver                 AnimGraphNode_DragonSpineSolver;                           // 0x1480(0x0860)
	bool                                               IsMoving;                                                  // 0x1CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2A75[0x3];                                     // 0x1CE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x1CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsResting;                                                 // 0x1CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSleeping;                                                // 0x1CE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TWS5[0x6];                                     // 0x1CEA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_HusbandryAI_C*                           Sheep;                                                     // 0x1CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedSide;                                                 // 0x1CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableIK;                                                 // 0x1CFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EI8J[0x3];                                     // 0x1CFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x1D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FXPZ[0x4];                                     // 0x1D04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x1D08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x1D28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MHOJ[0x3];                                     // 0x1D29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x1D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x1D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sheep_AnimBP.Sheep_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateIKState();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheep_AnimBP_AnimGraphNode_TransitionResult_6F1CD1CF422F854602E11CA4A385F675();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheep_AnimBP_AnimGraphNode_TransitionResult_10E452FA4C4562760EFF9B9F16AFDA98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheep_AnimBP_AnimGraphNode_TransitionResult_87DCF35C4F74A8BE6539FC924A70CD87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheep_AnimBP_AnimGraphNode_TransitionResult_E354CC52458B636CCA83CAA45E5FC6D3();
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Sheep_AnimBP(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
