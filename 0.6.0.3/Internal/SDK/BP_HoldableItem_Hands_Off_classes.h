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

// BlueprintGeneratedClass BP_HoldableItem_Hands_Off.BP_HoldableItem_Hands_Off_C
// 0x000C (FullSize[0x0828] - InheritedSize[0x081C])
class ABP_HoldableItem_Hands_Off_C : public ABP_HoldableItem_Hands_C
{
public:
	unsigned char                                      UnknownData_G3YL[0x4];                                     // 0x081C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoldableItem_Hands_Off.BP_HoldableItem_Hands_Off_C");
		return ptr;
	}



	void PerformNextAttack();
	void ExecuteUbergraph_BP_HoldableItem_Hands_Off(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
