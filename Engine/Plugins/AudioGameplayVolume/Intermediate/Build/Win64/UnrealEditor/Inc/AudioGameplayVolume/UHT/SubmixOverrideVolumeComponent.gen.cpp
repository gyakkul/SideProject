// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixOverrideVolumeComponent.h"
#include "../../Source/Runtime/Engine/Classes/Sound/AudioVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixOverrideVolumeComponent() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_USubmixOverrideVolumeComponent();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_USubmixOverrideVolumeComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	DEFINE_FUNCTION(USubmixOverrideVolumeComponent::execSetSubmixOverrideSettings)
	{
		P_GET_TARRAY_REF(FAudioVolumeSubmixOverrideSettings,Z_Param_Out_NewSubmixOverrideSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixOverrideSettings(Z_Param_Out_NewSubmixOverrideSettings);
		P_NATIVE_END;
	}
	void USubmixOverrideVolumeComponent::StaticRegisterNativesUSubmixOverrideVolumeComponent()
	{
		UClass* Class = USubmixOverrideVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSubmixOverrideSettings", &USubmixOverrideVolumeComponent::execSetSubmixOverrideSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics
	{
		struct SubmixOverrideVolumeComponent_eventSetSubmixOverrideSettings_Parms
		{
			TArray<FAudioVolumeSubmixOverrideSettings> NewSubmixOverrideSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSubmixOverrideSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSubmixOverrideSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSubmixOverrideSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_Inner = { "NewSubmixOverrideSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, METADATA_PARAMS(nullptr, 0) }; // 3357517396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings = { "NewSubmixOverrideSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixOverrideVolumeComponent_eventSetSubmixOverrideSettings_Parms, NewSubmixOverrideSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_MetaData)) }; // 3357517396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::NewProp_NewSubmixOverrideSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/SubmixOverrideVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixOverrideVolumeComponent, nullptr, "SetSubmixOverrideSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::SubmixOverrideVolumeComponent_eventSetSubmixOverrideSettings_Parms), Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixOverrideVolumeComponent);
	UClass* Z_Construct_UClass_USubmixOverrideVolumeComponent_NoRegister()
	{
		return USubmixOverrideVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixOverrideSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixOverrideSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixOverrideSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings, "SetSubmixOverrideSettings" }, // 3010505773
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AudioGameplayVolume" },
		{ "Comment", "/**\n *  USubmixOverrideVolumeComponent - Audio Gameplay Volume component for submix effect chain overrides\n */" },
		{ "DisplayName", "Submix Override" },
		{ "IncludePath", "SubmixOverrideVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubmixOverrideVolumeComponent.h" },
		{ "ToolTip", "USubmixOverrideVolumeComponent - Audio Gameplay Volume component for submix effect chain overrides" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::NewProp_SubmixOverrideSettings_Inner = { "SubmixOverrideSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings, METADATA_PARAMS(nullptr, 0) }; // 3357517396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::NewProp_SubmixOverrideSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** Submix effect chain override settings. Will override the effect chains on the given submixes */" },
		{ "ModuleRelativePath", "Public/SubmixOverrideVolumeComponent.h" },
		{ "ToolTip", "Submix effect chain override settings. Will override the effect chains on the given submixes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::NewProp_SubmixOverrideSettings = { "SubmixOverrideSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixOverrideVolumeComponent, SubmixOverrideSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::NewProp_SubmixOverrideSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::NewProp_SubmixOverrideSettings_MetaData)) }; // 3357517396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::NewProp_SubmixOverrideSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::NewProp_SubmixOverrideSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixOverrideVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::ClassParams = {
		&USubmixOverrideVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixOverrideVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.OuterSingleton, Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<USubmixOverrideVolumeComponent>()
	{
		return USubmixOverrideVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixOverrideVolumeComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixOverrideVolumeComponent, USubmixOverrideVolumeComponent::StaticClass, TEXT("USubmixOverrideVolumeComponent"), &Z_Registration_Info_UClass_USubmixOverrideVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixOverrideVolumeComponent), 457216208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_258471206(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
