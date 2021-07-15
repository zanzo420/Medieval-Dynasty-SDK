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

// UserDefinedStruct ST_SAVE_Fields.ST_SAVE_Fields
// 0x0050
struct FST_SAVE_Fields
{
	struct FVector                                     Location1_8_7E0554E84AB70C151D5E8E9CBA17C95F;              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location2_7_20E465154EDEA67B450C9BA29F61E65B;              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CustomName_26_2A2023B5406F0CECF83C5EB1FB93E141;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldCategories_E_FieldCategories>   Type_20_EA349ADA43C6C0B2C0E24C9C1F4ECD38;                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership_23_9132EAB94408B1A4921F059320306BE8;             // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MK6X[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_FieldChunks>                Chunks_15_03ED58C941B819C984EE1F9F41092E37;                // 0x0030(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_FieldPlantSlots>            Slots_16_E9E453954A24A42B38F610BE0470AA98;                 // 0x0040(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
