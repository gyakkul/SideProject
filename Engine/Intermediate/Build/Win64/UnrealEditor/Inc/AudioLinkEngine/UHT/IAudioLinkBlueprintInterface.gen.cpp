// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAudioLinkBlueprintInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioLinkBlueprintInterface() {}
// Cross Module References
	AUDIOLINKENGINE_API UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface();
	AUDIOLINKENGINE_API UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioLinkEngine();
// End Cross Module References
	DEFINE_FUNCTION(IAudioLinkBlueprintInterface::execIsLinkPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioLinkBlueprintInterface::execStopLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLink();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioLinkBlueprintInterface::execPlayLink)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLink(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioLinkBlueprintInterface::execSetLinkSound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	void UAudioLinkBlueprintInterface::StaticRegisterNativesUAudioLinkBlueprintInterface()
	{
		UClass* Class = UAudioLinkBlueprintInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLinkPlaying", &IAudioLinkBlueprintInterface::execIsLinkPlaying },
			{ "PlayLink", &IAudioLinkBlueprintInterface::execPlayLink },
			{ "SetLinkSound", &IAudioLinkBlueprintInterface::execSetLinkSound },
			{ "StopLink", &IAudioLinkBlueprintInterface::execStopLink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics
	{
		struct AudioLinkBlueprintInterface_eventIsLinkPlaying_Parms
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
	void Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioLinkBlueprintInterface_eventIsLinkPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioLinkBlueprintInterface_eventIsLinkPlaying_Parms), &Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioLink" },
		{ "ModuleRelativePath", "Public/IAudioLinkBlueprintInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioLinkBlueprintInterface, nullptr, "IsLinkPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::AudioLinkBlueprintInterface_eventIsLinkPlaying_Parms), Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics
	{
		struct AudioLinkBlueprintInterface_eventPlayLink_Parms
		{
			float StartTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioLinkBlueprintInterface_eventPlayLink_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioLink" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/IAudioLinkBlueprintInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioLinkBlueprintInterface, nullptr, "PlayLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::AudioLinkBlueprintInterface_eventPlayLink_Parms), Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics
	{
		struct AudioLinkBlueprintInterface_eventSetLinkSound_Parms
		{
			USoundBase* NewSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioLinkBlueprintInterface_eventSetLinkSound_Parms, NewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioLink" },
		{ "ModuleRelativePath", "Public/IAudioLinkBlueprintInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioLinkBlueprintInterface, nullptr, "SetLinkSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::AudioLinkBlueprintInterface_eventSetLinkSound_Parms), Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** Stop an audio component's sound, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Public/IAudioLinkBlueprintInterface.h" },
		{ "ToolTip", "Stop an audio component's sound, issue any delegates if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioLinkBlueprintInterface, nullptr, "StopLink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioLinkBlueprintInterface);
	UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister()
	{
		return UAudioLinkBlueprintInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioLinkEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioLinkBlueprintInterface_IsLinkPlaying, "IsLinkPlaying" }, // 4215436543
		{ &Z_Construct_UFunction_UAudioLinkBlueprintInterface_PlayLink, "PlayLink" }, // 3873584669
		{ &Z_Construct_UFunction_UAudioLinkBlueprintInterface_SetLinkSound, "SetLinkSound" }, // 1367084918
		{ &Z_Construct_UFunction_UAudioLinkBlueprintInterface_StopLink, "StopLink" }, // 2497972438
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IAudioLinkBlueprintInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioLinkBlueprintInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::ClassParams = {
		&UAudioLinkBlueprintInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface()
	{
		if (!Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.OuterSingleton, Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.OuterSingleton;
	}
	template<> AUDIOLINKENGINE_API UClass* StaticClass<UAudioLinkBlueprintInterface>()
	{
		return UAudioLinkBlueprintInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioLinkBlueprintInterface);
	UAudioLinkBlueprintInterface::~UAudioLinkBlueprintInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioLinkBlueprintInterface, UAudioLinkBlueprintInterface::StaticClass, TEXT("UAudioLinkBlueprintInterface"), &Z_Registration_Info_UClass_UAudioLinkBlueprintInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioLinkBlueprintInterface), 4184086433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_2170923100(TEXT("/Script/AudioLinkEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
