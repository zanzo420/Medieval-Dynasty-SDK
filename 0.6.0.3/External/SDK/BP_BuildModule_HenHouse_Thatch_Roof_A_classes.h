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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuildModule_HenHouse_Thatch_Roof_A.BP_BuildModule_HenHouse_Thatch_Roof_A_C
// 0x0000 (FullSize[0x0414] - InheritedSize[0x0414])
class ABP_BuildModule_HenHouse_Thatch_Roof_A_C : public ABP_MasterBuildModule_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildModule_HenHouse_Thatch_Roof_A.BP_BuildModule_HenHouse_Thatch_Roof_A_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
