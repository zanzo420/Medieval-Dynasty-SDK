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

// UserDefinedStruct ST_NPCsGenMeshSettings.ST_NPCsGenMeshSettings
// 0x00E0
struct FST_NPCsGenMeshSettings
{
	TArray<TEnumAsByte<E_Profession_E_Profession>>     Profession_20_54AF922F419AC9E94C37AEBDB8ABFB12;            // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<E_Seasons_E_Seasons>>           Seasons_22_8D5E40CA41C40FA12E871AB7D5FDBE75;               // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FST_NPCItemColors                           Mesh_24_2D514BD64965ABC3E50C93A5CAA49A4E;                  // 0x0020(0x00C0) (Edit, BlueprintVisible, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
