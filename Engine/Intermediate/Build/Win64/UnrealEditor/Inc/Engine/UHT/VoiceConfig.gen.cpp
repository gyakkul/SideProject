// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/VoiceConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceSettings;
class UScriptStruct* FVoiceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VoiceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVoiceSettings>()
{
	return FVoiceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoiceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentToAttachTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceEffectChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo_MetaData[] = {
		{ "Category", "Audio|Voice|Spatialization" },
		{ "Comment", "// Optionally attach the voice source to a Scene Component to give the appearance\n// that the voice is coming from that scene component.\n// If this is not set, the voice will not be spatialized.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optionally attach the voice source to a Scene Component to give the appearance\nthat the voice is coming from that scene component.\nIf this is not set, the voice will not be spatialized." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo = { "ComponentToAttachTo", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceSettings, ComponentToAttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Audio|Voice|Spatialization" },
		{ "Comment", "// Optional attenuation settings to attach to this player's voice.\n// This should only be used when ComponentToAttachTo is set.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optional attenuation settings to attach to this player's voice.\nThis should only be used when ComponentToAttachTo is set." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceSettings, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Audio|Voice|Effects" },
		{ "Comment", "// Optional audio effects to apply to this player's voice.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optional audio effects to apply to this player's voice." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceSettings, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VoiceSettings",
		sizeof(FVoiceSettings),
		alignof(FVoiceSettings),
		Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VoiceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoiceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoiceSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UVOIPTalker::execBPOnTalkingEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPOnTalkingEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVOIPTalker::execBPOnTalkingBegin)
	{
		P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPOnTalkingBegin_Implementation(Z_Param_AudioComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVOIPTalker::execGetVoiceLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVoiceLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVOIPTalker::execRegisterWithPlayerState)
	{
		P_GET_OBJECT(APlayerState,Z_Param_OwningState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterWithPlayerState(Z_Param_OwningState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVOIPTalker::execCreateTalkerForPlayer)
	{
		P_GET_OBJECT(APlayerState,Z_Param_OwningState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVOIPTalker**)Z_Param__Result=UVOIPTalker::CreateTalkerForPlayer(Z_Param_OwningState);
		P_NATIVE_END;
	}
	struct VOIPTalker_eventBPOnTalkingBegin_Parms
	{
		UAudioComponent* AudioComponent;
	};
	static FName NAME_UVOIPTalker_BPOnTalkingBegin = FName(TEXT("BPOnTalkingBegin"));
	void UVOIPTalker::BPOnTalkingBegin(UAudioComponent* AudioComponent)
	{
		VOIPTalker_eventBPOnTalkingBegin_Parms Parms;
		Parms.AudioComponent=AudioComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingBegin),&Parms);
	}
	static FName NAME_UVOIPTalker_BPOnTalkingEnd = FName(TEXT("BPOnTalkingEnd"));
	void UVOIPTalker::BPOnTalkingEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingEnd),NULL);
	}
	void UVOIPTalker::StaticRegisterNativesUVOIPTalker()
	{
		UClass* Class = UVOIPTalker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPOnTalkingBegin", &UVOIPTalker::execBPOnTalkingBegin },
			{ "BPOnTalkingEnd", &UVOIPTalker::execBPOnTalkingEnd },
			{ "CreateTalkerForPlayer", &UVOIPTalker::execCreateTalkerForPlayer },
			{ "GetVoiceLevel", &UVOIPTalker::execGetVoiceLevel },
			{ "RegisterWithPlayerState", &UVOIPTalker::execRegisterWithPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VOIPTalker_eventBPOnTalkingBegin_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// Blueprint native event for when this player starts speaking.\n" },
		{ "DisplayName", "Begin Talking" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Blueprint native event for when this player starts speaking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "BPOnTalkingBegin", nullptr, nullptr, sizeof(VOIPTalker_eventBPOnTalkingBegin_Parms), Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// Blueprint native event for when this player stops speaking.\n" },
		{ "DisplayName", "End Talking" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Blueprint native event for when this player stops speaking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "BPOnTalkingEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics
	{
		struct VOIPTalker_eventCreateTalkerForPlayer_Parms
		{
			APlayerState* OwningState;
			UVOIPTalker* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningState;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_OwningState = { "OwningState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, ReturnValue), Z_Construct_UClass_UVOIPTalker_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_OwningState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// function for creating and registering a UVOIPTalker.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "function for creating and registering a UVOIPTalker." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "CreateTalkerForPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::VOIPTalker_eventCreateTalkerForPlayer_Parms), Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics
	{
		struct VOIPTalker_eventGetVoiceLevel_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VOIPTalker_eventGetVoiceLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// Get the current level of how loud this player is speaking. Will return 0.0\n// if player is not talking.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Get the current level of how loud this player is speaking. Will return 0.0\nif player is not talking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "GetVoiceLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::VOIPTalker_eventGetVoiceLevel_Parms), Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics
	{
		struct VOIPTalker_eventRegisterWithPlayerState_Parms
		{
			APlayerState* OwningState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::NewProp_OwningState = { "OwningState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VOIPTalker_eventRegisterWithPlayerState_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::NewProp_OwningState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// This function sets up this talker with a specific player.\n// It is necessary to use this to properly control a specific player's voice\n// and receive events.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "This function sets up this talker with a specific player.\nIt is necessary to use this to properly control a specific player's voice\nand receive events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "RegisterWithPlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::VOIPTalker_eventRegisterWithPlayerState_Parms), Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVOIPTalker);
	UClass* Z_Construct_UClass_UVOIPTalker_NoRegister()
	{
		return UVOIPTalker::StaticClass();
	}
	struct Z_Construct_UClass_UVOIPTalker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVOIPTalker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVOIPTalker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin, "BPOnTalkingBegin" }, // 2401503742
		{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd, "BPOnTalkingEnd" }, // 700119795
		{ &Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer, "CreateTalkerForPlayer" }, // 272040710
		{ &Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel, "GetVoiceLevel" }, // 4219351809
		{ &Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState, "RegisterWithPlayerState" }, // 2678918926
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VOIP" },
		{ "IncludePath", "Net/VoiceConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A VOIPTalker is a component that can be used to control the audio characteristics of a player's voice." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Voice" },
		{ "Comment", "// Configurable settings for this player's voice. When set, this will update the next time the player speaks.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Configurable settings for this player's voice. When set, this will update the next time the player speaks." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVOIPTalker, Settings), Z_Construct_UScriptStruct_FVoiceSettings, METADATA_PARAMS(Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings_MetaData)) }; // 37688060
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVOIPTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVOIPTalker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVOIPTalker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVOIPTalker_Statics::ClassParams = {
		&UVOIPTalker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVOIPTalker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVOIPTalker()
	{
		if (!Z_Registration_Info_UClass_UVOIPTalker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVOIPTalker.OuterSingleton, Z_Construct_UClass_UVOIPTalker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVOIPTalker.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVOIPTalker>()
	{
		return UVOIPTalker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPTalker);
	DEFINE_FUNCTION(UVOIPStatics::execSetMicThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVOIPStatics::SetMicThreshold(Z_Param_InThreshold);
		P_NATIVE_END;
	}
	void UVOIPStatics::StaticRegisterNativesUVOIPStatics()
	{
		UClass* Class = UVOIPStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMicThreshold", &UVOIPStatics::execSetMicThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics
	{
		struct VOIPStatics_eventSetMicThreshold_Parms
		{
			float InThreshold;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::NewProp_InThreshold = { "InThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VOIPStatics_eventSetMicThreshold_Parms, InThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::NewProp_InThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Mic" },
		{ "Comment", "// This function sets the Mic threshold for VOIP chat.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "This function sets the Mic threshold for VOIP chat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPStatics, nullptr, "SetMicThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::VOIPStatics_eventSetMicThreshold_Parms), Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPStatics_SetMicThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVOIPStatics);
	UClass* Z_Construct_UClass_UVOIPStatics_NoRegister()
	{
		return UVOIPStatics::StaticClass();
	}
	struct Z_Construct_UClass_UVOIPStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVOIPStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVOIPStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVOIPStatics_SetMicThreshold, "SetMicThreshold" }, // 2619979912
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/VoiceConfig.h" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVOIPStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVOIPStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVOIPStatics_Statics::ClassParams = {
		&UVOIPStatics::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVOIPStatics()
	{
		if (!Z_Registration_Info_UClass_UVOIPStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVOIPStatics.OuterSingleton, Z_Construct_UClass_UVOIPStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVOIPStatics.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVOIPStatics>()
	{
		return UVOIPStatics::StaticClass();
	}
	UVOIPStatics::UVOIPStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPStatics);
	UVOIPStatics::~UVOIPStatics() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ScriptStructInfo[] = {
		{ FVoiceSettings::StaticStruct, Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewStructOps, TEXT("VoiceSettings"), &Z_Registration_Info_UScriptStruct_VoiceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceSettings), 37688060U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVOIPTalker, UVOIPTalker::StaticClass, TEXT("UVOIPTalker"), &Z_Registration_Info_UClass_UVOIPTalker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVOIPTalker), 3414833053U) },
		{ Z_Construct_UClass_UVOIPStatics, UVOIPStatics::StaticClass, TEXT("UVOIPStatics"), &Z_Registration_Info_UClass_UVOIPStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVOIPStatics), 3243443722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_2822852133(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
