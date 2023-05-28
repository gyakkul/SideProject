// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioGameplayVolumeMutator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeMutator() {}
// Cross Module References
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayComponent();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	DEFINE_FUNCTION(UAudioGameplayVolumeMutator::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_InPriority);
		P_NATIVE_END;
	}
	void UAudioGameplayVolumeMutator::StaticRegisterNativesUAudioGameplayVolumeMutator()
	{
		UClass* Class = UAudioGameplayVolumeMutator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPriority", &UAudioGameplayVolumeMutator::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics
	{
		struct AudioGameplayVolumeMutator_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioGameplayVolumeMutator_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeMutator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioGameplayVolumeMutator, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::AudioGameplayVolumeMutator_eventSetPriority_Parms), Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayVolumeMutator);
	UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator_NoRegister()
	{
		return UAudioGameplayVolumeMutator::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority, "SetPriority" }, // 287154900
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAudioGameplayVolumeMutator - These components are used for more complex interactions with AudioGameplayVolumes.\n *\x09\x09""Currently, components inheriting this base can affect interior settings as well as active sounds or the audio listener(s) inside the volume.\n *\x09\x09See also: FilterVolumeComponent, AttenuationVolumeComponent, SubmixSendComponent, SubmixOverrideVolumeComponent, and ReverbVolumeComponent\n */" },
		{ "IncludePath", "AudioGameplayVolumeMutator.h" },
		{ "IsBlueprintBase", "FALSE" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeMutator.h" },
		{ "ToolTip", "UAudioGameplayVolumeMutator - These components are used for more complex interactions with AudioGameplayVolumes.\n           Currently, components inheriting this base can affect interior settings as well as active sounds or the audio listener(s) inside the volume.\n           See also: FilterVolumeComponent, AttenuationVolumeComponent, SubmixSendComponent, SubmixOverrideVolumeComponent, and ReverbVolumeComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioGameplay" },
		{ "Comment", "// The priority of this component.  In the case of overlapping volumes or multiple affecting components, the highest priority is chosen.\n" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeMutator.h" },
		{ "ToolTip", "The priority of this component.  In the case of overlapping volumes or multiple affecting components, the highest priority is chosen." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioGameplayVolumeMutator, Priority), METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGameplayVolumeMutator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::ClassParams = {
		&UAudioGameplayVolumeMutator::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::PropPointers),
		0,
		0x04B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.OuterSingleton, Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAudioGameplayVolumeMutator>()
	{
		return UAudioGameplayVolumeMutator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayVolumeMutator);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGameplayVolumeMutator, UAudioGameplayVolumeMutator::StaticClass, TEXT("UAudioGameplayVolumeMutator"), &Z_Registration_Info_UClass_UAudioGameplayVolumeMutator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayVolumeMutator), 4250592910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_4067601516(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
