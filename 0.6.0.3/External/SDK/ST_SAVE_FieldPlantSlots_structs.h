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

// UserDefinedStruct ST_SAVE_FieldPlantSlots.ST_SAVE_FieldPlantSlots
// 0x0040
struct FST_SAVE_FieldPlantSlots
{
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantState_3_7E0554E84AB70C151D5E8E9CBA17C95F;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_40BC[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform_9_7FCCC2C84793D1DF667D8C80E025BB05;              // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
