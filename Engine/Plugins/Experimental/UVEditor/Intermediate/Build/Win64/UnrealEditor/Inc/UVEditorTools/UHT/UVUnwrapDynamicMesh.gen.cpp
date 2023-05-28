// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/UVUnwrapDynamicMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVUnwrapDynamicMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVUnwrapDynamicMesh();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVUnwrapDynamicMesh_NoRegister();
// End Cross Module References
	void UUVUnwrapDynamicMesh::StaticRegisterNativesUUVUnwrapDynamicMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVUnwrapDynamicMesh);
	UClass* Z_Construct_UClass_UUVUnwrapDynamicMesh_NoRegister()
	{
		return UUVUnwrapDynamicMesh::StaticClass();
	}
	struct Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/UVUnwrapDynamicMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUVUnwrapDynamicMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics::ClassParams = {
		&UUVUnwrapDynamicMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVUnwrapDynamicMesh()
	{
		if (!Z_Registration_Info_UClass_UUVUnwrapDynamicMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVUnwrapDynamicMesh.OuterSingleton, Z_Construct_UClass_UUVUnwrapDynamicMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVUnwrapDynamicMesh.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVUnwrapDynamicMesh>()
	{
		return UUVUnwrapDynamicMesh::StaticClass();
	}
	UUVUnwrapDynamicMesh::UUVUnwrapDynamicMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVUnwrapDynamicMesh);
	UUVUnwrapDynamicMesh::~UUVUnwrapDynamicMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVUnwrapDynamicMesh, UUVUnwrapDynamicMesh::StaticClass, TEXT("UUVUnwrapDynamicMesh"), &Z_Registration_Info_UClass_UUVUnwrapDynamicMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVUnwrapDynamicMesh), 448938546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_2247223231(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_TargetInterfaces_UVUnwrapDynamicMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
