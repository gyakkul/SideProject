// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithAreaLightActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithAreaLightActor();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape;
	static UEnum* EDatasmithAreaLightActorShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithAreaLightActorShape"));
		}
		return Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorShape>()
	{
		return EDatasmithAreaLightActorShape_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enumerators[] = {
		{ "EDatasmithAreaLightActorShape::Rectangle", (int64)EDatasmithAreaLightActorShape::Rectangle },
		{ "EDatasmithAreaLightActorShape::Disc", (int64)EDatasmithAreaLightActorShape::Disc },
		{ "EDatasmithAreaLightActorShape::Sphere", (int64)EDatasmithAreaLightActorShape::Sphere },
		{ "EDatasmithAreaLightActorShape::Cylinder", (int64)EDatasmithAreaLightActorShape::Cylinder },
		{ "EDatasmithAreaLightActorShape::None", (int64)EDatasmithAreaLightActorShape::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Keep in sync with EDatasmithLightShape from DatasmithDefinitions\n" },
		{ "Cylinder.Name", "EDatasmithAreaLightActorShape::Cylinder" },
		{ "Disc.Name", "EDatasmithAreaLightActorShape::Disc" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "None.Name", "EDatasmithAreaLightActorShape::None" },
		{ "Rectangle.Name", "EDatasmithAreaLightActorShape::Rectangle" },
		{ "Sphere.Name", "EDatasmithAreaLightActorShape::Sphere" },
		{ "ToolTip", "Keep in sync with EDatasmithLightShape from DatasmithDefinitions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		"EDatasmithAreaLightActorShape",
		"EDatasmithAreaLightActorShape",
		Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithAreaLightActorType;
	static UEnum* EDatasmithAreaLightActorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithAreaLightActorType"));
		}
		return Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorType>()
	{
		return EDatasmithAreaLightActorType_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enumerators[] = {
		{ "EDatasmithAreaLightActorType::Point", (int64)EDatasmithAreaLightActorType::Point },
		{ "EDatasmithAreaLightActorType::Spot", (int64)EDatasmithAreaLightActorType::Spot },
		{ "EDatasmithAreaLightActorType::Rect", (int64)EDatasmithAreaLightActorType::Rect },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "Point.Name", "EDatasmithAreaLightActorType::Point" },
		{ "Rect.Name", "EDatasmithAreaLightActorType::Rect" },
		{ "Spot.Name", "EDatasmithAreaLightActorType::Spot" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		"EDatasmithAreaLightActorType",
		"EDatasmithAreaLightActorType",
		Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton;
	}
	void ADatasmithAreaLightActor::StaticRegisterNativesADatasmithAreaLightActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADatasmithAreaLightActor);
	UClass* Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister()
	{
		return ADatasmithAreaLightActor::StaticClass();
	}
	struct Z_Construct_UClass_ADatasmithAreaLightActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IESTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[];
#endif
		static void NewProp_bUseIESBrightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotlightInnerAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpotlightInnerAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotlightOuterAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpotlightOuterAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADatasmithAreaLightActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatasmithAreaLightActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "Mobility" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Mobility_MetaData)) }; // 3258784245
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, LightType), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_MetaData)) }; // 4169612036
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape = { "LightShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, LightShape), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_MetaData)) }; // 2181757507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Light" },
		{ "EditCondition", "LightShape != EDatasmithAreaLightActorShape::None" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, Dimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, Intensity), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_MetaData)) }; // 117192790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, Temperature), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Use IES Intensity" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	void Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
	{
		((ADatasmithAreaLightActor*)Obj)->bUseIESBrightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADatasmithAreaLightActor), &Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "IES Intensity Scale" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, IESBrightnessScale), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, SourceRadius), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, SourceLength), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "5.0" },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "1.0" },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle = { "SpotlightInnerAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, SpotlightInnerAngle), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "1.0" },
		{ "UIMax", "80.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle = { "SpotlightOuterAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithAreaLightActor, SpotlightOuterAngle), METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Mobility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADatasmithAreaLightActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithAreaLightActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::ClassParams = {
		&ADatasmithAreaLightActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADatasmithAreaLightActor()
	{
		if (!Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton, Z_Construct_UClass_ADatasmithAreaLightActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<ADatasmithAreaLightActor>()
	{
		return ADatasmithAreaLightActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithAreaLightActor);
	ADatasmithAreaLightActor::~ADatasmithAreaLightActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::EnumInfo[] = {
		{ EDatasmithAreaLightActorShape_StaticEnum, TEXT("EDatasmithAreaLightActorShape"), &Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2181757507U) },
		{ EDatasmithAreaLightActorType_StaticEnum, TEXT("EDatasmithAreaLightActorType"), &Z_Registration_Info_UEnum_EDatasmithAreaLightActorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4169612036U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADatasmithAreaLightActor, ADatasmithAreaLightActor::StaticClass, TEXT("ADatasmithAreaLightActor"), &Z_Registration_Info_UClass_ADatasmithAreaLightActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADatasmithAreaLightActor), 2636517992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_2627152808(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
