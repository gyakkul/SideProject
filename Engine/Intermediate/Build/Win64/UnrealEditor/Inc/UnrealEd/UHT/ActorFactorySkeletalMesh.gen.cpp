// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactorySkeletalMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySkeletalMesh() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkeletalMesh();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySkeletalMesh::StaticRegisterNativesUActorFactorySkeletalMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactorySkeletalMesh);
	UClass* Z_Construct_UClass_UActorFactorySkeletalMesh_NoRegister()
	{
		return UActorFactorySkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySkeletalMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySkeletalMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySkeletalMesh_Statics::ClassParams = {
		&UActorFactorySkeletalMesh::StaticClass,
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
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactorySkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySkeletalMesh()
	{
		if (!Z_Registration_Info_UClass_UActorFactorySkeletalMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactorySkeletalMesh.OuterSingleton, Z_Construct_UClass_UActorFactorySkeletalMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactorySkeletalMesh.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactorySkeletalMesh>()
	{
		return UActorFactorySkeletalMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySkeletalMesh);
	UActorFactorySkeletalMesh::~UActorFactorySkeletalMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactorySkeletalMesh, UActorFactorySkeletalMesh::StaticClass, TEXT("UActorFactorySkeletalMesh"), &Z_Registration_Info_UClass_UActorFactorySkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactorySkeletalMesh), 1950866186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_2738950900(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
