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

// UserDefinedStruct ST_Goal_Hunt_Generators.ST_Goal_Hunt_Generators
// 0x0040
struct FST_Goal_Hunt_Generators
{
	struct FText                                       GoalText_9_C9E052124BEC72172A667288EADC600C;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FST_AnimalForHuntGoal>               AnimalsToPickFrom_39_C3DFAFEB42F99E89D5D0D29114EF978B;     // 0x0018(0x0010) (Edit, BlueprintVisible)
	int                                                AmountOfTypesToPick_44_49D9967445644918BBBC778EDB5E07F4;   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DTFI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_Animals_E_Animals>>           TypeOfAnimal_40_24156E8643798A293504C9A9BA91DFAA;          // 0x0030(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
