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

// BlueprintGeneratedClass BP_SpawnedFoliage_Pine_d.BP_SpawnedFoliage_Pine_d_C
// 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
class ABP_SpawnedFoliage_Pine_d_C : public ABP_MasterSpawnedFoliage_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnedFoliage_Pine_d.BP_SpawnedFoliage_Pine_d_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
