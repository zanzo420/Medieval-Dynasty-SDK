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

// AnimBlueprintGeneratedClass Wisent_AnimBp.Wisent_AnimBp_C
// 0x150C (FullSize[0x17C4] - InheritedSize[0x02B8])
class UWisent_AnimBp_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_7A4N[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02F8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0340(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0360(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0380(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x03A8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x03D0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x04B8(0x0030)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x04E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0560(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0590(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0640(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0798(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x07C0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x07E0(0x0028)
	unsigned char                                      UnknownData_PDBW[0x8];                                     // 0x0808(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_DragonFeetSolver                  AnimGraphNode_DragonFeetSolver;                            // 0x0810(0x0710)
	struct FAnimNode_DragonSpineSolver                 AnimGraphNode_DragonSpineSolver;                           // 0x0F20(0x0860)
	class ABP_Wisent_Male_C*                           Wisent;                                                    // 0x1780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedSide;                                                 // 0x1788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x178C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMoving;                                                  // 0x1790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableIK;                                                 // 0x1791(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IE4A[0x2];                                     // 0x1792(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x1794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x1798(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x17B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IPT7[0x3];                                     // 0x17B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x17BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x17C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Wisent_AnimBp.Wisent_AnimBp_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateIKState();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_Wisent_AnimBp(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
