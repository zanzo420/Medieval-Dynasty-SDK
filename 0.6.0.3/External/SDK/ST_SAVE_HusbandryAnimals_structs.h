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

// UserDefinedStruct ST_SAVE_HusbandryAnimals.ST_SAVE_HusbandryAnimals
// 0x005A
struct FST_SAVE_HusbandryAnimals
{
	struct FName                                       Name_72_63A4E40E4D8977E5B706FBBF07AC5400;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Pos_75_4C2448BC4B735D194B54FA9D985F6F13;                   // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rot_73_9212B41444B2E7B08BED74BF6BF580F8;                   // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HP_71_8E6D291A4374B4E4B262C8AACEEA899F;                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age_17_95D4C25B404796B039F50EAB60304D82;                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     HouseID_54_E7D4DA9742156BA4D70F2BB25201678B;               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                              Capacity_63_4F8950254554710B5CF756967EDD3373;              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food_80_41CEA5F84A5C18C38D91B88726472C32;                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Owner_77_C8EEE038433941FA1154E1BA6E7DD826;                 // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDead_66_538DAB954E14826651E3B6944186B7DC;                // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForSale_82_981ED93E4276EA4386CE5CAE7DA2CCCB;               // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JIWY[0x1];                                     // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Variation_85_BBB35A7D42505709BB61FAA122B566A8;             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SAVE_Inventory>                  EQ_89_C720AB474CB19DC0B0C411A280B8F7F0;                    // 0x0048(0x0010) (Edit, BlueprintVisible)
	bool                                               IsMount_91_ABA2205C4324CFFE826EF9907BCE32CF;               // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMounted_93_36FDA4564FA87FC0655054A1BC143D15;             // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
