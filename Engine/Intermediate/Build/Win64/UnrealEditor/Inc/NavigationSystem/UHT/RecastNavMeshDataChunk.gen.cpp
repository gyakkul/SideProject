// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavMesh/RecastNavMeshDataChunk.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastNavMeshDataChunk() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastNavMeshDataChunk();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void URecastNavMeshDataChunk::StaticRegisterNativesURecastNavMeshDataChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecastNavMeshDataChunk);
	UClass* Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister()
	{
		return URecastNavMeshDataChunk::StaticClass();
	}
	struct Z_Construct_UClass_URecastNavMeshDataChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecastNavMeshDataChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationDataChunk,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecastNavMeshDataChunk_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * \n */" },
		{ "IncludePath", "NavMesh/RecastNavMeshDataChunk.h" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMeshDataChunk.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecastNavMeshDataChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecastNavMeshDataChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URecastNavMeshDataChunk_Statics::ClassParams = {
		&URecastNavMeshDataChunk::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URecastNavMeshDataChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecastNavMeshDataChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecastNavMeshDataChunk()
	{
		if (!Z_Registration_Info_UClass_URecastNavMeshDataChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecastNavMeshDataChunk.OuterSingleton, Z_Construct_UClass_URecastNavMeshDataChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URecastNavMeshDataChunk.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<URecastNavMeshDataChunk>()
	{
		return URecastNavMeshDataChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecastNavMeshDataChunk);
	URecastNavMeshDataChunk::~URecastNavMeshDataChunk() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URecastNavMeshDataChunk)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URecastNavMeshDataChunk, URecastNavMeshDataChunk::StaticClass, TEXT("URecastNavMeshDataChunk"), &Z_Registration_Info_UClass_URecastNavMeshDataChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecastNavMeshDataChunk), 600108870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_419910725(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMeshDataChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
