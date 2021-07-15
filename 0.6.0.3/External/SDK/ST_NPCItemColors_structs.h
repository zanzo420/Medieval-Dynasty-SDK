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

// UserDefinedStruct ST_NPCItemColors.ST_NPCItemColors
// 0x00C0
struct FST_NPCItemColors
{
	unsigned char                                      Mesh_41_0CE83F9D4C33E50D9690D883408519DA[0x28];            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FST_ColorTable                              FabricDye_23_D48054FA4200E15772A1A98991C594E1;             // 0x0028(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_ColorTable                              StitchesDye_22_7930B29846ED3F4455F8C2B7D51B44B1;           // 0x0038(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                                LeatherColor_28_4071AD004050CA8D75D6208F314E1E6C;          // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MetalColor_29_4A3917A546EF008145F784B569B44019;            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dirtiness_32_C39464B84212A4A6A5D38EBA34264725;             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ClearSlot_36_6CE0F9FE4BDA5DED3719BB802A70B462;             // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4WN9[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EquipParams_40_F5176DE54F0817A7E0DDEE88569B9B12[0x50];     // 0x006D(0x0050) UNKNOWN PROPERTY: SetProperty

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
