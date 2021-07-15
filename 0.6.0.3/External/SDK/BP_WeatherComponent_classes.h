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

// BlueprintGeneratedClass BP_WeatherComponent.BP_WeatherComponent_C
// 0x002D (FullSize[0x00DD] - InheritedSize[0x00B0])
class UBP_WeatherComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*                    PrecipitationFX;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystem*>                     PrecipitationParticleSystems;                              // 0x00C0(0x0010) (Edit, BlueprintVisible)
	class UCapsuleComponent*                           Root;                                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentSeason;                                             // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Cave;                                                      // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeatherComponent.BP_WeatherComponent_C");
		return ptr;
	}



	void Start(int Season, float Intensity);
	void Stop();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeatherComponent(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
