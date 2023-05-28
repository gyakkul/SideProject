// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneEventTrackExtensions.h"
#include "Channels/MovieSceneEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrackExtensions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneEventTrackExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneEventTrackExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneEventTrackExtensions::execGetBoundObjectPropertyClass)
	{
		P_GET_STRUCT_REF(FMovieSceneEvent,Z_Param_Out_EventKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UMovieSceneEventTrackExtensions::GetBoundObjectPropertyClass(Z_Param_Out_EventKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneEventTrackExtensions::execAddEventTriggerSection)
	{
		P_GET_OBJECT(UMovieSceneEventTrack,Z_Param_InTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneEventTriggerSection**)Z_Param__Result=UMovieSceneEventTrackExtensions::AddEventTriggerSection(Z_Param_InTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneEventTrackExtensions::execAddEventRepeaterSection)
	{
		P_GET_OBJECT(UMovieSceneEventTrack,Z_Param_InTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneEventRepeaterSection**)Z_Param__Result=UMovieSceneEventTrackExtensions::AddEventRepeaterSection(Z_Param_InTrack);
		P_NATIVE_END;
	}
	void UMovieSceneEventTrackExtensions::StaticRegisterNativesUMovieSceneEventTrackExtensions()
	{
		UClass* Class = UMovieSceneEventTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEventRepeaterSection", &UMovieSceneEventTrackExtensions::execAddEventRepeaterSection },
			{ "AddEventTriggerSection", &UMovieSceneEventTrackExtensions::execAddEventTriggerSection },
			{ "GetBoundObjectPropertyClass", &UMovieSceneEventTrackExtensions::execGetBoundObjectPropertyClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics
	{
		struct MovieSceneEventTrackExtensions_eventAddEventRepeaterSection_Parms
		{
			UMovieSceneEventTrack* InTrack;
			UMovieSceneEventRepeaterSection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEventTrackExtensions_eventAddEventRepeaterSection_Parms, InTrack), Z_Construct_UClass_UMovieSceneEventTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_InTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEventTrackExtensions_eventAddEventRepeaterSection_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Create a new event repeater section for the given track\n\x09 *\n\x09 * @param Track        The event track to add the new event repeater section to\n\x09 * @return The newly created event repeater section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneEventTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new event repeater section for the given track\n\n@param Track        The event track to add the new event repeater section to\n@return The newly created event repeater section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneEventTrackExtensions, nullptr, "AddEventRepeaterSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::MovieSceneEventTrackExtensions_eventAddEventRepeaterSection_Parms), Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics
	{
		struct MovieSceneEventTrackExtensions_eventAddEventTriggerSection_Parms
		{
			UMovieSceneEventTrack* InTrack;
			UMovieSceneEventTriggerSection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEventTrackExtensions_eventAddEventTriggerSection_Parms, InTrack), Z_Construct_UClass_UMovieSceneEventTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_InTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEventTrackExtensions_eventAddEventTriggerSection_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Create a new event trigger section for the given track\n\x09 *\n\x09 * @param Track        The event track to add the new event trigger section to\n\x09 * @return The newly created event trigger section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneEventTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new event trigger section for the given track\n\n@param Track        The event track to add the new event trigger section to\n@return The newly created event trigger section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneEventTrackExtensions, nullptr, "AddEventTriggerSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::MovieSceneEventTrackExtensions_eventAddEventTriggerSection_Parms), Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics
	{
		struct MovieSceneEventTrackExtensions_eventGetBoundObjectPropertyClass_Parms
		{
			FMovieSceneEvent EventKey;
			UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventKey;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::NewProp_EventKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::NewProp_EventKey = { "EventKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEventTrackExtensions_eventGetBoundObjectPropertyClass_Parms, EventKey), Z_Construct_UScriptStruct_FMovieSceneEvent, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::NewProp_EventKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::NewProp_EventKey_MetaData)) }; // 3632963668
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEventTrackExtensions_eventGetBoundObjectPropertyClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::NewProp_EventKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Event" },
		{ "Comment", "/*\n\x09 * Return the class of the bound object property\n\x09 *\n\x09 * @param EventKey    The event key to get the bound object property from\n\x09 * @return The class of the bound object property\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneEventTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Return the class of the bound object property\n*\n* @param EventKey    The event key to get the bound object property from\n* @return The class of the bound object property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneEventTrackExtensions, nullptr, "GetBoundObjectPropertyClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::MovieSceneEventTrackExtensions_eventGetBoundObjectPropertyClass_Parms), Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventTrackExtensions);
	UClass* Z_Construct_UClass_UMovieSceneEventTrackExtensions_NoRegister()
	{
		return UMovieSceneEventTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection, "AddEventRepeaterSection" }, // 1309282000
		{ &Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection, "AddEventTriggerSection" }, // 728346732
		{ &Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass, "GetBoundObjectPropertyClass" }, // 2368550547
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneEventTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneEventTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneEventTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneEventTrack for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::ClassParams = {
		&UMovieSceneEventTrackExtensions::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneEventTrackExtensions>()
	{
		return UMovieSceneEventTrackExtensions::StaticClass();
	}
	UMovieSceneEventTrackExtensions::UMovieSceneEventTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventTrackExtensions);
	UMovieSceneEventTrackExtensions::~UMovieSceneEventTrackExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventTrackExtensions, UMovieSceneEventTrackExtensions::StaticClass, TEXT("UMovieSceneEventTrackExtensions"), &Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventTrackExtensions), 1243386066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_38537335(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
