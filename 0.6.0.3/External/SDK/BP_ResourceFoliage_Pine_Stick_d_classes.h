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

// BlueprintGeneratedClass BP_ResourceFoliage_Pine_Stick_d.BP_ResourceFoliage_Pine_Stick_d_C
// 0x0000 (FullSize[0x0898] - InheritedSize[0x0898])
class UBP_ResourceFoliage_Pine_Stick_d_C : public UBP_TimerResourceFoliage_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ResourceFoliage_Pine_Stick_d.BP_ResourceFoliage_Pine_Stick_d_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
