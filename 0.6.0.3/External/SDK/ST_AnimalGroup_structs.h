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

// UserDefinedStruct ST_AnimalGroup.ST_AnimalGroup
// 0x0060
struct FST_AnimalGroup
{
	struct FDataTableRowHandle                         Animal1_66_72FE202B4AE4DF8E2CDAC095B4F226FF;               // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                MinAnimal1Count_71_7125F67A472163BAD9AFBC8820677668;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxAnimal1Count_72_4B330D11447CD561FA7DBC8C0D4D11DF;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Animal2_67_EEACC4D748441B1EDEAE08B5FE5CB298;               // 0x0018(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                MinAnimal2Count_73_8C10AB8F42B37019216527A224AB4D95;       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxAnimal2Count_74_92DDCA1F4DE5F0AD1085AE87368CD9C0;       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Animal3_68_948BF6224423D9447ECFA68B8040671C;               // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                MinAnimal3Count_75_B0DA3D5C41F4E406E357A285B6ABED49;       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxAnimal3Count_76_9DAEE92C407A9D5416EB22A2D07472B1;       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Animal4_69_78A9C86D40768C89837E2BBA3F396EBB;               // 0x0048(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                MinAnimal4Count_77_6012DD7E49064384DA9C2F8C50EDE3A8;       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxAnimal4Count_78_43C788474240D97747D32083B191857E;       // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
