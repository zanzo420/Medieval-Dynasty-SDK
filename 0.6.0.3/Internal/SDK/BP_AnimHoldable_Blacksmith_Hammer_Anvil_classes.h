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

// BlueprintGeneratedClass BP_AnimHoldable_Blacksmith_Hammer_Anvil.BP_AnimHoldable_Blacksmith_Hammer_Anvil_C
// 0x0008 (FullSize[0x06D0] - InheritedSize[0x06C8])
class ABP_AnimHoldable_Blacksmith_Hammer_Anvil_C : public ABP_MasterAnimHoldable_Static_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimHoldable_Blacksmith_Hammer_Anvil.BP_AnimHoldable_Blacksmith_Hammer_Anvil_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AnimHoldable_Blacksmith_Hammer_Anvil(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
