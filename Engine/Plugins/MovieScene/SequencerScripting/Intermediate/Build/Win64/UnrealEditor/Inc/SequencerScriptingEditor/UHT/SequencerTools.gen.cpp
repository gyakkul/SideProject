// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerTools.h"
#include "Channels/MovieSceneEvent.h"
#include "MovieSceneBindingProxy.h"
#include "SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerTools() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
	SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
	SEQUENCERSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_USequencerToolsFunctionLibrary();
	SEQUENCERSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_USequencerToolsFunctionLibrary_NoRegister();
	SEQUENCERSCRIPTINGEDITOR_API UFunction* Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature();
	SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerBoundObjects();
	SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerExportFBXParams();
	SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerQuickBindingResult();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSeqExportOption_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxExportOption_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScriptingEditor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics
	{
		struct _Script_SequencerScriptingEditor_eventOnRenderMovieStopped_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_SequencerScriptingEditor_eventOnRenderMovieStopped_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SequencerScriptingEditor_eventOnRenderMovieStopped_Parms), &Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SequencerScriptingEditor, nullptr, "OnRenderMovieStopped__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::_Script_SequencerScriptingEditor_eventOnRenderMovieStopped_Parms), Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRenderMovieStopped_DelegateWrapper(const FScriptDelegate& OnRenderMovieStopped, bool bSuccess)
{
	struct _Script_SequencerScriptingEditor_eventOnRenderMovieStopped_Parms
	{
		bool bSuccess;
	};
	_Script_SequencerScriptingEditor_eventOnRenderMovieStopped_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnRenderMovieStopped.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerBoundObjects;
class UScriptStruct* FSequencerBoundObjects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerBoundObjects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerBoundObjects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerBoundObjects, (UObject*)Z_Construct_UPackage__Script_SequencerScriptingEditor(), TEXT("SequencerBoundObjects"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerBoundObjects.OuterSingleton;
}
template<> SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FSequencerBoundObjects>()
{
	return FSequencerBoundObjects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingProxy;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerBoundObjects>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BindingProxy_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BindingProxy = { "BindingProxy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerBoundObjects, BindingProxy), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BindingProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BindingProxy_MetaData)) }; // 716961670
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BoundObjects_Inner = { "BoundObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BoundObjects_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BoundObjects = { "BoundObjects", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerBoundObjects, BoundObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BoundObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BoundObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BindingProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BoundObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewProp_BoundObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScriptingEditor,
		nullptr,
		&NewStructOps,
		"SequencerBoundObjects",
		sizeof(FSequencerBoundObjects),
		alignof(FSequencerBoundObjects),
		Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerBoundObjects()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerBoundObjects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerBoundObjects.InnerSingleton, Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerBoundObjects.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult;
class UScriptStruct* FSequencerQuickBindingResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerQuickBindingResult, (UObject*)Z_Construct_UPackage__Script_SequencerScriptingEditor(), TEXT("SequencerQuickBindingResult"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult.OuterSingleton;
}
template<> SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FSequencerQuickBindingResult>()
{
	return FSequencerQuickBindingResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventEndpoint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PayloadNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper around result of quick binding for event track in sequencer. */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Wrapper around result of quick binding for event track in sequencer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerQuickBindingResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_EventEndpoint_MetaData[] = {
		{ "Comment", "/** Actual endpoint wrapped by this structure.  */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Actual endpoint wrapped by this structure." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_EventEndpoint = { "EventEndpoint", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerQuickBindingResult, EventEndpoint), Z_Construct_UClass_UK2Node_CustomEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_EventEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_EventEndpoint_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_PayloadNames_Inner = { "PayloadNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_PayloadNames_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Names of the payload variables of the event. */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Names of the payload variables of the event." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_PayloadNames = { "PayloadNames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerQuickBindingResult, PayloadNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_PayloadNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_PayloadNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_EventEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_PayloadNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewProp_PayloadNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScriptingEditor,
		nullptr,
		&NewStructOps,
		"SequencerQuickBindingResult",
		sizeof(FSequencerQuickBindingResult),
		alignof(FSequencerQuickBindingResult),
		Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerQuickBindingResult()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult.InnerSingleton, Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerExportFBXParams;
class UScriptStruct* FSequencerExportFBXParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerExportFBXParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerExportFBXParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerExportFBXParams, (UObject*)Z_Construct_UPackage__Script_SequencerScriptingEditor(), TEXT("SequencerExportFBXParams"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerExportFBXParams.OuterSingleton;
}
template<> SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FSequencerExportFBXParams>()
{
	return FSequencerExportFBXParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FBXFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FBXFileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerExportFBXParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerExportFBXParams, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerExportFBXParams, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_RootSequence_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_RootSequence = { "RootSequence", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerExportFBXParams, RootSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_RootSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_RootSequence_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerExportFBXParams, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Bindings_MetaData)) }; // 716961670
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x001400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerExportFBXParams, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Tracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_OverrideOptions_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_OverrideOptions = { "OverrideOptions", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerExportFBXParams, OverrideOptions), Z_Construct_UClass_UFbxExportOption_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_OverrideOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_OverrideOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_FBXFileName_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_FBXFileName = { "FBXFileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerExportFBXParams, FBXFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_FBXFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_FBXFileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_RootSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_OverrideOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewProp_FBXFileName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScriptingEditor,
		nullptr,
		&NewStructOps,
		"SequencerExportFBXParams",
		sizeof(FSequencerExportFBXParams),
		alignof(FSequencerExportFBXParams),
		Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerExportFBXParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerExportFBXParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerExportFBXParams.InnerSingleton, Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerExportFBXParams.InnerSingleton;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execImportFBXToControlRig)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActorWithControlRigTrack);
		P_GET_TARRAY_REF(FString,Z_Param_Out_SelectedControlRigNames);
		P_GET_OBJECT(UMovieSceneUserImportFBXControlRigSettings,Z_Param_ImportFBXControlRigSettings);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImportFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::ImportFBXToControlRig(Z_Param_World,Z_Param_InSequence,Z_Param_ActorWithControlRigTrack,Z_Param_Out_SelectedControlRigNames,Z_Param_ImportFBXControlRigSettings,Z_Param_ImportFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execCreateQuickBinding)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFunctionName);
		P_GET_UBOOL(Z_Param_bCallInEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerQuickBindingResult*)Z_Param__Result=USequencerToolsFunctionLibrary::CreateQuickBinding(Z_Param_InSequence,Z_Param_InObject,Z_Param_InFunctionName,Z_Param_bCallInEditor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execIsEventEndpointValid)
	{
		P_GET_STRUCT_REF(FSequencerQuickBindingResult,Z_Param_Out_InEndpoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::IsEventEndpointValid(Z_Param_Out_InEndpoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execCreateEvent)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_OBJECT(UMovieSceneEventSectionBase,Z_Param_InSection);
		P_GET_STRUCT_REF(FSequencerQuickBindingResult,Z_Param_Out_InEndpoint);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneEvent*)Z_Param__Result=USequencerToolsFunctionLibrary::CreateEvent(Z_Param_InSequence,Z_Param_InSection,Z_Param_Out_InEndpoint,Z_Param_Out_InPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execImportLevelSequenceFBX)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_TARRAY_REF(FMovieSceneBindingProxy,Z_Param_Out_InBindings);
		P_GET_OBJECT(UMovieSceneUserImportFBXSettings,Z_Param_InImportFBXSettings);
		P_GET_PROPERTY(FStrProperty,Z_Param_InImportFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::ImportLevelSequenceFBX(Z_Param_InWorld,Z_Param_InSequence,Z_Param_Out_InBindings,Z_Param_InImportFBXSettings,Z_Param_InImportFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execGetAnimSequenceLinkFromLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InLevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequenceAnimSequenceLink**)Z_Param__Result=USequencerToolsFunctionLibrary::GetAnimSequenceLinkFromLevelSequence(Z_Param_InLevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execGetLevelSequenceLinkFromAnimSequence)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_InAnimSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceLevelSequenceLink**)Z_Param__Result=USequencerToolsFunctionLibrary::GetLevelSequenceLinkFromAnimSequence(Z_Param_InAnimSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execClearLinkedAnimSequences)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InLevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		USequencerToolsFunctionLibrary::ClearLinkedAnimSequences(Z_Param_InLevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execLinkAnimSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_Sequence);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_OBJECT(UAnimSeqExportOption,Z_Param_ExportOptions);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::LinkAnimSequence(Z_Param_Sequence,Z_Param_AnimSequence,Z_Param_ExportOptions,Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execExportAnimSequence)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(ULevelSequence,Z_Param_Sequence);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_OBJECT(UAnimSeqExportOption,Z_Param_ExportOption);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_Binding);
		P_GET_UBOOL(Z_Param_bCreateLink);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::ExportAnimSequence(Z_Param_World,Z_Param_Sequence,Z_Param_AnimSequence,Z_Param_ExportOption,Z_Param_Out_Binding,Z_Param_bCreateLink);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execExportLevelSequenceFBX)
	{
		P_GET_STRUCT_REF(FSequencerExportFBXParams,Z_Param_Out_InParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::ExportLevelSequenceFBX(Z_Param_Out_InParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execGetObjectBindings)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObject);
		P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSequencerBoundObjects>*)Z_Param__Result=USequencerToolsFunctionLibrary::GetObjectBindings(Z_Param_InWorld,Z_Param_InSequence,Z_Param_Out_InObject,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execGetBoundObjects)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_TARRAY_REF(FMovieSceneBindingProxy,Z_Param_Out_InBindings);
		P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSequencerBoundObjects>*)Z_Param__Result=USequencerToolsFunctionLibrary::GetBoundObjects(Z_Param_InWorld,Z_Param_InSequence,Z_Param_Out_InBindings,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execCancelMovieRender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USequencerToolsFunctionLibrary::CancelMovieRender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execIsRenderingMovie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::IsRenderingMovie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerToolsFunctionLibrary::execRenderMovie)
	{
		P_GET_OBJECT(UMovieSceneCapture,Z_Param_InCaptureSettings);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFinishedCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequencerToolsFunctionLibrary::RenderMovie(Z_Param_InCaptureSettings,FOnRenderMovieStopped(Z_Param_OnFinishedCallback));
		P_NATIVE_END;
	}
	void USequencerToolsFunctionLibrary::StaticRegisterNativesUSequencerToolsFunctionLibrary()
	{
		UClass* Class = USequencerToolsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelMovieRender", &USequencerToolsFunctionLibrary::execCancelMovieRender },
			{ "ClearLinkedAnimSequences", &USequencerToolsFunctionLibrary::execClearLinkedAnimSequences },
			{ "CreateEvent", &USequencerToolsFunctionLibrary::execCreateEvent },
			{ "CreateQuickBinding", &USequencerToolsFunctionLibrary::execCreateQuickBinding },
			{ "ExportAnimSequence", &USequencerToolsFunctionLibrary::execExportAnimSequence },
			{ "ExportLevelSequenceFBX", &USequencerToolsFunctionLibrary::execExportLevelSequenceFBX },
			{ "GetAnimSequenceLinkFromLevelSequence", &USequencerToolsFunctionLibrary::execGetAnimSequenceLinkFromLevelSequence },
			{ "GetBoundObjects", &USequencerToolsFunctionLibrary::execGetBoundObjects },
			{ "GetLevelSequenceLinkFromAnimSequence", &USequencerToolsFunctionLibrary::execGetLevelSequenceLinkFromAnimSequence },
			{ "GetObjectBindings", &USequencerToolsFunctionLibrary::execGetObjectBindings },
			{ "ImportFBXToControlRig", &USequencerToolsFunctionLibrary::execImportFBXToControlRig },
			{ "ImportLevelSequenceFBX", &USequencerToolsFunctionLibrary::execImportLevelSequenceFBX },
			{ "IsEventEndpointValid", &USequencerToolsFunctionLibrary::execIsEventEndpointValid },
			{ "IsRenderingMovie", &USequencerToolsFunctionLibrary::execIsRenderingMovie },
			{ "LinkAnimSequence", &USequencerToolsFunctionLibrary::execLinkAnimSequence },
			{ "RenderMovie", &USequencerToolsFunctionLibrary::execRenderMovie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Movie Rendering" },
		{ "Comment", "/**\n\x09* Attempts to cancel an in-progress Render to Movie. Does nothing if there is no render in progress.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Attempts to cancel an in-progress Render to Movie. Does nothing if there is no render in progress." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "CancelMovieRender", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics
	{
		struct SequencerToolsFunctionLibrary_eventClearLinkedAnimSequences_Parms
		{
			ULevelSequence* InLevelSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevelSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::NewProp_InLevelSequence = { "InLevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventClearLinkedAnimSequences_Parms, InLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::NewProp_InLevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/*\n\x09 * Clear all linked anim sequences between this level sequence and any linked anim sequences\n\x09 *\n\x09 * @InLevelSequence LevelSequence to clean links for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Clear all linked anim sequences between this level sequence and any linked anim sequences\n*\n* @InLevelSequence LevelSequence to clean links for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "ClearLinkedAnimSequences", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::SequencerToolsFunctionLibrary_eventClearLinkedAnimSequences_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics
	{
		struct SequencerToolsFunctionLibrary_eventCreateEvent_Parms
		{
			UMovieSceneSequence* InSequence;
			UMovieSceneEventSectionBase* InSection;
			FSequencerQuickBindingResult InEndpoint;
			TArray<FString> InPayload;
			FMovieSceneEvent ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InEndpoint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPayload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPayload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPayload;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateEvent_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InSection = { "InSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateEvent_Parms, InSection), Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InEndpoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InEndpoint = { "InEndpoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateEvent_Parms, InEndpoint), Z_Construct_UScriptStruct_FSequencerQuickBindingResult, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InEndpoint_MetaData)) }; // 1738935445
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InPayload_Inner = { "InPayload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InPayload = { "InPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateEvent_Parms, InPayload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InPayload_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneEvent, METADATA_PARAMS(nullptr, 0) }; // 3632963668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InPayload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_InPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/**\n\x09 * Create an event from a previously created blueprint endpoint and a payload. The resulting event should be added only\n\x09 * to a channel of the section that was given as a parameter.\n\x09 * @param InSequence Main level sequence that holds the event track and to which the resulting event should be added.\n\x09 * @param InSection Section of the event track of the main sequence.\n\x09 * @param InEndpoint Previously created endpoint.\n\x09 * @param InPayload Values passed as payload to event, count must match the numbers of payload variable names in @InEndpoint.\n\x09 * @return The created movie event.\n\x09 * @see CreateQuickBinding\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Create an event from a previously created blueprint endpoint and a payload. The resulting event should be added only\nto a channel of the section that was given as a parameter.\n@param InSequence Main level sequence that holds the event track and to which the resulting event should be added.\n@param InSection Section of the event track of the main sequence.\n@param InEndpoint Previously created endpoint.\n@param InPayload Values passed as payload to event, count must match the numbers of payload variable names in @InEndpoint.\n@return The created movie event.\n@see CreateQuickBinding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "CreateEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::SequencerToolsFunctionLibrary_eventCreateEvent_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics
	{
		struct SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms
		{
			UMovieSceneSequence* InSequence;
			UObject* InObject;
			FString InFunctionName;
			bool bCallInEditor;
			FSequencerQuickBindingResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFunctionName;
		static void NewProp_bCallInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallInEditor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InFunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InFunctionName = { "InFunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms, InFunctionName), METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InFunctionName_MetaData)) };
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_bCallInEditor_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms*)Obj)->bCallInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_bCallInEditor = { "bCallInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_bCallInEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerQuickBindingResult, METADATA_PARAMS(nullptr, 0) }; // 1738935445
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_InFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_bCallInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/**\n\x09 * Create a quick binding to an actor's member method to be used in an event sequence.\n\x09 * @param InActor Actor that will be bound\n\x09 * @param InFunctionName Name of the method, as it is displayed in the Blueprint Editor. eg. \"Set Actor Scale 3D\"\n\x09 * @param bCallInEditor Should the event be callable in editor.\n\x09 * @return The created binding.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Create a quick binding to an actor's member method to be used in an event sequence.\n@param InActor Actor that will be bound\n@param InFunctionName Name of the method, as it is displayed in the Blueprint Editor. eg. \"Set Actor Scale 3D\"\n@param bCallInEditor Should the event be callable in editor.\n@return The created binding." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "CreateQuickBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::SequencerToolsFunctionLibrary_eventCreateQuickBinding_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics
	{
		struct SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms
		{
			UWorld* World;
			ULevelSequence* Sequence;
			UAnimSequence* AnimSequence;
			UAnimSeqExportOption* ExportOption;
			FMovieSceneBindingProxy Binding;
			bool bCreateLink;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static void NewProp_bCreateLink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateLink;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_ExportOption = { "ExportOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms, ExportOption), Z_Construct_UClass_UAnimSeqExportOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_Binding_MetaData)) }; // 716961670
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_bCreateLink_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms*)Obj)->bCreateLink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_bCreateLink = { "bCreateLink", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_bCreateLink_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_ExportOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_bCreateLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/*\n\x09 * Export Passed in Binding as an Anim Seqquence.\n\x09 *\n\x09 * @InWorld World to export\n\x09 * @InSequence Sequence to export\n\x09 * @AnimSequence The AnimSequence to save into.\n\x09 * @ExportOption The export options for the sequence.\n\x09 * @InBinding Binding to export that has a skelmesh component on it\n\x09 * @InAnimSequenceFilename File to create\n\x09 * @bCreateLink If true will create a link between the animation sequence and the level sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Export Passed in Binding as an Anim Seqquence.\n*\n* @InWorld World to export\n* @InSequence Sequence to export\n* @AnimSequence The AnimSequence to save into.\n* @ExportOption The export options for the sequence.\n* @InBinding Binding to export that has a skelmesh component on it\n* @InAnimSequenceFilename File to create\n* @bCreateLink If true will create a link between the animation sequence and the level sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "ExportAnimSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::SequencerToolsFunctionLibrary_eventExportAnimSequence_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics
	{
		struct SequencerToolsFunctionLibrary_eventExportLevelSequenceFBX_Parms
		{
			FSequencerExportFBXParams InParams;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventExportLevelSequenceFBX_Parms, InParams), Z_Construct_UScriptStruct_FSequencerExportFBXParams, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_InParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_InParams_MetaData)) }; // 3740208986
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventExportLevelSequenceFBX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventExportLevelSequenceFBX_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_InParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | FBX" },
		{ "Comment", "/*\n\x09 * Export Passed in Bindings and Tracks to FBX\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Export Passed in Bindings and Tracks to FBX" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "ExportLevelSequenceFBX", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::SequencerToolsFunctionLibrary_eventExportLevelSequenceFBX_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics
	{
		struct SequencerToolsFunctionLibrary_eventGetAnimSequenceLinkFromLevelSequence_Parms
		{
			ULevelSequence* InLevelSequence;
			ULevelSequenceAnimSequenceLink* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::NewProp_InLevelSequence = { "InLevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetAnimSequenceLinkFromLevelSequence_Parms, InLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetAnimSequenceLinkFromLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::NewProp_InLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/*\n\x09 * Get the links to the anim sequences if they exist on this level sequence\n\x09 *\n\x09 * @InLevelSequence LevelSequence to get links from\n\x09 * @return Returns the link object if it exists, nullptr if it doesn't\n\x09*/" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Get the links to the anim sequences if they exist on this level sequence\n*\n* @InLevelSequence LevelSequence to get links from\n* @return Returns the link object if it exists, nullptr if it doesn't" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "GetAnimSequenceLinkFromLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::SequencerToolsFunctionLibrary_eventGetAnimSequenceLinkFromLevelSequence_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics
	{
		struct SequencerToolsFunctionLibrary_eventGetBoundObjects_Parms
		{
			UWorld* InWorld;
			ULevelSequence* InSequence;
			TArray<FMovieSceneBindingProxy> InBindings;
			FSequencerScriptingRange InRange;
			TArray<FSequencerBoundObjects> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetBoundObjects_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetBoundObjects_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InBindings_Inner = { "InBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InBindings = { "InBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetBoundObjects_Parms, InBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InBindings_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetBoundObjects_Parms, InRange), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InRange_MetaData)) }; // 4025213987
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSequencerBoundObjects, METADATA_PARAMS(nullptr, 0) }; // 3114823428
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3114823428
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools" },
		{ "Comment", "/*\n\x09 * Retrieve all objects currently bound to the specified binding identifiers. The sequence will be evaluated in lower bound of the specified range, \n\x09 * which allows for retrieving spawnables in that period of time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Retrieve all objects currently bound to the specified binding identifiers. The sequence will be evaluated in lower bound of the specified range,\n* which allows for retrieving spawnables in that period of time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "GetBoundObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::SequencerToolsFunctionLibrary_eventGetBoundObjects_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics
	{
		struct SequencerToolsFunctionLibrary_eventGetLevelSequenceLinkFromAnimSequence_Parms
		{
			UAnimSequence* InAnimSequence;
			UAnimSequenceLevelSequenceLink* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::NewProp_InAnimSequence = { "InAnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetLevelSequenceLinkFromAnimSequence_Parms, InAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetLevelSequenceLinkFromAnimSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::NewProp_InAnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/*\n\x09 * Get the link to the level sequence if it exists on this anim sequence\n\x09 *\n\x09 * @InAnimSequence AnimSequence to get links from\n\x09 * @return Returns the link object if it exists, nullptr if it doesn't\n\x09*/" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Get the link to the level sequence if it exists on this anim sequence\n*\n* @InAnimSequence AnimSequence to get links from\n* @return Returns the link object if it exists, nullptr if it doesn't" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "GetLevelSequenceLinkFromAnimSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::SequencerToolsFunctionLibrary_eventGetLevelSequenceLinkFromAnimSequence_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics
	{
		struct SequencerToolsFunctionLibrary_eventGetObjectBindings_Parms
		{
			UWorld* InWorld;
			ULevelSequence* InSequence;
			TArray<UObject*> InObject;
			FSequencerScriptingRange InRange;
			TArray<FSequencerBoundObjects> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObject_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetObjectBindings_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetObjectBindings_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InObject_Inner = { "InObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetObjectBindings_Parms, InObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetObjectBindings_Parms, InRange), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InRange_MetaData)) }; // 4025213987
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSequencerBoundObjects, METADATA_PARAMS(nullptr, 0) }; // 3114823428
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventGetObjectBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3114823428
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InObject_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools" },
		{ "Comment", "/*\n\x09 * Get the object bindings for the requested object. The sequence will be evaluated in lower bound of the specified range, \n\x09 * which allows for retrieving spawnables in that period of time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Get the object bindings for the requested object. The sequence will be evaluated in lower bound of the specified range,\n* which allows for retrieving spawnables in that period of time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "GetObjectBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::SequencerToolsFunctionLibrary_eventGetObjectBindings_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics
	{
		struct SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms
		{
			UWorld* World;
			ULevelSequence* InSequence;
			FString ActorWithControlRigTrack;
			TArray<FString> SelectedControlRigNames;
			UMovieSceneUserImportFBXControlRigSettings* ImportFBXControlRigSettings;
			FString ImportFilename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorWithControlRigTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorWithControlRigTrack;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedControlRigNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedControlRigNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedControlRigNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportFBXControlRigSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ActorWithControlRigTrack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ActorWithControlRigTrack = { "ActorWithControlRigTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms, ActorWithControlRigTrack), METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ActorWithControlRigTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ActorWithControlRigTrack_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_SelectedControlRigNames_Inner = { "SelectedControlRigNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_SelectedControlRigNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_SelectedControlRigNames = { "SelectedControlRigNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms, SelectedControlRigNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_SelectedControlRigNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_SelectedControlRigNames_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ImportFBXControlRigSettings = { "ImportFBXControlRigSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms, ImportFBXControlRigSettings), Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ImportFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ImportFilename = { "ImportFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms, ImportFilename), METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ImportFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ImportFilename_MetaData)) };
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ActorWithControlRigTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_SelectedControlRigNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_SelectedControlRigNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ImportFBXControlRigSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ImportFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | FBX" },
		{ "Comment", "/*\n\x09 * Import FBX onto a control rig with the specified track name\n\x09 *\n\x09 * @InWorld World to import to\n\x09 * @InSequence InSequence to import\n\x09 * @ActorWithControlRigTrack ActorWithControlRigTrack The name of the actor with the control rig track we are importing onto\n\x09 * @SelectedControlRigNames  List of selected control rig names. Will use them if  ImportFBXControlRigSettings->bImportOntoSelectedControls is true\n\x09 * @ImportFBXControlRigSettings Settings to control import.\n\x09 * @InImportFileName Path to fbx file to create\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Import FBX onto a control rig with the specified track name\n*\n* @InWorld World to import to\n* @InSequence InSequence to import\n* @ActorWithControlRigTrack ActorWithControlRigTrack The name of the actor with the control rig track we are importing onto\n* @SelectedControlRigNames  List of selected control rig names. Will use them if  ImportFBXControlRigSettings->bImportOntoSelectedControls is true\n* @ImportFBXControlRigSettings Settings to control import.\n* @InImportFileName Path to fbx file to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "ImportFBXToControlRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::SequencerToolsFunctionLibrary_eventImportFBXToControlRig_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics
	{
		struct SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms
		{
			UWorld* InWorld;
			ULevelSequence* InSequence;
			TArray<FMovieSceneBindingProxy> InBindings;
			UMovieSceneUserImportFBXSettings* InImportFBXSettings;
			FString InImportFilename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBindings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InImportFBXSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InImportFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InImportFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InBindings_Inner = { "InBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InBindings = { "InBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms, InBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InBindings_MetaData)) }; // 716961670
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InImportFBXSettings = { "InImportFBXSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms, InImportFBXSettings), Z_Construct_UClass_UMovieSceneUserImportFBXSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InImportFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InImportFilename = { "InImportFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms, InImportFilename), METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InImportFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InImportFilename_MetaData)) };
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InImportFBXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_InImportFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | FBX" },
		{ "Comment", "/*\n\x09 * Import FBX onto Passed in Bindings\n\x09 *\n\x09 * @InWorld World to import to\n\x09 * @InSequence InSequence to import\n\x09 * @InBindings InBindings to import\n\x09 * @InImportFBXSettings Settings to control import.\n\x09 * @InImportFileName Path to fbx file to import from\n\x09 * @InPlayer Player to bind to\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Import FBX onto Passed in Bindings\n*\n* @InWorld World to import to\n* @InSequence InSequence to import\n* @InBindings InBindings to import\n* @InImportFBXSettings Settings to control import.\n* @InImportFileName Path to fbx file to import from\n* @InPlayer Player to bind to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "ImportLevelSequenceFBX", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::SequencerToolsFunctionLibrary_eventImportLevelSequenceFBX_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics
	{
		struct SequencerToolsFunctionLibrary_eventIsEventEndpointValid_Parms
		{
			FSequencerQuickBindingResult InEndpoint;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InEndpoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_InEndpoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_InEndpoint = { "InEndpoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventIsEventEndpointValid_Parms, InEndpoint), Z_Construct_UScriptStruct_FSequencerQuickBindingResult, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_InEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_InEndpoint_MetaData)) }; // 1738935445
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventIsEventEndpointValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventIsEventEndpointValid_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_InEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/**\n\x09 * Check if an endpoint is valid and can be used to create movie scene event.\n\x09 * @param InEndpoint Endpoint to check.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Check if an endpoint is valid and can be used to create movie scene event.\n@param InEndpoint Endpoint to check." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "IsEventEndpointValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::SequencerToolsFunctionLibrary_eventIsEventEndpointValid_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics
	{
		struct SequencerToolsFunctionLibrary_eventIsRenderingMovie_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventIsRenderingMovie_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventIsRenderingMovie_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Movie Rendering" },
		{ "Comment", "/** \n\x09* Returns if Render to Movie is currently in progress.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Returns if Render to Movie is currently in progress." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "IsRenderingMovie", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::SequencerToolsFunctionLibrary_eventIsRenderingMovie_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics
	{
		struct SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms
		{
			ULevelSequence* Sequence;
			UAnimSequence* AnimSequence;
			const UAnimSeqExportOption* ExportOptions;
			FMovieSceneBindingProxy Binding;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ExportOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ExportOptions = { "ExportOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms, ExportOptions), Z_Construct_UClass_UAnimSeqExportOption_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ExportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ExportOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_Binding_MetaData)) }; // 716961670
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ExportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Animation" },
		{ "Comment", "/*\n\x09 * Links a LevelSequence's SkeletalMesh binding to an existing anim sequence.\n\x09 *\n\x09 * @InSequence Sequence to link from\n\x09 * @AnimSequence The AnimSequence to link to.\n\x09 * @ExportOption The export options that should be used when baking the LevelSequence.\n\x09 * @InBinding Binding that has a skelmesh component on it\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "* Links a LevelSequence's SkeletalMesh binding to an existing anim sequence.\n*\n* @InSequence Sequence to link from\n* @AnimSequence The AnimSequence to link to.\n* @ExportOption The export options that should be used when baking the LevelSequence.\n* @InBinding Binding that has a skelmesh component on it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "LinkAnimSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::SequencerToolsFunctionLibrary_eventLinkAnimSequence_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics
	{
		struct SequencerToolsFunctionLibrary_eventRenderMovie_Parms
		{
			UMovieSceneCapture* InCaptureSettings;
			FScriptDelegate OnFinishedCallback;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCaptureSettings;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFinishedCallback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_InCaptureSettings = { "InCaptureSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventRenderMovie_Parms, InCaptureSettings), Z_Construct_UClass_UMovieSceneCapture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_OnFinishedCallback = { "OnFinishedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerToolsFunctionLibrary_eventRenderMovie_Parms, OnFinishedCallback), Z_Construct_UDelegateFunction_SequencerScriptingEditor_OnRenderMovieStopped__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1547912756
	void Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerToolsFunctionLibrary_eventRenderMovie_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerToolsFunctionLibrary_eventRenderMovie_Parms), &Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_InCaptureSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_OnFinishedCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Movie Rendering" },
		{ "Comment", "/**\n\x09* Attempts to render a sequence to movie based on the specified settings. This will automatically detect\n\x09* if we're rendering via a PIE instance or a new process based on the passed in settings. Will return false\n\x09* if the state is not valid (ie: null or missing required parameters, capture in progress, etc.), true otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ToolTip", "Attempts to render a sequence to movie based on the specified settings. This will automatically detect\nif we're rendering via a PIE instance or a new process based on the passed in settings. Will return false\nif the state is not valid (ie: null or missing required parameters, capture in progress, etc.), true otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerToolsFunctionLibrary, nullptr, "RenderMovie", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::SequencerToolsFunctionLibrary_eventRenderMovie_Parms), Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerToolsFunctionLibrary);
	UClass* Z_Construct_UClass_USequencerToolsFunctionLibrary_NoRegister()
	{
		return USequencerToolsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScriptingEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_CancelMovieRender, "CancelMovieRender" }, // 1757800742
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ClearLinkedAnimSequences, "ClearLinkedAnimSequences" }, // 66046861
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateEvent, "CreateEvent" }, // 1888834760
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_CreateQuickBinding, "CreateQuickBinding" }, // 1251148518
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportAnimSequence, "ExportAnimSequence" }, // 2843662527
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ExportLevelSequenceFBX, "ExportLevelSequenceFBX" }, // 220094384
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetAnimSequenceLinkFromLevelSequence, "GetAnimSequenceLinkFromLevelSequence" }, // 3017256297
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetBoundObjects, "GetBoundObjects" }, // 745471334
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetLevelSequenceLinkFromAnimSequence, "GetLevelSequenceLinkFromAnimSequence" }, // 3953773756
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_GetObjectBindings, "GetObjectBindings" }, // 2977254091
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportFBXToControlRig, "ImportFBXToControlRig" }, // 179197860
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_ImportLevelSequenceFBX, "ImportLevelSequenceFBX" }, // 133033035
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsEventEndpointValid, "IsEventEndpointValid" }, // 2997320156
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_IsRenderingMovie, "IsRenderingMovie" }, // 3748226082
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_LinkAnimSequence, "LinkAnimSequence" }, // 3440760156
		{ &Z_Construct_UFunction_USequencerToolsFunctionLibrary_RenderMovie, "RenderMovie" }, // 1260530788
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * This is a set of helper functions to access various parts of the Sequencer API via Python. Because Sequencer itself is not suitable for exposing, most functionality\n * gets wrapped by UObjects that have an easier API to work with. This UObject provides access to these wrapper UObjects where needed. \n */" },
		{ "IncludePath", "SequencerTools.h" },
		{ "ModuleRelativePath", "Public/SequencerTools.h" },
		{ "ScriptName", "SequencerTools" },
		{ "ToolTip", "This is a set of helper functions to access various parts of the Sequencer API via Python. Because Sequencer itself is not suitable for exposing, most functionality\ngets wrapped by UObjects that have an easier API to work with. This UObject provides access to these wrapper UObjects where needed." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerToolsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::ClassParams = {
		&USequencerToolsFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerToolsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USequencerToolsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerToolsFunctionLibrary.OuterSingleton, Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerToolsFunctionLibrary.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTINGEDITOR_API UClass* StaticClass<USequencerToolsFunctionLibrary>()
	{
		return USequencerToolsFunctionLibrary::StaticClass();
	}
	USequencerToolsFunctionLibrary::USequencerToolsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerToolsFunctionLibrary);
	USequencerToolsFunctionLibrary::~USequencerToolsFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_Statics::ScriptStructInfo[] = {
		{ FSequencerBoundObjects::StaticStruct, Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics::NewStructOps, TEXT("SequencerBoundObjects"), &Z_Registration_Info_UScriptStruct_SequencerBoundObjects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerBoundObjects), 3114823428U) },
		{ FSequencerQuickBindingResult::StaticStruct, Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics::NewStructOps, TEXT("SequencerQuickBindingResult"), &Z_Registration_Info_UScriptStruct_SequencerQuickBindingResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerQuickBindingResult), 1738935445U) },
		{ FSequencerExportFBXParams::StaticStruct, Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics::NewStructOps, TEXT("SequencerExportFBXParams"), &Z_Registration_Info_UScriptStruct_SequencerExportFBXParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerExportFBXParams), 3740208986U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerToolsFunctionLibrary, USequencerToolsFunctionLibrary::StaticClass, TEXT("USequencerToolsFunctionLibrary"), &Z_Registration_Info_UClass_USequencerToolsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerToolsFunctionLibrary), 247560463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_3406379946(TEXT("/Script/SequencerScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
