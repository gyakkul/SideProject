// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FilterVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterVolumeComponent() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UFilterVolumeComponent();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UFilterVolumeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	DEFINE_FUNCTION(UFilterVolumeComponent::execSetInteriorLPF)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteriorLPF(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFilterVolumeComponent::execSetExteriorLPF)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExteriorLPF(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	void UFilterVolumeComponent::StaticRegisterNativesUFilterVolumeComponent()
	{
		UClass* Class = UFilterVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExteriorLPF", &UFilterVolumeComponent::execSetExteriorLPF },
			{ "SetInteriorLPF", &UFilterVolumeComponent::execSetInteriorLPF },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics
	{
		struct FilterVolumeComponent_eventSetExteriorLPF_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterVolumeComponent_eventSetExteriorLPF_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterVolumeComponent_eventSetExteriorLPF_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/FilterVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilterVolumeComponent, nullptr, "SetExteriorLPF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::FilterVolumeComponent_eventSetExteriorLPF_Parms), Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics
	{
		struct FilterVolumeComponent_eventSetInteriorLPF_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterVolumeComponent_eventSetInteriorLPF_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterVolumeComponent_eventSetInteriorLPF_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "ModuleRelativePath", "Public/FilterVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilterVolumeComponent, nullptr, "SetInteriorLPF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::FilterVolumeComponent_eventSetInteriorLPF_Parms), Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterVolumeComponent);
	UClass* Z_Construct_UClass_UFilterVolumeComponent_NoRegister()
	{
		return UFilterVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFilterVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPFTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPFTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPFTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPFTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilterVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFilterVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF, "SetExteriorLPF" }, // 3593856642
		{ &Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF, "SetInteriorLPF" }, // 3554261679
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AudioGameplayVolume" },
		{ "Comment", "/**\n *  UFilterVolumeComponent - Audio Gameplay Volume component for occlusion settings (volume filter)\n */" },
		{ "DisplayName", "Filter" },
		{ "IncludePath", "FilterVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FilterVolumeComponent.h" },
		{ "ToolTip", "UFilterVolumeComponent - Audio Gameplay Volume component for occlusion settings (volume filter)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPF_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The desired LPF frequency cutoff (in hertz) of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Public/FilterVolumeComponent.h" },
		{ "ToolTip", "The desired LPF frequency cutoff (in hertz) of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPF = { "ExteriorLPF", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFilterVolumeComponent, ExteriorLPF), METADATA_PARAMS(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/FilterVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime = { "ExteriorLPFTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFilterVolumeComponent, ExteriorLPFTime), METADATA_PARAMS(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPF_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The desired LPF frequency cutoff (in hertz) of sounds inside the volume when the player is outside the volume\n" },
		{ "ModuleRelativePath", "Public/FilterVolumeComponent.h" },
		{ "ToolTip", "The desired LPF frequency cutoff (in hertz) of sounds inside the volume when the player is outside the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPF = { "InteriorLPF", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFilterVolumeComponent, InteriorLPF), METADATA_PARAMS(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPFTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/FilterVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player enters the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPFTime = { "InteriorLPFTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFilterVolumeComponent, InteriorLPFTime), METADATA_PARAMS(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPFTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFilterVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterVolumeComponent_Statics::NewProp_InteriorLPFTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilterVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterVolumeComponent_Statics::ClassParams = {
		&UFilterVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFilterVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFilterVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFilterVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilterVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UFilterVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterVolumeComponent.OuterSingleton, Z_Construct_UClass_UFilterVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilterVolumeComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UFilterVolumeComponent>()
	{
		return UFilterVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterVolumeComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilterVolumeComponent, UFilterVolumeComponent::StaticClass, TEXT("UFilterVolumeComponent"), &Z_Registration_Info_UClass_UFilterVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterVolumeComponent), 3491789504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_981095135(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
