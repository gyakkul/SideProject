// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusAudioMaterialComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAudioMaterialComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioMaterialComponent();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioMaterialComponent_NoRegister();
	OCULUSAUDIO_API UEnum* Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial();
	UPackage* Z_Construct_UPackage__Script_OculusAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusAudioMaterial;
	static UEnum* EOculusAudioMaterial_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusAudioMaterial.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusAudioMaterial.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial, (UObject*)Z_Construct_UPackage__Script_OculusAudio(), TEXT("EOculusAudioMaterial"));
		}
		return Z_Registration_Info_UEnum_EOculusAudioMaterial.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UEnum* StaticEnum<EOculusAudioMaterial>()
	{
		return EOculusAudioMaterial_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::Enumerators[] = {
		{ "EOculusAudioMaterial::ACOUSTICTILE", (int64)EOculusAudioMaterial::ACOUSTICTILE },
		{ "EOculusAudioMaterial::BRICK", (int64)EOculusAudioMaterial::BRICK },
		{ "EOculusAudioMaterial::BRICKPAINTED", (int64)EOculusAudioMaterial::BRICKPAINTED },
		{ "EOculusAudioMaterial::CARPET", (int64)EOculusAudioMaterial::CARPET },
		{ "EOculusAudioMaterial::CARPETHEAVY", (int64)EOculusAudioMaterial::CARPETHEAVY },
		{ "EOculusAudioMaterial::CARPETHEAVYPADDED", (int64)EOculusAudioMaterial::CARPETHEAVYPADDED },
		{ "EOculusAudioMaterial::CERAMICTILE", (int64)EOculusAudioMaterial::CERAMICTILE },
		{ "EOculusAudioMaterial::CONCRETE", (int64)EOculusAudioMaterial::CONCRETE },
		{ "EOculusAudioMaterial::CONCRETEROUGH", (int64)EOculusAudioMaterial::CONCRETEROUGH },
		{ "EOculusAudioMaterial::CONCRETEBLOCK", (int64)EOculusAudioMaterial::CONCRETEBLOCK },
		{ "EOculusAudioMaterial::CONCRETEBLOCKPAINTED", (int64)EOculusAudioMaterial::CONCRETEBLOCKPAINTED },
		{ "EOculusAudioMaterial::CURTAIN", (int64)EOculusAudioMaterial::CURTAIN },
		{ "EOculusAudioMaterial::FOLIAGE", (int64)EOculusAudioMaterial::FOLIAGE },
		{ "EOculusAudioMaterial::GLASS", (int64)EOculusAudioMaterial::GLASS },
		{ "EOculusAudioMaterial::GLASSHEAVY", (int64)EOculusAudioMaterial::GLASSHEAVY },
		{ "EOculusAudioMaterial::GRASS", (int64)EOculusAudioMaterial::GRASS },
		{ "EOculusAudioMaterial::GRAVEL", (int64)EOculusAudioMaterial::GRAVEL },
		{ "EOculusAudioMaterial::GYPSUMBOARD", (int64)EOculusAudioMaterial::GYPSUMBOARD },
		{ "EOculusAudioMaterial::PLASTERONBRICK", (int64)EOculusAudioMaterial::PLASTERONBRICK },
		{ "EOculusAudioMaterial::PLASTERONCONCRETEBLOCK", (int64)EOculusAudioMaterial::PLASTERONCONCRETEBLOCK },
		{ "EOculusAudioMaterial::SOIL", (int64)EOculusAudioMaterial::SOIL },
		{ "EOculusAudioMaterial::SOUNDPROOF", (int64)EOculusAudioMaterial::SOUNDPROOF },
		{ "EOculusAudioMaterial::SNOW", (int64)EOculusAudioMaterial::SNOW },
		{ "EOculusAudioMaterial::STEEL", (int64)EOculusAudioMaterial::STEEL },
		{ "EOculusAudioMaterial::WATER", (int64)EOculusAudioMaterial::WATER },
		{ "EOculusAudioMaterial::WOODTHIN", (int64)EOculusAudioMaterial::WOODTHIN },
		{ "EOculusAudioMaterial::WOODTHICK", (int64)EOculusAudioMaterial::WOODTHICK },
		{ "EOculusAudioMaterial::WOODFLOOR", (int64)EOculusAudioMaterial::WOODFLOOR },
		{ "EOculusAudioMaterial::WOODONCONCRETE", (int64)EOculusAudioMaterial::WOODONCONCRETE },
		{ "EOculusAudioMaterial::MATERIAL_MAX", (int64)EOculusAudioMaterial::MATERIAL_MAX },
		{ "EOculusAudioMaterial::NOMATERIAL", (int64)EOculusAudioMaterial::NOMATERIAL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::Enum_MetaDataParams[] = {
		{ "ACOUSTICTILE.DisplayName", "AcousticTile" },
		{ "ACOUSTICTILE.Name", "EOculusAudioMaterial::ACOUSTICTILE" },
		{ "BRICK.DisplayName", "Brick" },
		{ "BRICK.Name", "EOculusAudioMaterial::BRICK" },
		{ "BRICKPAINTED.DisplayName", "BrickPainted" },
		{ "BRICKPAINTED.Name", "EOculusAudioMaterial::BRICKPAINTED" },
		{ "CARPET.DisplayName", "Carpet" },
		{ "CARPET.Name", "EOculusAudioMaterial::CARPET" },
		{ "CARPETHEAVY.DisplayName", "CarpetHeavy" },
		{ "CARPETHEAVY.Name", "EOculusAudioMaterial::CARPETHEAVY" },
		{ "CARPETHEAVYPADDED.DisplayName", "CarpetHeavyPadded" },
		{ "CARPETHEAVYPADDED.Name", "EOculusAudioMaterial::CARPETHEAVYPADDED" },
		{ "CERAMICTILE.DisplayName", "CeramicTile" },
		{ "CERAMICTILE.Name", "EOculusAudioMaterial::CERAMICTILE" },
		{ "CONCRETE.DisplayName", "Concrete" },
		{ "CONCRETE.Name", "EOculusAudioMaterial::CONCRETE" },
		{ "CONCRETEBLOCK.DisplayName", "ConcreteBlock" },
		{ "CONCRETEBLOCK.Name", "EOculusAudioMaterial::CONCRETEBLOCK" },
		{ "CONCRETEBLOCKPAINTED.DisplayName", "ConcreteBlockPainted" },
		{ "CONCRETEBLOCKPAINTED.Name", "EOculusAudioMaterial::CONCRETEBLOCKPAINTED" },
		{ "CONCRETEROUGH.DisplayName", "ConcreteRough" },
		{ "CONCRETEROUGH.Name", "EOculusAudioMaterial::CONCRETEROUGH" },
		{ "CURTAIN.DisplayName", "Curtain" },
		{ "CURTAIN.Name", "EOculusAudioMaterial::CURTAIN" },
		{ "FOLIAGE.DisplayName", "Foliage" },
		{ "FOLIAGE.Name", "EOculusAudioMaterial::FOLIAGE" },
		{ "GLASS.DisplayName", "Glass" },
		{ "GLASS.Name", "EOculusAudioMaterial::GLASS" },
		{ "GLASSHEAVY.DisplayName", "GlassHeavy" },
		{ "GLASSHEAVY.Name", "EOculusAudioMaterial::GLASSHEAVY" },
		{ "GRASS.DisplayName", "Grass" },
		{ "GRASS.Name", "EOculusAudioMaterial::GRASS" },
		{ "GRAVEL.DisplayName", "Gravel" },
		{ "GRAVEL.Name", "EOculusAudioMaterial::GRAVEL" },
		{ "GYPSUMBOARD.DisplayName", "GypsumBoard" },
		{ "GYPSUMBOARD.Name", "EOculusAudioMaterial::GYPSUMBOARD" },
		{ "MATERIAL_MAX.Hidden", "" },
		{ "MATERIAL_MAX.Name", "EOculusAudioMaterial::MATERIAL_MAX" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "NOMATERIAL.DisplayName", "NoMaterial" },
		{ "NOMATERIAL.Name", "EOculusAudioMaterial::NOMATERIAL" },
		{ "PLASTERONBRICK.DisplayName", "PlasterOnBrick" },
		{ "PLASTERONBRICK.Name", "EOculusAudioMaterial::PLASTERONBRICK" },
		{ "PLASTERONCONCRETEBLOCK.DisplayName", "PlasterOnConcreteBlock" },
		{ "PLASTERONCONCRETEBLOCK.Name", "EOculusAudioMaterial::PLASTERONCONCRETEBLOCK" },
		{ "SNOW.DisplayName", "Snow" },
		{ "SNOW.Name", "EOculusAudioMaterial::SNOW" },
		{ "SOIL.DisplayName", "Soil" },
		{ "SOIL.Name", "EOculusAudioMaterial::SOIL" },
		{ "SOUNDPROOF.DisplayName", "SoundProof" },
		{ "SOUNDPROOF.Name", "EOculusAudioMaterial::SOUNDPROOF" },
		{ "STEEL.DisplayName", "Steel" },
		{ "STEEL.Name", "EOculusAudioMaterial::STEEL" },
		{ "WATER.DisplayName", "Water" },
		{ "WATER.Name", "EOculusAudioMaterial::WATER" },
		{ "WOODFLOOR.DisplayName", "WoodFloor" },
		{ "WOODFLOOR.Name", "EOculusAudioMaterial::WOODFLOOR" },
		{ "WOODONCONCRETE.DisplayName", "WoodOnConcrete" },
		{ "WOODONCONCRETE.Name", "EOculusAudioMaterial::WOODONCONCRETE" },
		{ "WOODTHICK.DisplayName", "WoodThick" },
		{ "WOODTHICK.Name", "EOculusAudioMaterial::WOODTHICK" },
		{ "WOODTHIN.DisplayName", "WoodThin" },
		{ "WOODTHIN.Name", "EOculusAudioMaterial::WOODTHIN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusAudio,
		nullptr,
		"EOculusAudioMaterial",
		"EOculusAudioMaterial",
		Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial()
	{
		if (!Z_Registration_Info_UEnum_EOculusAudioMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusAudioMaterial.InnerSingleton, Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusAudioMaterial.InnerSingleton;
	}
	void UOculusAudioMaterialComponent::StaticRegisterNativesUOculusAudioMaterialComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusAudioMaterialComponent);
	UClass* Z_Construct_UClass_UOculusAudioMaterialComponent_NoRegister()
	{
		return UOculusAudioMaterialComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusAudioMaterialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption63Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption63Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption125Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption125Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption250Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption250Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption500Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption500Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption1000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption1000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption2000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption2000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption4000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption4000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption8000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absorption8000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission63Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission63Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission125Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission125Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission250Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission250Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission500Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission500Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission1000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission1000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission2000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission2000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission4000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission4000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transmission8000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Transmission8000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering63Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering63Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering125Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering125Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering250Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering250Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering500Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering500Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering1000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering1000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering2000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering2000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering4000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering4000Hz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scattering8000Hz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering8000Hz;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "Comment", "/*\n * OculusAudio material components are used to set the acoustic properties of the geometry.\n */// PAS: TODO check these UCLASS parameters\n" },
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "OculusAudioMaterialComponent.h" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "* OculusAudio material components are used to set the acoustic properties of the geometry.\n// PAS: TODO check these UCLASS parameters" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_MaterialPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_MaterialPreset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Choose from a variety of preset physical materials, or choose Custom to specify values manually.\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "Choose from a variety of preset physical materials, or choose Custom to specify values manually." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_MaterialPreset = { "MaterialPreset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, MaterialPreset), Z_Construct_UEnum_OculusAudio_EOculusAudioMaterial, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_MaterialPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_MaterialPreset_MetaData)) }; // 3955814415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption63Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 63Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 63Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption63Hz = { "Absorption63Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption63Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption63Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption63Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption125Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 125Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 125Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption125Hz = { "Absorption125Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption125Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption125Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption125Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption250Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 250Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 250Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption250Hz = { "Absorption250Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption250Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption250Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption250Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption500Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 500Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 500Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption500Hz = { "Absorption500Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption500Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption500Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption500Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption1000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 1000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 1000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption1000Hz = { "Absorption1000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption1000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption1000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption1000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption2000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 2000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 2000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption2000Hz = { "Absorption2000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption2000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption2000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption2000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption4000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 4000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 4000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption4000Hz = { "Absorption4000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption4000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption4000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption4000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption8000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs @ 8000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material absorbs @ 8000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption8000Hz = { "Absorption8000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Absorption8000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption8000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption8000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission63Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 63Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 63Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission63Hz = { "Transmission63Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission63Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission63Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission63Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission125Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 125Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 125Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission125Hz = { "Transmission125Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission125Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission125Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission125Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission250Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 250Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 250Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission250Hz = { "Transmission250Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission250Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission250Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission250Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission500Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 500Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 500Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission500Hz = { "Transmission500Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission500Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission500Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission500Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission1000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 1000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 1000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission1000Hz = { "Transmission1000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission1000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission1000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission1000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission2000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 2000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 2000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission2000Hz = { "Transmission2000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission2000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission2000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission2000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission4000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 4000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 4000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission4000Hz = { "Transmission4000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission4000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission4000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission4000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission8000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits @ 8000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material transmits @ 8000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission8000Hz = { "Transmission8000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Transmission8000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission8000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission8000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering63Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 63Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 63Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering63Hz = { "Scattering63Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering63Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering63Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering63Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering125Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 125Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 125Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering125Hz = { "Scattering125Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering125Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering125Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering125Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering250Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 250Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 250Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering250Hz = { "Scattering250Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering250Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering250Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering250Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering500Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 500Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 500Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering500Hz = { "Scattering500Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering500Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering500Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering500Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering1000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 1000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 1000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering1000Hz = { "Scattering1000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering1000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering1000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering1000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering2000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 2000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 2000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering2000Hz = { "Scattering2000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering2000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering2000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering2000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering4000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 4000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 4000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering4000Hz = { "Scattering4000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering4000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering4000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering4000Hz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering8000Hz_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material scatters @ 8000Hz\n" },
		{ "ModuleRelativePath", "Private/OculusAudioMaterialComponent.h" },
		{ "ToolTip", "How much this material scatters @ 8000Hz" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering8000Hz = { "Scattering8000Hz", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioMaterialComponent, Scattering8000Hz), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering8000Hz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering8000Hz_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_MaterialPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_MaterialPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption63Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption125Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption250Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption500Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption1000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption2000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption4000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Absorption8000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission63Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission125Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission250Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission500Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission1000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission2000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission4000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Transmission8000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering63Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering125Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering250Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering500Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering1000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering2000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering4000Hz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::NewProp_Scattering8000Hz,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusAudioMaterialComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::ClassParams = {
		&UOculusAudioMaterialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusAudioMaterialComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusAudioMaterialComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusAudioMaterialComponent.OuterSingleton, Z_Construct_UClass_UOculusAudioMaterialComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusAudioMaterialComponent.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UClass* StaticClass<UOculusAudioMaterialComponent>()
	{
		return UOculusAudioMaterialComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusAudioMaterialComponent);
	UOculusAudioMaterialComponent::~UOculusAudioMaterialComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_Statics::EnumInfo[] = {
		{ EOculusAudioMaterial_StaticEnum, TEXT("EOculusAudioMaterial"), &Z_Registration_Info_UEnum_EOculusAudioMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3955814415U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusAudioMaterialComponent, UOculusAudioMaterialComponent::StaticClass, TEXT("UOculusAudioMaterialComponent"), &Z_Registration_Info_UClass_UOculusAudioMaterialComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusAudioMaterialComponent), 2722606672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_224346543(TEXT("/Script/OculusAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioMaterialComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
