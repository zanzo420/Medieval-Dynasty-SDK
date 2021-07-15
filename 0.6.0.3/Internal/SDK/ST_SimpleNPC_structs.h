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

// UserDefinedStruct ST_SimpleNPC.ST_SimpleNPC
// 0x0058
struct FST_SimpleNPC
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex_15_DEB718004FEE3DF7E625D2A27FEB22DA;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N61V[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Age_17_C412387243C9483775F2179A563E90DA;                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership_19_34C757FD4E807FB8F08561A4879835D5;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_OutsideNPCTypes_E_OutsideNPCTypes>   OutsideNPCType_21_7FF5FBFA4B2AABAAE2A6269CAEC6C465;        // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3PT6[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TranformLocation_23_B2680F4D4718418FFB0E9AAAEBF69DCF;      // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               IsVendor_11_9B38D6FA4287D1D2D4447898AF0FFF68;              // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y7I1[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         VendorCategory_10_44DEDA6C453B48E05169C7852438C34F;        // 0x0048(0x0010) (Edit, BlueprintVisible, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
