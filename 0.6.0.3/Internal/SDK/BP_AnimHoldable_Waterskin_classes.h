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

// BlueprintGeneratedClass BP_AnimHoldable_Waterskin.BP_AnimHoldable_Waterskin_C
// 0x0008 (FullSize[0x06D0] - InheritedSize[0x06C8])
class ABP_AnimHoldable_Waterskin_C : public ABP_MasterAnimHoldable_Skeletal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimHoldable_Waterskin.BP_AnimHoldable_Waterskin_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AnimHoldable_Waterskin(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
