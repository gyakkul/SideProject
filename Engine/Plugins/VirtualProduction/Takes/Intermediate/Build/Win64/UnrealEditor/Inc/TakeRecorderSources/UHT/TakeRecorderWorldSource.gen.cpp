// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderWorldSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderWorldSource() {}
// Cross Module References
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderWorldSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderWorldSource_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderWorldSourceSettings();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderWorldSourceSettings_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderWorldSourceSettings::StaticRegisterNativesUTakeRecorderWorldSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderWorldSourceSettings);
	UClass* Z_Construct_UClass_UTakeRecorderWorldSourceSettings_NoRegister()
	{
		return UTakeRecorderWorldSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordWorldSettings_MetaData[];
#endif
		static void NewProp_bRecordWorldSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordWorldSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutotrackActors_MetaData[];
#endif
		static void NewProp_bAutotrackActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutotrackActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A recording source that records world state */" },
		{ "DisplayName", "World Recorder" },
		{ "IncludePath", "TakeRecorderWorldSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderWorldSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A recording source that records world state" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bRecordWorldSettings_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Record world settings */" },
		{ "ModuleRelativePath", "Private/TakeRecorderWorldSource.h" },
		{ "ToolTip", "Record world settings" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bRecordWorldSettings_SetBit(void* Obj)
	{
		((UTakeRecorderWorldSourceSettings*)Obj)->bRecordWorldSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bRecordWorldSettings = { "bRecordWorldSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderWorldSourceSettings), &Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bRecordWorldSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bRecordWorldSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bRecordWorldSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bAutotrackActors_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Add a binding and track for all actors that aren't explicitly being recorded */" },
		{ "ModuleRelativePath", "Private/TakeRecorderWorldSource.h" },
		{ "ToolTip", "Add a binding and track for all actors that aren't explicitly being recorded" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bAutotrackActors_SetBit(void* Obj)
	{
		((UTakeRecorderWorldSourceSettings*)Obj)->bAutotrackActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bAutotrackActors = { "bAutotrackActors", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderWorldSourceSettings), &Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bAutotrackActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bAutotrackActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bAutotrackActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bRecordWorldSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::NewProp_bAutotrackActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderWorldSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::ClassParams = {
		&UTakeRecorderWorldSourceSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::PropPointers),
		0,
		0x000000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderWorldSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderWorldSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderWorldSourceSettings.OuterSingleton, Z_Construct_UClass_UTakeRecorderWorldSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderWorldSourceSettings.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderWorldSourceSettings>()
	{
		return UTakeRecorderWorldSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderWorldSourceSettings);
	UTakeRecorderWorldSourceSettings::~UTakeRecorderWorldSourceSettings() {}
	void UTakeRecorderWorldSource::StaticRegisterNativesUTakeRecorderWorldSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderWorldSource);
	UClass* Z_Construct_UClass_UTakeRecorderWorldSource_NoRegister()
	{
		return UTakeRecorderWorldSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderWorldSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderWorldSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderWorldSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderWorldSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Actors" },
		{ "Comment", "/** A recording source that records world state */" },
		{ "IncludePath", "TakeRecorderWorldSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderWorldSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "World" },
		{ "ToolTip", "A recording source that records world state" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderWorldSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderWorldSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderWorldSource_Statics::ClassParams = {
		&UTakeRecorderWorldSource::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderWorldSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderWorldSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderWorldSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderWorldSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderWorldSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderWorldSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderWorldSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderWorldSource>()
	{
		return UTakeRecorderWorldSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderWorldSource);
	UTakeRecorderWorldSource::~UTakeRecorderWorldSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderWorldSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderWorldSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderWorldSourceSettings, UTakeRecorderWorldSourceSettings::StaticClass, TEXT("UTakeRecorderWorldSourceSettings"), &Z_Registration_Info_UClass_UTakeRecorderWorldSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderWorldSourceSettings), 1507573510U) },
		{ Z_Construct_UClass_UTakeRecorderWorldSource, UTakeRecorderWorldSource::StaticClass, TEXT("UTakeRecorderWorldSource"), &Z_Registration_Info_UClass_UTakeRecorderWorldSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderWorldSource), 557217824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderWorldSource_h_3515071310(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderWorldSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderWorldSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
