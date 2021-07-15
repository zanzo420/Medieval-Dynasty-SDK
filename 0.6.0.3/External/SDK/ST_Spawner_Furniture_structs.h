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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_Spawner_Furniture.ST_Spawner_Furniture
// 0x0039
struct FST_Spawner_Furniture
{
	struct FTransform                                  SpawnPoint_2_C8B4A20443C3CDFF1659BBA3E4E82AC6;             // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class UClass*                                      Furniture_6_38EB51A04B0595524F9162A86C7DABF9;              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership_9_363E15804505424058A991B9F54D3298;              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
