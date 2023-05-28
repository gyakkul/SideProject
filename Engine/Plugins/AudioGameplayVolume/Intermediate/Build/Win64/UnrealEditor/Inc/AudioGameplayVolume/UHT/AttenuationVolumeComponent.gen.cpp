// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AttenuationVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttenuationVolumeComponent() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAttenuationVolumeComponent();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAttenuationVolumeComponent_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	DEFINE_FUNCTION(UAttenuationVolumeComponent::execSetInteriorVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteriorVolume(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttenuationVolumeComponent::execSetExteriorVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExteriorVolume(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	void UAttenuationVolumeComponent::StaticRegisterNativesUAttenuationVolumeComponent()
	{
		UClass* Class = UAttenuationVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExteriorVolume", &UAttenuationVolumeComponent::execSetExteriorVolume },
			{ "SetInteriorVolume", &UAttenuationVolumeComponent::execSetInteriorVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics
	{
		struct AttenuationVolumeComponent_eventSetExteriorVolume_Parms
		{
			float Volume;
			float InterpolateTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttenuationVolumeComponent_eventSetExteriorVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttenuationVolumeComponent_eventSetExteriorVolume_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/AttenuationVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttenuationVolumeComponent, nullptr, "SetExteriorVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::AttenuationVolumeComponent_eventSetExteriorVolume_Parms), Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics
	{
		struct AttenuationVolumeComponent_eventSetInteriorVolume_Parms
		{
			float Volume;
			float InterpolateTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttenuationVolumeComponent_eventSetInteriorVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttenuationVolumeComponent_eventSetInteriorVolume_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/AttenuationVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttenuationVolumeComponent, nullptr, "SetInteriorVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::AttenuationVolumeComponent_eventSetInteriorVolume_Parms), Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttenuationVolumeComponent);
	UClass* Z_Construct_UClass_UAttenuationVolumeComponent_NoRegister()
	{
		return UAttenuationVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttenuationVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttenuationVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttenuationVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume, "SetExteriorVolume" }, // 1911357654
		{ &Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume, "SetInteriorVolume" }, // 3860395701
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttenuationVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AudioGameplayVolume" },
		{ "Comment", "/**\n *  UAttenuationVolumeComponent - Audio Gameplay Volume component for occlusion settings (volume attenuation)\n */" },
		{ "DisplayName", "Attenuation" },
		{ "IncludePath", "AttenuationVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AttenuationVolumeComponent.h" },
		{ "ToolTip", "UAttenuationVolumeComponent - Audio Gameplay Volume component for occlusion settings (volume attenuation)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The desired volume of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Public/AttenuationVolumeComponent.h" },
		{ "ToolTip", "The desired volume of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume = { "ExteriorVolume", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttenuationVolumeComponent, ExteriorVolume), METADATA_PARAMS(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/AttenuationVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorTime = { "ExteriorTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttenuationVolumeComponent, ExteriorTime), METADATA_PARAMS(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The desired volume of sounds inside the volume when the player is outside the volume\n" },
		{ "ModuleRelativePath", "Public/AttenuationVolumeComponent.h" },
		{ "ToolTip", "The desired volume of sounds inside the volume when the player is outside the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorVolume = { "InteriorVolume", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttenuationVolumeComponent, InteriorVolume), METADATA_PARAMS(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/AttenuationVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player enters the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorTime = { "InteriorTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttenuationVolumeComponent, InteriorTime), METADATA_PARAMS(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttenuationVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_ExteriorTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttenuationVolumeComponent_Statics::NewProp_InteriorTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttenuationVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttenuationVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttenuationVolumeComponent_Statics::ClassParams = {
		&UAttenuationVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttenuationVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttenuationVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttenuationVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAttenuationVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttenuationVolumeComponent.OuterSingleton, Z_Construct_UClass_UAttenuationVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttenuationVolumeComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAttenuationVolumeComponent>()
	{
		return UAttenuationVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttenuationVolumeComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttenuationVolumeComponent, UAttenuationVolumeComponent::StaticClass, TEXT("UAttenuationVolumeComponent"), &Z_Registration_Info_UClass_UAttenuationVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttenuationVolumeComponent), 4165257003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_530319906(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
