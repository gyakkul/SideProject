// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimationRecorderParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationRecorderParameters() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UAnimationRecordingParameters();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UAnimationRecordingParameters_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	void UAnimationRecordingParameters::StaticRegisterNativesUAnimationRecordingParameters()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationRecordingParameters);
	UClass* Z_Construct_UClass_UAnimationRecordingParameters_NoRegister()
	{
		return UAnimationRecordingParameters::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationRecordingParameters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEndAfterDuration_MetaData[];
#endif
		static void NewProp_bEndAfterDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndAfterDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDurationSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDurationSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationRecordingParameters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationRecordingParameters_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationRecorderParameters.h" },
		{ "ModuleRelativePath", "Private/AnimationRecorderParameters.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleFrameRate_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Sample frame-rate of the recorded animation  */" },
		{ "ModuleRelativePath", "Private/AnimationRecorderParameters.h" },
		{ "ToolTip", "Sample frame-rate of the recorded animation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleFrameRate = { "SampleFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationRecordingParameters, SampleFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_bEndAfterDuration_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, this animation recording will automatically end after a set amount of time */" },
		{ "ModuleRelativePath", "Private/AnimationRecorderParameters.h" },
		{ "ToolTip", "If enabled, this animation recording will automatically end after a set amount of time" },
	};
#endif
	void Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_bEndAfterDuration_SetBit(void* Obj)
	{
		((UAnimationRecordingParameters*)Obj)->bEndAfterDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_bEndAfterDuration = { "bEndAfterDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationRecordingParameters), &Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_bEndAfterDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_bEndAfterDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_bEndAfterDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_MaximumDurationSeconds_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.03333" },
		{ "Comment", "/** The maximum duration of this animation recording */" },
		{ "EditCondition", "bEndAfterDuration" },
		{ "ModuleRelativePath", "Private/AnimationRecorderParameters.h" },
		{ "ToolTip", "The maximum duration of this animation recording" },
		{ "UIMin", "0.03333" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_MaximumDurationSeconds = { "MaximumDurationSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationRecordingParameters, MaximumDurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_MaximumDurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_MaximumDurationSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleRate_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimationRecorderParameters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationRecordingParameters, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationRecordingParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_bEndAfterDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_MaximumDurationSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationRecordingParameters_Statics::NewProp_SampleRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationRecordingParameters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationRecordingParameters>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationRecordingParameters_Statics::ClassParams = {
		&UAnimationRecordingParameters::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationRecordingParameters_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationRecordingParameters_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationRecordingParameters_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationRecordingParameters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationRecordingParameters()
	{
		if (!Z_Registration_Info_UClass_UAnimationRecordingParameters.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationRecordingParameters.OuterSingleton, Z_Construct_UClass_UAnimationRecordingParameters_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationRecordingParameters.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<UAnimationRecordingParameters>()
	{
		return UAnimationRecordingParameters::StaticClass();
	}
	UAnimationRecordingParameters::UAnimationRecordingParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationRecordingParameters);
	UAnimationRecordingParameters::~UAnimationRecordingParameters() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationRecordingParameters, UAnimationRecordingParameters::StaticClass, TEXT("UAnimationRecordingParameters"), &Z_Registration_Info_UClass_UAnimationRecordingParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationRecordingParameters), 993689163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_712948041(TEXT("/Script/SequenceRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
