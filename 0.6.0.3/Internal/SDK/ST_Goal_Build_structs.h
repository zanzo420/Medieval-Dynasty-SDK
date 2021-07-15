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

// UserDefinedStruct ST_Goal_Build.ST_Goal_Build
// 0x0051
struct FST_Goal_Build
{
	struct FText                                       GoalText_2_CB5E947B4F5AAB42786446972D14823B;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Goal_BuildTypes_E_Goal_BuildTypes>   BuildType_6_31E5F802480A79BD5B11018F85C47507;              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_58PI[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         BuildingObjectToCheck_13_D8017EDC40B631BC033D89888B82CD6C; // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                         FurnitureObjectToCheck_14_26594ACC4797D1CED6E1F29E89FEC038; // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                         FenceObjectToCheck_15_39273C864C5F6128D768E6B7531CCE54;    // 0x0040(0x0010) (Edit, BlueprintVisible, NoDestructor)
	bool                                               MustBeConstructed__17_51A96B054FF5EDEDE54CF5A8F149D6D0;    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
