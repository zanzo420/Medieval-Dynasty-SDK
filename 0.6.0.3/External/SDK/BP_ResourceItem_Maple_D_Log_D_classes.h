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

// BlueprintGeneratedClass BP_ResourceItem_Maple_D_Log_D.BP_ResourceItem_Maple_D_Log_D_C
// 0x0000 (FullSize[0x0578] - InheritedSize[0x0578])
class ABP_ResourceItem_Maple_D_Log_D_C : public ABP_MasterResourceItem_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ResourceItem_Maple_D_Log_D.BP_ResourceItem_Maple_D_Log_D_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
