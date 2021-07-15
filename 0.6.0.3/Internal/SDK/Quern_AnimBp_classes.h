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

// AnimBlueprintGeneratedClass Quern_AnimBp.Quern_AnimBp_C
// 0x0088 (FullSize[0x0340] - InheritedSize[0x02B8])
class UQuern_AnimBp_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_9H5J[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02F8(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Quern_AnimBp.Quern_AnimBp_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Quern_AnimBp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
