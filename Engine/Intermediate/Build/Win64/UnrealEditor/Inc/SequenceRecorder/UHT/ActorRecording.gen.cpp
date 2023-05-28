// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorRecording.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationRecordingSettings.h"
#include "ActorRecordingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorRecording() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UActorRecording();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UActorRecording_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecordingSettings();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	void UActorRecording::StaticRegisterNativesUActorRecording()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorRecording);
	UClass* Z_Construct_UClass_UActorRecording_NoRegister()
	{
		return UActorRecording::StaticClass();
	}
	struct Z_Construct_UClass_UActorRecording_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateLevelSequence_MetaData[];
#endif
		static void NewProp_bCreateLevelSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TakeNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpecifyTargetAnimation_MetaData[];
#endif
		static void NewProp_bSpecifyTargetAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecifyTargetAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordToPossessable_MetaData[];
#endif
		static void NewProp_bRecordToPossessable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordToPossessable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorRecording_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequenceRecordingBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorRecording.h" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings = { "ActorSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecording, ActorSettings), Z_Construct_UScriptStruct_FActorRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings_MetaData)) }; // 4188808000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** Whether this actor is active and to be recorded when the 'Record' button is pressed. */" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether this actor is active and to be recorded when the 'Record' button is pressed." },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** Whether to create a level sequence for this actor recording */" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether to create a level sequence for this actor recording" },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bCreateLevelSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence = { "bCreateLevelSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** The level sequence to record into */" },
		{ "EditCondition", "bCreateLevelSequence" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The level sequence to record into" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence = { "TargetLevelSequence", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecording, TargetLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** Optional target name to record to. If not specified, the actor label will be used */" },
		{ "EditCondition", "bCreateLevelSequence" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Optional target name to record to. If not specified, the actor label will be used" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecording, TargetName), METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** Specify the take number for the new recording */" },
		{ "EditCondition", "bCreateLevelSequence" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Specify the take number for the new recording" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber = { "TakeNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecording, TakeNumber), METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_MetaData[] = {
		{ "Category", "Animation Recording" },
		{ "Comment", "/** Whether we should specify the target animation or auto-create it */" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether we should specify the target animation or auto-create it" },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bSpecifyTargetAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation = { "bSpecifyTargetAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation_MetaData[] = {
		{ "Category", "Animation Recording" },
		{ "Comment", "/** The target animation we want to record to */" },
		{ "EditCondition", "bSpecifyTargetAnimation" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The target animation we want to record to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation = { "TargetAnimation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecording, TargetAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings_MetaData[] = {
		{ "Category", "Animation Recording" },
		{ "Comment", "/** The settings to apply to this actor's animation */" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The settings to apply to this actor's animation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings = { "AnimationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecording, AnimationSettings), Z_Construct_UScriptStruct_FAnimationRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings_MetaData)) }; // 776846529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** Whether to record to 'possessable' (i.e. level-owned) or 'spawnable' (i.e. sequence-owned) actors. Defaults to the global setting. */" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "Whether to record to 'possessable' (i.e. level-owned) or 'spawnable' (i.e. sequence-owned) actors. Defaults to the global setting." },
	};
#endif
	void Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_SetBit(void* Obj)
	{
		((UActorRecording*)Obj)->bRecordToPossessable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable = { "bRecordToPossessable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorRecording), &Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "Comment", "/** The actor we want to record */" },
		{ "ModuleRelativePath", "Public/ActorRecording.h" },
		{ "ToolTip", "The actor we want to record" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord = { "ActorToRecord", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecording, ActorToRecord), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bCreateLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TakeNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bSpecifyTargetAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_TargetAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_AnimationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_bRecordToPossessable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecording_Statics::NewProp_ActorToRecord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorRecording_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorRecording>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorRecording_Statics::ClassParams = {
		&UActorRecording::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorRecording_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorRecording_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecording_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorRecording()
	{
		if (!Z_Registration_Info_UClass_UActorRecording.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorRecording.OuterSingleton, Z_Construct_UClass_UActorRecording_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorRecording.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<UActorRecording>()
	{
		return UActorRecording::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorRecording);
	UActorRecording::~UActorRecording() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorRecording, UActorRecording::StaticClass, TEXT("UActorRecording"), &Z_Registration_Info_UClass_UActorRecording, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorRecording), 3147457320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_1498223542(TEXT("/Script/SequenceRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
