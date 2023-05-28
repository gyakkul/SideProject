// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColorCorrectRegion.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorCorrectRegion() {}
// Cross Module References
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectionRegion();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectionRegion_NoRegister();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectRegion();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectRegion_NoRegister();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_UColorCorrectionInvisibleComponent();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_UColorCorrectionInvisibleComponent_NoRegister();
	COLORCORRECTREGIONS_API UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType();
	COLORCORRECTREGIONS_API UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType();
	COLORCORRECTREGIONS_API UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType();
	COLORCORRECTREGIONS_API UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings();
	UPackage* Z_Construct_UPackage__Script_ColorCorrectRegions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorCorrectRegionsType;
	static UEnum* EColorCorrectRegionsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectRegionsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColorCorrectRegionsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType, (UObject*)Z_Construct_UPackage__Script_ColorCorrectRegions(), TEXT("EColorCorrectRegionsType"));
		}
		return Z_Registration_Info_UEnum_EColorCorrectRegionsType.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectRegionsType>()
	{
		return EColorCorrectRegionsType_StaticEnum();
	}
	struct Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::Enumerators[] = {
		{ "EColorCorrectRegionsType::Sphere", (int64)EColorCorrectRegionsType::Sphere },
		{ "EColorCorrectRegionsType::Box", (int64)EColorCorrectRegionsType::Box },
		{ "EColorCorrectRegionsType::Cylinder", (int64)EColorCorrectRegionsType::Cylinder },
		{ "EColorCorrectRegionsType::Cone", (int64)EColorCorrectRegionsType::Cone },
		{ "EColorCorrectRegionsType::MAX", (int64)EColorCorrectRegionsType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.DisplayName", "Box" },
		{ "Box.Name", "EColorCorrectRegionsType::Box" },
		{ "Cone.DisplayName", "Cone" },
		{ "Cone.Name", "EColorCorrectRegionsType::Cone" },
		{ "Cylinder.DisplayName", "Cylinder" },
		{ "Cylinder.Name", "EColorCorrectRegionsType::Cylinder" },
		{ "MAX.Name", "EColorCorrectRegionsType::MAX" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EColorCorrectRegionsType::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
		nullptr,
		"EColorCorrectRegionsType",
		"EColorCorrectRegionsType",
		Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectRegionsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorCorrectRegionsType.InnerSingleton, Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColorCorrectRegionsType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorCorrectWindowType;
	static UEnum* EColorCorrectWindowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectWindowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColorCorrectWindowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType, (UObject*)Z_Construct_UPackage__Script_ColorCorrectRegions(), TEXT("EColorCorrectWindowType"));
		}
		return Z_Registration_Info_UEnum_EColorCorrectWindowType.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectWindowType>()
	{
		return EColorCorrectWindowType_StaticEnum();
	}
	struct Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::Enumerators[] = {
		{ "EColorCorrectWindowType::Square", (int64)EColorCorrectWindowType::Square },
		{ "EColorCorrectWindowType::Circle", (int64)EColorCorrectWindowType::Circle },
		{ "EColorCorrectWindowType::MAX", (int64)EColorCorrectWindowType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.DisplayName", "Circle" },
		{ "Circle.Name", "EColorCorrectWindowType::Circle" },
		{ "MAX.Name", "EColorCorrectWindowType::MAX" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "Square.DisplayName", "Square" },
		{ "Square.Name", "EColorCorrectWindowType::Square" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
		nullptr,
		"EColorCorrectWindowType",
		"EColorCorrectWindowType",
		Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectWindowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorCorrectWindowType.InnerSingleton, Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColorCorrectWindowType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType;
	static UEnum* EColorCorrectRegionTemperatureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType, (UObject*)Z_Construct_UPackage__Script_ColorCorrectRegions(), TEXT("EColorCorrectRegionTemperatureType"));
		}
		return Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectRegionTemperatureType>()
	{
		return EColorCorrectRegionTemperatureType_StaticEnum();
	}
	struct Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::Enumerators[] = {
		{ "EColorCorrectRegionTemperatureType::LegacyTemperature", (int64)EColorCorrectRegionTemperatureType::LegacyTemperature },
		{ "EColorCorrectRegionTemperatureType::WhiteBalance", (int64)EColorCorrectRegionTemperatureType::WhiteBalance },
		{ "EColorCorrectRegionTemperatureType::ColorTemperature", (int64)EColorCorrectRegionTemperatureType::ColorTemperature },
		{ "EColorCorrectRegionTemperatureType::MAX", (int64)EColorCorrectRegionTemperatureType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ColorTemperature.DisplayName", "Color Temperature" },
		{ "ColorTemperature.Name", "EColorCorrectRegionTemperatureType::ColorTemperature" },
		{ "LegacyTemperature.DisplayName", "Temperature (Legacy)" },
		{ "LegacyTemperature.Name", "EColorCorrectRegionTemperatureType::LegacyTemperature" },
		{ "MAX.Name", "EColorCorrectRegionTemperatureType::MAX" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "WhiteBalance.DisplayName", "White Balance" },
		{ "WhiteBalance.Name", "EColorCorrectRegionTemperatureType::WhiteBalance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
		nullptr,
		"EColorCorrectRegionTemperatureType",
		"EColorCorrectRegionTemperatureType",
		Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType.InnerSingleton, Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorCorrectRegionStencilType;
	static UEnum* EColorCorrectRegionStencilType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectRegionStencilType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColorCorrectRegionStencilType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType, (UObject*)Z_Construct_UPackage__Script_ColorCorrectRegions(), TEXT("EColorCorrectRegionStencilType"));
		}
		return Z_Registration_Info_UEnum_EColorCorrectRegionStencilType.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectRegionStencilType>()
	{
		return EColorCorrectRegionStencilType_StaticEnum();
	}
	struct Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::Enumerators[] = {
		{ "EColorCorrectRegionStencilType::ExcludeStencil", (int64)EColorCorrectRegionStencilType::ExcludeStencil },
		{ "EColorCorrectRegionStencilType::IncludeStencil", (int64)EColorCorrectRegionStencilType::IncludeStencil },
		{ "EColorCorrectRegionStencilType::MAX", (int64)EColorCorrectRegionStencilType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExcludeStencil.DisplayName", "Exclude Selected Actors" },
		{ "ExcludeStencil.Name", "EColorCorrectRegionStencilType::ExcludeStencil" },
		{ "IncludeStencil.DisplayName", "Affect Only Selected Actors" },
		{ "IncludeStencil.Name", "EColorCorrectRegionStencilType::IncludeStencil" },
		{ "MAX.Name", "EColorCorrectRegionStencilType::MAX" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
		nullptr,
		"EColorCorrectRegionStencilType",
		"EColorCorrectRegionStencilType",
		Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType()
	{
		if (!Z_Registration_Info_UEnum_EColorCorrectRegionStencilType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorCorrectRegionStencilType.InnerSingleton, Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColorCorrectRegionStencilType.InnerSingleton;
	}
	void AColorCorrectRegion::StaticRegisterNativesAColorCorrectRegion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AColorCorrectRegion);
	UClass* Z_Construct_UClass_AColorCorrectRegion_NoRegister()
	{
		return AColorCorrectRegion::StaticClass();
	}
	struct Z_Construct_UClass_AColorCorrectRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Invert_MetaData[];
#endif
		static void NewProp_Invert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Invert;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TemperatureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TemperatureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerActorCC_MetaData[];
#endif
		static void NewProp_bEnablePerActorCC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerActorCC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PerActorColorCorrection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerActorColorCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PerActorColorCorrection;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AffectedActors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedActors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AffectedActors;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdentityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IdentityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColorCorrectRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An instance of Color Correction Region. Used to aggregate all active regions.\n * This actor is aggregated by ColorCorrectRegionsSubsystem which handles:\n *   - Level Loaded, Undo/Redo, Added to level, Removed from level events. \n * AActor class itself is not aware of when it is added/removed, Undo/Redo etc in the Editor. \n * AColorCorrectRegion reaches out to UColorCorrectRegionsSubsystem when its priority is changed, requesting regions to be sorted \n * or during BeginPlay/EndPlay to register itself. \n * More information in ColorCorrectRegionsSubsytem.h\n */" },
		{ "IncludePath", "ColorCorrectRegion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "An instance of Color Correction Region. Used to aggregate all active regions.\nThis actor is aggregated by ColorCorrectRegionsSubsystem which handles:\n  - Level Loaded, Undo/Redo, Added to level, Removed from level events.\nAActor class itself is not aware of when it is added/removed, Undo/Redo etc in the Editor.\nAColorCorrectRegion reaches out to UColorCorrectRegionsSubsystem when its priority is changed, requesting regions to be sorted\nor during BeginPlay/EndPlay to register itself.\nMore information in ColorCorrectRegionsSubsytem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Region type. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Region type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Type), Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionsType, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Type_MetaData)) }; // 3291576102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** \n\x09* Render priority/order. The higher the number the later region will be applied. \n\x09* A region with Priority 1 will be rendered before a region with Priority 10. \n\x09* This property is hidden if priority is determined by distance from the camera (When Window CCR is being used). \n\x09*/" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Render priority/order. The higher the number the later region will be applied.\nA region with Priority 1 will be rendered before a region with Priority 10.\nThis property is hidden if priority is determined by distance from the camera (When Window CCR is being used)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Priority), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Color correction intensity. Clamped to 0-1 range. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Color correction intensity. Clamped to 0-1 range." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Intensity), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Inner_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Inner of the region. Swapped with Outer in case it is higher than Outer. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Inner of the region. Swapped with Outer in case it is higher than Outer." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Inner = { "Inner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Inner), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Outer_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Outer of the region. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Outer of the region." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Outer), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Outer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Outer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Falloff. Softening the region. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Falloff. Softening the region." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Falloff), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Invert_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Invert region. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Invert region." },
	};
#endif
	void Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Invert_SetBit(void* Obj)
	{
		((AColorCorrectRegion*)Obj)->Invert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Invert = { "Invert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AColorCorrectRegion), &Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Invert_SetBit, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Invert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Invert_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_TemperatureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_TemperatureType_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Type of algorithm to be used to control color temperature or white balance. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Type of algorithm to be used to control color temperature or white balance." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_TemperatureType = { "TemperatureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, TemperatureType), Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionTemperatureType, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_TemperatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_TemperatureType_MetaData)) }; // 262118001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Color correction temperature. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Color correction temperature." },
		{ "UIMax", "15000.0" },
		{ "UIMin", "1500.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Temperature), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Tint_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Color temperature tint. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Color temperature tint." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, Tint), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Color correction settings. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Color correction settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, ColorGradingSettings), Z_Construct_UScriptStruct_FColorGradingSettings, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 32815037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Enable/Disable color correction provided by this region. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Enable/Disable color correction provided by this region." },
	};
#endif
	void Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((AColorCorrectRegion*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AColorCorrectRegion), &Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_bEnablePerActorCC_MetaData[] = {
		{ "Category", "Per Actor CC" },
		{ "Comment", "/** Enables or disabled per actor color correction. */" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Enables or disabled per actor color correction." },
	};
#endif
	void Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_bEnablePerActorCC_SetBit(void* Obj)
	{
		((AColorCorrectRegion*)Obj)->bEnablePerActorCC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_bEnablePerActorCC = { "bEnablePerActorCC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AColorCorrectRegion), &Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_bEnablePerActorCC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_bEnablePerActorCC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_bEnablePerActorCC_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_PerActorColorCorrection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_PerActorColorCorrection_MetaData[] = {
		{ "Category", "Per Actor CC" },
		{ "Comment", "/** Controls in which way the below targets will be affected by color correction. */" },
		{ "DisplayName", "Per Actor CC Mode" },
		{ "editcondition", "bEnablePerActorCC" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Controls in which way the below targets will be affected by color correction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_PerActorColorCorrection = { "PerActorColorCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, PerActorColorCorrection), Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectRegionStencilType, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_PerActorColorCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_PerActorColorCorrection_MetaData)) }; // 3646840552
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_AffectedActors_ElementProp = { "AffectedActors", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_AffectedActors_MetaData[] = {
		{ "Category", "Per Actor CC" },
		{ "Comment", "/** List of actors that get affected or ignored by Per actor CC. Effect depends on the above option. */" },
		{ "DisplayName", "Actor Selection" },
		{ "editcondition", "bEnablePerActorCC" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "List of actors that get affected or ignored by Per actor CC. Effect depends on the above option." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_AffectedActors = { "AffectedActors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, AffectedActors), METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_AffectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_AffectedActors_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Billboard component for this actor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "Billboard component for this actor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_IdentityComponent_MetaData[] = {
		{ "Comment", "/** The main purpose of this component is to determine the visibility status of this Color Correction Actor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "The main purpose of this component is to determine the visibility status of this Color Correction Actor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_IdentityComponent = { "IdentityComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectRegion, IdentityComponent), Z_Construct_UClass_UColorCorrectionInvisibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_IdentityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_IdentityComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AColorCorrectRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Invert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_TemperatureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_TemperatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_ColorGradingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_bEnablePerActorCC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_PerActorColorCorrection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_PerActorColorCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_AffectedActors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_AffectedActors,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectRegion_Statics::NewProp_IdentityComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColorCorrectRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorCorrectRegion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorCorrectRegion_Statics::ClassParams = {
		&AColorCorrectRegion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AColorCorrectRegion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AColorCorrectRegion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectRegion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AColorCorrectRegion()
	{
		if (!Z_Registration_Info_UClass_AColorCorrectRegion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AColorCorrectRegion.OuterSingleton, Z_Construct_UClass_AColorCorrectRegion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AColorCorrectRegion.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UClass* StaticClass<AColorCorrectRegion>()
	{
		return AColorCorrectRegion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorCorrectRegion);
	AColorCorrectRegion::~AColorCorrectRegion() {}
	void AColorCorrectionRegion::StaticRegisterNativesAColorCorrectionRegion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AColorCorrectionRegion);
	UClass* Z_Construct_UClass_AColorCorrectionRegion_NoRegister()
	{
		return AColorCorrectionRegion::StaticClass();
	}
	struct Z_Construct_UClass_AColorCorrectionRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColorCorrectionRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AColorCorrectRegion,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectionRegion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A placeable Color Correction Regions actor that replaces previous implementation (blueprint). \n * Color Correction Regions allow users to adjust color of anything that is within it (or outside, if Invert option is selected). \n */" },
		{ "IncludePath", "ColorCorrectRegion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "A placeable Color Correction Regions actor that replaces previous implementation (blueprint).\nColor Correction Regions allow users to adjust color of anything that is within it (or outside, if Invert option is selected)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AColorCorrectionRegion_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectionRegion_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AColorCorrectionRegion_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectionRegion, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectionRegion_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionRegion_Statics::NewProp_MeshComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AColorCorrectionRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionRegion_Statics::NewProp_MeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionRegion_Statics::NewProp_MeshComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColorCorrectionRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorCorrectionRegion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorCorrectionRegion_Statics::ClassParams = {
		&AColorCorrectionRegion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AColorCorrectionRegion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionRegion_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AColorCorrectionRegion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionRegion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AColorCorrectionRegion()
	{
		if (!Z_Registration_Info_UClass_AColorCorrectionRegion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AColorCorrectionRegion.OuterSingleton, Z_Construct_UClass_AColorCorrectionRegion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AColorCorrectionRegion.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UClass* StaticClass<AColorCorrectionRegion>()
	{
		return AColorCorrectionRegion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorCorrectionRegion);
	AColorCorrectionRegion::~AColorCorrectionRegion() {}
	void UColorCorrectionInvisibleComponent::StaticRegisterNativesUColorCorrectionInvisibleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorCorrectionInvisibleComponent);
	UClass* Z_Construct_UClass_UColorCorrectionInvisibleComponent_NoRegister()
	{
		return UColorCorrectionInvisibleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This component class is used to determine if Color Correction Window/Region is hidden via HiddenPrimitives/ShowOnlyPrimitivesShowOnlyPrimitives\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ColorCorrectRegion.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ColorCorrectRegion.h" },
		{ "ToolTip", "This component class is used to determine if Color Correction Window/Region is hidden via HiddenPrimitives/ShowOnlyPrimitivesShowOnlyPrimitives" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorCorrectionInvisibleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics::ClassParams = {
		&UColorCorrectionInvisibleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorCorrectionInvisibleComponent()
	{
		if (!Z_Registration_Info_UClass_UColorCorrectionInvisibleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorCorrectionInvisibleComponent.OuterSingleton, Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorCorrectionInvisibleComponent.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UClass* StaticClass<UColorCorrectionInvisibleComponent>()
	{
		return UColorCorrectionInvisibleComponent::StaticClass();
	}
	UColorCorrectionInvisibleComponent::UColorCorrectionInvisibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorCorrectionInvisibleComponent);
	UColorCorrectionInvisibleComponent::~UColorCorrectionInvisibleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_Statics::EnumInfo[] = {
		{ EColorCorrectRegionsType_StaticEnum, TEXT("EColorCorrectRegionsType"), &Z_Registration_Info_UEnum_EColorCorrectRegionsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3291576102U) },
		{ EColorCorrectWindowType_StaticEnum, TEXT("EColorCorrectWindowType"), &Z_Registration_Info_UEnum_EColorCorrectWindowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2061992170U) },
		{ EColorCorrectRegionTemperatureType_StaticEnum, TEXT("EColorCorrectRegionTemperatureType"), &Z_Registration_Info_UEnum_EColorCorrectRegionTemperatureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 262118001U) },
		{ EColorCorrectRegionStencilType_StaticEnum, TEXT("EColorCorrectRegionStencilType"), &Z_Registration_Info_UEnum_EColorCorrectRegionStencilType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3646840552U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AColorCorrectRegion, AColorCorrectRegion::StaticClass, TEXT("AColorCorrectRegion"), &Z_Registration_Info_UClass_AColorCorrectRegion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorCorrectRegion), 470515628U) },
		{ Z_Construct_UClass_AColorCorrectionRegion, AColorCorrectionRegion::StaticClass, TEXT("AColorCorrectionRegion"), &Z_Registration_Info_UClass_AColorCorrectionRegion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorCorrectionRegion), 849218684U) },
		{ Z_Construct_UClass_UColorCorrectionInvisibleComponent, UColorCorrectionInvisibleComponent::StaticClass, TEXT("UColorCorrectionInvisibleComponent"), &Z_Registration_Info_UClass_UColorCorrectionInvisibleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorCorrectionInvisibleComponent), 671036665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_607653408(TEXT("/Script/ColorCorrectRegions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
