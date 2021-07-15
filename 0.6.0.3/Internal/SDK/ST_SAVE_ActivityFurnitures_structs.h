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

// UserDefinedStruct ST_SAVE_ActivityFurnitures.ST_SAVE_ActivityFurnitures
// 0x0038
struct FST_SAVE_ActivityFurnitures
{
	struct FVector                                     Pos_12_990568DD45349711A716929CB42C10FA;                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rot_13_3D4D772541B8BDFBDD5EDC980EF82C86;                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Name_11_B72368D0423A3A4617D6C9A082CA2B1A;                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Owner_14_99ED524D494B7C79F210459300A0E507;                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_POP5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Tags_22_F3B10B3F422E13DFFEC61C98338243EE;                  // 0x0028(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
