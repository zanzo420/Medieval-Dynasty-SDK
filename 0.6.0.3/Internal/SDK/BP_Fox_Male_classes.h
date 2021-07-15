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

// BlueprintGeneratedClass BP_Fox_Male.BP_Fox_Male_C
// 0x000F (FullSize[0x0BF8] - InheritedSize[0x0BE9])
class ABP_Fox_Male_C : public ABP_FoxAI_C
{
public:
	unsigned char                                      UnknownData_L46Y[0x7];                                     // 0x0BE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fox_Male.BP_Fox_Male_C");
		return ptr;
	}



	void AnimNotify_DeathEnd();
	void EventDead();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Fox_Male(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
