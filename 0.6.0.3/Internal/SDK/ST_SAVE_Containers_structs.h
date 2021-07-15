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

// UserDefinedStruct ST_SAVE_Containers.ST_SAVE_Containers
// 0x0048
struct FST_SAVE_Containers
{
	struct FVector                                     Pos_20_990568DD45349711A716929CB42C10FA;                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rot_21_28BB13314D7752CE8F8E35A33B446944;                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Name_12_FDCB5C9A4BA413DC0E96D198286658AB;                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Owner_19_D427B33148C7795328E749ABF7E237BC;                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JP11[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_Inventory>                  EQ_22_06A21FBC4E242500DBE94B9BD05F3ABD;                    // 0x0028(0x0010) (Edit, BlueprintVisible)
	TArray<struct FName>                               Tags_26_355593254EDFC6330265CC9308B5D79C;                  // 0x0038(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
