// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneGameplayCueTrack.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGameplayCueTrack() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTrack();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTrack_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms
		{
			AActor* Target;
			FGameplayTag GameplayTag;
			FGameplayCueParameters Parameters;
			TEnumAsByte<EGameplayCueEvent::Type> Event;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms, Event), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(nullptr, 0) }; // 1199521666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueTrack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "MovieSceneGameplayCueEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::_Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMovieSceneGameplayCueEvent_DelegateWrapper(const FScriptDelegate& MovieSceneGameplayCueEvent, AActor* Target, FGameplayTag GameplayTag, FGameplayCueParameters const& Parameters, EGameplayCueEvent::Type Event)
{
	struct _Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms
	{
		AActor* Target;
		FGameplayTag GameplayTag;
		FGameplayCueParameters Parameters;
		TEnumAsByte<EGameplayCueEvent::Type> Event;
	};
	_Script_GameplayAbilities_eventMovieSceneGameplayCueEvent_Parms Parms;
	Parms.Target=Target;
	Parms.GameplayTag=GameplayTag;
	Parms.Parameters=Parameters;
	Parms.Event=Event;
	MovieSceneGameplayCueEvent.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMovieSceneGameplayCueTrack::execSetSequencerTrackHandler)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGameplayCueTrackHandler);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneGameplayCueTrack::SetSequencerTrackHandler(FMovieSceneGameplayCueEvent(Z_Param_InGameplayCueTrackHandler));
		P_NATIVE_END;
	}
	void UMovieSceneGameplayCueTrack::StaticRegisterNativesUMovieSceneGameplayCueTrack()
	{
		UClass* Class = UMovieSceneGameplayCueTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSequencerTrackHandler", &UMovieSceneGameplayCueTrack::execSetSequencerTrackHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics
	{
		struct MovieSceneGameplayCueTrack_eventSetSequencerTrackHandler_Parms
		{
			FScriptDelegate InGameplayCueTrackHandler;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InGameplayCueTrackHandler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::NewProp_InGameplayCueTrackHandler = { "InGameplayCueTrackHandler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneGameplayCueTrack_eventSetSequencerTrackHandler_Parms, InGameplayCueTrackHandler), Z_Construct_UDelegateFunction_GameplayAbilities_MovieSceneGameplayCueEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 425592033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::NewProp_InGameplayCueTrackHandler,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayCue" },
		{ "Comment", "/** Override the default function for invoking Gameplay Cues from sequencer tracks */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueTrack.h" },
		{ "ToolTip", "Override the default function for invoking Gameplay Cues from sequencer tracks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneGameplayCueTrack, nullptr, "SetSequencerTrackHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::MovieSceneGameplayCueTrack_eventSetSequencerTrackHandler_Parms), Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGameplayCueTrack);
	UClass* Z_Construct_UClass_UMovieSceneGameplayCueTrack_NoRegister()
	{
		return UMovieSceneGameplayCueTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneGameplayCueTrack_SetSequencerTrackHandler, "SetSequencerTrackHandler" }, // 3964878856
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track that triggers gameplay cues\n */" },
		{ "IncludePath", "Sequencer/MovieSceneGameplayCueTrack.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueTrack.h" },
		{ "ToolTip", "Implements a movie scene track that triggers gameplay cues" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The track's sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueTrack.h" },
		{ "ToolTip", "The track's sections." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGameplayCueTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGameplayCueTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::ClassParams = {
		&UMovieSceneGameplayCueTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGameplayCueTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGameplayCueTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGameplayCueTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGameplayCueTrack.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UMovieSceneGameplayCueTrack>()
	{
		return UMovieSceneGameplayCueTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGameplayCueTrack);
	UMovieSceneGameplayCueTrack::~UMovieSceneGameplayCueTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGameplayCueTrack, UMovieSceneGameplayCueTrack::StaticClass, TEXT("UMovieSceneGameplayCueTrack"), &Z_Registration_Info_UClass_UMovieSceneGameplayCueTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGameplayCueTrack), 3597371205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_747717691(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
