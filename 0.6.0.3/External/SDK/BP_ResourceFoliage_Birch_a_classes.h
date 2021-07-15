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

// BlueprintGeneratedClass BP_ResourceFoliage_Birch_a.BP_ResourceFoliage_Birch_a_C
// 0x0000 (FullSize[0x0891] - InheritedSize[0x0891])
class UBP_ResourceFoliage_Birch_a_C : public UBP_MasterFoliage_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ResourceFoliage_Birch_a.BP_ResourceFoliage_Birch_a_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
