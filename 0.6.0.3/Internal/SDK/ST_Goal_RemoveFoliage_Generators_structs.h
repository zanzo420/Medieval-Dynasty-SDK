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

// UserDefinedStruct ST_Goal_RemoveFoliage_Generators.ST_Goal_RemoveFoliage_Generators
// 0x0030
struct FST_Goal_RemoveFoliage_Generators
{
	struct FText                                       GoalText_5_EDEE9133420969EB32F57EB0DD3AA0DC;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                NumberToRemove_8_BCCE503F4AE823D52B83C2809A7778A1;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5T8I[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_Resources_E_Resources>>       ResourceTypes_12_F83AF88044734F45E85BEE94323E7B64;         // 0x0020(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
