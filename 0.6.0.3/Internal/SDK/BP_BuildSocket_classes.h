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

// BlueprintGeneratedClass BP_BuildSocket.BP_BuildSocket_C
// 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
class ABP_BuildSocket_C : public AActor
{
public:
	class UArrowComponent*                             Slot;                                                      // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Size;                                                      // 0x0238(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocalLocation;                                             // 0x0244(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SlotLocation;                                              // 0x0250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W6HU[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 Buildging;                                                 // 0x0260(0x0010) (Edit, BlueprintVisible)
	class ABP_Cave_C*                                  CaveReference;                                             // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildSocket.BP_BuildSocket_C");
		return ptr;
	}



	void CheckSocketCompatibility(const struct FDataTableRowHandle& BuildingHandler, bool* Success);
	void GetBuildingHandlers(const struct FDataTableRowHandle& HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility);
	void GetSocketLocation(struct FTransform* Transform);
	void GetBuildingType(TEnumAsByte<E_Buildings_E_Buildings>* GetBuildingType);
	void GetEntrances(TArray<struct FVector>* Entrances);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
