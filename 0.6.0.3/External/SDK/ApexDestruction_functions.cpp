// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FDestructibleChunkParameters::AfterRead()
{
}

void FDestructibleChunkParameters::BeforeDelete()
{
}

void FFractureMaterial::AfterRead()
{
}

void FFractureMaterial::BeforeDelete()
{
}

void FDestructibleDamageParameters::AfterRead()
{
}

void FDestructibleDamageParameters::BeforeDelete()
{
}

void FDestructibleAdvancedParameters::AfterRead()
{
}

void FDestructibleAdvancedParameters::BeforeDelete()
{
}

void FDestructibleSpecialHierarchyDepths::AfterRead()
{
}

void FDestructibleSpecialHierarchyDepths::BeforeDelete()
{
}

void FDestructibleDepthParameters::AfterRead()
{
}

void FDestructibleDepthParameters::BeforeDelete()
{
}

void FDestructibleParametersFlag::AfterRead()
{
}

void FDestructibleParametersFlag::BeforeDelete()
{
}

void FDestructibleDebrisParameters::AfterRead()
{
}

void FDestructibleDebrisParameters::BeforeDelete()
{
}

void FDestructibleParameters::AfterRead()
{
}

void FDestructibleParameters::BeforeDelete()
{
}

void ADestructibleActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DestructibleComponent, UDestructibleComponent);
}

void ADestructibleActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DestructibleComponent);
}

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*       NewMesh                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.SetDestructibleMesh");

	UDestructibleComponent_SetDestructibleMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.GetDestructibleMesh");

	UDestructibleComponent_GetDestructibleMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HurtOrigin                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFullDamage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage");

	UDestructibleComponent_ApplyRadiusDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ApexDestruction.DestructibleComponent.ApplyDamage
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ImpulseDir                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyDamage");

	UDestructibleComponent_ApplyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.HitLocation = HitLocation;
	params.ImpulseDir = ImpulseDir;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDestructibleComponent::AfterRead()
{
	USkinnedMeshComponent::AfterRead();

}

void UDestructibleComponent::BeforeDelete()
{
	USkinnedMeshComponent::BeforeDelete();

}

void UDestructibleFractureSettings::AfterRead()
{
	UObject::AfterRead();

}

void UDestructibleFractureSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDestructibleMesh::AfterRead()
{
	USkeletalMesh::AfterRead();

}

void UDestructibleMesh::BeforeDelete()
{
	USkeletalMesh::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
