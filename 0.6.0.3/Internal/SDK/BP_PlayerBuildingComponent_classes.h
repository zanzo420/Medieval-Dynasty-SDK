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

// BlueprintGeneratedClass BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C
// 0x004C (FullSize[0x00FC] - InheritedSize[0x00B0])
class UBP_PlayerBuildingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ABP_PlayerCharacter_C*                       PlayerCharacterReference;                                  // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        Ghost_Building;                                            // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        Target_Building;                                           // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterField_C*                           Ghost_Field;                                               // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterSplineStructure_C*                 Ghost_Spline;                                              // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_C*                       Ghost_Furniture;                                           // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterRoadSpline_C*                      Ghost_Road;                                                // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BuildingLocation;                                          // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C");
		return ptr;
	}



	void UpdateBuildingLocation(const struct FVector& NewBuildingLocation);
	void ReceiveBeginPlay();
	void SpawnBuildingGhost(const struct FDataTableRowHandle& BuildingType);
	void SpawnMasterFieldGhost(TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType);
	void SpawnSplineGhost(const struct FDataTableRowHandle& FenceType);
	void SpawnFurnitureGhost(const struct FDataTableRowHandle& FurnitureType);
	void SpawnRoadGhost(const struct FDataTableRowHandle& RoadType);
	void ExecuteUbergraph_BP_PlayerBuildingComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
