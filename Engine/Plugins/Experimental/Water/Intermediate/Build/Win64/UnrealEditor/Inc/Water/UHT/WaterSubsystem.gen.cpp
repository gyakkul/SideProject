// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_ABuoyancyManager_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterSubsystem();
	WATER_API UClass* Z_Construct_UClass_UWaterSubsystem_NoRegister();
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature();
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics
	{
		struct _Script_Water_eventOnCameraUnderwaterStateChanged_Parms
		{
			bool bIsUnderWater;
			float DepthUnderwater;
		};
		static void NewProp_bIsUnderWater_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnderWater;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthUnderwater;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::NewProp_bIsUnderWater_SetBit(void* Obj)
	{
		((_Script_Water_eventOnCameraUnderwaterStateChanged_Parms*)Obj)->bIsUnderWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::NewProp_bIsUnderWater = { "bIsUnderWater", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Water_eventOnCameraUnderwaterStateChanged_Parms), &Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::NewProp_bIsUnderWater_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::NewProp_DepthUnderwater = { "DepthUnderwater", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Water_eventOnCameraUnderwaterStateChanged_Parms, DepthUnderwater), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::NewProp_bIsUnderWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::NewProp_DepthUnderwater,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Water, nullptr, "OnCameraUnderwaterStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::_Script_Water_eventOnCameraUnderwaterStateChanged_Parms), Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCameraUnderwaterStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraUnderwaterStateChanged, bool bIsUnderWater, float DepthUnderwater)
{
	struct _Script_Water_eventOnCameraUnderwaterStateChanged_Parms
	{
		bool bIsUnderWater;
		float DepthUnderwater;
	};
	_Script_Water_eventOnCameraUnderwaterStateChanged_Parms Parms;
	Parms.bIsUnderWater=bIsUnderWater ? true : false;
	Parms.DepthUnderwater=DepthUnderwater;
	OnCameraUnderwaterStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Water, nullptr, "OnWaterScalabilityChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWaterScalabilityChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWaterScalabilityChanged)
{
	OnWaterScalabilityChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UWaterSubsystem::execSetOceanFloodHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloodHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOceanFloodHeight(Z_Param_InFloodHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetOceanTotalHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOceanTotalHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetOceanFloodHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOceanFloodHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetOceanBaseHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOceanBaseHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execPrintToWaterLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bWarning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintToWaterLog(Z_Param_Message,Z_Param_bWarning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetCameraUnderwaterDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCameraUnderwaterDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetSmoothedWorldTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSmoothedWorldTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetWaterTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWaterTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execIsWaterRenderingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWaterRenderingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetShallowWaterSimulationRenderTargetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetShallowWaterMaxImpulseForces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWaterSubsystem::GetShallowWaterMaxImpulseForces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execGetShallowWaterMaxDynamicForces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWaterSubsystem::GetShallowWaterMaxDynamicForces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execIsUnderwaterPostProcessEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUnderwaterPostProcessEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterSubsystem::execIsShallowWaterSimulationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShallowWaterSimulationEnabled();
		P_NATIVE_END;
	}
	void UWaterSubsystem::StaticRegisterNativesUWaterSubsystem()
	{
		UClass* Class = UWaterSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraUnderwaterDepth", &UWaterSubsystem::execGetCameraUnderwaterDepth },
			{ "GetOceanBaseHeight", &UWaterSubsystem::execGetOceanBaseHeight },
			{ "GetOceanFloodHeight", &UWaterSubsystem::execGetOceanFloodHeight },
			{ "GetOceanTotalHeight", &UWaterSubsystem::execGetOceanTotalHeight },
			{ "GetShallowWaterMaxDynamicForces", &UWaterSubsystem::execGetShallowWaterMaxDynamicForces },
			{ "GetShallowWaterMaxImpulseForces", &UWaterSubsystem::execGetShallowWaterMaxImpulseForces },
			{ "GetShallowWaterSimulationRenderTargetSize", &UWaterSubsystem::execGetShallowWaterSimulationRenderTargetSize },
			{ "GetSmoothedWorldTimeSeconds", &UWaterSubsystem::execGetSmoothedWorldTimeSeconds },
			{ "GetWaterTimeSeconds", &UWaterSubsystem::execGetWaterTimeSeconds },
			{ "IsShallowWaterSimulationEnabled", &UWaterSubsystem::execIsShallowWaterSimulationEnabled },
			{ "IsUnderwaterPostProcessEnabled", &UWaterSubsystem::execIsUnderwaterPostProcessEnabled },
			{ "IsWaterRenderingEnabled", &UWaterSubsystem::execIsWaterRenderingEnabled },
			{ "PrintToWaterLog", &UWaterSubsystem::execPrintToWaterLog },
			{ "SetOceanFloodHeight", &UWaterSubsystem::execSetOceanFloodHeight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics
	{
		struct WaterSubsystem_eventGetCameraUnderwaterDepth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetCameraUnderwaterDepth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetCameraUnderwaterDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::WaterSubsystem_eventGetCameraUnderwaterDepth_Parms), Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics
	{
		struct WaterSubsystem_eventGetOceanBaseHeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetOceanBaseHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns the base height of the ocean. This should correspond to its world Z position */" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
		{ "ToolTip", "Returns the base height of the ocean. This should correspond to its world Z position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetOceanBaseHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::WaterSubsystem_eventGetOceanBaseHeight_Parms), Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics
	{
		struct WaterSubsystem_eventGetOceanFloodHeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetOceanFloodHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns the relative flood height */" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
		{ "ToolTip", "Returns the relative flood height" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetOceanFloodHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::WaterSubsystem_eventGetOceanFloodHeight_Parms), Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics
	{
		struct WaterSubsystem_eventGetOceanTotalHeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetOceanTotalHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns the total height of the ocean. This should correspond to the base height plus any additional height, like flood for example */" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
		{ "ToolTip", "Returns the total height of the ocean. This should correspond to the base height plus any additional height, like flood for example" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetOceanTotalHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::WaterSubsystem_eventGetOceanTotalHeight_Parms), Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics
	{
		struct WaterSubsystem_eventGetShallowWaterMaxDynamicForces_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetShallowWaterMaxDynamicForces_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetShallowWaterMaxDynamicForces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::WaterSubsystem_eventGetShallowWaterMaxDynamicForces_Parms), Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics
	{
		struct WaterSubsystem_eventGetShallowWaterMaxImpulseForces_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetShallowWaterMaxImpulseForces_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetShallowWaterMaxImpulseForces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::WaterSubsystem_eventGetShallowWaterMaxImpulseForces_Parms), Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics
	{
		struct WaterSubsystem_eventGetShallowWaterSimulationRenderTargetSize_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetShallowWaterSimulationRenderTargetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetShallowWaterSimulationRenderTargetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::WaterSubsystem_eventGetShallowWaterSimulationRenderTargetSize_Parms), Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics
	{
		struct WaterSubsystem_eventGetSmoothedWorldTimeSeconds_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetSmoothedWorldTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetSmoothedWorldTimeSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::WaterSubsystem_eventGetSmoothedWorldTimeSeconds_Parms), Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics
	{
		struct WaterSubsystem_eventGetWaterTimeSeconds_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventGetWaterTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "GetWaterTimeSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::WaterSubsystem_eventGetWaterTimeSeconds_Parms), Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics
	{
		struct WaterSubsystem_eventIsShallowWaterSimulationEnabled_Parms
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
	void Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaterSubsystem_eventIsShallowWaterSimulationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterSubsystem_eventIsShallowWaterSimulationEnabled_Parms), &Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "IsShallowWaterSimulationEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::WaterSubsystem_eventIsShallowWaterSimulationEnabled_Parms), Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics
	{
		struct WaterSubsystem_eventIsUnderwaterPostProcessEnabled_Parms
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
	void Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaterSubsystem_eventIsUnderwaterPostProcessEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterSubsystem_eventIsUnderwaterPostProcessEnabled_Parms), &Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "IsUnderwaterPostProcessEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::WaterSubsystem_eventIsUnderwaterPostProcessEnabled_Parms), Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics
	{
		struct WaterSubsystem_eventIsWaterRenderingEnabled_Parms
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
	void Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaterSubsystem_eventIsWaterRenderingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterSubsystem_eventIsWaterRenderingEnabled_Parms), &Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "IsWaterRenderingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::WaterSubsystem_eventIsWaterRenderingEnabled_Parms), Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics
	{
		struct WaterSubsystem_eventPrintToWaterLog_Parms
		{
			FString Message;
			bool bWarning;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventPrintToWaterLog_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_bWarning_SetBit(void* Obj)
	{
		((WaterSubsystem_eventPrintToWaterLog_Parms*)Obj)->bWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_bWarning = { "bWarning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterSubsystem_eventPrintToWaterLog_Parms), &Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_bWarning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::NewProp_bWarning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "PrintToWaterLog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::WaterSubsystem_eventPrintToWaterLog_Parms), Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics
	{
		struct WaterSubsystem_eventSetOceanFloodHeight_Parms
		{
			float InFloodHeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloodHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::NewProp_InFloodHeight = { "InFloodHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterSubsystem_eventSetOceanFloodHeight_Parms, InFloodHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::NewProp_InFloodHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSubsystem, nullptr, "SetOceanFloodHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::WaterSubsystem_eventSetOceanFloodHeight_Parms), Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterSubsystem);
	UClass* Z_Construct_UClass_UWaterSubsystem_NoRegister()
	{
		return UWaterSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWaterSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BuoyancyManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraUnderwaterStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraUnderwaterStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWaterScalabilityChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaterScalabilityChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRiverMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultRiverMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLakeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultLakeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialParameterCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterSubsystem_GetCameraUnderwaterDepth, "GetCameraUnderwaterDepth" }, // 2095222086
		{ &Z_Construct_UFunction_UWaterSubsystem_GetOceanBaseHeight, "GetOceanBaseHeight" }, // 3889887778
		{ &Z_Construct_UFunction_UWaterSubsystem_GetOceanFloodHeight, "GetOceanFloodHeight" }, // 4281334585
		{ &Z_Construct_UFunction_UWaterSubsystem_GetOceanTotalHeight, "GetOceanTotalHeight" }, // 2558550106
		{ &Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxDynamicForces, "GetShallowWaterMaxDynamicForces" }, // 463220342
		{ &Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterMaxImpulseForces, "GetShallowWaterMaxImpulseForces" }, // 1757931865
		{ &Z_Construct_UFunction_UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize, "GetShallowWaterSimulationRenderTargetSize" }, // 1754803049
		{ &Z_Construct_UFunction_UWaterSubsystem_GetSmoothedWorldTimeSeconds, "GetSmoothedWorldTimeSeconds" }, // 2345699227
		{ &Z_Construct_UFunction_UWaterSubsystem_GetWaterTimeSeconds, "GetWaterTimeSeconds" }, // 2694093005
		{ &Z_Construct_UFunction_UWaterSubsystem_IsShallowWaterSimulationEnabled, "IsShallowWaterSimulationEnabled" }, // 886612293
		{ &Z_Construct_UFunction_UWaterSubsystem_IsUnderwaterPostProcessEnabled, "IsUnderwaterPostProcessEnabled" }, // 2875360398
		{ &Z_Construct_UFunction_UWaterSubsystem_IsWaterRenderingEnabled, "IsWaterRenderingEnabled" }, // 2167433326
		{ &Z_Construct_UFunction_UWaterSubsystem_PrintToWaterLog, "PrintToWaterLog" }, // 3635652837
		{ &Z_Construct_UFunction_UWaterSubsystem_SetOceanFloodHeight, "SetOceanFloodHeight" }, // 377472318
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the API used to get information about water at runtime\n */" },
		{ "IncludePath", "WaterSubsystem.h" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
		{ "ToolTip", "This is the API used to get information about water at runtime" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_BuoyancyManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_BuoyancyManager = { "BuoyancyManager", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSubsystem, BuoyancyManager), Z_Construct_UClass_ABuoyancyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_BuoyancyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_BuoyancyManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnCameraUnderwaterStateChanged_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnCameraUnderwaterStateChanged = { "OnCameraUnderwaterStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSubsystem, OnCameraUnderwaterStateChanged), Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnCameraUnderwaterStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnCameraUnderwaterStateChanged_MetaData)) }; // 956993248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnWaterScalabilityChanged_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnWaterScalabilityChanged = { "OnWaterScalabilityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSubsystem, OnWaterScalabilityChanged), Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnWaterScalabilityChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnWaterScalabilityChanged_MetaData)) }; // 3195413418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultRiverMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultRiverMesh = { "DefaultRiverMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSubsystem, DefaultRiverMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultRiverMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultRiverMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultLakeMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultLakeMesh = { "DefaultLakeMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSubsystem, DefaultLakeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultLakeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultLakeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_MaterialParameterCollection_MetaData[] = {
		{ "Comment", "/** The parameter collection asset that holds the global parameters that are updated by this actor */" },
		{ "ModuleRelativePath", "Public/WaterSubsystem.h" },
		{ "ToolTip", "The parameter collection asset that holds the global parameters that are updated by this actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_MaterialParameterCollection = { "MaterialParameterCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSubsystem, MaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_MaterialParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_MaterialParameterCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_BuoyancyManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnCameraUnderwaterStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_OnWaterScalabilityChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultRiverMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_DefaultLakeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSubsystem_Statics::NewProp_MaterialParameterCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterSubsystem_Statics::ClassParams = {
		&UWaterSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaterSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWaterSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterSubsystem.OuterSingleton, Z_Construct_UClass_UWaterSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterSubsystem.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterSubsystem>()
	{
		return UWaterSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterSubsystem);
	UWaterSubsystem::~UWaterSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterSubsystem, UWaterSubsystem::StaticClass, TEXT("UWaterSubsystem"), &Z_Registration_Info_UClass_UWaterSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterSubsystem), 3297601500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_2871277706(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
