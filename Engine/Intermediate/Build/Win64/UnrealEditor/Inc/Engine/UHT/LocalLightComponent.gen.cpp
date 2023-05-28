// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPointLightSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ULocalLightComponent::execGetUnitsConversionFactor)
	{
		P_GET_ENUM(ELightUnits,Z_Param_SrcUnits);
		P_GET_ENUM(ELightUnits,Z_Param_TargetUnits);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CosHalfConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULocalLightComponent::GetUnitsConversionFactor(ELightUnits(Z_Param_SrcUnits),ELightUnits(Z_Param_TargetUnits),Z_Param_CosHalfConeAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocalLightComponent::execSetIntensityUnits)
	{
		P_GET_ENUM(ELightUnits,Z_Param_NewIntensityUnits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntensityUnits(ELightUnits(Z_Param_NewIntensityUnits));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocalLightComponent::execSetAttenuationRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttenuationRadius(Z_Param_NewRadius);
		P_NATIVE_END;
	}
	void ULocalLightComponent::StaticRegisterNativesULocalLightComponent()
	{
		UClass* Class = ULocalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnitsConversionFactor", &ULocalLightComponent::execGetUnitsConversionFactor },
			{ "SetAttenuationRadius", &ULocalLightComponent::execSetAttenuationRadius },
			{ "SetIntensityUnits", &ULocalLightComponent::execSetIntensityUnits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics
	{
		struct LocalLightComponent_eventGetUnitsConversionFactor_Parms
		{
			ELightUnits SrcUnits;
			ELightUnits TargetUnits;
			float CosHalfConeAngle;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SrcUnits_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SrcUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetUnits_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetUnits;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CosHalfConeAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits = { "SrcUnits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, SrcUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) }; // 117192790
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits = { "TargetUnits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, TargetUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) }; // 117192790
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle = { "CosHalfConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, CosHalfConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "CPP_Default_CosHalfConeAngle", "-1.000000" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "GetUnitsConversionFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::LocalLightComponent_eventGetUnitsConversionFactor_Parms), Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics
	{
		struct LocalLightComponent_eventSetAttenuationRadius_Parms
		{
			float NewRadius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LocalLightComponent_eventSetAttenuationRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "SetAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::LocalLightComponent_eventSetAttenuationRadius_Parms), Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics
	{
		struct LocalLightComponent_eventSetIntensityUnits_Parms
		{
			ELightUnits NewIntensityUnits;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewIntensityUnits_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewIntensityUnits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits = { "NewIntensityUnits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LocalLightComponent_eventSetIntensityUnits_Parms, NewIntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) }; // 117192790
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set the units used for the intensity of the light */" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Set the units used for the intensity of the light" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "SetIntensityUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::LocalLightComponent_eventSetIntensityUnits_Parms), Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalLightComponent);
	UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister()
	{
		return ULocalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULocalLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InverseExposureBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InverseExposureBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor, "GetUnitsConversionFactor" }, // 1093383257
		{ &Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius, "SetAttenuationRadius" }, // 3598998628
		{ &Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits, "SetIntensityUnits" }, // 3583394431
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Lights Common" },
		{ "Comment", "/**\n * A light component which emits light from a single point equally in all directions.\n */" },
		{ "HideCategories", "Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LocalLightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "A light component which emits light from a single point equally in all directions." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Units used for the intensity. \n\x09 * The peak luminous intensity is measured in candelas,\n\x09 * while the luminous power is measured in lumens.\n\x09 */" },
		{ "DisplayName", "Intensity Units" },
		{ "EditCondition", "!bUseIESBrightness" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Units used for the intensity.\nThe peak luminous intensity is measured in candelas,\nwhile the luminous power is measured in lumens." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalLightComponent, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData)) }; // 117192790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_InverseExposureBlend_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Blend Factor used to blend between Intensity and Intensity/Exposure. \n\x09* This is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\n\x09* This feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Blend Factor used to blend between Intensity and Intensity/Exposure.\nThis is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\nThis feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_InverseExposureBlend = { "InverseExposureBlend", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalLightComponent, InverseExposureBlend), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_InverseExposureBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_InverseExposureBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalLightComponent, Radius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Bounds the light's visible influence.  \n\x09 * This clamping of the light's influence is not physically correct but very important for performance, larger lights cost more.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Bounds the light's visible influence.\nThis clamping of the light's influence is not physically correct but very important for performance, larger lights cost more." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalLightComponent, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPointLightSettings, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData)) }; // 248036350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_InverseExposureBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalLightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams = {
		&ULocalLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalLightComponent()
	{
		if (!Z_Registration_Info_UClass_ULocalLightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalLightComponent.OuterSingleton, Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalLightComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULocalLightComponent>()
	{
		return ULocalLightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalLightComponent);
	ULocalLightComponent::~ULocalLightComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULocalLightComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalLightComponent, ULocalLightComponent::StaticClass, TEXT("ULocalLightComponent"), &Z_Registration_Info_UClass_ULocalLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalLightComponent), 4121335126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_2345879673(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
