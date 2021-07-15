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

// BlueprintGeneratedClass IdleEntry_AnimNotify.IdleEntry_AnimNotify_C
// 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
class UIdleEntry_AnimNotify_C : public UAnimNotify
{
public:
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IdleEntry_AnimNotify.IdleEntry_AnimNotify_C");
		return ptr;
	}



	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
