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

// UserDefinedStruct ST_SeasonEvent.ST_SeasonEvent
// 0x0060
struct FST_SeasonEvent
{
	struct FText                                       Name_4_EA7DF8214AC3A4CE90F647BDFEDD58B4;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_5_2C16EA0E4DA06E137EC074B117DDAFA3;            // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon_9_29BD7BC143913E397216ADACC3B15161;                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GoodEvent_42_2E0F323341646C74A8D14EB728A88763;             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_EventDifficulty_E_EventDifficulty>   Difficulty_51_F96F8BAE40766BA8503485A112A4F6B5;            // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LRIK[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Weight_48_1F82B6894DEDA1398E1B4282F5AB2040;                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_EventRestrictions>               Restrictions_36_32144C894D0545E7F01B52A81E452683;          // 0x0040(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FST_EventButtons>                    EventButtons_40_E4EF579B43F4DFDB4C58F296EF6280B0;          // 0x0050(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
