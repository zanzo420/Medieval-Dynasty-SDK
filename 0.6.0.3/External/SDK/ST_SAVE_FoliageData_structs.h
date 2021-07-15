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

// UserDefinedStruct ST_SAVE_FoliageData.ST_SAVE_FoliageData
// 0x0065
struct FST_SAVE_FoliageData
{
	struct FString                                     FoliageID_40_68CE4FD44EB6629B0D17E780CE499F61;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Reset_43_8B63A5B54D83B075414EF0ABA1556E15;                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DAB_45_06CE65524E6F5F86653A12BDFEB66DFE;                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MD_44_077EEC0F4CCAE5563EBD968BCA3C06CF;                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4KQT[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OT_L_103_FB15DF4E4A02CF6E495D5DA8811E2B64;                 // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    OT_R_68_FE3B97114B2E690A225110815F43013E;                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     OT_S_104_FFAEB8A94CCC904048E4C6B7B0C70369;                 // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CT_L_105_A22312C94F44FE87CA021E8A96B5FFCA;                 // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CT_R_69_AF27E3ED47E7E004C1ECC19CF76232AD;                  // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CT_S_106_4FD1244348FE10F2CB511A839E54954A;                 // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               F_108_E1F69FB64FF89E4E54C16C849E88E45F;                    // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
