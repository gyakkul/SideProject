// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Commandlets/PluginCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPluginCommandlet::StaticRegisterNativesUPluginCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPluginCommandlet);
	UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister()
	{
		return UPluginCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UPluginCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/PluginCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/PluginCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPluginCommandlet_Statics::ClassParams = {
		&UPluginCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPluginCommandlet()
	{
		if (!Z_Registration_Info_UClass_UPluginCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPluginCommandlet.OuterSingleton, Z_Construct_UClass_UPluginCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPluginCommandlet.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPluginCommandlet>()
	{
		return UPluginCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginCommandlet);
	UPluginCommandlet::~UPluginCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPluginCommandlet, UPluginCommandlet::StaticClass, TEXT("UPluginCommandlet"), &Z_Registration_Info_UClass_UPluginCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPluginCommandlet), 2169589973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_2762190280(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
