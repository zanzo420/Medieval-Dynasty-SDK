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

// UserDefinedStruct ST_Challenge_MasterType.ST_Challenge_MasterType
// 0x00A0
struct FST_Challenge_MasterType
{
	TEnumAsByte<E_Challenge_Type_E_Challenge_Type>     ChallengeType_2_4065E07843552756FBA342B0847675C8;          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SHY1[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Challenge_DeliverFood                   FoodType_9_23BFB1EA40484D53FA9547940A883EC2;               // 0x0008(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Challenge_SendPeople                    PeopleType_10_D8922A7747D03608549367BB9573DE8A;            // 0x0030(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Challenge_DeliverItems                  DeliverType_11_A172FB6D45E106EEA97E649CA16E1535;           // 0x0058(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Challenge_DeliverItems_Generic          DeliverGenericType_14_A2F9B740464C80B338426AA37DE70424;    // 0x0068(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
