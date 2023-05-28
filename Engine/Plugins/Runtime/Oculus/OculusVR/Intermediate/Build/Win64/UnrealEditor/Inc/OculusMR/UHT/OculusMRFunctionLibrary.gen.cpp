// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMRFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMRFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary();
	OCULUSMR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_UOculusMRFunctionLibrary::execIsMrcActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusMRFunctionLibrary::IsMrcActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMRFunctionLibrary::execIsMrcEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusMRFunctionLibrary::IsMrcEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMRFunctionLibrary::execSetMrcScalingFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScalingFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusMRFunctionLibrary::SetMrcScalingFactor(Z_Param_ScalingFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMRFunctionLibrary::execGetMrcScalingFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDEPRECATED_UOculusMRFunctionLibrary::GetMrcScalingFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMRFunctionLibrary::execSetTrackingReferenceComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusMRFunctionLibrary::SetTrackingReferenceComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMRFunctionLibrary::execGetTrackingReferenceComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=UDEPRECATED_UOculusMRFunctionLibrary::GetTrackingReferenceComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMRFunctionLibrary::execGetOculusMRSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDEPRECATED_UOculusMR_Settings**)Z_Param__Result=UDEPRECATED_UOculusMRFunctionLibrary::GetOculusMRSettings();
		P_NATIVE_END;
	}
	void UDEPRECATED_UOculusMRFunctionLibrary::StaticRegisterNativesUDEPRECATED_UOculusMRFunctionLibrary()
	{
		UClass* Class = UDEPRECATED_UOculusMRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMrcScalingFactor", &UDEPRECATED_UOculusMRFunctionLibrary::execGetMrcScalingFactor },
			{ "GetOculusMRSettings", &UDEPRECATED_UOculusMRFunctionLibrary::execGetOculusMRSettings },
			{ "GetTrackingReferenceComponent", &UDEPRECATED_UOculusMRFunctionLibrary::execGetTrackingReferenceComponent },
			{ "IsMrcActive", &UDEPRECATED_UOculusMRFunctionLibrary::execIsMrcActive },
			{ "IsMrcEnabled", &UDEPRECATED_UOculusMRFunctionLibrary::execIsMrcEnabled },
			{ "SetMrcScalingFactor", &UDEPRECATED_UOculusMRFunctionLibrary::execSetMrcScalingFactor },
			{ "SetTrackingReferenceComponent", &UDEPRECATED_UOculusMRFunctionLibrary::execSetTrackingReferenceComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics
	{
		struct UOculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "DisplayName", "Get MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, nullptr, "GetMrcScalingFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::UOculusMRFunctionLibrary_eventGetMrcScalingFactor_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics
	{
		struct UOculusMRFunctionLibrary_eventGetOculusMRSettings_Parms
		{
			UDEPRECATED_UOculusMR_Settings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMRFunctionLibrary_eventGetOculusMRSettings_Parms, ReturnValue), Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "DisplayName", "Get Oculus MR Settings" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, nullptr, "GetOculusMRSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::UOculusMRFunctionLibrary_eventGetOculusMRSettings_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics
	{
		struct UOculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, nullptr, "GetTrackingReferenceComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::UOculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics
	{
		struct UOculusMRFunctionLibrary_eventIsMrcActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusMRFunctionLibrary_eventIsMrcActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMRFunctionLibrary_eventIsMrcActive_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, nullptr, "IsMrcActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::UOculusMRFunctionLibrary_eventIsMrcActive_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics
	{
		struct UOculusMRFunctionLibrary_eventIsMrcEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusMRFunctionLibrary_eventIsMrcEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMRFunctionLibrary_eventIsMrcEnabled_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, nullptr, "IsMrcEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::UOculusMRFunctionLibrary_eventIsMrcEnabled_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics
	{
		struct UOculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms
		{
			float ScalingFactor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms, ScalingFactor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "CPP_Default_ScalingFactor", "1.000000" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "DisplayName", "Set MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, nullptr, "SetMrcScalingFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::UOculusMRFunctionLibrary_eventSetMrcScalingFactor_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics
	{
		struct UOculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms
		{
			USceneComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, nullptr, "SetTrackingReferenceComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::UOculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UOculusMRFunctionLibrary);
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_NoRegister()
	{
		return UDEPRECATED_UOculusMRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetMrcScalingFactor, "GetMrcScalingFactor" }, // 400527214
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetOculusMRSettings, "GetOculusMRSettings" }, // 1266858515
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_GetTrackingReferenceComponent, "GetTrackingReferenceComponent" }, // 1389164061
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcActive, "IsMrcActive" }, // 113737646
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_IsMrcEnabled, "IsMrcEnabled" }, // 3970679187
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetMrcScalingFactor, "SetMrcScalingFactor" }, // 3128627184
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMRFunctionLibrary_SetTrackingReferenceComponent, "SetTrackingReferenceComponent" }, // 2694693532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "OculusVR plugin is deprecated; please use the built-in OpenXR plugin or OculusXR plugin from the Marketplace." },
		{ "IncludePath", "OculusMRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UOculusMRFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::ClassParams = {
		&UDEPRECATED_UOculusMRFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UOculusMRFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UOculusMRFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UOculusMRFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSMR_API UClass* StaticClass<UDEPRECATED_UOculusMRFunctionLibrary>()
	{
		return UDEPRECATED_UOculusMRFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UOculusMRFunctionLibrary);
	UDEPRECATED_UOculusMRFunctionLibrary::~UDEPRECATED_UOculusMRFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary, UDEPRECATED_UOculusMRFunctionLibrary::StaticClass, TEXT("UDEPRECATED_UOculusMRFunctionLibrary"), &Z_Registration_Info_UClass_UDEPRECATED_UOculusMRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UOculusMRFunctionLibrary), 1392648502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_1399733516(TEXT("/Script/OculusMR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
