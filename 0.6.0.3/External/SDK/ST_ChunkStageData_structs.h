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

// UserDefinedStruct ST_ChunkStageData.ST_ChunkStageData
// 0x0040
struct FST_ChunkStageData
{
	unsigned char                                      Mesh_11_1272B785454222CB9E028A89F5B49E82[0x28];            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                NumberOfSeasons_5_E8343E794529E7D3D65D9083F9005139;        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RBOP[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemSource>                      Items_10_64775713495E7483BFFE76B0B030470B;                 // 0x0030(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
