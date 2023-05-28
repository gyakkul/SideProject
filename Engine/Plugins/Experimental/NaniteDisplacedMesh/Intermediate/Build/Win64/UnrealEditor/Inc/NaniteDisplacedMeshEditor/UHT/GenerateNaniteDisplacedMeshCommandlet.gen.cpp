// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GenerateNaniteDisplacedMeshCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateNaniteDisplacedMeshCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	NANITEDISPLACEDMESHEDITOR_API UClass* Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet();
	NANITEDISPLACEDMESHEDITOR_API UClass* Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NaniteDisplacedMeshEditor();
// End Cross Module References
	void UGenerateNaniteDisplacedMeshCommandlet::StaticRegisterNativesUGenerateNaniteDisplacedMeshCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateNaniteDisplacedMeshCommandlet);
	UClass* Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_NoRegister()
	{
		return UGenerateNaniteDisplacedMeshCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteDisplacedMeshEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Commandlet to help keeping up to date generated nanite displacement mesh assets\n * Iterate all the levels and keep track of the linked mesh used.\n */" },
		{ "IncludePath", "GenerateNaniteDisplacedMeshCommandlet.h" },
		{ "ModuleRelativePath", "Private/GenerateNaniteDisplacedMeshCommandlet.h" },
		{ "ToolTip", "* Commandlet to help keeping up to date generated nanite displacement mesh assets\n* Iterate all the levels and keep track of the linked mesh used." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateNaniteDisplacedMeshCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics::ClassParams = {
		&UGenerateNaniteDisplacedMeshCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGenerateNaniteDisplacedMeshCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateNaniteDisplacedMeshCommandlet.OuterSingleton, Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateNaniteDisplacedMeshCommandlet.OuterSingleton;
	}
	template<> NANITEDISPLACEDMESHEDITOR_API UClass* StaticClass<UGenerateNaniteDisplacedMeshCommandlet>()
	{
		return UGenerateNaniteDisplacedMeshCommandlet::StaticClass();
	}
	UGenerateNaniteDisplacedMeshCommandlet::UGenerateNaniteDisplacedMeshCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateNaniteDisplacedMeshCommandlet);
	UGenerateNaniteDisplacedMeshCommandlet::~UGenerateNaniteDisplacedMeshCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Private_GenerateNaniteDisplacedMeshCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Private_GenerateNaniteDisplacedMeshCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateNaniteDisplacedMeshCommandlet, UGenerateNaniteDisplacedMeshCommandlet::StaticClass, TEXT("UGenerateNaniteDisplacedMeshCommandlet"), &Z_Registration_Info_UClass_UGenerateNaniteDisplacedMeshCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateNaniteDisplacedMeshCommandlet), 2946466712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Private_GenerateNaniteDisplacedMeshCommandlet_h_3729140195(TEXT("/Script/NaniteDisplacedMeshEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Private_GenerateNaniteDisplacedMeshCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Private_GenerateNaniteDisplacedMeshCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
