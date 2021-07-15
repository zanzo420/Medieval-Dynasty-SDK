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

// UserDefinedStruct ST_King.ST_King
// 0x001A
struct FST_King
{
	struct FText                                       Name_4_C8A84FB54B8D5072AED1BD8511A8B084;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Sex_E_Sex>                           Sex_8_BE020DF84F2FE1446C161994FA6D18BB;                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Kingdoms_E_Kingdoms>                 Kingdom_5_ECBDFD454C26C0F173DF80866F2CE0CA;                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
