// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorderActorGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderActorGroup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_ASequenceRecorderGroup();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_ASequenceRecorderGroup_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_UActorRecording_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderActorGroup();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderActorGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	void USequenceRecorderActorGroup::StaticRegisterNativesUSequenceRecorderActorGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceRecorderActorGroup);
	UClass* Z_Construct_UClass_USequenceRecorderActorGroup_NoRegister()
	{
		return USequenceRecorderActorGroup::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecorderActorGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceRecordingBasePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceRecordingBasePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpecifyTargetLevelSequence_MetaData[];
#endif
		static void NewProp_bSpecifyTargetLevelSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecifyTargetLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDuplicateTargetLevelSequence_MetaData[];
#endif
		static void NewProp_bDuplicateTargetLevelSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDuplicateTargetLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordTargetLevelSequenceLength_MetaData[];
#endif
		static void NewProp_bRecordTargetLevelSequenceLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordTargetLevelSequenceLength;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RecordedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecordedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecorderActorGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecorderActorGroup.h" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderActorGroup, GroupName), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "Comment", "/** The base name of the sequence to record to. This name will also be used to auto-generate any assets created by this recording. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "The base name of the sequence to record to. This name will also be used to auto-generate any assets created by this recording." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderActorGroup, SequenceName), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "Comment", "/** Base path for this recording. Sub-assets will be created in subdirectories as specified */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Base path for this recording. Sub-assets will be created in subdirectories as specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath = { "SequenceRecordingBasePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderActorGroup, SequenceRecordingBasePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "Comment", "/** Whether we should specify the target level sequence or auto-create it */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Whether we should specify the target level sequence or auto-create it" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_SetBit(void* Obj)
	{
		((USequenceRecorderActorGroup*)Obj)->bSpecifyTargetLevelSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence = { "bSpecifyTargetLevelSequence", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderActorGroup), &Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "Comment", "/** The level sequence to record into */" },
		{ "EditCondition", "bSpecifyTargetLevelSequence" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "The level sequence to record into" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence = { "TargetLevelSequence", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderActorGroup, TargetLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "Comment", "/** Whether we should duplicate the target level sequence and record into the duplicate */" },
		{ "EditCondition", "bSpecifyTargetLevelSequence" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Whether we should duplicate the target level sequence and record into the duplicate" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_SetBit(void* Obj)
	{
		((USequenceRecorderActorGroup*)Obj)->bDuplicateTargetLevelSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence = { "bDuplicateTargetLevelSequence", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderActorGroup), &Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "Comment", "/** Whether we should record to the length of the target level sequence */" },
		{ "EditCondition", "bSpecifyTargetLevelSequence" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "Whether we should record to the length of the target level sequence" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_SetBit(void* Obj)
	{
		((USequenceRecorderActorGroup*)Obj)->bRecordTargetLevelSequenceLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength = { "bRecordTargetLevelSequenceLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderActorGroup), &Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_Inner = { "RecordedActors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorRecording_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_MetaData[] = {
		{ "Category", "Recording Groups" },
		{ "Comment", "/** A list of actor recordings in this group which contains both the actors to record as well as settings for each one. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
		{ "ToolTip", "A list of actor recordings in this group which contains both the actors to record as well as settings for each one." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors = { "RecordedActors", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderActorGroup, RecordedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceRecorderActorGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_SequenceRecordingBasePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bSpecifyTargetLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_TargetLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bDuplicateTargetLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_bRecordTargetLevelSequenceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderActorGroup_Statics::NewProp_RecordedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecorderActorGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecorderActorGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecorderActorGroup_Statics::ClassParams = {
		&USequenceRecorderActorGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceRecorderActorGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderActorGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecorderActorGroup()
	{
		if (!Z_Registration_Info_UClass_USequenceRecorderActorGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceRecorderActorGroup.OuterSingleton, Z_Construct_UClass_USequenceRecorderActorGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceRecorderActorGroup.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecorderActorGroup>()
	{
		return USequenceRecorderActorGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecorderActorGroup);
	USequenceRecorderActorGroup::~USequenceRecorderActorGroup() {}
	void ASequenceRecorderGroup::StaticRegisterNativesASequenceRecorderGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASequenceRecorderGroup);
	UClass* Z_Construct_UClass_ASequenceRecorderGroup_NoRegister()
	{
		return ASequenceRecorderGroup::StaticClass();
	}
	struct Z_Construct_UClass_ASequenceRecorderGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASequenceRecorderGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequenceRecorderGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SequenceRecorderActorGroup.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_Inner = { "ActorGroups", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USequenceRecorderActorGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderActorGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups = { "ActorGroups", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASequenceRecorderGroup, ActorGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASequenceRecorderGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequenceRecorderGroup_Statics::NewProp_ActorGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASequenceRecorderGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASequenceRecorderGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASequenceRecorderGroup_Statics::ClassParams = {
		&ASequenceRecorderGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASequenceRecorderGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASequenceRecorderGroup_Statics::PropPointers),
		0,
		0x049000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASequenceRecorderGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASequenceRecorderGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASequenceRecorderGroup()
	{
		if (!Z_Registration_Info_UClass_ASequenceRecorderGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASequenceRecorderGroup.OuterSingleton, Z_Construct_UClass_ASequenceRecorderGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASequenceRecorderGroup.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<ASequenceRecorderGroup>()
	{
		return ASequenceRecorderGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASequenceRecorderGroup);
	ASequenceRecorderGroup::~ASequenceRecorderGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceRecorderActorGroup, USequenceRecorderActorGroup::StaticClass, TEXT("USequenceRecorderActorGroup"), &Z_Registration_Info_UClass_USequenceRecorderActorGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceRecorderActorGroup), 839802945U) },
		{ Z_Construct_UClass_ASequenceRecorderGroup, ASequenceRecorderGroup::StaticClass, TEXT("ASequenceRecorderGroup"), &Z_Registration_Info_UClass_ASequenceRecorderGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASequenceRecorderGroup), 871776870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorGroup_h_1584423857(TEXT("/Script/SequenceRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
