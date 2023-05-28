// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkyAtmosphereComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyAtmosphereComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_ASkyAtmosphere();
	ENGINE_API UClass* Z_Construct_UClass_ASkyAtmosphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTentDistribution();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TentDistribution;
class UScriptStruct* FTentDistribution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TentDistribution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TentDistribution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTentDistribution, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TentDistribution"));
	}
	return Z_Registration_Info_UScriptStruct_TentDistribution.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTentDistribution>()
{
	return FTentDistribution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTentDistribution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TipAltitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TipValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTentDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTentDistribution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude_MetaData[] = {
		{ "Category", "Tent" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "UIMax", "60.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude = { "TipAltitude", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTentDistribution, TipAltitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue_MetaData[] = {
		{ "Category", "Tent" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue = { "TipValue", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTentDistribution, TipValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Tent" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTentDistribution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTentDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TentDistribution",
		sizeof(FTentDistribution),
		alignof(FTentDistribution),
		Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTentDistribution()
	{
		if (!Z_Registration_Info_UScriptStruct_TentDistribution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TentDistribution.InnerSingleton, Z_Construct_UScriptStruct_FTentDistribution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TentDistribution.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode;
	static UEnum* ESkyAtmosphereTransformMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkyAtmosphereTransformMode"));
		}
		return Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkyAtmosphereTransformMode>()
	{
		return ESkyAtmosphereTransformMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enumerators[] = {
		{ "ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin", (int64)ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin },
		{ "ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform", (int64)ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform },
		{ "ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform", (int64)ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "PlanetCenterAtComponentTransform.Name", "ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform" },
		{ "PlanetTopAtAbsoluteWorldOrigin.Name", "ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin" },
		{ "PlanetTopAtComponentTransform.Name", "ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESkyAtmosphereTransformMode",
		"ESkyAtmosphereTransformMode",
		Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode()
	{
		if (!Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.InnerSingleton, Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.InnerSingleton;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execGetAtmosphereTransmitanceOnGroundAtPlanetTop)
	{
		P_GET_OBJECT(UDirectionalLightComponent,Z_Param_DirectionalLight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetAtmosphereTransmitanceOnGroundAtPlanetTop(Z_Param_DirectionalLight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetHeightFogContribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightFogContribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetAerialPespectiveViewDistanceScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAerialPespectiveViewDistanceScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetSkyLuminanceFactor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkyLuminanceFactor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetOtherAbsorption)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOtherAbsorption(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetOtherAbsorptionScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOtherAbsorptionScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieExponentialDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieExponentialDistribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAnisotropy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieAnisotropy(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAbsorption)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieAbsorption(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAbsorptionScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieAbsorptionScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieScattering)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieScattering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieScatteringScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieScatteringScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighExponentialDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayleighExponentialDistribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighScattering)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayleighScattering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighScatteringScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayleighScatteringScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMultiScatteringFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMultiScatteringFactor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetAtmosphereHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtmosphereHeight(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execResetAtmosphereLightDirectionOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAtmosphereLightDirectionOverride(Z_Param_AtmosphereLightIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execGetOverridenAtmosphereLightDirection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOverridenAtmosphereLightDirection(Z_Param_AtmosphereLightIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execIsAtmosphereLightDirectionOverriden)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAtmosphereLightDirectionOverriden(Z_Param_AtmosphereLightIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execOverrideAtmosphereLightDirection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LightDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideAtmosphereLightDirection(Z_Param_AtmosphereLightIndex,Z_Param_Out_LightDirection);
		P_NATIVE_END;
	}
	void USkyAtmosphereComponent::StaticRegisterNativesUSkyAtmosphereComponent()
	{
		UClass* Class = USkyAtmosphereComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtmosphereTransmitanceOnGroundAtPlanetTop", &USkyAtmosphereComponent::execGetAtmosphereTransmitanceOnGroundAtPlanetTop },
			{ "GetOverridenAtmosphereLightDirection", &USkyAtmosphereComponent::execGetOverridenAtmosphereLightDirection },
			{ "IsAtmosphereLightDirectionOverriden", &USkyAtmosphereComponent::execIsAtmosphereLightDirectionOverriden },
			{ "OverrideAtmosphereLightDirection", &USkyAtmosphereComponent::execOverrideAtmosphereLightDirection },
			{ "ResetAtmosphereLightDirectionOverride", &USkyAtmosphereComponent::execResetAtmosphereLightDirectionOverride },
			{ "SetAerialPespectiveViewDistanceScale", &USkyAtmosphereComponent::execSetAerialPespectiveViewDistanceScale },
			{ "SetAtmosphereHeight", &USkyAtmosphereComponent::execSetAtmosphereHeight },
			{ "SetHeightFogContribution", &USkyAtmosphereComponent::execSetHeightFogContribution },
			{ "SetMieAbsorption", &USkyAtmosphereComponent::execSetMieAbsorption },
			{ "SetMieAbsorptionScale", &USkyAtmosphereComponent::execSetMieAbsorptionScale },
			{ "SetMieAnisotropy", &USkyAtmosphereComponent::execSetMieAnisotropy },
			{ "SetMieExponentialDistribution", &USkyAtmosphereComponent::execSetMieExponentialDistribution },
			{ "SetMieScattering", &USkyAtmosphereComponent::execSetMieScattering },
			{ "SetMieScatteringScale", &USkyAtmosphereComponent::execSetMieScatteringScale },
			{ "SetMultiScatteringFactor", &USkyAtmosphereComponent::execSetMultiScatteringFactor },
			{ "SetOtherAbsorption", &USkyAtmosphereComponent::execSetOtherAbsorption },
			{ "SetOtherAbsorptionScale", &USkyAtmosphereComponent::execSetOtherAbsorptionScale },
			{ "SetRayleighExponentialDistribution", &USkyAtmosphereComponent::execSetRayleighExponentialDistribution },
			{ "SetRayleighScattering", &USkyAtmosphereComponent::execSetRayleighScattering },
			{ "SetRayleighScatteringScale", &USkyAtmosphereComponent::execSetRayleighScatteringScale },
			{ "SetSkyLuminanceFactor", &USkyAtmosphereComponent::execSetSkyLuminanceFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics
	{
		struct SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms
		{
			UDirectionalLightComponent* DirectionalLight;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionalLight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_DirectionalLight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_DirectionalLight = { "DirectionalLight", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms, DirectionalLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_DirectionalLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_DirectionalLight_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_DirectionalLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "DisplayName", "Get Atmosphere Transmitance On Ground At Planet Top" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "GetAtmosphereTransmitanceOnGroundAtPlanetTop", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics
	{
		struct SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms
		{
			int32 AtmosphereLightIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms, AtmosphereLightIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "GetOverridenAtmosphereLightDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics
	{
		struct SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms
		{
			int32 AtmosphereLightIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms, AtmosphereLightIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms), &Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_AtmosphereLightIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "IsAtmosphereLightDirectionOverriden", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics
	{
		struct SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms
		{
			int32 AtmosphereLightIndex;
			FVector LightDirection;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms, AtmosphereLightIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection = { "LightDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms, LightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "OverrideAtmosphereLightDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics
	{
		struct SkyAtmosphereComponent_eventResetAtmosphereLightDirectionOverride_Parms
		{
			int32 AtmosphereLightIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventResetAtmosphereLightDirectionOverride_Parms, AtmosphereLightIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::NewProp_AtmosphereLightIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "ResetAtmosphereLightDirectionOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::SkyAtmosphereComponent_eventResetAtmosphereLightDirectionOverride_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetAerialPespectiveViewDistanceScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics
	{
		struct SkyAtmosphereComponent_eventSetAtmosphereHeight_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetAtmosphereHeight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetAtmosphereHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::SkyAtmosphereComponent_eventSetAtmosphereHeight_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics
	{
		struct SkyAtmosphereComponent_eventSetHeightFogContribution_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetHeightFogContribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetHeightFogContribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::SkyAtmosphereComponent_eventSetHeightFogContribution_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieAbsorption_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAbsorption_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAbsorption", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::SkyAtmosphereComponent_eventSetMieAbsorption_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAbsorptionScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieAnisotropy_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAnisotropy_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAnisotropy", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::SkyAtmosphereComponent_eventSetMieAnisotropy_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieExponentialDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieScattering_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieScattering_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieScattering", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::SkyAtmosphereComponent_eventSetMieScattering_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieScatteringScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieScatteringScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieScatteringScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::SkyAtmosphereComponent_eventSetMieScatteringScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics
	{
		struct SkyAtmosphereComponent_eventSetMultiScatteringFactor_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMultiScatteringFactor_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMultiScatteringFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::SkyAtmosphereComponent_eventSetMultiScatteringFactor_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics
	{
		struct SkyAtmosphereComponent_eventSetOtherAbsorption_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetOtherAbsorption_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Absorption" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetOtherAbsorption", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::SkyAtmosphereComponent_eventSetOtherAbsorption_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Absorption Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetOtherAbsorptionScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics
	{
		struct SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighExponentialDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics
	{
		struct SkyAtmosphereComponent_eventSetRayleighScattering_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighScattering_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighScattering", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::SkyAtmosphereComponent_eventSetRayleighScattering_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighScatteringScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics
	{
		struct SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetSkyLuminanceFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyAtmosphereComponent);
	UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister()
	{
		return USkyAtmosphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyAtmosphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AtmosphereHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceSampleCountScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceSampleCountScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayleighScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighExponentialDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorptionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAbsorptionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAnisotropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAnisotropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieExponentialDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherAbsorptionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OtherAbsorptionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherTentDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherTentDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLuminanceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLuminanceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveViewDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveViewDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogContribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceMinLightElevationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmittanceMinLightElevationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AerialPerspectiveStartDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPerspectiveStartDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticLightingBuiltGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bStaticLightingBuiltGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyAtmosphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyAtmosphereComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop, "GetAtmosphereTransmitanceOnGroundAtPlanetTop" }, // 1694886836
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection, "GetOverridenAtmosphereLightDirection" }, // 2257766309
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden, "IsAtmosphereLightDirectionOverriden" }, // 77846823
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection, "OverrideAtmosphereLightDirection" }, // 1451358279
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride, "ResetAtmosphereLightDirectionOverride" }, // 2821590856
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale, "SetAerialPespectiveViewDistanceScale" }, // 1314341153
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight, "SetAtmosphereHeight" }, // 399477481
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution, "SetHeightFogContribution" }, // 1187226356
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption, "SetMieAbsorption" }, // 4173899412
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale, "SetMieAbsorptionScale" }, // 3469136989
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy, "SetMieAnisotropy" }, // 1733561450
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution, "SetMieExponentialDistribution" }, // 1872987616
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering, "SetMieScattering" }, // 1636747179
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale, "SetMieScatteringScale" }, // 4275287863
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor, "SetMultiScatteringFactor" }, // 1815042617
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption, "SetOtherAbsorption" }, // 448404746
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale, "SetOtherAbsorptionScale" }, // 2863994490
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution, "SetRayleighExponentialDistribution" }, // 2538080425
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering, "SetRayleighScattering" }, // 2512635196
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale, "SetRayleighScatteringScale" }, // 84013790
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor, "SetSkyLuminanceFactor" }, // 75974498
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * A component that represents a planet atmosphere material and simulates sky and light scattering within it.\n * @see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SkyAtmosphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "A component that represents a planet atmosphere material and simulates sky and light scattering within it.\n@see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, TransformMode), Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_MetaData)) }; // 729511265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius_MetaData[] = {
		{ "Category", "Planet" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The radius in kilometers from the center of the planet to the ground level. */" },
		{ "DisplayName", "Ground Radius" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The radius in kilometers from the center of the planet to the ground level." },
		{ "UIMax", "7000.000000" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius = { "BottomRadius", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, BottomRadius), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, GroundAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The height of the atmosphere layer above the ground in kilometers. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The height of the atmosphere layer above the ground in kilometers." },
		{ "UIMax", "200.000000" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight = { "AtmosphereHeight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, AtmosphereHeight), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Factor applied to multiple scattering only (after the sun light has bounced around in the atmosphere at least once). \n\x09 * Multiple scattering is evaluated using a dual scattering approach. \n\x09 * A value of 2 is recommended to better represent default atmosphere when r.SkyAtmosphere.MultiScatteringLUT.HighQuality=0. \n\x09 */" },
		{ "DisplayName", "MultiScattering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Factor applied to multiple scattering only (after the sun light has bounced around in the atmosphere at least once).\nMultiple scattering is evaluated using a dual scattering approach.\nA value of 2 is recommended to better represent default atmosphere when r.SkyAtmosphere.MultiScatteringLUT.HighQuality=0." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor = { "MultiScatteringFactor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, MultiScatteringFactor), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TraceSampleCountScale_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the atmosphere tracing sample count. Quality level scalability\n\x09 * The sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 0.\n\x09 * The sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.FastSkyLUT.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 1.\n\x09 * The sample count is still clamped for aerial perspective according to  'r.SkyAtmosphere.AerialPerspectiveLUT.SampleCountMaxPerSlice'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "Scale the atmosphere tracing sample count. Quality level scalability\nThe sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 0.\nThe sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.FastSkyLUT.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 1.\nThe sample count is still clamped for aerial perspective according to  'r.SkyAtmosphere.AerialPerspectiveLUT.SampleCountMaxPerSlice'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TraceSampleCountScale = { "TraceSampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, TraceSampleCountScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TraceSampleCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TraceSampleCountScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Rayleigh scattering coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Rayleigh scattering coefficient scale." },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale = { "RayleighScatteringScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighScatteringScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "Comment", "/** The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering = { "RayleighScattering", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%." },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution = { "RayleighExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighExponentialDistribution), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Mie scattering coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie scattering coefficient scale." },
		{ "UIMax", "5.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale = { "MieScatteringScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, MieScatteringScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "Comment", "/** The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be scattered more. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be scattered more." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering = { "MieScattering", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, MieScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Mie absorption coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie absorption coefficient scale." },
		{ "UIMax", "5.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale = { "MieAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, MieAbsorptionScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "Comment", "/** The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be absorbed more. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be absorbed more." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption = { "MieAbsorption", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, MieAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMax", "0.999000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** A value of 0 mean light is uniformly scattered. A value closer to 1 means lights will scatter more forward, resulting in halos around light sources. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "A value of 0 mean light is uniformly scattered. A value closer to 1 means lights will scatter more forward, resulting in halos around light sources." },
		{ "UIMax", "0.999000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy = { "MieAnisotropy", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, MieAnisotropy), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The altitude in kilometer at which Mie effects are reduced to 40%.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Mie effects are reduced to 40%." },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution = { "MieExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, MieExponentialDistribution), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. This approximates ozone molecules distribution in the Earth atmosphere. */" },
		{ "DisplayName", "Absorption Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. This approximates ozone molecules distribution in the Earth atmosphere." },
		{ "UIMax", "0.200000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale = { "OtherAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, OtherAbsorptionScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "Comment", "/** Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. The default values represents ozone molecules absorption in the Earth atmosphere. */" },
		{ "DisplayName", "Absorption" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. The default values represents ozone molecules absorption in the Earth atmosphere." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption = { "OtherAbsorption", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, OtherAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "Comment", "/** Represents the altitude based tent distribution of absorption particles in the atmosphere. */" },
		{ "DisplayName", "Tent Distribution" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Represents the altitude based tent distribution of absorption particles in the atmosphere." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution = { "OtherTentDistribution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, OtherTentDistribution), Z_Construct_UScriptStruct_FTentDistribution, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution_MetaData)) }; // 3559118681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "Comment", "/** Scales the luminance of pixels representing the sky, i.e. not belonging to any surface. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Scales the luminance of pixels representing the sky, i.e. not belonging to any surface." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor = { "SkyLuminanceFactor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, SkyLuminanceFactor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Makes the aerial perspective look thicker by scaling distances from view to surfaces (opaque and translucent). */" },
		{ "DisplayName", "Aerial Perspective View Distance Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Makes the aerial perspective look thicker by scaling distances from view to surfaces (opaque and translucent)." },
		{ "UIMax", "3.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale = { "AerialPespectiveViewDistanceScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, AerialPespectiveViewDistanceScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Scale the sky and atmosphere lights contribution to the height fog when SupportSkyAtmosphereAffectsHeightFog project setting is true.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Scale the sky and atmosphere lights contribution to the height fog when SupportSkyAtmosphereAffectsHeightFog project setting is true." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution = { "HeightFogContribution", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, HeightFogContribution), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "-90.000000" },
		{ "Comment", "/** The minimum elevation angle in degree that should be used to evaluate the sun transmittance to the ground. Useful to maintain a visible sun light and shadow on meshes even when the sun has started going below the horizon. This does not affect the aerial perspective.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The minimum elevation angle in degree that should be used to evaluate the sun transmittance to the ground. Useful to maintain a visible sun light and shadow on meshes even when the sun has started going below the horizon. This does not affect the aerial perspective." },
		{ "UIMax", "90.000000" },
		{ "UIMin", "-90.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle = { "TransmittanceMinLightElevationAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, TransmittanceMinLightElevationAngle), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPerspectiveStartDepth_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The distance (kilometers) at which we start evaluating the aerial perspective. Having the aerial perspective starts away from the camera can help with performance: pixels not affected by the aerial perspective will have their computation skipped using early depth test.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The distance (kilometers) at which we start evaluating the aerial perspective. Having the aerial perspective starts away from the camera can help with performance: pixels not affected by the aerial perspective will have their computation skipped using early depth test." },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPerspectiveStartDepth = { "AerialPerspectiveStartDepth", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, AerialPerspectiveStartDepth), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPerspectiveStartDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPerspectiveStartDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID_MetaData[] = {
		{ "Comment", "/**\n\x09 * GUID used to associate a atmospheric component with precomputed lighting/shadowing information across levels.\n\x09 * The GUID changes whenever the atmospheric properties change, e.g. LUTs.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "GUID used to associate a atmospheric component with precomputed lighting/shadowing information across levels.\nThe GUID changes whenever the atmospheric properties change, e.g. LUTs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID = { "bStaticLightingBuiltGUID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyAtmosphereComponent, bStaticLightingBuiltGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TraceSampleCountScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPerspectiveStartDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyAtmosphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyAtmosphereComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::ClassParams = {
		&USkyAtmosphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyAtmosphereComponent()
	{
		if (!Z_Registration_Info_UClass_USkyAtmosphereComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyAtmosphereComponent.OuterSingleton, Z_Construct_UClass_USkyAtmosphereComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyAtmosphereComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkyAtmosphereComponent>()
	{
		return USkyAtmosphereComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyAtmosphereComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkyAtmosphereComponent)
	void ASkyAtmosphere::StaticRegisterNativesASkyAtmosphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkyAtmosphere);
	UClass* Z_Construct_UClass_ASkyAtmosphere_NoRegister()
	{
		return ASkyAtmosphere::StaticClass();
	}
	struct Z_Construct_UClass_ASkyAtmosphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkyAtmosphereComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkyAtmosphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * A placeable actor that represents a planet atmosphere material and simulates sky and light scattering within it.\n * @see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Components/SkyAtmosphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that represents a planet atmosphere material and simulates sky and light scattering within it.\n@see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent = { "SkyAtmosphereComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASkyAtmosphere, SkyAtmosphereComponent), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** Arrow component to indicate default sun rotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Arrow component to indicate default sun rotation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASkyAtmosphere, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkyAtmosphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkyAtmosphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkyAtmosphere_Statics::ClassParams = {
		&ASkyAtmosphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkyAtmosphere()
	{
		if (!Z_Registration_Info_UClass_ASkyAtmosphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkyAtmosphere.OuterSingleton, Z_Construct_UClass_ASkyAtmosphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASkyAtmosphere.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASkyAtmosphere>()
	{
		return ASkyAtmosphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyAtmosphere);
	ASkyAtmosphere::~ASkyAtmosphere() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::EnumInfo[] = {
		{ ESkyAtmosphereTransformMode_StaticEnum, TEXT("ESkyAtmosphereTransformMode"), &Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 729511265U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ScriptStructInfo[] = {
		{ FTentDistribution::StaticStruct, Z_Construct_UScriptStruct_FTentDistribution_Statics::NewStructOps, TEXT("TentDistribution"), &Z_Registration_Info_UScriptStruct_TentDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTentDistribution), 3559118681U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyAtmosphereComponent, USkyAtmosphereComponent::StaticClass, TEXT("USkyAtmosphereComponent"), &Z_Registration_Info_UClass_USkyAtmosphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyAtmosphereComponent), 76095224U) },
		{ Z_Construct_UClass_ASkyAtmosphere, ASkyAtmosphere::StaticClass, TEXT("ASkyAtmosphere"), &Z_Registration_Info_UClass_ASkyAtmosphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkyAtmosphere), 486315584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_4130360390(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
