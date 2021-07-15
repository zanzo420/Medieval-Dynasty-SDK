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

// BlueprintGeneratedClass BP_MarkerManager.BP_MarkerManager_C
// 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
class ABP_MarkerManager_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class ABP_MasterMarker_C*>                  ListOfMarkers;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_MasterMarker_C*                          PlayerPlacedMarker;                                        // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MarkerManager.BP_MarkerManager_C");
		return ptr;
	}



	void SaveDataFromSystemToFile(class USAVE_Game_C* Save_Reference);
	void LoadSaveFileIntoSystem(class USAVE_Game_C* Save);
	void Init(bool MainMenu);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
