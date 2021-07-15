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

// UserDefinedStruct ST_EventRestricion_Buildings.ST_EventRestricion_Buildings
// 0x005C
struct FST_EventRestricion_Buildings
{
	TEnumAsByte<E_EventRestictions_Buildings_E_EventRestictions_Buildings> Type_8_44E86CE347256A6FF2E05992B4513555;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpecificBuildigsType__1_227D677A441A00ADBFAAFFA3331CB44C;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WWX3[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      BuildingsTypes_5_6B141FAF4B721A7FCC23D194F9518CEA[0x50];   // 0x0002(0x0050) UNKNOWN PROPERTY: SetProperty
	int                                                NumberRequired_11_B0AE415A42206A049F5612A6AB0FF312;        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
