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

// UserDefinedStruct ST_SAVE_Player.ST_SAVE_Player
// 0x01E4
struct FST_SAVE_Player
{
	struct FVector                                     Pos_59_4C2448BC4B735D194B54FA9D985F6F13;                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rot_55_9212B41444B2E7B08BED74BF6BF580F8;                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	struct FText                                       Name_8_63A4E40E4D8977E5B706FBBF07AC5400;                   // 0x0018(0x0018) (Edit, BlueprintVisible, SaveGame)
	TEnumAsByte<E_Sex_E_Sex>                           Sex_16_CD61F4494D307C5E53005EBAD6444FBA;                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1766[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Age_17_95D4C25B404796B039F50EAB60304D82;                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_SAVE_LifeStats                          Stats_57_CF87A144455D92DB6C482FB22BA8C487;                 // 0x0038(0x0028) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_SAVE_Skills                             Skills_27_BC25071441646825BA0361A6C186A2B6;                // 0x0060(0x0048) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_SAVE_Talents                            Talents_30_2814BD4848DFE75F12589FBA64DBBA56;               // 0x00A8(0x0060) (Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	TArray<struct FST_SAVE_Inventory>                  EQ_58_E8A95A55473CB02502A1959F9FCF1D1C;                    // 0x0108(0x0010) (Edit, BlueprintVisible, SaveGame)
	int                                                LastSelectedQuickslot_76_28FD935C470E028D4CE35E8A846F55BA; // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B18I[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MotherID_45_5DE07FAF47BE56B42F3BC98B7AB68B92;              // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	struct FString                                     FatherID_47_7087EB0247EE117BF1A62FAF40DE9814;              // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	struct FString                                     PartnerID_43_560F89B34FAFBB9E633AEEA1F5BCF3B1;             // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	TArray<struct FString>                             ChildrenID_50_F52D40B648BCA71F5BA60FAF1E1D68A1;            // 0x0150(0x0010) (Edit, BlueprintVisible, SaveGame)
	struct FString                                     HouseID_54_E7D4DA9742156BA4D70F2BB25201678B;               // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	unsigned char                                      BuildMode_64_1581FAFA42672048BEC886BC1B32A739;             // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BagMode_65_7FC9C1984D7FA02AB35CAE9218EABEE5;               // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BV1D[0x6];                                     // 0x0172(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_Tutorials_E_Tutorials>, bool>   Tutorials_70_A1BE23544BE12EEB3AFD57A718AAC139;             // 0x0178(0x0050) (Edit, BlueprintVisible)
	struct FST_Event_CharacterMultipliers              Events_73_9F7AB36746936500628E71B6C03E160D;                // 0x01C8(0x001C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
