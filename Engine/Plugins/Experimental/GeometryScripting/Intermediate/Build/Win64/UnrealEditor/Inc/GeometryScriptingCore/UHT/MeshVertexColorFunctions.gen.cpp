// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshVertexColorFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexColorFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorFlags();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVertexColorFunctions::execConvertMeshVertexColorsLinearToSRGB)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVertexColorFunctions::execConvertMeshVertexColorsSRGBToLinear)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVertexColorFunctions::execGetMeshPerVertexColors)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidColorSet);
		P_GET_UBOOL_REF(Z_Param_Out_bHasVertexIDGaps);
		P_GET_UBOOL(Z_Param_bBlendSplitVertexValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors(Z_Param_TargetMesh,Z_Param_Out_ColorList,Z_Param_Out_bIsValidColorSet,Z_Param_Out_bHasVertexIDGaps,Z_Param_bBlendSplitVertexValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshPerVertexColors)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_VertexColorList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(Z_Param_TargetMesh,Z_Param_VertexColorList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshSelectionVertexColor)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_STRUCT(FGeometryScriptColorFlags,Z_Param_Flags);
		P_GET_UBOOL(Z_Param_bCreateColorSeam);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Color,Z_Param_Flags,Z_Param_bCreateColorSeam,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshConstantVertexColor)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_STRUCT(FGeometryScriptColorFlags,Z_Param_Flags);
		P_GET_UBOOL(Z_Param_bClearExisting);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(Z_Param_TargetMesh,Z_Param_Color,Z_Param_Flags,Z_Param_bClearExisting,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshVertexColorFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertMeshVertexColorsLinearToSRGB", &UGeometryScriptLibrary_MeshVertexColorFunctions::execConvertMeshVertexColorsLinearToSRGB },
			{ "ConvertMeshVertexColorsSRGBToLinear", &UGeometryScriptLibrary_MeshVertexColorFunctions::execConvertMeshVertexColorsSRGBToLinear },
			{ "GetMeshPerVertexColors", &UGeometryScriptLibrary_MeshVertexColorFunctions::execGetMeshPerVertexColors },
			{ "SetMeshConstantVertexColor", &UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshConstantVertexColor },
			{ "SetMeshPerVertexColors", &UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshPerVertexColors },
			{ "SetMeshSelectionVertexColor", &UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshSelectionVertexColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics
	{
		struct GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsLinearToSRGB_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsLinearToSRGB_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsLinearToSRGB_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsLinearToSRGB_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|VertexColor" },
		{ "Comment", "/**\n\x09 * Apply a Linear to SRGB color transformation on all vertex colors\n\x09 * on the mesh.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVertexColorFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply a Linear to SRGB color transformation on all vertex colors\non the mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, nullptr, "ConvertMeshVertexColorsLinearToSRGB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsLinearToSRGB_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics
	{
		struct GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsSRGBToLinear_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsSRGBToLinear_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsSRGBToLinear_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsSRGBToLinear_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|VertexColor" },
		{ "Comment", "/**\n\x09 * Apply a SRGB to Linear color transformation on all vertex colors\n\x09 * on the mesh.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVertexColorFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply a SRGB to Linear color transformation on all vertex colors\non the mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, nullptr, "ConvertMeshVertexColorsSRGBToLinear", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::GeometryScriptLibrary_MeshVertexColorFunctions_eventConvertMeshVertexColorsSRGBToLinear_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics
	{
		struct GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptColorList ColorList;
			bool bIsValidColorSet;
			bool bHasVertexIDGaps;
			bool bBlendSplitVertexValues;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static void NewProp_bIsValidColorSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidColorSet;
		static void NewProp_bHasVertexIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexIDGaps;
		static void NewProp_bBlendSplitVertexValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendSplitVertexValues;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bIsValidColorSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms*)Obj)->bIsValidColorSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bIsValidColorSet = { "bIsValidColorSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bIsValidColorSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bHasVertexIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms*)Obj)->bHasVertexIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bHasVertexIDGaps = { "bHasVertexIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bHasVertexIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bBlendSplitVertexValues_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms*)Obj)->bBlendSplitVertexValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bBlendSplitVertexValues = { "bBlendSplitVertexValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bBlendSplitVertexValues_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bIsValidColorSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bHasVertexIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_bBlendSplitVertexValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|VertexColor" },
		{ "Comment", "/**\n\x09 * Get a list of single vertex colors for each mesh vertex in the TargetMesh, derived from the VertexColor Overlay.\n\x09 * The VertexColor Overlay may store multiple colors for a single vertex (ie different colors for that vertex on different triangles)\n\x09 * In such cases the colors can either be averaged, or the last color seen will be used, depending on the bBlendSplitVertexValues parameter.\n\x09 * @param ColorList output color list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n\x09 * @param bIsValidColorSet will be set to true if the VertexColor Overlay was valid\n\x09 * @param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount \n\x09 * @param bBlendSplitVertexValues control how multiple colors at the same vertex should be interpreted\n\x09 */" },
		{ "CPP_Default_bBlendSplitVertexValues", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVertexColorFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a list of single vertex colors for each mesh vertex in the TargetMesh, derived from the VertexColor Overlay.\nThe VertexColor Overlay may store multiple colors for a single vertex (ie different colors for that vertex on different triangles)\nIn such cases the colors can either be averaged, or the last color seen will be used, depending on the bBlendSplitVertexValues parameter.\n@param ColorList output color list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n@param bIsValidColorSet will be set to true if the VertexColor Overlay was valid\n@param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount\n@param bBlendSplitVertexValues control how multiple colors at the same vertex should be interpreted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, nullptr, "GetMeshPerVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::GeometryScriptLibrary_MeshVertexColorFunctions_eventGetMeshPerVertexColors_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics
	{
		struct GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms
		{
			UDynamicMesh* TargetMesh;
			FLinearColor Color;
			FGeometryScriptColorFlags Flags;
			bool bClearExisting;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Flags;
		static void NewProp_bClearExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExisting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms, Flags), Z_Construct_UScriptStruct_FGeometryScriptColorFlags, METADATA_PARAMS(nullptr, 0) }; // 1356907492
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_bClearExisting_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms*)Obj)->bClearExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_bClearExisting = { "bClearExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_bClearExisting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_bClearExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|VertexColor" },
		{ "Comment", "/**\n\x09 * Set all vertex colors (optionally specific channels) in the TargetMesh VertexColor Overlay to a constant value\n\x09 * @param Color the constant color to set\n\x09 * @param Flags specify which RGBA channels to set (default all channels)\n\x09 */" },
		{ "CPP_Default_bClearExisting", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVertexColorFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set all vertex colors (optionally specific channels) in the TargetMesh VertexColor Overlay to a constant value\n@param Color the constant color to set\n@param Flags specify which RGBA channels to set (default all channels)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, nullptr, "SetMeshConstantVertexColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshConstantVertexColor_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics
	{
		struct GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshPerVertexColors_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptColorList VertexColorList;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshPerVertexColors_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_VertexColorList = { "VertexColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshPerVertexColors_Parms, VertexColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshPerVertexColors_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshPerVertexColors_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_VertexColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|VertexColor" },
		{ "Comment", "/**\n\x09 * Set all vertex colors in the TargetMesh VertexColor Overlay to the specified per-vertex colors\n\x09 * @param VertexColorList per-vertex colors. Size must be less than or equal to the MaxVertexID of TargetMesh  (ie gaps are supported)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVertexColorFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set all vertex colors in the TargetMesh VertexColor Overlay to the specified per-vertex colors\n@param VertexColorList per-vertex colors. Size must be less than or equal to the MaxVertexID of TargetMesh  (ie gaps are supported)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, nullptr, "SetMeshPerVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshPerVertexColors_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics
	{
		struct GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FLinearColor Color;
			FGeometryScriptColorFlags Flags;
			bool bCreateColorSeam;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Flags;
		static void NewProp_bCreateColorSeam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateColorSeam;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms, Flags), Z_Construct_UScriptStruct_FGeometryScriptColorFlags, METADATA_PARAMS(nullptr, 0) }; // 1356907492
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_bCreateColorSeam_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms*)Obj)->bCreateColorSeam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_bCreateColorSeam = { "bCreateColorSeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_bCreateColorSeam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_bCreateColorSeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|VertexColor" },
		{ "Comment", "/**\n\x09 * Set the colors in the TargetMesh VertexColor Overlay identified by the Selection to a constant value.\n\x09 * For a Vertex Selection, each existing VertexColor Overlay Element for the vertex is updated.\n\x09 * For a Triangle or PolyGroup Selection, all Overlay Elements in the identified Triangles are updated.\n\x09 * @param Color the constant color to set\n\x09 * @param Flags specify which RGBA channels to set (default all channels)\n\x09 * @param bCreateColorSeam if true, a \"hard edge\" in the vertex colors is created, by creating new Elements for all the triangles in the selection. If enabled, Vertex selections are converted to Triangle selections, and Flags is ignored. \n\x09 */" },
		{ "CPP_Default_bCreateColorSeam", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVertexColorFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the colors in the TargetMesh VertexColor Overlay identified by the Selection to a constant value.\nFor a Vertex Selection, each existing VertexColor Overlay Element for the vertex is updated.\nFor a Triangle or PolyGroup Selection, all Overlay Elements in the identified Triangles are updated.\n@param Color the constant color to set\n@param Flags specify which RGBA channels to set (default all channels)\n@param bCreateColorSeam if true, a \"hard edge\" in the vertex colors is created, by creating new Elements for all the triangles in the selection. If enabled, Vertex selections are converted to Triangle selections, and Flags is ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, nullptr, "SetMeshSelectionVertexColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::GeometryScriptLibrary_MeshVertexColorFunctions_eventSetMeshSelectionVertexColor_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshVertexColorFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB, "ConvertMeshVertexColorsLinearToSRGB" }, // 3916951562
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear, "ConvertMeshVertexColorsSRGBToLinear" }, // 1828700074
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors, "GetMeshPerVertexColors" }, // 2983285355
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor, "SetMeshConstantVertexColor" }, // 759709690
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors, "SetMeshPerVertexColors" }, // 2322614335
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor, "SetMeshSelectionVertexColor" }, // 1693833801
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshVertexColorFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVertexColorFunctions.h" },
		{ "ScriptName", "GeometryScript_VertexColors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshVertexColorFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshVertexColorFunctions>()
	{
		return UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshVertexColorFunctions::UGeometryScriptLibrary_MeshVertexColorFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshVertexColorFunctions);
	UGeometryScriptLibrary_MeshVertexColorFunctions::~UGeometryScriptLibrary_MeshVertexColorFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshVertexColorFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshVertexColorFunctions), 1552151401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_2787561795(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
