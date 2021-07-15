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

// BlueprintGeneratedClass DE_SpawnFurnitureAtLocation.DE_SpawnFurnitureAtLocation_C
// 0x0059 (FullSize[0x0081] - InheritedSize[0x0028])
class UDE_SpawnFurnitureAtLocation_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                                  TransformToPlace;                                          // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FDataTableRowHandle                         FurnitureType;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	TArray<struct FName>                               TagsToAdd;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_SpawnFurnitureAtLocation.DE_SpawnFurnitureAtLocation_C");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_SpawnFurnitureAtLocation(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
