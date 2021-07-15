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

// BlueprintGeneratedClass BP_CameraManager.BP_CameraManager_C
// 0x0008 (FullSize[0x27B8] - InheritedSize[0x27B0])
class ABP_CameraManager_C : public APlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x27B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraManager.BP_CameraManager_C");
		return ptr;
	}



	void OnPhotographySessionStart();
	void OnPhotographySessionEnd();
	void ExecuteUbergraph_BP_CameraManager(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
