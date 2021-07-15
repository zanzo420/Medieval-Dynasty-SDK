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

// UserDefinedStruct ST_Goal_WaitForTimes_Generators.ST_Goal_WaitForTimes_Generators
// 0x0024
struct FST_Goal_WaitForTimes_Generators
{
	struct FText                                       GoalText_14_C5B194624B30C4655BA18C9571455289;              // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               WaitTillNextMorning__28_6D13834743A661B713CCD6A3A780C1F0;  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WaitTillNextNoon__29_52EC83D14C079F9C404A84907D695136;     // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WaitTillNextEvening__30_62D850514785343BC2D525B6614A2C3E;  // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WaitTillNextDay__21_662877814611B3DDD90FE0B16CA97E26;      // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WaitTillNextSeason__22_3C691AA54590888FA526CAA5C3E4EEFD;   // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WaitTillNextSpecificSeason__23_E8576D494B87ADADAF98898170AC9DAC; // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Seasons_E_Seasons>                   SpecificSeason_11_6713C48A4C279B53AEBE788475E89D30;        // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WaitTillSpecificYear__34_7FEFC01142A26918615AFAA1B042D020; // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SpecificYear_37_043FADB143F96FA7E4C3F68E2F90E44E;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
