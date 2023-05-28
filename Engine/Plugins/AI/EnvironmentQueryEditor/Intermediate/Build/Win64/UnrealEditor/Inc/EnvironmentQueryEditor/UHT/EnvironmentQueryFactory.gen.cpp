// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryFactory() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryFactory();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryFactory::StaticRegisterNativesUEnvironmentQueryFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvironmentQueryFactory);
	UClass* Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister()
	{
		return UEnvironmentQueryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EnvironmentQueryFactory.h" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryFactory_Statics::ClassParams = {
		&UEnvironmentQueryFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryFactory()
	{
		if (!Z_Registration_Info_UClass_UEnvironmentQueryFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvironmentQueryFactory.OuterSingleton, Z_Construct_UClass_UEnvironmentQueryFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvironmentQueryFactory.OuterSingleton;
	}
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryFactory>()
	{
		return UEnvironmentQueryFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryFactory);
	UEnvironmentQueryFactory::~UEnvironmentQueryFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvironmentQueryFactory, UEnvironmentQueryFactory::StaticClass, TEXT("UEnvironmentQueryFactory"), &Z_Registration_Info_UClass_UEnvironmentQueryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvironmentQueryFactory), 3552491641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_573490207(TEXT("/Script/EnvironmentQueryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
