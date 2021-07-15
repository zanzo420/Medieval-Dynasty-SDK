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

// UserDefinedStruct ST_CameraSettings_Gait.ST_CameraSettings_Gait
// 0x003C
struct FST_CameraSettings_Gait
{
	struct FST_CameraSettings                          Walk_16_E2E706344DA5B87DDAA86D936B4E8976;                  // 0x0000(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraSettings                          Run_17_176BF7834C648E7BCEA23FBB7F3CB739;                   // 0x0014(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraSettings                          Sprint_18_2D13D8014BF6D9039E6EAF882DB4930B;                // 0x0028(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
