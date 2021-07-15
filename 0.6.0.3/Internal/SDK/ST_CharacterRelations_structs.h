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

// UserDefinedStruct ST_CharacterRelations.ST_CharacterRelations
// 0x003C
struct FST_CharacterRelations
{
	class ABP_BaseCharacter_C*                         Father_2_15777FB74D41F8E97E9C37A5D4AE1CA9;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Mother_4_66584BE24C00871ABA0368820EE0A8EA;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Partner_6_3F5D77D24556911A866BADA4ECA84BB1;                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 Siblings_23_E65A3318476297E0FF46E18D2A279496;              // 0x0018(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_BaseCharacter_C*>                 Children_9_CA6DD1B04A1D29875E65339C8E49AEF8;               // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	int                                                Affection_16_6977B1FB401B082D74A7CAA80134A8A6;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
