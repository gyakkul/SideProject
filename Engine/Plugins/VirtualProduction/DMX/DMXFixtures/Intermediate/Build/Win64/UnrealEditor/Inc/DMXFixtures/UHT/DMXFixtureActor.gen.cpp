// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureActor() {}
// Cross Module References
	DMXFIXTUREACTORINTERFACE_API UClass* Z_Construct_UClass_UDMXMVRFixtureActorInterface_NoRegister();
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActor();
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActor_NoRegister();
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActorBase();
	DMXFIXTURES_API UEnum* Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXFixtures();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXFixtureQualityLevel;
	static UEnum* EDMXFixtureQualityLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXFixtureQualityLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXFixtureQualityLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel, (UObject*)Z_Construct_UPackage__Script_DMXFixtures(), TEXT("EDMXFixtureQualityLevel"));
		}
		return Z_Registration_Info_UEnum_EDMXFixtureQualityLevel.OuterSingleton;
	}
	template<> DMXFIXTURES_API UEnum* StaticEnum<EDMXFixtureQualityLevel>()
	{
		return EDMXFixtureQualityLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::Enumerators[] = {
		{ "LowQuality", (int64)LowQuality },
		{ "MediumQuality", (int64)MediumQuality },
		{ "HighQuality", (int64)HighQuality },
		{ "UltraQuality", (int64)UltraQuality },
		{ "Custom", (int64)Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::Enum_MetaDataParams[] = {
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "Custom" },
		{ "HighQuality.DisplayName", "High" },
		{ "HighQuality.Name", "HighQuality" },
		{ "LowQuality.DisplayName", "Low" },
		{ "LowQuality.Name", "LowQuality" },
		{ "MediumQuality.DisplayName", "Medium" },
		{ "MediumQuality.Name", "MediumQuality" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "UltraQuality.DisplayName", "Ultra" },
		{ "UltraQuality.Name", "UltraQuality" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXFixtures,
		nullptr,
		"EDMXFixtureQualityLevel",
		"EDMXFixtureQualityLevel",
		Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel()
	{
		if (!Z_Registration_Info_UEnum_EDMXFixtureQualityLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXFixtureQualityLevel.InnerSingleton, Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXFixtureQualityLevel.InnerSingleton;
	}
	DEFINE_FUNCTION(ADMXFixtureActor::execSetLightCastShadow)
	{
		P_GET_UBOOL(Z_Param_bLightShouldCastShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightCastShadow(Z_Param_bLightShouldCastShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActor::execSetPointlightIntensityScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPointlightIntensityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointlightIntensityScale(Z_Param_NewPointlightIntensityScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActor::execSetSpotlightIntensityScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpotlightIntensityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpotlightIntensityScale(Z_Param_NewSpotlightIntensityScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActor::execSetLightColorTemp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightColorTemp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightColorTemp(Z_Param_NewLightColorTemp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActor::execSetLightDistanceMax)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightDistanceMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightDistanceMax(Z_Param_NewLightDistanceMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActor::execSetLightIntensityMax)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightIntensityMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightIntensityMax(Z_Param_NewLightIntensityMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActor::execInitializeFixture)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshLens);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshBeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFixture(Z_Param_StaticMeshLens,Z_Param_StaticMeshBeam);
		P_NATIVE_END;
	}
	void ADMXFixtureActor::StaticRegisterNativesADMXFixtureActor()
	{
		UClass* Class = ADMXFixtureActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeFixture", &ADMXFixtureActor::execInitializeFixture },
			{ "SetLightCastShadow", &ADMXFixtureActor::execSetLightCastShadow },
			{ "SetLightColorTemp", &ADMXFixtureActor::execSetLightColorTemp },
			{ "SetLightDistanceMax", &ADMXFixtureActor::execSetLightDistanceMax },
			{ "SetLightIntensityMax", &ADMXFixtureActor::execSetLightIntensityMax },
			{ "SetPointlightIntensityScale", &ADMXFixtureActor::execSetPointlightIntensityScale },
			{ "SetSpotlightIntensityScale", &ADMXFixtureActor::execSetSpotlightIntensityScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics
	{
		struct DMXFixtureActor_eventInitializeFixture_Parms
		{
			UStaticMeshComponent* StaticMeshLens;
			UStaticMeshComponent* StaticMeshBeam;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLens_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshLens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBeam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshBeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshLens_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshLens = { "StaticMeshLens", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActor_eventInitializeFixture_Parms, StaticMeshLens), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshLens_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshLens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshBeam_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshBeam = { "StaticMeshBeam", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActor_eventInitializeFixture_Parms, StaticMeshBeam), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshBeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshBeam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshLens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::NewProp_StaticMeshBeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "// FUNCTIONS---------------------------------\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "FUNCTIONS---------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActor, nullptr, "InitializeFixture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::DMXFixtureActor_eventInitializeFixture_Parms), Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics
	{
		struct DMXFixtureActor_eventSetLightCastShadow_Parms
		{
			bool bLightShouldCastShadow;
		};
		static void NewProp_bLightShouldCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLightShouldCastShadow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::NewProp_bLightShouldCastShadow_SetBit(void* Obj)
	{
		((DMXFixtureActor_eventSetLightCastShadow_Parms*)Obj)->bLightShouldCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::NewProp_bLightShouldCastShadow = { "bLightShouldCastShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXFixtureActor_eventSetLightCastShadow_Parms), &Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::NewProp_bLightShouldCastShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::NewProp_bLightShouldCastShadow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "/** Sets if the light should cast shadows */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Sets if the light should cast shadows" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActor, nullptr, "SetLightCastShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::DMXFixtureActor_eventSetLightCastShadow_Parms), Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics
	{
		struct DMXFixtureActor_eventSetLightColorTemp_Parms
		{
			float NewLightColorTemp;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightColorTemp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::NewProp_NewLightColorTemp = { "NewLightColorTemp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActor_eventSetLightColorTemp_Parms, NewLightColorTemp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::NewProp_NewLightColorTemp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "/** Sets a new light color temperature */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Sets a new light color temperature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActor, nullptr, "SetLightColorTemp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::DMXFixtureActor_eventSetLightColorTemp_Parms), Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics
	{
		struct DMXFixtureActor_eventSetLightDistanceMax_Parms
		{
			float NewLightDistanceMax;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightDistanceMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::NewProp_NewLightDistanceMax = { "NewLightDistanceMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActor_eventSetLightDistanceMax_Parms, NewLightDistanceMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::NewProp_NewLightDistanceMax,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "/** Sets a new max light distance */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Sets a new max light distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActor, nullptr, "SetLightDistanceMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::DMXFixtureActor_eventSetLightDistanceMax_Parms), Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics
	{
		struct DMXFixtureActor_eventSetLightIntensityMax_Parms
		{
			float NewLightIntensityMax;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightIntensityMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::NewProp_NewLightIntensityMax = { "NewLightIntensityMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActor_eventSetLightIntensityMax_Parms, NewLightIntensityMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::NewProp_NewLightIntensityMax,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "/** Sets the a new max light intensity */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Sets the a new max light intensity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActor, nullptr, "SetLightIntensityMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::DMXFixtureActor_eventSetLightIntensityMax_Parms), Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics
	{
		struct DMXFixtureActor_eventSetPointlightIntensityScale_Parms
		{
			float NewPointlightIntensityScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPointlightIntensityScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::NewProp_NewPointlightIntensityScale = { "NewPointlightIntensityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActor_eventSetPointlightIntensityScale_Parms, NewPointlightIntensityScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::NewProp_NewPointlightIntensityScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "/** Sets a new pointlight intensity scale */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Sets a new pointlight intensity scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActor, nullptr, "SetPointlightIntensityScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::DMXFixtureActor_eventSetPointlightIntensityScale_Parms), Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics
	{
		struct DMXFixtureActor_eventSetSpotlightIntensityScale_Parms
		{
			float NewSpotlightIntensityScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpotlightIntensityScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::NewProp_NewSpotlightIntensityScale = { "NewSpotlightIntensityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActor_eventSetSpotlightIntensityScale_Parms, NewSpotlightIntensityScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::NewProp_NewSpotlightIntensityScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "/** Sets a new spotlight intensity scale */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Sets a new spotlight intensity scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActor, nullptr, "SetSpotlightIntensityScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::DMXFixtureActor_eventSetSpotlightIntensityScale_Parms), Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMXFixtureActor);
	UClass* Z_Construct_UClass_ADMXFixtureActor_NoRegister()
	{
		return ADMXFixtureActor::StaticClass();
	}
	struct Z_Construct_UClass_ADMXFixtureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_QualityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeamQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yoke_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Yoke;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIntensityMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightIntensityMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightDistanceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightDistanceMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColorTemp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightColorTemp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotlightIntensityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpotlightIntensityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointlightIntensityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointlightIntensityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCastShadow_MetaData[];
#endif
		static void NewProp_LightCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LightCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDynamicOcclusion_MetaData[];
#endif
		static void NewProp_UseDynamicOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDynamicOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableLights_MetaData[];
#endif
		static void NewProp_DisableLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableLights;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpotLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDirection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OcclusionDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LensMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BeamMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotLightMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpotLightMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLightMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointLightMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialLens_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMaterialLens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBeam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMaterialBeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialSpotLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMaterialSpotLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialPointLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMaterialPointLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADMXFixtureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADMXFixtureActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADMXFixtureActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADMXFixtureActor_InitializeFixture, "InitializeFixture" }, // 1272600351
		{ &Z_Construct_UFunction_ADMXFixtureActor_SetLightCastShadow, "SetLightCastShadow" }, // 3794320304
		{ &Z_Construct_UFunction_ADMXFixtureActor_SetLightColorTemp, "SetLightColorTemp" }, // 2344127374
		{ &Z_Construct_UFunction_ADMXFixtureActor_SetLightDistanceMax, "SetLightDistanceMax" }, // 1939785442
		{ &Z_Construct_UFunction_ADMXFixtureActor_SetLightIntensityMax, "SetLightIntensityMax" }, // 4262668984
		{ &Z_Construct_UFunction_ADMXFixtureActor_SetPointlightIntensityScale, "SetPointlightIntensityScale" }, // 1151668694
		{ &Z_Construct_UFunction_ADMXFixtureActor_SetSpotlightIntensityScale, "SetSpotlightIntensityScale" }, // 306622370
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXFixtureActor.h" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_QualityLevel_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Visual quality level that changes the number of samples in the volumetric beam\n" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Visual quality level that changes the number of samples in the volumetric beam" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, QualityLevel), Z_Construct_UEnum_DMXFixtures_EDMXFixtureQualityLevel, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_QualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_QualityLevel_MetaData)) }; // 1417172747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamQuality_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Visual quality for the light beam - small value is visually better but cost more on GPU\n" },
		{ "EditCondition", "QualityLevel == EDMXFixtureQualityLevel::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Visual quality for the light beam - small value is visually better but cost more on GPU" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamQuality = { "BeamQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, BeamQuality), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_ZoomQuality_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Visual quality for the light beam when zoom is wide - small value is visually better but cost more on GPU\n" },
		{ "EditCondition", "QualityLevel == EDMXFixtureQualityLevel::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Visual quality for the light beam when zoom is wide - small value is visually better but cost more on GPU" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_ZoomQuality = { "ZoomQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, ZoomQuality), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_ZoomQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_ZoomQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// HIERARCHY---------------------------------\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "HIERARCHY---------------------------------" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, Base), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Yoke_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Yoke = { "Yoke", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, Yoke), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Yoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Yoke_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, Head), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightIntensityMax_MetaData[] = {
		{ "BlueprintSetter", "SetLightIntensityMax" },
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Light intensity at 1 steradian (32.77deg half angle)\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Light intensity at 1 steradian (32.77deg half angle)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightIntensityMax = { "LightIntensityMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, LightIntensityMax), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightIntensityMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightIntensityMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightDistanceMax_MetaData[] = {
		{ "BlueprintSetter", "SetLightDistanceMax" },
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Sets Attenuation Radius on the spotlight and pointlight\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Sets Attenuation Radius on the spotlight and pointlight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightDistanceMax = { "LightDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, LightDistanceMax), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightDistanceMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightColorTemp_MetaData[] = {
		{ "BlueprintSetter", "SetLightColorTemp" },
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Light color temperature on the spotlight and pointlight\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Light color temperature on the spotlight and pointlight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightColorTemp = { "LightColorTemp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, LightColorTemp), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightColorTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightColorTemp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotlightIntensityScale_MetaData[] = {
		{ "BlueprintSetter", "SetSpotlightIntensityScale" },
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Scales spotlight intensity\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Scales spotlight intensity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotlightIntensityScale = { "SpotlightIntensityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, SpotlightIntensityScale), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotlightIntensityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotlightIntensityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointlightIntensityScale_MetaData[] = {
		{ "BlueprintSetter", "SetPointlightIntensityScale" },
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Scales pointlight intensity\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Scales pointlight intensity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointlightIntensityScale = { "PointlightIntensityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, PointlightIntensityScale), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointlightIntensityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointlightIntensityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightCastShadow_MetaData[] = {
		{ "BlueprintSetter", "SetLightCastShadow" },
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Enable/disable cast shadow on the spotlight and pointlight\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Enable/disable cast shadow on the spotlight and pointlight" },
	};
#endif
	void Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightCastShadow_SetBit(void* Obj)
	{
		((ADMXFixtureActor*)Obj)->LightCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightCastShadow = { "LightCastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXFixtureActor), &Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_UseDynamicOcclusion_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Simple solution useful for walls, 1 linetrace from the center\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Simple solution useful for walls, 1 linetrace from the center" },
	};
#endif
	void Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_UseDynamicOcclusion_SetBit(void* Obj)
	{
		((ADMXFixtureActor*)Obj)->UseDynamicOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_UseDynamicOcclusion = { "UseDynamicOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXFixtureActor), &Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_UseDynamicOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_UseDynamicOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_UseDynamicOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DisableLights_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// Disable lights rendering in the fixture to save on GPU\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "Disable lights rendering in the fixture to save on GPU" },
	};
#endif
	void Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DisableLights_SetBit(void* Obj)
	{
		((ADMXFixtureActor*)Obj)->DisableLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DisableLights = { "DisableLights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXFixtureActor), &Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DisableLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DisableLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DisableLights_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_StaticMeshComponents_Inner = { "StaticMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_StaticMeshComponents_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// COMPONENTS ---------------------------------\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "COMPONENTS ---------------------------------" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_StaticMeshComponents = { "StaticMeshComponents", nullptr, (EPropertyFlags)0x001400800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, StaticMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_StaticMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_StaticMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLight_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLight_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_OcclusionDirection_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_OcclusionDirection = { "OcclusionDirection", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, OcclusionDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_OcclusionDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_OcclusionDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LensMaterialInstance_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "Comment", "// MATERIALS ---------------------------------\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
		{ "ToolTip", "MATERIALS ---------------------------------" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LensMaterialInstance = { "LensMaterialInstance", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, LensMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LensMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LensMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamMaterialInstance_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamMaterialInstance = { "BeamMaterialInstance", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, BeamMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLightMaterialInstance_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLightMaterialInstance = { "SpotLightMaterialInstance", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, SpotLightMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLightMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLightMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLightMaterialInstance_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLightMaterialInstance = { "PointLightMaterialInstance", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, PointLightMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLightMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLightMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialLens_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialLens = { "DynamicMaterialLens", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, DynamicMaterialLens), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialLens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialLens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialBeam_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialBeam = { "DynamicMaterialBeam", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, DynamicMaterialBeam), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialBeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialBeam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialSpotLight_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialSpotLight = { "DynamicMaterialSpotLight", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, DynamicMaterialSpotLight), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialSpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialSpotLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialPointLight_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialPointLight = { "DynamicMaterialPointLight", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, DynamicMaterialPointLight), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialPointLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialPointLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MinQuality_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use BeamQuality instead." },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MinQuality = { "MinQuality", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, MinQuality), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MinQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MinQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MaxQuality_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use ZoomQuality instead." },
		{ "ModuleRelativePath", "Public/DMXFixtureActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MaxQuality = { "MaxQuality", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActor, MaxQuality), METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MaxQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MaxQuality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMXFixtureActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_QualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_ZoomQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Yoke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightIntensityMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightDistanceMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightColorTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotlightIntensityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointlightIntensityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LightCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_UseDynamicOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DisableLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_StaticMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_StaticMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_OcclusionDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_LensMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_BeamMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_SpotLightMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_PointLightMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialLens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialBeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialSpotLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_DynamicMaterialPointLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MinQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActor_Statics::NewProp_MaxQuality,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADMXFixtureActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDMXMVRFixtureActorInterface_NoRegister, (int32)VTABLE_OFFSET(ADMXFixtureActor, IDMXMVRFixtureActorInterface), false },  // 2993284076
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADMXFixtureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMXFixtureActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMXFixtureActor_Statics::ClassParams = {
		&ADMXFixtureActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADMXFixtureActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADMXFixtureActor()
	{
		if (!Z_Registration_Info_UClass_ADMXFixtureActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMXFixtureActor.OuterSingleton, Z_Construct_UClass_ADMXFixtureActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADMXFixtureActor.OuterSingleton;
	}
	template<> DMXFIXTURES_API UClass* StaticClass<ADMXFixtureActor>()
	{
		return ADMXFixtureActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADMXFixtureActor);
	ADMXFixtureActor::~ADMXFixtureActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_Statics::EnumInfo[] = {
		{ EDMXFixtureQualityLevel_StaticEnum, TEXT("EDMXFixtureQualityLevel"), &Z_Registration_Info_UEnum_EDMXFixtureQualityLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1417172747U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADMXFixtureActor, ADMXFixtureActor::StaticClass, TEXT("ADMXFixtureActor"), &Z_Registration_Info_UClass_ADMXFixtureActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMXFixtureActor), 2030008949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_1448960409(TEXT("/Script/DMXFixtures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
