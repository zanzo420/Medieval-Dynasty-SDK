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

// UserDefinedStruct ST_SAVE_NPC_Building.ST_SAVE_NPC_Building
// 0x0020
struct FST_SAVE_NPC_Building
{
	struct FString                                     Building_ID_168_B8A1D96346DB3806BD805295AA367715;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FST_SAVE_Containers>                 Containers_170_E8A95A55473CB02502A1959F9FCF1D1C;           // 0x0010(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
