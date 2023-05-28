// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixSendVolumeComponent.h"
#include "../../Source/Runtime/Engine/Classes/Sound/AudioVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixSendVolumeComponent() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_USubmixSendVolumeComponent();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_USubmixSendVolumeComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	DEFINE_FUNCTION(USubmixSendVolumeComponent::execSetSubmixSendSettings)
	{
		P_GET_TARRAY_REF(FAudioVolumeSubmixSendSettings,Z_Param_Out_NewSubmixSendSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixSendSettings(Z_Param_Out_NewSubmixSendSettings);
		P_NATIVE_END;
	}
	void USubmixSendVolumeComponent::StaticRegisterNativesUSubmixSendVolumeComponent()
	{
		UClass* Class = USubmixSendVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSubmixSendSettings", &USubmixSendVolumeComponent::execSetSubmixSendSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics
	{
		struct SubmixSendVolumeComponent_eventSetSubmixSendSettings_Parms
		{
			TArray<FAudioVolumeSubmixSendSettings> NewSubmixSendSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSubmixSendSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSubmixSendSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSubmixSendSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_Inner = { "NewSubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, METADATA_PARAMS(nullptr, 0) }; // 1444960324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings = { "NewSubmixSendSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixSendVolumeComponent_eventSetSubmixSendSettings_Parms, NewSubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_MetaData)) }; // 1444960324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::NewProp_NewSubmixSendSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/SubmixSendVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixSendVolumeComponent, nullptr, "SetSubmixSendSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::SubmixSendVolumeComponent_eventSetSubmixSendSettings_Parms), Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixSendVolumeComponent);
	UClass* Z_Construct_UClass_USubmixSendVolumeComponent_NoRegister()
	{
		return USubmixSendVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USubmixSendVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixSendSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixSendSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixSendVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixSendVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings, "SetSubmixSendSettings" }, // 3029329248
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixSendVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AudioGameplayVolume" },
		{ "Comment", "/**\n *  USubmixSendVolumeComponent - Audio Gameplay Volume component for submix sends\n */" },
		{ "DisplayName", "Submix Send" },
		{ "IncludePath", "SubmixSendVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubmixSendVolumeComponent.h" },
		{ "ToolTip", "USubmixSendVolumeComponent - Audio Gameplay Volume component for submix sends" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixSendVolumeComponent_Statics::NewProp_SubmixSendSettings_Inner = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings, METADATA_PARAMS(nullptr, 0) }; // 1444960324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixSendVolumeComponent_Statics::NewProp_SubmixSendSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** Submix send settings to use for this component. Allows audio to dynamically send to submixes based on source and listener locations (relative to parent volume.) */" },
		{ "ModuleRelativePath", "Public/SubmixSendVolumeComponent.h" },
		{ "ToolTip", "Submix send settings to use for this component. Allows audio to dynamically send to submixes based on source and listener locations (relative to parent volume.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubmixSendVolumeComponent_Statics::NewProp_SubmixSendSettings = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixSendVolumeComponent, SubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubmixSendVolumeComponent_Statics::NewProp_SubmixSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixSendVolumeComponent_Statics::NewProp_SubmixSendSettings_MetaData)) }; // 1444960324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixSendVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixSendVolumeComponent_Statics::NewProp_SubmixSendSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixSendVolumeComponent_Statics::NewProp_SubmixSendSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixSendVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixSendVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixSendVolumeComponent_Statics::ClassParams = {
		&USubmixSendVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixSendVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixSendVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixSendVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixSendVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixSendVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_USubmixSendVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixSendVolumeComponent.OuterSingleton, Z_Construct_UClass_USubmixSendVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixSendVolumeComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<USubmixSendVolumeComponent>()
	{
		return USubmixSendVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixSendVolumeComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixSendVolumeComponent, USubmixSendVolumeComponent::StaticClass, TEXT("USubmixSendVolumeComponent"), &Z_Registration_Info_UClass_USubmixSendVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixSendVolumeComponent), 1685889293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_499112446(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
