// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimecodeSynchronizerProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeSynchronizerProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizer_NoRegister();
	TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizerEditorSettings();
	TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_NoRegister();
	TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizerProjectSettings();
	TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimecodeSynchronizer();
// End Cross Module References
	void UTimecodeSynchronizerProjectSettings::StaticRegisterNativesUTimecodeSynchronizerProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimecodeSynchronizerProjectSettings);
	UClass* Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_NoRegister()
	{
		return UTimecodeSynchronizerProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInToolbar_MetaData[];
#endif
		static void NewProp_bDisplayInToolbar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInToolbar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTimecodeSynchronizer_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultTimecodeSynchronizer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimecodeSynchronizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimecodeSynchronizerProjectSettings.h" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizerProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_bDisplayInToolbar_MetaData[] = {
		{ "Category", "TimecodeSynchronizer" },
		{ "Comment", "/** Display the timecode synchronizer icon in the editor toolbar. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizerProjectSettings.h" },
		{ "ToolTip", "Display the timecode synchronizer icon in the editor toolbar." },
	};
#endif
	void Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_bDisplayInToolbar_SetBit(void* Obj)
	{
		((UTimecodeSynchronizerProjectSettings*)Obj)->bDisplayInToolbar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_bDisplayInToolbar = { "bDisplayInToolbar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimecodeSynchronizerProjectSettings), &Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_bDisplayInToolbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_bDisplayInToolbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_bDisplayInToolbar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_DefaultTimecodeSynchronizer_MetaData[] = {
		{ "Category", "TimecodeSynchronizer" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizerProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_DefaultTimecodeSynchronizer = { "DefaultTimecodeSynchronizer", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizerProjectSettings, DefaultTimecodeSynchronizer), Z_Construct_UClass_UTimecodeSynchronizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_DefaultTimecodeSynchronizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_DefaultTimecodeSynchronizer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_bDisplayInToolbar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::NewProp_DefaultTimecodeSynchronizer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeSynchronizerProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::ClassParams = {
		&UTimecodeSynchronizerProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimecodeSynchronizerProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UTimecodeSynchronizerProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimecodeSynchronizerProjectSettings.OuterSingleton, Z_Construct_UClass_UTimecodeSynchronizerProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimecodeSynchronizerProjectSettings.OuterSingleton;
	}
	template<> TIMECODESYNCHRONIZER_API UClass* StaticClass<UTimecodeSynchronizerProjectSettings>()
	{
		return UTimecodeSynchronizerProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeSynchronizerProjectSettings);
	UTimecodeSynchronizerProjectSettings::~UTimecodeSynchronizerProjectSettings() {}
	void UTimecodeSynchronizerEditorSettings::StaticRegisterNativesUTimecodeSynchronizerEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimecodeSynchronizerEditorSettings);
	UClass* Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_NoRegister()
	{
		return UTimecodeSynchronizerEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTimecodeSynchronizer_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UserTimecodeSynchronizer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimecodeSynchronizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimecodeSynchronizerProjectSettings.h" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizerProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::NewProp_UserTimecodeSynchronizer_MetaData[] = {
		{ "Category", "TimecodeSynchronizer" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizerProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::NewProp_UserTimecodeSynchronizer = { "UserTimecodeSynchronizer", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizerEditorSettings, UserTimecodeSynchronizer), Z_Construct_UClass_UTimecodeSynchronizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::NewProp_UserTimecodeSynchronizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::NewProp_UserTimecodeSynchronizer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::NewProp_UserTimecodeSynchronizer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeSynchronizerEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::ClassParams = {
		&UTimecodeSynchronizerEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimecodeSynchronizerEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UTimecodeSynchronizerEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimecodeSynchronizerEditorSettings.OuterSingleton, Z_Construct_UClass_UTimecodeSynchronizerEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimecodeSynchronizerEditorSettings.OuterSingleton;
	}
	template<> TIMECODESYNCHRONIZER_API UClass* StaticClass<UTimecodeSynchronizerEditorSettings>()
	{
		return UTimecodeSynchronizerEditorSettings::StaticClass();
	}
	UTimecodeSynchronizerEditorSettings::UTimecodeSynchronizerEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeSynchronizerEditorSettings);
	UTimecodeSynchronizerEditorSettings::~UTimecodeSynchronizerEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimecodeSynchronizerProjectSettings, UTimecodeSynchronizerProjectSettings::StaticClass, TEXT("UTimecodeSynchronizerProjectSettings"), &Z_Registration_Info_UClass_UTimecodeSynchronizerProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimecodeSynchronizerProjectSettings), 4159998948U) },
		{ Z_Construct_UClass_UTimecodeSynchronizerEditorSettings, UTimecodeSynchronizerEditorSettings::StaticClass, TEXT("UTimecodeSynchronizerEditorSettings"), &Z_Registration_Info_UClass_UTimecodeSynchronizerEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimecodeSynchronizerEditorSettings), 3701653619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_40990639(TEXT("/Script/TimecodeSynchronizer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizerProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
