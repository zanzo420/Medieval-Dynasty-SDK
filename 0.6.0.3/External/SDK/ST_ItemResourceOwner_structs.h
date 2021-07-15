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

// UserDefinedStruct ST_ItemResourceOwner.ST_ItemResourceOwner
// 0x0015
struct FST_ItemResourceOwner
{
	struct FDataTableRowHandle                         Item_2_362EB490464C23AB625CFC9BC607CAE7;                   // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                Count_5_9C54216D420D6D02D21580A8369F52E2;                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership_9_392333A94B6E9C0DC78F50BD5CF11CDF;              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
