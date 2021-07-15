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

// BlueprintGeneratedClass BP_HoldableItem_Hands_Main.BP_HoldableItem_Hands_Main_C
// 0x0000 (FullSize[0x081C] - InheritedSize[0x081C])
class ABP_HoldableItem_Hands_Main_C : public ABP_HoldableItem_Hands_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoldableItem_Hands_Main.BP_HoldableItem_Hands_Main_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
