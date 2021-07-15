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

// UserDefinedStruct ST_EventHistory_Main.ST_EventHistory_Main
// 0x0038
struct FST_EventHistory_Main
{
	struct FDataTableRowHandle                         EventRowHandle_11_D1343F384E06EB890C664B863121A032;        // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FST_Time                                    TimeOfEvent_5_80BD7FBB48E8CABACE27D6B02FD0F1A9;            // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_EventHistory_Consequences>       Consequences_15_FD83D7EF40EC79DDBB46B9B2773B5462;          // 0x0028(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
