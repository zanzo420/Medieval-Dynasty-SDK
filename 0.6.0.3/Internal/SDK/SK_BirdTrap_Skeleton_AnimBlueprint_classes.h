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

// AnimBlueprintGeneratedClass SK_BirdTrap_Skeleton_AnimBlueprint.SK_BirdTrap_Skeleton_AnimBlueprint_C
// 0x0229 (FullSize[0x04E1] - InheritedSize[0x02B8])
class USK_BirdTrap_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_DAEU[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02F8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0340(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x03E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0460(0x0080)
	bool                                               IsSet;                                                     // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_BirdTrap_Skeleton_AnimBlueprint.SK_BirdTrap_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_BirdTrap_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
