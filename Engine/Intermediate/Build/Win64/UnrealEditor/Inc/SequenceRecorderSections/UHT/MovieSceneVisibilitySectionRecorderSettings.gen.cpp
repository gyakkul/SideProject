// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneVisibilitySectionRecorderSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilitySectionRecorderSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings();
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorderSections();
// End Cross Module References
	void UMovieSceneVisibilitySectionRecorderSettings::StaticRegisterNativesUMovieSceneVisibilitySectionRecorderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneVisibilitySectionRecorderSettings);
	UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_NoRegister()
	{
		return UMovieSceneVisibilitySectionRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordVisibility_MetaData[];
#endif
		static void NewProp_bRecordVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorderSections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneVisibilitySectionRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneVisibilitySectionRecorderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** Whether to record actor visibility. */" },
		{ "ModuleRelativePath", "Public/MovieSceneVisibilitySectionRecorderSettings.h" },
		{ "ToolTip", "Whether to record actor visibility." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_SetBit(void* Obj)
	{
		((UMovieSceneVisibilitySectionRecorderSettings*)Obj)->bRecordVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility = { "bRecordVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneVisibilitySectionRecorderSettings), &Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::NewProp_bRecordVisibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneVisibilitySectionRecorderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::ClassParams = {
		&UMovieSceneVisibilitySectionRecorderSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneVisibilitySectionRecorderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneVisibilitySectionRecorderSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneVisibilitySectionRecorderSettings.OuterSingleton;
	}
	template<> SEQUENCERECORDERSECTIONS_API UClass* StaticClass<UMovieSceneVisibilitySectionRecorderSettings>()
	{
		return UMovieSceneVisibilitySectionRecorderSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVisibilitySectionRecorderSettings);
	UMovieSceneVisibilitySectionRecorderSettings::~UMovieSceneVisibilitySectionRecorderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneVisibilitySectionRecorderSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneVisibilitySectionRecorderSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneVisibilitySectionRecorderSettings, UMovieSceneVisibilitySectionRecorderSettings::StaticClass, TEXT("UMovieSceneVisibilitySectionRecorderSettings"), &Z_Registration_Info_UClass_UMovieSceneVisibilitySectionRecorderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneVisibilitySectionRecorderSettings), 973634715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneVisibilitySectionRecorderSettings_h_1492629104(TEXT("/Script/SequenceRecorderSections"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneVisibilitySectionRecorderSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneVisibilitySectionRecorderSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
