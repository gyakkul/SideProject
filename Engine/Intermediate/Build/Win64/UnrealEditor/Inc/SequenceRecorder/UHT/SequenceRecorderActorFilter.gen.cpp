// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorderActorFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderActorFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter;
class UScriptStruct* FSequenceRecorderActorFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter, (UObject*)Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("SequenceRecorderActorFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter.OuterSingleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FSequenceRecorderActorFilter>()
{
	return FSequenceRecorderActorFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassesToRecord_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassesToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClassesToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderActorFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceRecorderActorFilter>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_Inner = { "ActorClassesToRecord", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_MetaData[] = {
		{ "Category", "Actor Filter" },
		{ "Comment", "/** Actor classes to accept for recording */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorFilter.h" },
		{ "ToolTip", "Actor classes to accept for recording" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord = { "ActorClassesToRecord", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceRecorderActorFilter, ActorClassesToRecord), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"SequenceRecorderActorFilter",
		sizeof(FSequenceRecorderActorFilter),
		alignof(FSequenceRecorderActorFilter),
		Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter.InnerSingleton, Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorFilter_h_Statics::ScriptStructInfo[] = {
		{ FSequenceRecorderActorFilter::StaticStruct, Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewStructOps, TEXT("SequenceRecorderActorFilter"), &Z_Registration_Info_UScriptStruct_SequenceRecorderActorFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceRecorderActorFilter), 653848120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorFilter_h_635586263(TEXT("/Script/SequenceRecorder"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderActorFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
