// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXDisplayClusterLightCardComponent.h"
#include "DMXTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXDisplayClusterLightCardComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DMXDISPLAYCLUSTERLIGHTCARD_API UClass* Z_Construct_UClass_UDMXDisplayClusterLightCardComponent();
	DMXDISPLAYCLUSTERLIGHTCARD_API UClass* Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_NoRegister();
	DMXDISPLAYCLUSTERLIGHTCARD_API UScriptStruct* Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXComponent();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap();
	UPackage* Z_Construct_UPackage__Script_DMXDisplayClusterLightCard();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges;
class UScriptStruct* FDMXDisplayClusterLightCardActorDataValueRanges::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges, (UObject*)Z_Construct_UPackage__Script_DMXDisplayClusterLightCard(), TEXT("DMXDisplayClusterLightCardActorDataValueRanges"));
	}
	return Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges.OuterSingleton;
}
template<> DMXDISPLAYCLUSTERLIGHTCARD_API UScriptStruct* StaticStruct<FDMXDisplayClusterLightCardActorDataValueRanges>()
{
	return FDMXDisplayClusterLightCardActorDataValueRanges::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceFromCenter_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinDistanceFromCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFromCenter_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistanceFromCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLongitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinLongitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLongitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLongitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLatitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinLatitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLatitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLatitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLongitudeU_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLongitudeU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLongitudeU_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLongitudeU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLatitudeV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLatitudeV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLatitudeV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLatitudeV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpin_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSpin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpin_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSpin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinYaw_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxYaw_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinExposure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxExposure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFeathering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFeathering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFeathering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFeathering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGradientAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGradientAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGradientAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGradientAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXDisplayClusterLightCardActorDataValueRanges>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinDistanceFromCenter_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinDistanceFromCenter = { "MinDistanceFromCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinDistanceFromCenter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinDistanceFromCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinDistanceFromCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxDistanceFromCenter_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxDistanceFromCenter = { "MaxDistanceFromCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxDistanceFromCenter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxDistanceFromCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxDistanceFromCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitude_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitude = { "MinLongitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinLongitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitude_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitude = { "MaxLongitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxLongitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitude_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitude = { "MinLatitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinLatitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitude_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitude = { "MaxLatitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxLatitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitudeU_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Min longitude when the light card uses UV Mode */" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
		{ "ToolTip", "Min longitude when the light card uses UV Mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitudeU = { "MinLongitudeU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinLongitudeU), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitudeU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitudeU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitudeU_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Max longitude when the light card uses UV Mode */" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
		{ "ToolTip", "Max longitude when the light card uses UV Mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitudeU = { "MaxLongitudeU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxLongitudeU), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitudeU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitudeU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitudeV_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Min latitude when the light card uses UV Mode */" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
		{ "ToolTip", "Min latitude when the light card uses UV Mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitudeV = { "MinLatitudeV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinLatitudeV), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitudeV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitudeV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitudeV_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Max latitude when the light card uses UV Mode */" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
		{ "ToolTip", "Max latitude when the light card uses UV Mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitudeV = { "MaxLatitudeV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxLatitudeV), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitudeV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitudeV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinSpin_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinSpin = { "MinSpin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinSpin), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinSpin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinSpin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxSpin_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxSpin = { "MaxSpin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxSpin), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxSpin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxSpin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinPitch_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxPitch_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinYaw_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinYaw = { "MinYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxYaw_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxYaw = { "MaxYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinScale_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTemperature_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTemperature = { "MinTemperature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinTemperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTemperature_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTemperature = { "MaxTemperature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxTemperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTint_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTint = { "MinTint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinTint), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTint_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTint = { "MaxTint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxTint), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinExposure_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinExposure = { "MinExposure", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinExposure), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxExposure_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxExposure = { "MaxExposure", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxExposure), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGain_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGain = { "MinGain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGain_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGain = { "MaxGain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinFeathering_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinFeathering = { "MinFeathering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinFeathering), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinFeathering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinFeathering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxFeathering_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxFeathering = { "MaxFeathering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxFeathering), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxFeathering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxFeathering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGradientAngle_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGradientAngle = { "MinGradientAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MinGradientAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGradientAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGradientAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGradientAngle_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGradientAngle = { "MaxGradientAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXDisplayClusterLightCardActorDataValueRanges, MaxGradientAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGradientAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGradientAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinDistanceFromCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxDistanceFromCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLongitudeU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLongitudeU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinLatitudeV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxLatitudeV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinSpin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxSpin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinFeathering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxFeathering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MinGradientAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewProp_MaxGradientAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXDisplayClusterLightCard,
		nullptr,
		&NewStructOps,
		"DMXDisplayClusterLightCardActorDataValueRanges",
		sizeof(FDMXDisplayClusterLightCardActorDataValueRanges),
		alignof(FDMXDisplayClusterLightCardActorDataValueRanges),
		Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges.InnerSingleton, Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges.InnerSingleton;
	}
	DEFINE_FUNCTION(UDMXDisplayClusterLightCardComponent::execOnLightCardReceivedDMXFromPatch)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT_REF(FDMXNormalizedAttributeValueMap,Z_Param_Out_ValuePerAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLightCardReceivedDMXFromPatch(Z_Param_FixturePatch,Z_Param_Out_ValuePerAttribute);
		P_NATIVE_END;
	}
	void UDMXDisplayClusterLightCardComponent::StaticRegisterNativesUDMXDisplayClusterLightCardComponent()
	{
		UClass* Class = UDMXDisplayClusterLightCardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLightCardReceivedDMXFromPatch", &UDMXDisplayClusterLightCardComponent::execOnLightCardReceivedDMXFromPatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics
	{
		struct DMXDisplayClusterLightCardComponent_eventOnLightCardReceivedDMXFromPatch_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FDMXNormalizedAttributeValueMap ValuePerAttribute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuePerAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValuePerAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXDisplayClusterLightCardComponent_eventOnLightCardReceivedDMXFromPatch_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::NewProp_ValuePerAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::NewProp_ValuePerAttribute = { "ValuePerAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXDisplayClusterLightCardComponent_eventOnLightCardReceivedDMXFromPatch_Parms, ValuePerAttribute), Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::NewProp_ValuePerAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::NewProp_ValuePerAttribute_MetaData)) }; // 2558012157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::NewProp_ValuePerAttribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the fixture patch received DMX */" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
		{ "ToolTip", "Called when the fixture patch received DMX" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXDisplayClusterLightCardComponent, nullptr, "OnLightCardReceivedDMXFromPatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::DMXDisplayClusterLightCardComponent_eventOnLightCardReceivedDMXFromPatch_Parms), Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXDisplayClusterLightCardComponent);
	UClass* Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_NoRegister()
	{
		return UDMXDisplayClusterLightCardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueRanges_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueRanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXDisplayClusterLightCard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXDisplayClusterLightCardComponent_OnLightCardReceivedDMXFromPatch, "OnLightCardReceivedDMXFromPatch" }, // 2741379587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AssetUserData Tags Replication Variable Sockets Activation Cooking ComponentReplication Collision ComponentTick" },
		{ "IncludePath", "DMXDisplayClusterLightCardComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::NewProp_ValueRanges_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Value ranges for Min and Max DMX Values */" },
		{ "ModuleRelativePath", "Private/DMXDisplayClusterLightCardComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Value ranges for Min and Max DMX Values" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::NewProp_ValueRanges = { "ValueRanges", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXDisplayClusterLightCardComponent, ValueRanges), Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges, METADATA_PARAMS(Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::NewProp_ValueRanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::NewProp_ValueRanges_MetaData)) }; // 3651254264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::NewProp_ValueRanges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXDisplayClusterLightCardComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::ClassParams = {
		&UDMXDisplayClusterLightCardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXDisplayClusterLightCardComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXDisplayClusterLightCardComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXDisplayClusterLightCardComponent.OuterSingleton, Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXDisplayClusterLightCardComponent.OuterSingleton;
	}
	template<> DMXDISPLAYCLUSTERLIGHTCARD_API UClass* StaticClass<UDMXDisplayClusterLightCardComponent>()
	{
		return UDMXDisplayClusterLightCardComponent::StaticClass();
	}
	UDMXDisplayClusterLightCardComponent::UDMXDisplayClusterLightCardComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXDisplayClusterLightCardComponent);
	UDMXDisplayClusterLightCardComponent::~UDMXDisplayClusterLightCardComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_Statics::ScriptStructInfo[] = {
		{ FDMXDisplayClusterLightCardActorDataValueRanges::StaticStruct, Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics::NewStructOps, TEXT("DMXDisplayClusterLightCardActorDataValueRanges"), &Z_Registration_Info_UScriptStruct_DMXDisplayClusterLightCardActorDataValueRanges, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXDisplayClusterLightCardActorDataValueRanges), 3651254264U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXDisplayClusterLightCardComponent, UDMXDisplayClusterLightCardComponent::StaticClass, TEXT("UDMXDisplayClusterLightCardComponent"), &Z_Registration_Info_UClass_UDMXDisplayClusterLightCardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXDisplayClusterLightCardComponent), 2777288454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_2749250866(TEXT("/Script/DMXDisplayClusterLightCard"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
