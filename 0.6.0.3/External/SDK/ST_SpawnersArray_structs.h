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

// UserDefinedStruct ST_SpawnersArray.ST_SpawnersArray
// 0x0010
struct FST_SpawnersArray
{
	TArray<class ABP_POI_Spawner_C*>                   Spawners_5_7F1EC32249CF2697689DACB68572F5EB;               // 0x0000(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
