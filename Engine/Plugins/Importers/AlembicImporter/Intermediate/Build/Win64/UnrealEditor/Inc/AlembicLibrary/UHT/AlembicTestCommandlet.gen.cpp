// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AlembicTestCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlembicTestCommandlet() {}
// Cross Module References
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAlembicTestCommandlet();
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAlembicTestCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AlembicLibrary();
// End Cross Module References
	void UAlembicTestCommandlet::StaticRegisterNativesUAlembicTestCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlembicTestCommandlet);
	UClass* Z_Construct_UClass_UAlembicTestCommandlet_NoRegister()
	{
		return UAlembicTestCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UAlembicTestCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlembicTestCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlembicTestCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlembicTestCommandlet.h" },
		{ "ModuleRelativePath", "Private/AlembicTestCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlembicTestCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlembicTestCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlembicTestCommandlet_Statics::ClassParams = {
		&UAlembicTestCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAlembicTestCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlembicTestCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlembicTestCommandlet()
	{
		if (!Z_Registration_Info_UClass_UAlembicTestCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlembicTestCommandlet.OuterSingleton, Z_Construct_UClass_UAlembicTestCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlembicTestCommandlet.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UClass* StaticClass<UAlembicTestCommandlet>()
	{
		return UAlembicTestCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlembicTestCommandlet);
	UAlembicTestCommandlet::~UAlembicTestCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlembicTestCommandlet, UAlembicTestCommandlet::StaticClass, TEXT("UAlembicTestCommandlet"), &Z_Registration_Info_UClass_UAlembicTestCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlembicTestCommandlet), 2058806091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_3744453091(TEXT("/Script/AlembicLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
