// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sections/MovieScene3DTransformSectionRecorderSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformSectionRecorderSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	void UMovieScene3DTransformSectionRecorderSettings::StaticRegisterNativesUMovieScene3DTransformSectionRecorderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DTransformSectionRecorderSettings);
	UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_NoRegister()
	{
		return UMovieScene3DTransformSectionRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordTransforms_MetaData[];
#endif
		static void NewProp_bRecordTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScene3DTransformSectionRecorderSettings.h" },
		{ "ModuleRelativePath", "Private/Sections/MovieScene3DTransformSectionRecorderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/**\n\x09 * Whether to record actor transforms. This can be useful if you want the actors to end up in specific locations after the sequence.\n\x09 * By default we rely on animations to provide transforms, but this can be changed using the \"Record In World Space\" animation setting.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Sections/MovieScene3DTransformSectionRecorderSettings.h" },
		{ "ToolTip", "Whether to record actor transforms. This can be useful if you want the actors to end up in specific locations after the sequence.\nBy default we rely on animations to provide transforms, but this can be changed using the \"Record In World Space\" animation setting." },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_SetBit(void* Obj)
	{
		((UMovieScene3DTransformSectionRecorderSettings*)Obj)->bRecordTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms = { "bRecordTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieScene3DTransformSectionRecorderSettings), &Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::NewProp_bRecordTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformSectionRecorderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::ClassParams = {
		&UMovieScene3DTransformSectionRecorderSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DTransformSectionRecorderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DTransformSectionRecorderSettings.OuterSingleton, Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DTransformSectionRecorderSettings.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<UMovieScene3DTransformSectionRecorderSettings>()
	{
		return UMovieScene3DTransformSectionRecorderSettings::StaticClass();
	}
	UMovieScene3DTransformSectionRecorderSettings::UMovieScene3DTransformSectionRecorderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformSectionRecorderSettings);
	UMovieScene3DTransformSectionRecorderSettings::~UMovieScene3DTransformSectionRecorderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_Sections_MovieScene3DTransformSectionRecorderSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_Sections_MovieScene3DTransformSectionRecorderSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DTransformSectionRecorderSettings, UMovieScene3DTransformSectionRecorderSettings::StaticClass, TEXT("UMovieScene3DTransformSectionRecorderSettings"), &Z_Registration_Info_UClass_UMovieScene3DTransformSectionRecorderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DTransformSectionRecorderSettings), 2870937407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_Sections_MovieScene3DTransformSectionRecorderSettings_h_3119480774(TEXT("/Script/SequenceRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_Sections_MovieScene3DTransformSectionRecorderSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_Sections_MovieScene3DTransformSectionRecorderSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
