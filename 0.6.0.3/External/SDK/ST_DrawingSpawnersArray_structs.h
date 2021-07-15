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

// UserDefinedStruct ST_DrawingSpawnersArray.ST_DrawingSpawnersArray
// 0x0010
struct FST_DrawingSpawnersArray
{
	TArray<struct FST_DrawingSpawners>                 Restrictions_3_DBDBBE33429EAA071E97909270A7A9C0;           // 0x0000(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
