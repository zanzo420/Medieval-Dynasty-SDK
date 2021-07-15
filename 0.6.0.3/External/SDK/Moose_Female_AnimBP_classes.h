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

// AnimBlueprintGeneratedClass Moose_Female_AnimBP.Moose_Female_AnimBP_C
// 0x1618 (FullSize[0x18D0] - InheritedSize[0x02B8])
class UMoose_Female_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_D6CK[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02F8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0340(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0360(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0380(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x04D8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0500(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0520(0x0028)
	unsigned char                                      UnknownData_DFGM[0x8];                                     // 0x0548(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_DragonSpineSolver                 AnimGraphNode_DragonSpineSolver;                           // 0x0550(0x0860)
	struct FAnimNode_DragonFeetSolver                  AnimGraphNode_DragonFeetSolver;                            // 0x0DB0(0x0710)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x14C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x14E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x1510(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x1538(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1560(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x15E0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x1610(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x16F8(0x0030)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x1728(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x17A0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x17D0(0x00B0)
	bool                                               IsMoving;                                                  // 0x1880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OA81[0x3];                                     // 0x1881(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x1884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedSide;                                                 // 0x1888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Dead;                                                      // 0x188C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableIK;                                                 // 0x188D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QT8F[0x2];                                     // 0x188E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x1890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NC9N[0x4];                                     // 0x1894(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x1898(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x18B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9UN0[0x3];                                     // 0x18B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x18BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x18C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MTX0[0x4];                                     // 0x18C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_PreyAI_C*                                Moose;                                                     // 0x18C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Moose_Female_AnimBP.Moose_Female_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateIKState();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_Moose_Female_AnimBP(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
