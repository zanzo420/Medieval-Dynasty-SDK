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

// UserDefinedStruct ST_ItemsToRemove.ST_ItemsToRemove
// 0x0020
struct FST_ItemsToRemove
{
	struct FST_ItemRestriction                         Item_2_850885C441677A7A69F16B9B36724605;                   // 0x0000(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent_C*                       Place_5_0DFA331D412B8BD93C1D1E83C68C63BA;                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
