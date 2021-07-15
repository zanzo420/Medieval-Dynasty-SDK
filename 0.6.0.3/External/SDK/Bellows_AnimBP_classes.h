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

// AnimBlueprintGeneratedClass Bellows_AnimBP.Bellows_AnimBp_C
// 0x0088 (FullSize[0x0340] - InheritedSize[0x02B8])
class UBellows_AnimBp_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_TEJ4[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02F8(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bellows_AnimBP.Bellows_AnimBp_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_ForgeFire();
	void ExecuteUbergraph_Bellows_AnimBp(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
