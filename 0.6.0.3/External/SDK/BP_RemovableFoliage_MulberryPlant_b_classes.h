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

// BlueprintGeneratedClass BP_RemovableFoliage_MulberryPlant_b.BP_RemovableFoliage_MulberryPlant_b_C
// 0x0000 (FullSize[0x0891] - InheritedSize[0x0891])
class UBP_RemovableFoliage_MulberryPlant_b_C : public UBP_RemovableFoliage_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemovableFoliage_MulberryPlant_b.BP_RemovableFoliage_MulberryPlant_b_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
