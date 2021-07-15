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

// UserDefinedStruct ST_Spawner_ItemContainer.ST_Spawner_ItemContainer
// 0x0048
struct FST_Spawner_ItemContainer
{
	struct FTransform                                  SpawnPoint_3_3BD2BAC14EFB32D0D121F0A877BA51E1;             // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Items_7_4CF5D8BA4A23126225C7B786F24C0B7F;                  // 0x0030(0x0010) (Edit, BlueprintVisible)
	class UClass*                                      ContainerType_12_A18A2CC64B4692A2DFECA385DBE00714;         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
