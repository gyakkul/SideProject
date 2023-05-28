// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryStaticMesh() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryStaticMesh::StaticRegisterNativesUActorFactoryStaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryStaticMesh);
	UClass* Z_Construct_UClass_UActorFactoryStaticMesh_NoRegister()
	{
		return UActorFactoryStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryStaticMesh.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryStaticMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryStaticMesh_Statics::ClassParams = {
		&UActorFactoryStaticMesh::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ADu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryStaticMesh.OuterSingleton, Z_Construct_UClass_UActorFactoryStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryStaticMesh.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryStaticMesh>()
	{
		return UActorFactoryStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryStaticMesh);
	UActorFactoryStaticMesh::~UActorFactoryStaticMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryStaticMesh, UActorFactoryStaticMesh::StaticClass, TEXT("UActorFactoryStaticMesh"), &Z_Registration_Info_UClass_UActorFactoryStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryStaticMesh), 3627814975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_3574633976(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
