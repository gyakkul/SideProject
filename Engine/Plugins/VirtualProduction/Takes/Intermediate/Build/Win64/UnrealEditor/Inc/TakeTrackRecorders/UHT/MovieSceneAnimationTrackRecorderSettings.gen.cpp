// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h"
#include "AnimationRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAnimationTrackRecorderSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTimecodeBoneMethod();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorderSettings();
	UPackage* Z_Construct_UPackage__Script_TakeTrackRecorders();
// End Cross Module References
	void UMovieSceneAnimationTrackRecorderEditorSettings::StaticRegisterNativesUMovieSceneAnimationTrackRecorderEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAnimationTrackRecorderEditorSettings);
	UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_NoRegister()
	{
		return UMovieSceneAnimationTrackRecorderEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AnimationTrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSubDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationSubDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRootAnimation_MetaData[];
#endif
		static void NewProp_bRemoveRootAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRootAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeBoneMethod_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeBoneMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorderSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeTrackRecorders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Animation Recorder" },
		{ "IncludePath", "TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationTrackName_MetaData[] = {
		{ "Category", "Animation Recorder Settings" },
		{ "Comment", "/** Name of the recorded animation track. */" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ToolTip", "Name of the recorded animation track." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationTrackName = { "AnimationTrackName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAnimationTrackRecorderEditorSettings, AnimationTrackName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationTrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationTrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationAssetName_MetaData[] = {
		{ "Category", "Animation Recorder Settings" },
		{ "Comment", "/** The name of the animation asset. */" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ToolTip", "The name of the animation asset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationAssetName = { "AnimationAssetName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAnimationTrackRecorderEditorSettings, AnimationAssetName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationSubDirectory_MetaData[] = {
		{ "Category", "Animation Recorder Settings" },
		{ "Comment", "/** The name of the subdirectory animations will be placed in. Leave this empty to place into the same directory as the sequence base path. */" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ToolTip", "The name of the subdirectory animations will be placed in. Leave this empty to place into the same directory as the sequence base path." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationSubDirectory = { "AnimationSubDirectory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAnimationTrackRecorderEditorSettings, AnimationSubDirectory), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationSubDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationSubDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_InterpMode_MetaData[] = {
		{ "Category", "Animation Recorder Settings" },
		{ "Comment", "/** Interpolation mode for the recorded keys. */" },
		{ "DisplayName", "Interpolation Mode" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ToolTip", "Interpolation mode for the recorded keys." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAnimationTrackRecorderEditorSettings, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_InterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_InterpMode_MetaData)) }; // 931686469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TangentMode_MetaData[] = {
		{ "Category", "Animation Recorder Settings" },
		{ "Comment", "/** Tangent mode for the recorded keys. */" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ToolTip", "Tangent mode for the recorded keys." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAnimationTrackRecorderEditorSettings, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TangentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TangentMode_MetaData)) }; // 161970341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_bRemoveRootAnimation_MetaData[] = {
		{ "Category", "Animation Recorder Settings" },
		{ "Comment", "/** If true we remove the root animation and move it to a transform track, if false we leave it on the root bone in the anim sequence*/" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ToolTip", "If true we remove the root animation and move it to a transform track, if false we leave it on the root bone in the anim sequence" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_bRemoveRootAnimation_SetBit(void* Obj)
	{
		((UMovieSceneAnimationTrackRecorderEditorSettings*)Obj)->bRemoveRootAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_bRemoveRootAnimation = { "bRemoveRootAnimation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAnimationTrackRecorderEditorSettings), &Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_bRemoveRootAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_bRemoveRootAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_bRemoveRootAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TimecodeBoneMethod_MetaData[] = {
		{ "Category", "Animation Recorder Settings" },
		{ "Comment", "/** The method to record timecode values onto bones */" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The method to record timecode values onto bones" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TimecodeBoneMethod = { "TimecodeBoneMethod", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAnimationTrackRecorderEditorSettings, TimecodeBoneMethod), Z_Construct_UScriptStruct_FTimecodeBoneMethod, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TimecodeBoneMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TimecodeBoneMethod_MetaData)) }; // 2179568785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_AnimationSubDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_InterpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TangentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_bRemoveRootAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::NewProp_TimecodeBoneMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAnimationTrackRecorderEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::ClassParams = {
		&UMovieSceneAnimationTrackRecorderEditorSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderEditorSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderEditorSettings.OuterSingleton;
	}
	template<> TAKETRACKRECORDERS_API UClass* StaticClass<UMovieSceneAnimationTrackRecorderEditorSettings>()
	{
		return UMovieSceneAnimationTrackRecorderEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAnimationTrackRecorderEditorSettings);
	UMovieSceneAnimationTrackRecorderEditorSettings::~UMovieSceneAnimationTrackRecorderEditorSettings() {}
	void UMovieSceneAnimationTrackRecorderSettings::StaticRegisterNativesUMovieSceneAnimationTrackRecorderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAnimationTrackRecorderSettings);
	UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_NoRegister()
	{
		return UMovieSceneAnimationTrackRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeTrackRecorders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Animation Recorder Settings" },
		{ "IncludePath", "TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneAnimationTrackRecorderSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAnimationTrackRecorderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics::ClassParams = {
		&UMovieSceneAnimationTrackRecorderSettings::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderSettings.OuterSingleton;
	}
	template<> TAKETRACKRECORDERS_API UClass* StaticClass<UMovieSceneAnimationTrackRecorderSettings>()
	{
		return UMovieSceneAnimationTrackRecorderSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAnimationTrackRecorderSettings);
	UMovieSceneAnimationTrackRecorderSettings::~UMovieSceneAnimationTrackRecorderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorderSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorderSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAnimationTrackRecorderEditorSettings, UMovieSceneAnimationTrackRecorderEditorSettings::StaticClass, TEXT("UMovieSceneAnimationTrackRecorderEditorSettings"), &Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAnimationTrackRecorderEditorSettings), 2683880951U) },
		{ Z_Construct_UClass_UMovieSceneAnimationTrackRecorderSettings, UMovieSceneAnimationTrackRecorderSettings::StaticClass, TEXT("UMovieSceneAnimationTrackRecorderSettings"), &Z_Registration_Info_UClass_UMovieSceneAnimationTrackRecorderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAnimationTrackRecorderSettings), 288462666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorderSettings_h_4168823604(TEXT("/Script/TakeTrackRecorders"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorderSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneAnimationTrackRecorderSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
