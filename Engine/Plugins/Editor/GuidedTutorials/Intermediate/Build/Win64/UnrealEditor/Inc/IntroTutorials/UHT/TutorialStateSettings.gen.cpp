// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TutorialStateSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialStateSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialStateSettings();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialStateSettings_NoRegister();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialProgress();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialProgress;
class UScriptStruct* FTutorialProgress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialProgress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialProgress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialProgress, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialProgress"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialProgress.OuterSingleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialProgress>()
{
	return FTutorialProgress::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tutorial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tutorial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUserDismissed_MetaData[];
#endif
		static void NewProp_bUserDismissed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserDismissed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Track the progress of an individual tutorial */" },
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
		{ "ToolTip", "Track the progress of an individual tutorial" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialProgress>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial = { "Tutorial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialProgress, Tutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage = { "CurrentStage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialProgress, CurrentStage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_SetBit(void* Obj)
	{
		((FTutorialProgress*)Obj)->bUserDismissed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed = { "bUserDismissed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTutorialProgress), &Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_Tutorial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_CurrentStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewProp_bUserDismissed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialProgress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialProgress",
		sizeof(FTutorialProgress),
		alignof(FTutorialProgress),
		Z_Construct_UScriptStruct_FTutorialProgress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialProgress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialProgress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialProgress()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialProgress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialProgress.InnerSingleton, Z_Construct_UScriptStruct_FTutorialProgress_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialProgress.InnerSingleton;
	}
	void UTutorialStateSettings::StaticRegisterNativesUTutorialStateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTutorialStateSettings);
	UClass* Z_Construct_UClass_UTutorialStateSettings_NoRegister()
	{
		return UTutorialStateSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialStateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TutorialsProgress_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialsProgress_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TutorialsProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDismissedAllTutorials_MetaData[];
#endif
		static void NewProp_bDismissedAllTutorials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDismissedAllTutorials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialStateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialStateSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Tutorial settings used to track completion state */" },
		{ "IncludePath", "TutorialStateSettings.h" },
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
		{ "ToolTip", "Tutorial settings used to track completion state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_Inner = { "TutorialsProgress", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTutorialProgress, METADATA_PARAMS(nullptr, 0) }; // 2212248725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_MetaData[] = {
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress = { "TutorialsProgress", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTutorialStateSettings, TutorialsProgress), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_MetaData)) }; // 2212248725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_MetaData[] = {
		{ "Comment", "/** Record if user has chosen to cancel all tutorials */" },
		{ "ModuleRelativePath", "Private/TutorialStateSettings.h" },
		{ "ToolTip", "Record if user has chosen to cancel all tutorials" },
	};
#endif
	void Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_SetBit(void* Obj)
	{
		((UTutorialStateSettings*)Obj)->bDismissedAllTutorials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials = { "bDismissedAllTutorials", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTutorialStateSettings), &Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialStateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_TutorialsProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialStateSettings_Statics::NewProp_bDismissedAllTutorials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialStateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialStateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTutorialStateSettings_Statics::ClassParams = {
		&UTutorialStateSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTutorialStateSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialStateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialStateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialStateSettings()
	{
		if (!Z_Registration_Info_UClass_UTutorialStateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTutorialStateSettings.OuterSingleton, Z_Construct_UClass_UTutorialStateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTutorialStateSettings.OuterSingleton;
	}
	template<> INTROTUTORIALS_API UClass* StaticClass<UTutorialStateSettings>()
	{
		return UTutorialStateSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialStateSettings);
	UTutorialStateSettings::~UTutorialStateSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_Statics::ScriptStructInfo[] = {
		{ FTutorialProgress::StaticStruct, Z_Construct_UScriptStruct_FTutorialProgress_Statics::NewStructOps, TEXT("TutorialProgress"), &Z_Registration_Info_UScriptStruct_TutorialProgress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialProgress), 2212248725U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTutorialStateSettings, UTutorialStateSettings::StaticClass, TEXT("UTutorialStateSettings"), &Z_Registration_Info_UClass_UTutorialStateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTutorialStateSettings), 2847163572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_2251623896(TEXT("/Script/IntroTutorials"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialStateSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
