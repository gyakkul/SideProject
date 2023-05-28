// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/MaterialImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialImportTestFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UMaterialImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UMaterialImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckVectorParameter)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_ExpectedParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckVectorParameter(Z_Param_MaterialInterface,Z_Param_ParameterName,Z_Param_ExpectedParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckScalarParameter)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckScalarParameter(Z_Param_MaterialInterface,Z_Param_ParameterName,Z_Param_ExpectedParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckOpacityMaskClipValue)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedOpacityMaskClipValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckOpacityMaskClipValue(Z_Param_MaterialInterface,Z_Param_ExpectedOpacityMaskClipValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckIsTwoSided)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_UBOOL(Z_Param_ExpectedIsTwoSided);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckIsTwoSided(Z_Param_MaterialInterface,Z_Param_ExpectedIsTwoSided);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckBlendMode)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_PROPERTY(FByteProperty,Z_Param_ExpectedBlendMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckBlendMode(Z_Param_MaterialInterface,EBlendMode(Z_Param_ExpectedBlendMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckShadingModel)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_PROPERTY(FByteProperty,Z_Param_ExpectedShadingModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckShadingModel(Z_Param_MaterialInterface,EMaterialShadingModel(Z_Param_ExpectedShadingModel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckImportedMaterialInstanceCount)
	{
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_MaterialInterfaces);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfImportedMaterialInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckImportedMaterialInstanceCount(Z_Param_Out_MaterialInterfaces,Z_Param_ExpectedNumberOfImportedMaterialInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportTestFunctions::execCheckImportedMaterialCount)
	{
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_MaterialInterfaces);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfImportedMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialImportTestFunctions::CheckImportedMaterialCount(Z_Param_Out_MaterialInterfaces,Z_Param_ExpectedNumberOfImportedMaterials);
		P_NATIVE_END;
	}
	void UMaterialImportTestFunctions::StaticRegisterNativesUMaterialImportTestFunctions()
	{
		UClass* Class = UMaterialImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckBlendMode", &UMaterialImportTestFunctions::execCheckBlendMode },
			{ "CheckImportedMaterialCount", &UMaterialImportTestFunctions::execCheckImportedMaterialCount },
			{ "CheckImportedMaterialInstanceCount", &UMaterialImportTestFunctions::execCheckImportedMaterialInstanceCount },
			{ "CheckIsTwoSided", &UMaterialImportTestFunctions::execCheckIsTwoSided },
			{ "CheckOpacityMaskClipValue", &UMaterialImportTestFunctions::execCheckOpacityMaskClipValue },
			{ "CheckScalarParameter", &UMaterialImportTestFunctions::execCheckScalarParameter },
			{ "CheckShadingModel", &UMaterialImportTestFunctions::execCheckShadingModel },
			{ "CheckVectorParameter", &UMaterialImportTestFunctions::execCheckVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics
	{
		struct MaterialImportTestFunctions_eventCheckBlendMode_Parms
		{
			const UMaterialInterface* MaterialInterface;
			TEnumAsByte<EBlendMode> ExpectedBlendMode;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedBlendMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckBlendMode_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_MaterialInterface_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_ExpectedBlendMode = { "ExpectedBlendMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckBlendMode_Parms, ExpectedBlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) }; // 799871737
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckBlendMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_ExpectedBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported material has the expected blend mode */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported material has the expected blend mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckBlendMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::MaterialImportTestFunctions_eventCheckBlendMode_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics
	{
		struct MaterialImportTestFunctions_eventCheckImportedMaterialCount_Parms
		{
			TArray<UMaterialInterface*> MaterialInterfaces;
			int32 ExpectedNumberOfImportedMaterials;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInterfaces;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfImportedMaterials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_MaterialInterfaces_Inner = { "MaterialInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_MaterialInterfaces_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_MaterialInterfaces = { "MaterialInterfaces", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckImportedMaterialCount_Parms, MaterialInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_MaterialInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_MaterialInterfaces_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_ExpectedNumberOfImportedMaterials = { "ExpectedNumberOfImportedMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckImportedMaterialCount_Parms, ExpectedNumberOfImportedMaterials), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckImportedMaterialCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_MaterialInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_MaterialInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_ExpectedNumberOfImportedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of materials are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of materials are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckImportedMaterialCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::MaterialImportTestFunctions_eventCheckImportedMaterialCount_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics
	{
		struct MaterialImportTestFunctions_eventCheckImportedMaterialInstanceCount_Parms
		{
			TArray<UMaterialInterface*> MaterialInterfaces;
			int32 ExpectedNumberOfImportedMaterialInstances;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInterfaces;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfImportedMaterialInstances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_MaterialInterfaces_Inner = { "MaterialInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_MaterialInterfaces_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_MaterialInterfaces = { "MaterialInterfaces", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckImportedMaterialInstanceCount_Parms, MaterialInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_MaterialInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_MaterialInterfaces_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_ExpectedNumberOfImportedMaterialInstances = { "ExpectedNumberOfImportedMaterialInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckImportedMaterialInstanceCount_Parms, ExpectedNumberOfImportedMaterialInstances), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckImportedMaterialInstanceCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_MaterialInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_MaterialInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_ExpectedNumberOfImportedMaterialInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of material instances are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of material instances are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckImportedMaterialInstanceCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::MaterialImportTestFunctions_eventCheckImportedMaterialInstanceCount_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics
	{
		struct MaterialImportTestFunctions_eventCheckIsTwoSided_Parms
		{
			const UMaterialInterface* MaterialInterface;
			bool ExpectedIsTwoSided;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
		static void NewProp_ExpectedIsTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExpectedIsTwoSided;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckIsTwoSided_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_MaterialInterface_MetaData)) };
	void Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_ExpectedIsTwoSided_SetBit(void* Obj)
	{
		((MaterialImportTestFunctions_eventCheckIsTwoSided_Parms*)Obj)->ExpectedIsTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_ExpectedIsTwoSided = { "ExpectedIsTwoSided", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialImportTestFunctions_eventCheckIsTwoSided_Parms), &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_ExpectedIsTwoSided_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckIsTwoSided_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_ExpectedIsTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported material has the expected two-sided setting */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported material has the expected two-sided setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckIsTwoSided", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::MaterialImportTestFunctions_eventCheckIsTwoSided_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics
	{
		struct MaterialImportTestFunctions_eventCheckOpacityMaskClipValue_Parms
		{
			const UMaterialInterface* MaterialInterface;
			float ExpectedOpacityMaskClipValue;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedOpacityMaskClipValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckOpacityMaskClipValue_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_MaterialInterface_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_ExpectedOpacityMaskClipValue = { "ExpectedOpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckOpacityMaskClipValue_Parms, ExpectedOpacityMaskClipValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckOpacityMaskClipValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_ExpectedOpacityMaskClipValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported material has the expected opacity mask clip value */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported material has the expected opacity mask clip value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckOpacityMaskClipValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::MaterialImportTestFunctions_eventCheckOpacityMaskClipValue_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics
	{
		struct MaterialImportTestFunctions_eventCheckScalarParameter_Parms
		{
			const UMaterialInterface* MaterialInterface;
			FString ParameterName;
			float ExpectedParameterValue;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedParameterValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckScalarParameter_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_MaterialInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckScalarParameter_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ExpectedParameterValue = { "ExpectedParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckScalarParameter_Parms, ExpectedParameterValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckScalarParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ExpectedParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported material has the expected scalar parameter value */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported material has the expected scalar parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckScalarParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::MaterialImportTestFunctions_eventCheckScalarParameter_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics
	{
		struct MaterialImportTestFunctions_eventCheckShadingModel_Parms
		{
			const UMaterialInterface* MaterialInterface;
			TEnumAsByte<EMaterialShadingModel> ExpectedShadingModel;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedShadingModel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckShadingModel_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_MaterialInterface_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_ExpectedShadingModel = { "ExpectedShadingModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckShadingModel_Parms, ExpectedShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(nullptr, 0) }; // 3734556393
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckShadingModel_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_ExpectedShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported material has the expected shading model */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported material has the expected shading model" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckShadingModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::MaterialImportTestFunctions_eventCheckShadingModel_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics
	{
		struct MaterialImportTestFunctions_eventCheckVectorParameter_Parms
		{
			const UMaterialInterface* MaterialInterface;
			FString ParameterName;
			FLinearColor ExpectedParameterValue;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedParameterValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckVectorParameter_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_MaterialInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckVectorParameter_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ExpectedParameterValue = { "ExpectedParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckVectorParameter_Parms, ExpectedParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportTestFunctions_eventCheckVectorParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ExpectedParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported material has the expected vector parameter value */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported material has the expected vector parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportTestFunctions, nullptr, "CheckVectorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::MaterialImportTestFunctions_eventCheckVectorParameter_Parms), Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00822601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialImportTestFunctions);
	UClass* Z_Construct_UClass_UMaterialImportTestFunctions_NoRegister()
	{
		return UMaterialImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckBlendMode, "CheckBlendMode" }, // 3686132858
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialCount, "CheckImportedMaterialCount" }, // 1752048241
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckImportedMaterialInstanceCount, "CheckImportedMaterialInstanceCount" }, // 3843438460
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckIsTwoSided, "CheckIsTwoSided" }, // 669402765
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckOpacityMaskClipValue, "CheckOpacityMaskClipValue" }, // 1569354851
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckScalarParameter, "CheckScalarParameter" }, // 506746791
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckShadingModel, "CheckShadingModel" }, // 2489296903
		{ &Z_Construct_UFunction_UMaterialImportTestFunctions_CheckVectorParameter, "CheckVectorParameter" }, // 2008627232
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/MaterialImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialImportTestFunctions_Statics::ClassParams = {
		&UMaterialImportTestFunctions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UMaterialImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialImportTestFunctions.OuterSingleton, Z_Construct_UClass_UMaterialImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UMaterialImportTestFunctions>()
	{
		return UMaterialImportTestFunctions::StaticClass();
	}
	UMaterialImportTestFunctions::UMaterialImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialImportTestFunctions);
	UMaterialImportTestFunctions::~UMaterialImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialImportTestFunctions, UMaterialImportTestFunctions::StaticClass, TEXT("UMaterialImportTestFunctions"), &Z_Registration_Info_UClass_UMaterialImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialImportTestFunctions), 1352378559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_421133319(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
