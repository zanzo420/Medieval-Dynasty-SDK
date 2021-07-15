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

// UserDefinedStruct ST_ItemDetails.ST_ItemDetails
// 0x02C0
struct FST_ItemDetails
{
	struct FST_ItemSettings                            Settings_185_CD91A9114DB26032FE6155BF452EB4BB;             // 0x0000(0x0110) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemStats                               Stats_182_EB549DF94F2DAB5D31662AAF83E56848;                // 0x0110(0x0034) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YLY7[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_ItemTool                                ToolSettings_191_6690B1EB4DDF75B8051B4D9334B1C310;         // 0x0148(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemOutfit                              OutfitSettings_192_4326F1D14EF8A7E23DF7EE8D1A46D22E;       // 0x0178(0x00F0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemAmmo                                AmmoSettings_196_E19624AA4A9806EF874D439DA5E113D7;         // 0x0268(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ItemPhysics                             Physics_169_68A85A054AF7B159998F9892DED53F43;              // 0x0298(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_VendorSettings>                  VendorSettings_200_99BB8204490554654DBCB8A0CD80504C;       // 0x02B0(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
