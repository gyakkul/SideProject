// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderPlayerSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderPlayerSource() {}
// Cross Module References
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderPlayerSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderPlayerSource_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderPlayerSource::StaticRegisterNativesUTakeRecorderPlayerSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderPlayerSource);
	UClass* Z_Construct_UClass_UTakeRecorderPlayerSource_NoRegister()
	{
		return UTakeRecorderPlayerSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderPlayerSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderPlayerSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderPlayerSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Actors" },
		{ "Comment", "/** A recording source that records the current player */" },
		{ "IncludePath", "TakeRecorderPlayerSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderPlayerSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Player" },
		{ "ToolTip", "A recording source that records the current player" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderPlayerSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderPlayerSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderPlayerSource_Statics::ClassParams = {
		&UTakeRecorderPlayerSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderPlayerSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderPlayerSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderPlayerSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderPlayerSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderPlayerSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderPlayerSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderPlayerSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderPlayerSource>()
	{
		return UTakeRecorderPlayerSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderPlayerSource);
	UTakeRecorderPlayerSource::~UTakeRecorderPlayerSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderPlayerSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderPlayerSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderPlayerSource, UTakeRecorderPlayerSource::StaticClass, TEXT("UTakeRecorderPlayerSource"), &Z_Registration_Info_UClass_UTakeRecorderPlayerSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderPlayerSource), 3494641339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderPlayerSource_h_1021317369(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderPlayerSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderPlayerSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
