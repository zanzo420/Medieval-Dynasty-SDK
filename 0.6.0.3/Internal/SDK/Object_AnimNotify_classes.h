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

// BlueprintGeneratedClass Object_AnimNotify.Object_AnimNotify_C
// 0x000C (FullSize[0x0044] - InheritedSize[0x0038])
class UObject_AnimNotify_C : public UAnimNotify
{
public:
	TEnumAsByte<E_NotifyObject_E_NotifyObject>         ObjectToNotify;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_18U8[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NotifyName;                                                // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Object_AnimNotify.Object_AnimNotify_C");
		return ptr;
	}



	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
