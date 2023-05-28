// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReverbVolumeComponent.h"
#include "../../Source/Runtime/Engine/Classes/Sound/ReverbSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverbVolumeComponent() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UReverbVolumeComponent();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UReverbVolumeComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	DEFINE_FUNCTION(UReverbVolumeComponent::execSetReverbSettings)
	{
		P_GET_STRUCT_REF(FReverbSettings,Z_Param_Out_NewReverbSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings);
		P_NATIVE_END;
	}
	void UReverbVolumeComponent::StaticRegisterNativesUReverbVolumeComponent()
	{
		UClass* Class = UReverbVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetReverbSettings", &UReverbVolumeComponent::execSetReverbSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics
	{
		struct ReverbVolumeComponent_eventSetReverbSettings_Parms
		{
			FReverbSettings NewReverbSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewReverbSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewReverbSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::NewProp_NewReverbSettings = { "NewReverbSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReverbVolumeComponent_eventSetReverbSettings_Parms, NewReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData)) }; // 3785251137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::NewProp_NewReverbSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/ReverbVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReverbVolumeComponent, nullptr, "SetReverbSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::ReverbVolumeComponent_eventSetReverbSettings_Parms), Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReverbVolumeComponent);
	UClass* Z_Construct_UClass_UReverbVolumeComponent_NoRegister()
	{
		return UReverbVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReverbVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverbVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReverbVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings, "SetReverbSettings" }, // 3971948935
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AudioGameplayVolume" },
		{ "Comment", "/**\n *  UReverbVolumeComponent - Audio Gameplay Volume component for reverb settings\n */" },
		{ "DisplayName", "Reverb" },
		{ "IncludePath", "ReverbVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReverbVolumeComponent.h" },
		{ "ToolTip", "UReverbVolumeComponent - Audio Gameplay Volume component for reverb settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbVolumeComponent_Statics::NewProp_ReverbSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reverb" },
		{ "Comment", "/** Reverb settings to use with this component */" },
		{ "ModuleRelativePath", "Public/ReverbVolumeComponent.h" },
		{ "ToolTip", "Reverb settings to use with this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReverbVolumeComponent_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReverbVolumeComponent, ReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UClass_UReverbVolumeComponent_Statics::NewProp_ReverbSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReverbVolumeComponent_Statics::NewProp_ReverbSettings_MetaData)) }; // 3785251137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReverbVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverbVolumeComponent_Statics::NewProp_ReverbSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverbVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverbVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReverbVolumeComponent_Statics::ClassParams = {
		&UReverbVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReverbVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReverbVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReverbVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReverbVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverbVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UReverbVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReverbVolumeComponent.OuterSingleton, Z_Construct_UClass_UReverbVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReverbVolumeComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UReverbVolumeComponent>()
	{
		return UReverbVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbVolumeComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReverbVolumeComponent, UReverbVolumeComponent::StaticClass, TEXT("UReverbVolumeComponent"), &Z_Registration_Info_UClass_UReverbVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReverbVolumeComponent), 3682083772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_2832808008(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
