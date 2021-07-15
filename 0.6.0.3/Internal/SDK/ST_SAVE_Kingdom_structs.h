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

// UserDefinedStruct ST_SAVE_Kingdom.ST_SAVE_Kingdom
// 0x009C
struct FST_SAVE_Kingdom
{
	struct FST_KingDetails                             King_24_64FBDB8049744DD775B71493C00E737A;                  // 0x0000(0x0060) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FST_KingDetails>                     HistoryOfKings_25_0E6484114E84032B045392807CBF97D3;        // 0x0060(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_ChallengeState_E_ChallengeState>     ChallengeProgress_9_FDF8F3BD40F22045E5B6FC8F7F256F65;      // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S9W1[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChallengeHappenChance_12_EF7056DB4BD9D997E78843BC3620BB1C; // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               LastChallenges_19_2A078BB047F7626BBB3AB792BEEBA2D2;        // 0x0078(0x0010) (Edit, BlueprintVisible)
	bool                                               WasReputationChanged_23_3D2317654E3FB6BAA06764A4486FA0AE;  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_KingdomStatus_E_KingdomStatus>       KingdomStatus_28_804E59544AC09A7BCFC167935F2C8C00;         // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LLY9[0x2];                                     // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              KingdomStatusChangeChance_31_55E808F84FC4EA650E78AD95ABB88733; // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceToKillKing_33_C2275F6D46B95E58BA89F7846EB6DF5A;      // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TaxMod_38_859A4F3A48A1C3A247C4C6A75A4D112E;                // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoodMod_37_0CA07DC84F5844FC403EA5BA27FBC837;               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
