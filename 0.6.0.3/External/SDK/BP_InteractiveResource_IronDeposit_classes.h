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

// BlueprintGeneratedClass BP_InteractiveResource_IronDeposit.BP_InteractiveResource_IronDeposit_C
// 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
class ABP_InteractiveResource_IronDeposit_C : public ABP_MasterInteractiveResource_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractiveResource_IronDeposit.BP_InteractiveResource_IronDeposit_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
