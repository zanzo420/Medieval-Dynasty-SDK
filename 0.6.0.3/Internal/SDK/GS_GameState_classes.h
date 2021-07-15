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

// BlueprintGeneratedClass GS_GameState.GS_GameState_C
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class AGS_GameState_C : public AGameStateBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GS_GameState.GS_GameState_C");
		return ptr;
	}



	void RemoveFoliageInstance(class UInstancedStaticMeshComponent* Target, int InputPin, const struct FTransform& InputPin1);
	void Replicate_RemoveInstance(class UInstancedStaticMeshComponent* Target, int InputPin, const struct FTransform& InputPin1);
	void ExecuteUbergraph_GS_GameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
