// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononMaterialComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononMaterialComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononMaterialComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononMaterialComponent_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EPhononMaterial();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void UPhononMaterialComponent::StaticRegisterNativesUPhononMaterialComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononMaterialComponent);
	UClass* Z_Construct_UClass_UPhononMaterialComponent_NoRegister()
	{
		return UPhononMaterialComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhononMaterialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MidFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MidFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononMaterialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "Comment", "/**\n * Phonon Material components are used to customize an actor's acoustic properties. Only valid on actors that also\n * have a Phonon Geometry component.\n */" },
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "PhononMaterialComponent.h" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "Phonon Material components are used to customize an actor's acoustic properties. Only valid on actors that also\nhave a Phonon Geometry component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, MaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialPreset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Choose from a variety of preset physical materials, or choose Custom to specify values manually.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "Choose from a variety of preset physical materials, or choose Custom to specify values manually." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialPreset = { "MaterialPreset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, MaterialPreset), Z_Construct_UEnum_SteamAudio_EPhononMaterial, METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialPreset_MetaData)) }; // 1889328730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqAbsorption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs low frequency sound.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqAbsorption = { "LowFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, LowFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqAbsorption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs mid frequency sound.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqAbsorption = { "MidFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, MidFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqAbsorption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs high frequency sound.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqAbsorption = { "HighFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, HighFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqTransmission_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits low frequency sound.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqTransmission = { "LowFreqTransmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, LowFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqTransmission_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits mid frequency sound.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqTransmission = { "MidFreqTransmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, MidFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqTransmission_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits high frequency sound.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqTransmission = { "HighFreqTransmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, HighFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_Scattering_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\n// surfaces with a low scattering value reflect sound in a mirror-like manner.\n" },
		{ "ModuleRelativePath", "Private/PhononMaterialComponent.h" },
		{ "ToolTip", "Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\nsurfaces with a low scattering value reflect sound in a mirror-like manner." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_Scattering = { "Scattering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononMaterialComponent, Scattering), METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_Scattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_Scattering_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhononMaterialComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MaterialPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_LowFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_MidFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_HighFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononMaterialComponent_Statics::NewProp_Scattering,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononMaterialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononMaterialComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononMaterialComponent_Statics::ClassParams = {
		&UPhononMaterialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhononMaterialComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononMaterialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononMaterialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononMaterialComponent()
	{
		if (!Z_Registration_Info_UClass_UPhononMaterialComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononMaterialComponent.OuterSingleton, Z_Construct_UClass_UPhononMaterialComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononMaterialComponent.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<UPhononMaterialComponent>()
	{
		return UPhononMaterialComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononMaterialComponent);
	UPhononMaterialComponent::~UPhononMaterialComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterialComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterialComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononMaterialComponent, UPhononMaterialComponent::StaticClass, TEXT("UPhononMaterialComponent"), &Z_Registration_Info_UClass_UPhononMaterialComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononMaterialComponent), 4030994505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterialComponent_h_2657049998(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterialComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterialComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
