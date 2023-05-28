// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceDynamic() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execCopyParameterOverrides)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_MaterialInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyParameterOverrides(Z_Param_MaterialInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execCopyInterpParameters)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyInterpParameters(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Source);
		P_GET_UBOOL(Z_Param_bQuickParametersOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_CopyMaterialInstanceParameters(Z_Param_Source,Z_Param_bQuickParametersOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceA);
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_InterpolateMaterialInstanceParams(Z_Param_SourceA,Z_Param_SourceB,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetVectorParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValueByInfo(Z_Param_Out_ParameterInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetVectorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetVectorParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetDoubleVectorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FVector4,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoubleVectorParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetVectorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetTextureParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValueByInfo(Z_Param_Out_ParameterInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetSparseVolumeTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(USparseVolumeTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSparseVolumeTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_GET_OBJECT(URuntimeVirtualTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeVirtualTextureParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(URuntimeVirtualTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeVirtualTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetTextureParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_GET_OBJECT(UTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetScalarParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValueByInfo(Z_Param_Out_ParameterInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetScalarParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ParameterIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetScalarParameterByIndex(Z_Param_ParameterIndex,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execInitializeScalarParameterAndGetIndex)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutParameterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeScalarParameterAndGetIndex(Z_Param_Out_ParameterName,Z_Param_Value,Z_Param_Out_OutParameterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterValueByInfo)
	{
		P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameterValue(Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	void UMaterialInstanceDynamic::StaticRegisterNativesUMaterialInstanceDynamic()
	{
		UClass* Class = UMaterialInstanceDynamic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyInterpParameters", &UMaterialInstanceDynamic::execCopyInterpParameters },
			{ "CopyParameterOverrides", &UMaterialInstanceDynamic::execCopyParameterOverrides },
			{ "InitializeScalarParameterAndGetIndex", &UMaterialInstanceDynamic::execInitializeScalarParameterAndGetIndex },
			{ "K2_CopyMaterialInstanceParameters", &UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters },
			{ "K2_GetScalarParameterValue", &UMaterialInstanceDynamic::execK2_GetScalarParameterValue },
			{ "K2_GetScalarParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetScalarParameterValueByInfo },
			{ "K2_GetTextureParameterValue", &UMaterialInstanceDynamic::execK2_GetTextureParameterValue },
			{ "K2_GetTextureParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetTextureParameterValueByInfo },
			{ "K2_GetVectorParameterValue", &UMaterialInstanceDynamic::execK2_GetVectorParameterValue },
			{ "K2_GetVectorParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetVectorParameterValueByInfo },
			{ "K2_InterpolateMaterialInstanceParams", &UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams },
			{ "SetDoubleVectorParameterValue", &UMaterialInstanceDynamic::execSetDoubleVectorParameterValue },
			{ "SetRuntimeVirtualTextureParameterValue", &UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValue },
			{ "SetRuntimeVirtualTextureParameterValueByInfo", &UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValueByInfo },
			{ "SetScalarParameterByIndex", &UMaterialInstanceDynamic::execSetScalarParameterByIndex },
			{ "SetScalarParameterValue", &UMaterialInstanceDynamic::execSetScalarParameterValue },
			{ "SetScalarParameterValueByInfo", &UMaterialInstanceDynamic::execSetScalarParameterValueByInfo },
			{ "SetSparseVolumeTextureParameterValue", &UMaterialInstanceDynamic::execSetSparseVolumeTextureParameterValue },
			{ "SetTextureParameterValue", &UMaterialInstanceDynamic::execSetTextureParameterValue },
			{ "SetTextureParameterValueByInfo", &UMaterialInstanceDynamic::execSetTextureParameterValueByInfo },
			{ "SetVectorParameterValue", &UMaterialInstanceDynamic::execSetVectorParameterValue },
			{ "SetVectorParameterValueByInfo", &UMaterialInstanceDynamic::execSetVectorParameterValueByInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics
	{
		struct MaterialInstanceDynamic_eventCopyInterpParameters_Parms
		{
			UMaterialInstance* Source;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyInterpParameters_Parms, Source), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\n\x09 * much faster than K2_CopyMaterialInstanceParameters(), \n\x09 * The output is the object itself (this).\n\x09 * @param Source ignores the call if 0\n\x09 */" },
		{ "DisplayName", "Copy Interp Parameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\nmuch faster than K2_CopyMaterialInstanceParameters(),\nThe output is the object itself (this).\n@param Source ignores the call if 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyInterpParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::MaterialInstanceDynamic_eventCopyInterpParameters_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics
	{
		struct MaterialInstanceDynamic_eventCopyParameterOverrides_Parms
		{
			UMaterialInstance* MaterialInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copy parameter values from another material instance. This will copy only\n\x09 * parameters explicitly overridden in that material instance!!\n\x09 */" },
		{ "DisplayName", "Copy Parameter Overrides" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copy parameter values from another material instance. This will copy only\nparameters explicitly overridden in that material instance!!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyParameterOverrides", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::MaterialInstanceDynamic_eventCopyParameterOverrides_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics
	{
		struct MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms
		{
			FName ParameterName;
			float Value;
			int32 OutParameterIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutParameterIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_OutParameterIndex = { "OutParameterIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms, OutParameterIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_OutParameterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "// Use this function to set an initial value and fetch the index for use in SetScalarParameterByIndex.  This\n// function should only be called once for a particular name, and then use SetScalarParameterByIndex for subsequent\n// calls.  However, beware using this except in cases where optimization is critical, which is generally only if\n// you're using an unusually high number of parameters in a material and setting a large number of parameters in the\n// same frame.  Also, if the material is changed in any way that can change the parameter list, the index can be\n// invalidated.\n" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Use this function to set an initial value and fetch the index for use in SetScalarParameterByIndex.  This\nfunction should only be called once for a particular name, and then use SetScalarParameterByIndex for subsequent\ncalls.  However, beware using this except in cases where optimization is critical, which is generally only if\nyou're using an unusually high number of parameters in a material and setting a large number of parameters in the\nsame frame.  Also, if the material is changed in any way that can change the parameter list, the index can be\ninvalidated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "InitializeScalarParameterAndGetIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics
	{
		struct MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms
		{
			UMaterialInterface* Source;
			bool bQuickParametersOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
		static void NewProp_bQuickParametersOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuickParametersOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms, Source), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit(void* Obj)
	{
		((MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms*)Obj)->bQuickParametersOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly = { "bQuickParametersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copies over parameters given a material interface (copy each instance following the hierarchy)\n\x09 * Very slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()\n\x09 * The output is the object itself (this). Copying 'quick parameters only' will result in a much\n\x09 * faster copy process but will only copy dynamic scalar, vector and texture parameters on clients.\n\x09 * @param bQuickParametersOnly Copy scalar, vector and texture parameters only. Much faster but may not include required data\n\x09 */" },
		{ "CPP_Default_bQuickParametersOnly", "false" },
		{ "DisplayName", "Copy Material Instance Parameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "CopyMaterialInstanceParameters" },
		{ "ToolTip", "Copies over parameters given a material interface (copy each instance following the hierarchy)\nVery slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()\nThe output is the object itself (this). Copying 'quick parameters only' will result in a much\nfaster copy process but will only copy dynamic scalar, vector and texture parameters on clients.\n@param bQuickParametersOnly Copy scalar, vector and texture parameters only. Much faster but may not include required data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_CopyMaterialInstanceParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms
		{
			FName ParameterName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current scalar (float) parameter value from an MID */" },
		{ "DisplayName", "Get Scalar Parameter Value" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetScalarParameterValue" },
		{ "ToolTip", "Get the current scalar (float) parameter value from an MID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current scalar (float) parameter value from an MID, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "Get Scalar Parameter Value By Info" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetScalarParameterValueByInfo" },
		{ "ToolTip", "Get the current scalar (float) parameter value from an MID, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetScalarParameterValueByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID texture parameter value */" },
		{ "DisplayName", "Get Texture Parameter Value" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetTextureParameterValue" },
		{ "ToolTip", "Get the current MID texture parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			UTexture* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID texture parameter value, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "Get Texture Parameter Value By Info" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetTextureParameterValueByInfo" },
		{ "ToolTip", "Get the current MID texture parameter value, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetTextureParameterValueByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID vector parameter value */" },
		{ "DisplayName", "Get Vector Parameter Value" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetVectorParameterValue" },
		{ "ToolTip", "Get the current MID vector parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID vector parameter value, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "Get VectorParameter Value By Info" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetVectorParameterValueByInfo" },
		{ "ToolTip", "Get the current MID vector parameter value, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetVectorParameterValueByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics
	{
		struct MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms
		{
			UMaterialInstance* SourceA;
			UMaterialInstance* SourceB;
			float Alpha;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceA;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA = { "SourceA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceA), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB = { "SourceB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceB), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\n\x09 * The output is the object itself (this).\n\x09 * Supports the case SourceA==this || SourceB==this\n\x09 * Both material have to be from the same base material\n\x09 * @param SourceA value that is used for Alpha=0, silently ignores the case if 0\n\x09 * @param SourceB value that is used for Alpha=1, silently ignores the case if 0\n\x09 * @param Alpha usually in the range 0..1, values outside the range extrapolate\n\x09 */" },
		{ "DisplayName", "Interpolate Material Instance Parameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "InterpolateMaterialInstanceParameters" },
		{ "ToolTip", "Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\nThe output is the object itself (this).\nSupports the case SourceA==this || SourceB==this\nBoth material have to be from the same base material\n@param SourceA value that is used for Alpha=0, silently ignores the case if 0\n@param SourceB value that is used for Alpha=1, silently ignores the case if 0\n@param Alpha usually in the range 0..1, values outside the range extrapolate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_InterpolateMaterialInstanceParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms
		{
			FName ParameterName;
			FVector4 Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value */" },
		{ "Keywords", "SetVectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetDoubleVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms
		{
			FName ParameterName;
			URuntimeVirtualTexture* Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms, Value), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetRuntimeVirtualTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			URuntimeVirtualTexture* Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms, Value), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value using MPI (to allow access to layer parameters) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value using MPI (to allow access to layer parameters)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetRuntimeVirtualTextureParameterValueByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics
	{
		struct MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms
		{
			int32 ParameterIndex;
			float Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ParameterIndex = { "ParameterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms, ParameterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ParameterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "// Use the cached value of OutParameterIndex from InitializeScalarParameterAndGetIndex to set the scalar parameter\n// ONLY on the exact same MID.  Do NOT presume the index can be used from one instance on another.  Only use this\n// pair of functions when optimization is critical; otherwise use either SetScalarParameterValueByInfo or\n// SetScalarParameterValue.\n" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Use the cached value of OutParameterIndex from InitializeScalarParameterAndGetIndex to set the scalar parameter\nONLY on the exact same MID.  Do NOT presume the index can be used from one instance on another.  Only use this\npair of functions when optimization is critical; otherwise use either SetScalarParameterValueByInfo or\nSetScalarParameterValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetScalarParameterValue_Parms
		{
			FName ParameterName;
			float Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set a MID scalar (float) parameter value */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::MaterialInstanceDynamic_eventSetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set a MID scalar (float) parameter value using MPI (to allow access to layer parameters) */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value using MPI (to allow access to layer parameters)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterValueByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms
		{
			FName ParameterName;
			USparseVolumeTexture* Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms, Value), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetSparseVolumeTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			UTexture* Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value using MPI (to allow access to layer parameters) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value using MPI (to allow access to layer parameters)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetTextureParameterValueByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::MaterialInstanceDynamic_eventSetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics
	{
		struct MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms
		{
			FMaterialParameterInfo ParameterInfo;
			FLinearColor Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value, using MPI (to allow access to layer parameters) */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value, using MPI (to allow access to layer parameters)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetVectorParameterValueByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstanceDynamic);
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister()
	{
		return UMaterialInstanceDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialInstanceDynamic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters, "CopyInterpParameters" }, // 2891257922
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides, "CopyParameterOverrides" }, // 3538791538
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex, "InitializeScalarParameterAndGetIndex" }, // 3513025475
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters, "K2_CopyMaterialInstanceParameters" }, // 822741910
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 2661648158
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo, "K2_GetScalarParameterValueByInfo" }, // 2993375414
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 1841585575
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo, "K2_GetTextureParameterValueByInfo" }, // 3610856133
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 1713612154
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo, "K2_GetVectorParameterValueByInfo" }, // 3261760818
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams, "K2_InterpolateMaterialInstanceParams" }, // 1716633556
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue, "SetDoubleVectorParameterValue" }, // 1457039206
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue, "SetRuntimeVirtualTextureParameterValue" }, // 974632761
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo, "SetRuntimeVirtualTextureParameterValueByInfo" }, // 374329852
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex, "SetScalarParameterByIndex" }, // 1896754749
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue, "SetScalarParameterValue" }, // 565570078
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo, "SetScalarParameterValueByInfo" }, // 1978427350
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue, "SetSparseVolumeTextureParameterValue" }, // 4178669435
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue, "SetTextureParameterValue" }, // 3528981629
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo, "SetTextureParameterValueByInfo" }, // 4021690706
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue, "SetVectorParameterValue" }, // 439336825
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo, "SetVectorParameterValueByInfo" }, // 1810508806
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstanceDynamic.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceDynamic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams = {
		&UMaterialInstanceDynamic::StaticClass,
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
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic()
	{
		if (!Z_Registration_Info_UClass_UMaterialInstanceDynamic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstanceDynamic.OuterSingleton, Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialInstanceDynamic.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialInstanceDynamic>()
	{
		return UMaterialInstanceDynamic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceDynamic);
	UMaterialInstanceDynamic::~UMaterialInstanceDynamic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInstanceDynamic, UMaterialInstanceDynamic::StaticClass, TEXT("UMaterialInstanceDynamic"), &Z_Registration_Info_UClass_UMaterialInstanceDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstanceDynamic), 3887368405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_3085252913(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
