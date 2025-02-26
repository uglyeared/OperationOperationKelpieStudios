// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PickUp/ObjStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjStaticMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
PICKUP_API UClass* Z_Construct_UClass_UObjStaticMesh();
PICKUP_API UClass* Z_Construct_UClass_UObjStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_PickUp();
// End Cross Module References

// Begin Class UObjStaticMesh
void UObjStaticMesh::StaticRegisterNativesUObjStaticMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjStaticMesh);
UClass* Z_Construct_UClass_UObjStaticMesh_NoRegister()
{
	return UObjStaticMesh::StaticClass();
}
struct Z_Construct_UClass_UObjStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "ObjStaticMesh.h" },
		{ "ModuleRelativePath", "ObjStaticMesh.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PickUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjStaticMesh_Statics::ClassParams = {
	&UObjStaticMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjStaticMesh()
{
	if (!Z_Registration_Info_UClass_UObjStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjStaticMesh.OuterSingleton, Z_Construct_UClass_UObjStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjStaticMesh.OuterSingleton;
}
template<> PICKUP_API UClass* StaticClass<UObjStaticMesh>()
{
	return UObjStaticMesh::StaticClass();
}
UObjStaticMesh::UObjStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjStaticMesh);
UObjStaticMesh::~UObjStaticMesh() {}
// End Class UObjStaticMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_playtest_Source_PickUp_ObjStaticMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjStaticMesh, UObjStaticMesh::StaticClass, TEXT("UObjStaticMesh"), &Z_Registration_Info_UClass_UObjStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjStaticMesh), 1299343153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_playtest_Source_PickUp_ObjStaticMesh_h_505791378(TEXT("/Script/PickUp"),
	Z_CompiledInDeferFile_FID_playtest_Source_PickUp_ObjStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_playtest_Source_PickUp_ObjStaticMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
