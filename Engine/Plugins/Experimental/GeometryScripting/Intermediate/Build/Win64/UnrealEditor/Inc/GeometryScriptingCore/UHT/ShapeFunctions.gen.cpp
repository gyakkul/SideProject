// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/ShapeFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisPlane)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_ENUM(EGeometryScriptAxis,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlane*)Z_Param__Result=UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane(Z_Param_Transform,EGeometryScriptAxis(Z_Param_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisRay)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_ENUM(EGeometryScriptAxis,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRay*)Z_Param__Result=UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay(Z_Param_Transform,EGeometryScriptAxis(Z_Param_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisVector)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_ENUM(EGeometryScriptAxis,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector(Z_Param_Transform,EGeometryScriptAxis(Z_Param_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_TransformFunctions::execMakeTransformFromAxes)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_ZAxis);
		P_GET_STRUCT(FVector,Z_Param_TangentAxis);
		P_GET_UBOOL(Z_Param_bTangentIsX);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes(Z_Param_Location,Z_Param_ZAxis,Z_Param_TangentAxis,Z_Param_bTangentIsX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_TransformFunctions::execMakeTransformFromZAxis)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_ZAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis(Z_Param_Location,Z_Param_ZAxis);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_TransformFunctions::StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_TransformFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransformAxisPlane", &UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisPlane },
			{ "GetTransformAxisRay", &UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisRay },
			{ "GetTransformAxisVector", &UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisVector },
			{ "MakeTransformFromAxes", &UGeometryScriptLibrary_TransformFunctions::execMakeTransformFromAxes },
			{ "MakeTransformFromZAxis", &UGeometryScriptLibrary_TransformFunctions::execMakeTransformFromZAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics
	{
		struct GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisPlane_Parms
		{
			FTransform Transform;
			EGeometryScriptAxis Axis;
			FPlane ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisPlane_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisPlane_Parms, Axis), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis, METADATA_PARAMS(nullptr, 0) }; // 1190487509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Ray" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Transform" },
		{ "Comment", "/**\n\x09 * Get the Plane at the Transform Location with the Plane Normal aligned with the direction of the X/Y/Z axis of the Transform, \n\x09 * ie the Direction Vector resulting from transforming the unit direction vectors (1,0,0) / etc  \n\x09 */" },
		{ "CPP_Default_Axis", "X" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Get the Plane at the Transform Location with the Plane Normal aligned with the direction of the X/Y/Z axis of the Transform,\nie the Direction Vector resulting from transforming the unit direction vectors (1,0,0) / etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions, nullptr, "GetTransformAxisPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisPlane_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics
	{
		struct GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisRay_Parms
		{
			FTransform Transform;
			EGeometryScriptAxis Axis;
			FRay ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisRay_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisRay_Parms, Axis), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis, METADATA_PARAMS(nullptr, 0) }; // 1190487509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Ray" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisRay_Parms, ReturnValue), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Transform" },
		{ "Comment", "/**\n\x09 * Get the Ray at the Transform Location aligned with the direction of the X/Y/Z axis of the Transform, \n\x09 * ie the Direction Vector resulting from transforming the unit direction vectors (1,0,0) / etc  \n\x09 */" },
		{ "CPP_Default_Axis", "X" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Get the Ray at the Transform Location aligned with the direction of the X/Y/Z axis of the Transform,\nie the Direction Vector resulting from transforming the unit direction vectors (1,0,0) / etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions, nullptr, "GetTransformAxisRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisRay_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics
	{
		struct GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisVector_Parms
		{
			FTransform Transform;
			EGeometryScriptAxis Axis;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisVector_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisVector_Parms, Axis), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis, METADATA_PARAMS(nullptr, 0) }; // 1190487509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Transform" },
		{ "Comment", "/**\n\x09 * Get the Vector for the direction of the X/Y/Z axis of the Transform, ie the \n\x09 * Vector resulting from transforming the unit direction vectors (1,0,0) / etc  \n\x09 */" },
		{ "CPP_Default_Axis", "X" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Get the Vector for the direction of the X/Y/Z axis of the Transform, ie the\nVector resulting from transforming the unit direction vectors (1,0,0) / etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions, nullptr, "GetTransformAxisVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::GeometryScriptLibrary_TransformFunctions_eventGetTransformAxisVector_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics
	{
		struct GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms
		{
			FVector Location;
			FVector ZAxis;
			FVector TangentAxis;
			bool bTangentIsX;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZAxis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentAxis;
		static void NewProp_bTangentIsX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTangentIsX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_TangentAxis = { "TangentAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms, TangentAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_bTangentIsX_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms*)Obj)->bTangentIsX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_bTangentIsX = { "bTangentIsX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_bTangentIsX_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_ZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_TangentAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_bTangentIsX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Transform" },
		{ "Comment", "/**\n\x09 * Create a Transform at the given Location, with the ZAxis vector as the Z axis\n\x09 * of the Transform, and the X or Y axis oriented to the Tangent vector, based on\n\x09 * the bTangentIsX parameter.\n\x09 */" },
		{ "CPP_Default_bTangentIsX", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Create a Transform at the given Location, with the ZAxis vector as the Z axis\nof the Transform, and the X or Y axis oriented to the Tangent vector, based on\nthe bTangentIsX parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions, nullptr, "MakeTransformFromAxes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromAxes_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics
	{
		struct GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromZAxis_Parms
		{
			FVector Location;
			FVector ZAxis;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromZAxis_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromZAxis_Parms, ZAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromZAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_ZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Transform" },
		{ "Comment", "/**\n\x09 * Create a Transform at the given Location, with the ZAxis vector as the Z axis\n\x09 * of the Transform, and the X or Y axis oriented to the Tangent vector, based on\n\x09 * the bTangentIsX parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Create a Transform at the given Location, with the ZAxis vector as the Z axis\nof the Transform, and the X or Y axis oriented to the Tangent vector, based on\nthe bTangentIsX parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions, nullptr, "MakeTransformFromZAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::GeometryScriptLibrary_TransformFunctions_eventMakeTransformFromZAxis_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_TransformFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_TransformFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane, "GetTransformAxisPlane" }, // 2385369198
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay, "GetTransformAxisRay" }, // 2507061597
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector, "GetTransformAxisVector" }, // 3920097446
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes, "MakeTransformFromAxes" }, // 1354122453
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis, "MakeTransformFromZAxis" }, // 4026788046
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/ShapeFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptName", "GeometryScript_Transform" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_TransformFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_TransformFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_TransformFunctions>()
	{
		return UGeometryScriptLibrary_TransformFunctions::StaticClass();
	}
	UGeometryScriptLibrary_TransformFunctions::UGeometryScriptLibrary_TransformFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_TransformFunctions);
	UGeometryScriptLibrary_TransformFunctions::~UGeometryScriptLibrary_TransformFunctions() {}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRaySegmentClosestPoint)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FVector,Z_Param_SegStartPoint);
		P_GET_STRUCT(FVector,Z_Param_SegEndPoint);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_RayParameter);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SegPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint(Z_Param_Ray,Z_Param_SegStartPoint,Z_Param_SegEndPoint,Z_Param_Out_RayParameter,Z_Param_Out_RayPoint,Z_Param_Out_SegPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayLineClosestPoint)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FVector,Z_Param_LineOrigin);
		P_GET_STRUCT(FVector,Z_Param_LineDirection);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_RayParameter);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayPoint);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_LineParameter);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint(Z_Param_Ray,Z_Param_LineOrigin,Z_Param_LineDirection,Z_Param_Out_RayParameter,Z_Param_Out_RayPoint,Z_Param_Out_LineParameter,Z_Param_Out_LinePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayPlaneIntersection)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FPlane,Z_Param_Plane);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_HitDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection(Z_Param_Ray,Z_Param_Plane,Z_Param_Out_HitDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayBoxIntersection)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_HitDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection(Z_Param_Ray,Z_Param_Box,Z_Param_Out_HitDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRaySphereIntersection)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FVector,Z_Param_SphereCenter);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SphereRadius);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Distance1);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Distance2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection(Z_Param_Ray,Z_Param_SphereCenter,Z_Param_SphereRadius,Z_Param_Out_Distance1,Z_Param_Out_Distance2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayClosestPoint)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRayClosestPoint(Z_Param_Ray,Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayPointDistance)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRayPointDistance(Z_Param_Ray,Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayParameter)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRayParameter(Z_Param_Ray,Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayStartEnd)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_StartDistance);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_EndDistance);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_RayFunctions::GetRayStartEnd(Z_Param_Ray,Z_Param_StartDistance,Z_Param_EndDistance,Z_Param_Out_StartPoint,Z_Param_Out_EndPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetRayPoint)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetRayPoint(Z_Param_Ray,Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execGetTransformedRay)
	{
		P_GET_STRUCT(FRay,Z_Param_Ray);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_UBOOL(Z_Param_bInvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRay*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::GetTransformedRay(Z_Param_Ray,Z_Param_Transform,Z_Param_bInvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execMakeRayFromPointDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_bDirectionIsNormalized);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRay*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection(Z_Param_Origin,Z_Param_Direction,Z_Param_bDirectionIsNormalized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RayFunctions::execMakeRayFromPoints)
	{
		P_GET_STRUCT(FVector,Z_Param_A);
		P_GET_STRUCT(FVector,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRay*)Z_Param__Result=UGeometryScriptLibrary_RayFunctions::MakeRayFromPoints(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_RayFunctions::StaticRegisterNativesUGeometryScriptLibrary_RayFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_RayFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRayBoxIntersection", &UGeometryScriptLibrary_RayFunctions::execGetRayBoxIntersection },
			{ "GetRayClosestPoint", &UGeometryScriptLibrary_RayFunctions::execGetRayClosestPoint },
			{ "GetRayLineClosestPoint", &UGeometryScriptLibrary_RayFunctions::execGetRayLineClosestPoint },
			{ "GetRayParameter", &UGeometryScriptLibrary_RayFunctions::execGetRayParameter },
			{ "GetRayPlaneIntersection", &UGeometryScriptLibrary_RayFunctions::execGetRayPlaneIntersection },
			{ "GetRayPoint", &UGeometryScriptLibrary_RayFunctions::execGetRayPoint },
			{ "GetRayPointDistance", &UGeometryScriptLibrary_RayFunctions::execGetRayPointDistance },
			{ "GetRaySegmentClosestPoint", &UGeometryScriptLibrary_RayFunctions::execGetRaySegmentClosestPoint },
			{ "GetRaySphereIntersection", &UGeometryScriptLibrary_RayFunctions::execGetRaySphereIntersection },
			{ "GetRayStartEnd", &UGeometryScriptLibrary_RayFunctions::execGetRayStartEnd },
			{ "GetTransformedRay", &UGeometryScriptLibrary_RayFunctions::execGetTransformedRay },
			{ "MakeRayFromPointDirection", &UGeometryScriptLibrary_RayFunctions::execMakeRayFromPointDirection },
			{ "MakeRayFromPoints", &UGeometryScriptLibrary_RayFunctions::execMakeRayFromPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayBoxIntersection_Parms
		{
			FRay Ray;
			FBox Box;
			double HitDistance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayBoxIntersection_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayBoxIntersection_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_HitDistance = { "HitDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayBoxIntersection_Parms, HitDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Intersects" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_RayFunctions_eventGetRayBoxIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_RayFunctions_eventGetRayBoxIntersection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_HitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Check if the Ray intersects a Sphere defined by the SphereCenter and SphereRadius.\n\x09 * @param HitDistance Distance along the ray (Ray Parameter) to first intersection point with the Box\n\x09 * @return true if the ray hits the box, and false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check if the Ray intersects a Sphere defined by the SphereCenter and SphereRadius.\n@param HitDistance Distance along the ray (Ray Parameter) to first intersection point with the Box\n@return true if the ray hits the box, and false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayBoxIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayBoxIntersection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayClosestPoint_Parms
		{
			FRay Ray;
			FVector Point;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayClosestPoint_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayClosestPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Closest Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayClosestPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Get the closest point on the Ray to the given Point\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the closest point on the Ray to the given Point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayClosestPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayClosestPoint_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms
		{
			FRay Ray;
			FVector LineOrigin;
			FVector LineDirection;
			double RayParameter;
			FVector RayPoint;
			double LineParameter;
			FVector LinePoint;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineDirection;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RayParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayPoint;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LineParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LineOrigin = { "LineOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, LineOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LineDirection = { "LineDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, LineDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_RayParameter = { "RayParameter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, RayParameter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_RayPoint = { "RayPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, RayPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LineParameter = { "LineParameter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, LineParameter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LinePoint = { "LinePoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, LinePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Distance" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LineOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LineDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_RayParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_RayPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LineParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_LinePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Compute the pair of closest points on a 3D Ray and Line. \n\x09 * The Line is defined by an Origin and Direction (ie same as a Ray) but extends infinitely in both directions.\n\x09 * @param RayParameter the Ray Parameter of the closest point on the Ray (range 0, inf)\n\x09 * @param RayPoint the point on the Ray corresponding to RayParameter\n\x09 * @param LineParameter the Line parameter of the closest point on the Line (range -inf, inf)\n\x09 * @param LinePoint the point on the Line corresponding to LineParameter\n\x09 * @return the minimum distance between the Ray and Line, ie between RayPoint and LinePoint\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the pair of closest points on a 3D Ray and Line.\nThe Line is defined by an Origin and Direction (ie same as a Ray) but extends infinitely in both directions.\n@param RayParameter the Ray Parameter of the closest point on the Ray (range 0, inf)\n@param RayPoint the point on the Ray corresponding to RayParameter\n@param LineParameter the Line parameter of the closest point on the Line (range -inf, inf)\n@param LinePoint the point on the Line corresponding to LineParameter\n@return the minimum distance between the Ray and Line, ie between RayPoint and LinePoint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayLineClosestPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayLineClosestPoint_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayParameter_Parms
		{
			FRay Ray;
			FVector Point;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayParameter_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayParameter_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Ray Paramater" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayParameter_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Project the given Point onto the closest point along the Ray, and return the Ray Parameter/Distance at that Point\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Project the given Point onto the closest point along the Ray, and return the Ray Parameter/Distance at that Point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayParameter_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayPlaneIntersection_Parms
		{
			FRay Ray;
			FPlane Plane;
			double HitDistance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPlaneIntersection_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPlaneIntersection_Parms, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_HitDistance = { "HitDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPlaneIntersection_Parms, HitDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Intersects" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_RayFunctions_eventGetRayPlaneIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_RayFunctions_eventGetRayPlaneIntersection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_Plane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_HitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Find the intersection of a Ray and a Plane\n\x09 * @param HitDistance the returned Distance along the ray (Ray Parameter) to intersection point with the Plane\n\x09 * @return true if the ray hits the plane (only false if ray is parallel with plane)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find the intersection of a Ray and a Plane\n@param HitDistance the returned Distance along the ray (Ray Parameter) to intersection point with the Plane\n@return true if the ray hits the plane (only false if ray is parallel with plane)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayPlaneIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayPlaneIntersection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayPoint_Parms
		{
			FRay Ray;
			double Distance;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPoint_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPoint_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Get a Point at the given Distance along the Ray (Origin + Distance*Direction)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a Point at the given Distance along the Ray (Origin + Distance*Direction)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayPoint_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayPointDistance_Parms
		{
			FRay Ray;
			FVector Point;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPointDistance_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPointDistance_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Distance" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayPointDistance_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Get the distance from Point to the closest point on the Ray\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the distance from Point to the closest point on the Ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayPointDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayPointDistance_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms
		{
			FRay Ray;
			FVector SegStartPoint;
			FVector SegEndPoint;
			double RayParameter;
			FVector RayPoint;
			FVector SegPoint;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegStartPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegEndPoint;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RayParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_SegStartPoint = { "SegStartPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms, SegStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_SegEndPoint = { "SegEndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms, SegEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_RayParameter = { "RayParameter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms, RayParameter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_RayPoint = { "RayPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms, RayPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_SegPoint = { "SegPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms, SegPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Distance" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_SegStartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_SegEndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_RayParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_RayPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_SegPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Compute the pair of closest points on a 3D Ray and Line Segment\n\x09 * The Line Segment is defined by its two Endpoints.\n\x09 * @param RayParameter the Ray Parameter of the closest point on the Ray (range 0, inf)\n\x09 * @param RayPoint the point on the Ray corresponding to RayParameter\n\x09 * @param SegPoint the point on the Segment\n\x09 * @return the minimum distance between the Ray and Segment, ie between RayPoint and SegPoint\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the pair of closest points on a 3D Ray and Line Segment\nThe Line Segment is defined by its two Endpoints.\n@param RayParameter the Ray Parameter of the closest point on the Ray (range 0, inf)\n@param RayPoint the point on the Ray corresponding to RayParameter\n@param SegPoint the point on the Segment\n@return the minimum distance between the Ray and Segment, ie between RayPoint and SegPoint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRaySegmentClosestPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::GeometryScriptLibrary_RayFunctions_eventGetRaySegmentClosestPoint_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms
		{
			FRay Ray;
			FVector SphereCenter;
			double SphereRadius;
			double Distance1;
			double Distance2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCenter;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SphereRadius;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_SphereCenter = { "SphereCenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms, SphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_Distance1 = { "Distance1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms, Distance1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_Distance2 = { "Distance2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms, Distance2), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Intersects" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_SphereCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_Distance1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_Distance2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Check if the Ray intersects a Sphere defined by the SphereCenter and SphereRadius.\n\x09 * This function returns two intersection distances (ray parameters). If the ray grazes the sphere, both\n\x09 * distances will be the same, and if it misses, they will be MAX_FLOAT. \n\x09 * Use the function GetRayPoint to convert the distances to points on the ray/sphere.\n\x09 * \n\x09 * @param Distance1 Distance along ray (Ray Parameter) to first/closer intersection point with sphere\n\x09 * @param Distance2 Distance along ray (Ray Parameter) to second/further intersection point with sphere\n\x09 * @return true if ray intersects sphere\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check if the Ray intersects a Sphere defined by the SphereCenter and SphereRadius.\nThis function returns two intersection distances (ray parameters). If the ray grazes the sphere, both\ndistances will be the same, and if it misses, they will be MAX_FLOAT.\nUse the function GetRayPoint to convert the distances to points on the ray/sphere.\n\n@param Distance1 Distance along ray (Ray Parameter) to first/closer intersection point with sphere\n@param Distance2 Distance along ray (Ray Parameter) to second/further intersection point with sphere\n@return true if ray intersects sphere" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRaySphereIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::GeometryScriptLibrary_RayFunctions_eventGetRaySphereIntersection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetRayStartEnd_Parms
		{
			FRay Ray;
			double StartDistance;
			double EndDistance;
			FVector StartPoint;
			FVector EndPoint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayStartEnd_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayStartEnd_Parms, StartDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayStartEnd_Parms, EndDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayStartEnd_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetRayStartEnd_Parms, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_StartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_EndDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::NewProp_EndPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Get two points along the ray. \n\x09 * @param StartPoint returned as Origin + StartDistance*Direction\n\x09 * @param EndPoint returned as Origin + EndDistance*Direction, Unless EndDistance = 0, then MaxFloat is used as the Distance\n\x09 */" },
		{ "EndDistance", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "StartDistance", "0" },
		{ "ToolTip", "Get two points along the ray.\n@param StartPoint returned as Origin + StartDistance*Direction\n@param EndPoint returned as Origin + EndDistance*Direction, Unless EndDistance = 0, then MaxFloat is used as the Distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetRayStartEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::GeometryScriptLibrary_RayFunctions_eventGetRayStartEnd_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventGetTransformedRay_Parms
		{
			FRay Ray;
			FTransform Transform;
			bool bInvert;
			FRay ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetTransformedRay_Parms, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetTransformedRay_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_RayFunctions_eventGetTransformedRay_Parms*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_RayFunctions_eventGetTransformedRay_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Transformed Ray" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventGetTransformedRay_Parms, ReturnValue), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_Ray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Apply the given Transform to the given Ray, or optionally the Transform Inverse, and return the new transformed Ray\n\x09 */" },
		{ "CPP_Default_bInvert", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply the given Transform to the given Ray, or optionally the Transform Inverse, and return the new transformed Ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "GetTransformedRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::GeometryScriptLibrary_RayFunctions_eventGetTransformedRay_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventMakeRayFromPointDirection_Parms
		{
			FVector Origin;
			FVector Direction;
			bool bDirectionIsNormalized;
			FRay ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_bDirectionIsNormalized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirectionIsNormalized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventMakeRayFromPointDirection_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventMakeRayFromPointDirection_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_bDirectionIsNormalized_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_RayFunctions_eventMakeRayFromPointDirection_Parms*)Obj)->bDirectionIsNormalized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_bDirectionIsNormalized = { "bDirectionIsNormalized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_RayFunctions_eventMakeRayFromPointDirection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_bDirectionIsNormalized_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Ray" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventMakeRayFromPointDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_bDirectionIsNormalized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Create a Ray from an Origin and Direction, with optionally non-normalized Direction\n\x09 */" },
		{ "CPP_Default_bDirectionIsNormalized", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Create a Ray from an Origin and Direction, with optionally non-normalized Direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "MakeRayFromPointDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::GeometryScriptLibrary_RayFunctions_eventMakeRayFromPointDirection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics
	{
		struct GeometryScriptLibrary_RayFunctions_eventMakeRayFromPoints_Parms
		{
			FVector A;
			FVector B;
			FRay ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventMakeRayFromPoints_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventMakeRayFromPoints_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Ray" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RayFunctions_eventMakeRayFromPoints_Parms, ReturnValue), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Ray" },
		{ "Comment", "/**\n\x09 * Create a Ray from two points, placing the Origin at A and the Direction as Normalize(B-A)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Create a Ray from two points, placing the Origin at A and the Direction as Normalize(B-A)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, nullptr, "MakeRayFromPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::GeometryScriptLibrary_RayFunctions_eventMakeRayFromPoints_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_RayFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_RayFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection, "GetRayBoxIntersection" }, // 1178955467
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint, "GetRayClosestPoint" }, // 1419275106
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint, "GetRayLineClosestPoint" }, // 248215198
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayParameter, "GetRayParameter" }, // 1840485508
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection, "GetRayPlaneIntersection" }, // 1878450580
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPoint, "GetRayPoint" }, // 1338206678
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayPointDistance, "GetRayPointDistance" }, // 360304599
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint, "GetRaySegmentClosestPoint" }, // 3286565967
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection, "GetRaySphereIntersection" }, // 2271860347
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetRayStartEnd, "GetRayStartEnd" }, // 2521417333
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_GetTransformedRay, "GetTransformedRay" }, // 3730450045
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection, "MakeRayFromPointDirection" }, // 1098728307
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints, "MakeRayFromPoints" }, // 4249630001
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/ShapeFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptName", "GeometryScript_Ray" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_RayFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_RayFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_RayFunctions>()
	{
		return UGeometryScriptLibrary_RayFunctions::StaticClass();
	}
	UGeometryScriptLibrary_RayFunctions::UGeometryScriptLibrary_RayFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_RayFunctions);
	UGeometryScriptLibrary_RayFunctions::~UGeometryScriptLibrary_RayFunctions() {}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execTestBoxSphereIntersection)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT(FVector,Z_Param_SphereCenter);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SphereRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection(Z_Param_Box,Z_Param_SphereCenter,Z_Param_SphereRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetBoxPointDistance)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::GetBoxPointDistance(Z_Param_Box,Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execFindClosestPointOnBox)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_UBOOL_REF(Z_Param_Out_bIsInside);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::FindClosestPointOnBox(Z_Param_Box,Z_Param_Point,Z_Param_Out_bIsInside);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execTestPointInsideBox)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_UBOOL(Z_Param_bConsiderOnBoxAsInside);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox(Z_Param_Box,Z_Param_Point,Z_Param_bConsiderOnBoxAsInside);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetBoxBoxDistance)
	{
		P_GET_STRUCT(FBox,Z_Param_Box1);
		P_GET_STRUCT(FBox,Z_Param_Box2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(Z_Param_Box1,Z_Param_Box2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execFindBoxBoxIntersection)
	{
		P_GET_STRUCT(FBox,Z_Param_Box1);
		P_GET_STRUCT(FBox,Z_Param_Box2);
		P_GET_UBOOL_REF(Z_Param_Out_bIsIntersecting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection(Z_Param_Box1,Z_Param_Box2,Z_Param_Out_bIsIntersecting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execTestBoxBoxIntersection)
	{
		P_GET_STRUCT(FBox,Z_Param_Box1);
		P_GET_STRUCT(FBox,Z_Param_Box2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection(Z_Param_Box1,Z_Param_Box2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetTransformedBox)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::GetTransformedBox(Z_Param_Box,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetExpandedBox)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT(FVector,Z_Param_ExpandBy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::GetExpandedBox(Z_Param_Box,Z_Param_ExpandBy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetBoxVolumeArea)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Volume);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_SurfaceArea);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea(Z_Param_Box,Z_Param_Out_Volume,Z_Param_Out_SurfaceArea);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetBoxFaceCenter)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_PROPERTY(FIntProperty,Z_Param_FaceIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FaceNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter(Z_Param_Box,Z_Param_FaceIndex,Z_Param_Out_FaceNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetBoxCorner)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_PROPERTY(FIntProperty,Z_Param_CornerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::GetBoxCorner(Z_Param_Box,Z_Param_CornerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execGetBoxCenterSize)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dimensions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_BoxFunctions::GetBoxCenterSize(Z_Param_Box,Z_Param_Out_Center,Z_Param_Out_Dimensions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execMakeBoxFromCenterExtents)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents(Z_Param_Center,Z_Param_Extents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_BoxFunctions::execMakeBoxFromCenterSize)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Dimensions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize(Z_Param_Center,Z_Param_Dimensions);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_BoxFunctions::StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_BoxFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindBoxBoxIntersection", &UGeometryScriptLibrary_BoxFunctions::execFindBoxBoxIntersection },
			{ "FindClosestPointOnBox", &UGeometryScriptLibrary_BoxFunctions::execFindClosestPointOnBox },
			{ "GetBoxBoxDistance", &UGeometryScriptLibrary_BoxFunctions::execGetBoxBoxDistance },
			{ "GetBoxCenterSize", &UGeometryScriptLibrary_BoxFunctions::execGetBoxCenterSize },
			{ "GetBoxCorner", &UGeometryScriptLibrary_BoxFunctions::execGetBoxCorner },
			{ "GetBoxFaceCenter", &UGeometryScriptLibrary_BoxFunctions::execGetBoxFaceCenter },
			{ "GetBoxPointDistance", &UGeometryScriptLibrary_BoxFunctions::execGetBoxPointDistance },
			{ "GetBoxVolumeArea", &UGeometryScriptLibrary_BoxFunctions::execGetBoxVolumeArea },
			{ "GetExpandedBox", &UGeometryScriptLibrary_BoxFunctions::execGetExpandedBox },
			{ "GetTransformedBox", &UGeometryScriptLibrary_BoxFunctions::execGetTransformedBox },
			{ "MakeBoxFromCenterExtents", &UGeometryScriptLibrary_BoxFunctions::execMakeBoxFromCenterExtents },
			{ "MakeBoxFromCenterSize", &UGeometryScriptLibrary_BoxFunctions::execMakeBoxFromCenterSize },
			{ "TestBoxBoxIntersection", &UGeometryScriptLibrary_BoxFunctions::execTestBoxBoxIntersection },
			{ "TestBoxSphereIntersection", &UGeometryScriptLibrary_BoxFunctions::execTestBoxSphereIntersection },
			{ "TestPointInsideBox", &UGeometryScriptLibrary_BoxFunctions::execTestPointInsideBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventFindBoxBoxIntersection_Parms
		{
			FBox Box1;
			FBox Box2;
			bool bIsIntersecting;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box2;
		static void NewProp_bIsIntersecting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntersecting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_Box1 = { "Box1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventFindBoxBoxIntersection_Parms, Box1), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_Box2 = { "Box2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventFindBoxBoxIntersection_Parms, Box2), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_bIsIntersecting_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_BoxFunctions_eventFindBoxBoxIntersection_Parms*)Obj)->bIsIntersecting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_bIsIntersecting = { "bIsIntersecting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_BoxFunctions_eventFindBoxBoxIntersection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_bIsIntersecting_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Intersection Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventFindBoxBoxIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_Box1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_Box2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_bIsIntersecting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Find the Box formed by the intersection of Box1 and Box2\n\x09 * @param bIsIntersecting if the boxes do not intersect, this will be returned as false, otherwise true\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find the Box formed by the intersection of Box1 and Box2\n@param bIsIntersecting if the boxes do not intersect, this will be returned as false, otherwise true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "FindBoxBoxIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::GeometryScriptLibrary_BoxFunctions_eventFindBoxBoxIntersection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventFindClosestPointOnBox_Parms
		{
			FBox Box;
			FVector Point;
			bool bIsInside;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static void NewProp_bIsInside_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventFindClosestPointOnBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventFindClosestPointOnBox_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_bIsInside_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_BoxFunctions_eventFindClosestPointOnBox_Parms*)Obj)->bIsInside = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_bIsInside = { "bIsInside", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_BoxFunctions_eventFindClosestPointOnBox_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_bIsInside_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Closest Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventFindClosestPointOnBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_bIsInside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Find the point on the faces of the Box that is closest to the input Point.\n\x09 * If the Point is inside the Box, it is returned, ie points Inside do not project to the Box Faces\n\x09 * @param bIsInside if the Point is inside the Box, this will return as true, otherwise false\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find the point on the faces of the Box that is closest to the input Point.\nIf the Point is inside the Box, it is returned, ie points Inside do not project to the Box Faces\n@param bIsInside if the Point is inside the Box, this will return as true, otherwise false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "FindClosestPointOnBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::GeometryScriptLibrary_BoxFunctions_eventFindClosestPointOnBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetBoxBoxDistance_Parms
		{
			FBox Box1;
			FBox Box2;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_Box1 = { "Box1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxBoxDistance_Parms, Box1), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_Box2 = { "Box2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxBoxDistance_Parms, Box2), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Distance" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxBoxDistance_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_Box1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_Box2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Calculate the minimum distance between Box1 and Box2\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Calculate the minimum distance between Box1 and Box2" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetBoxBoxDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::GeometryScriptLibrary_BoxFunctions_eventGetBoxBoxDistance_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetBoxCenterSize_Parms
		{
			FBox Box;
			FVector Center;
			FVector Dimensions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxCenterSize_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxCenterSize_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxCenterSize_Parms, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::NewProp_Dimensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Get the Center point and X/Y/Z Dimensions of a Box (full dimensions, not Extents)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the Center point and X/Y/Z Dimensions of a Box (full dimensions, not Extents)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetBoxCenterSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::GeometryScriptLibrary_BoxFunctions_eventGetBoxCenterSize_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetBoxCorner_Parms
		{
			FBox Box;
			int32 CornerIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CornerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxCorner_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_CornerIndex = { "CornerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxCorner_Parms, CornerIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Corner Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxCorner_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_CornerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Get the position of a corner of the Box. Corners are indexed from 0 to 7, using\n\x09 * an ordering where 0 is the Min corner, 1/2/3 are +Z/+Y/+X from the Min corner, \n\x09 * 7 is the Max corner, and 4/5/6 are -Z/-Y/-X from the Max corner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the position of a corner of the Box. Corners are indexed from 0 to 7, using\nan ordering where 0 is the Min corner, 1/2/3 are +Z/+Y/+X from the Min corner,\n7 is the Max corner, and 4/5/6 are -Z/-Y/-X from the Max corner." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetBoxCorner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::GeometryScriptLibrary_BoxFunctions_eventGetBoxCorner_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetBoxFaceCenter_Parms
		{
			FBox Box;
			int32 FaceIndex;
			FVector FaceNormal;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FaceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxFaceCenter_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxFaceCenter_Parms, FaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_FaceNormal = { "FaceNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxFaceCenter_Parms, FaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Center Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxFaceCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_FaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_FaceNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Get the position of the center of a face of the Box. Faces are indexed from 0 to 5,\n\x09 * using an ordering where 0/1 are the MinZ/MaxZ faces, 2/3 are MinY/MaxY, and 4/5 are MinX/MaxX\n\x09 * @param FaceNormal returned Normal vector of the identified face\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the position of the center of a face of the Box. Faces are indexed from 0 to 5,\nusing an ordering where 0/1 are the MinZ/MaxZ faces, 2/3 are MinY/MaxY, and 4/5 are MinX/MaxX\n@param FaceNormal returned Normal vector of the identified face" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetBoxFaceCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::GeometryScriptLibrary_BoxFunctions_eventGetBoxFaceCenter_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetBoxPointDistance_Parms
		{
			FBox Box;
			FVector Point;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxPointDistance_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxPointDistance_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Distance" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxPointDistance_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Calculate the minimum distance between the Box and the Point\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Calculate the minimum distance between the Box and the Point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetBoxPointDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::GeometryScriptLibrary_BoxFunctions_eventGetBoxPointDistance_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetBoxVolumeArea_Parms
		{
			FBox Box;
			double Volume;
			double SurfaceArea;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Volume;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxVolumeArea_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxVolumeArea_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetBoxVolumeArea_Parms, SurfaceArea), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::NewProp_SurfaceArea,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Get the Volume and Surface Area of a Box\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the Volume and Surface Area of a Box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetBoxVolumeArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::GeometryScriptLibrary_BoxFunctions_eventGetBoxVolumeArea_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetExpandedBox_Parms
		{
			FBox Box;
			FVector ExpandBy;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetExpandedBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_ExpandBy = { "ExpandBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetExpandedBox_Parms, ExpandBy), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Expanded Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetExpandedBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_ExpandBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Get the input Box expanded by adding the ExpandBy parameter to both the Min and Max.\n\x09 * Dimensions will be clamped to the center point if any of ExpandBy are larger than half the box size\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the input Box expanded by adding the ExpandBy parameter to both the Min and Max.\nDimensions will be clamped to the center point if any of ExpandBy are larger than half the box size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetExpandedBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::GeometryScriptLibrary_BoxFunctions_eventGetExpandedBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventGetTransformedBox_Parms
		{
			FBox Box;
			FTransform Transform;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetTransformedBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetTransformedBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Transformed Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventGetTransformedBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Apply the input Transform to the corners of the input Box, and return the new Box containing those points\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply the input Transform to the corners of the input Box, and return the new Box containing those points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "GetTransformedBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::GeometryScriptLibrary_BoxFunctions_eventGetTransformedBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterExtents_Parms
		{
			FVector Center;
			FVector Extents;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterExtents_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterExtents_Parms, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterExtents_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_Extents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Create a Box from a Center point and X/Y/Z Extents (Extents are half-dimensions)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Create a Box from a Center point and X/Y/Z Extents (Extents are half-dimensions)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "MakeBoxFromCenterExtents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterExtents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterSize_Parms
		{
			FVector Center;
			FVector Dimensions;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterSize_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterSize_Parms, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Create a Box from a Center point and X/Y/Z Dimensions (*not* Extents, which are half-dimensions)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ToolTip", "Create a Box from a Center point and X/Y/Z Dimensions (*not* Extents, which are half-dimensions)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "MakeBoxFromCenterSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::GeometryScriptLibrary_BoxFunctions_eventMakeBoxFromCenterSize_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventTestBoxBoxIntersection_Parms
		{
			FBox Box1;
			FBox Box2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_Box1 = { "Box1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventTestBoxBoxIntersection_Parms, Box1), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_Box2 = { "Box2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventTestBoxBoxIntersection_Parms, Box2), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Intersects" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_BoxFunctions_eventTestBoxBoxIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_BoxFunctions_eventTestBoxBoxIntersection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_Box1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_Box2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Test if Box1 and Box2 intersect\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Test if Box1 and Box2 intersect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "TestBoxBoxIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::GeometryScriptLibrary_BoxFunctions_eventTestBoxBoxIntersection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventTestBoxSphereIntersection_Parms
		{
			FBox Box;
			FVector SphereCenter;
			double SphereRadius;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCenter;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventTestBoxSphereIntersection_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_SphereCenter = { "SphereCenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventTestBoxSphereIntersection_Parms, SphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventTestBoxSphereIntersection_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Intersects" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_BoxFunctions_eventTestBoxSphereIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_BoxFunctions_eventTestBoxSphereIntersection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_SphereCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Check if the Box intersects a Sphere defined by the SphereCenter and SphereRadius\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check if the Box intersects a Sphere defined by the SphereCenter and SphereRadius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "TestBoxSphereIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::GeometryScriptLibrary_BoxFunctions_eventTestBoxSphereIntersection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics
	{
		struct GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms
		{
			FBox Box;
			FVector Point;
			bool bConsiderOnBoxAsInside;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static void NewProp_bConsiderOnBoxAsInside_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderOnBoxAsInside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_bConsiderOnBoxAsInside_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms*)Obj)->bConsiderOnBoxAsInside = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_bConsiderOnBoxAsInside = { "bConsiderOnBoxAsInside", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_bConsiderOnBoxAsInside_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Inside" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_bConsiderOnBoxAsInside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Shapes|Box" },
		{ "Comment", "/**\n\x09 * Test if a Point is inside the Box, returning true if so, otherwise false\n\x09 * @param bConsiderOnBoxAsInside if true, a point lying on the box face is considered \"inside\", otherwise it is considered \"outside\"\n\x09 */" },
		{ "CPP_Default_bConsiderOnBoxAsInside", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Test if a Point is inside the Box, returning true if so, otherwise false\n@param bConsiderOnBoxAsInside if true, a point lying on the box face is considered \"inside\", otherwise it is considered \"outside\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, nullptr, "TestPointInsideBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::GeometryScriptLibrary_BoxFunctions_eventTestPointInsideBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_BoxFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_BoxFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection, "FindBoxBoxIntersection" }, // 2739572889
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox, "FindClosestPointOnBox" }, // 184231476
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance, "GetBoxBoxDistance" }, // 1363207112
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize, "GetBoxCenterSize" }, // 2739013667
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxCorner, "GetBoxCorner" }, // 2663156850
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter, "GetBoxFaceCenter" }, // 1428336361
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance, "GetBoxPointDistance" }, // 3705339328
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea, "GetBoxVolumeArea" }, // 246738660
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetExpandedBox, "GetExpandedBox" }, // 3590378623
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_GetTransformedBox, "GetTransformedBox" }, // 3165615401
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents, "MakeBoxFromCenterExtents" }, // 363485326
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize, "MakeBoxFromCenterSize" }, // 2884409515
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection, "TestBoxBoxIntersection" }, // 1662907250
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection, "TestBoxSphereIntersection" }, // 2800317844
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox, "TestPointInsideBox" }, // 795861414
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/ShapeFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/ShapeFunctions.h" },
		{ "ScriptName", "GeometryScript_Box" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_BoxFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_BoxFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_BoxFunctions>()
	{
		return UGeometryScriptLibrary_BoxFunctions::StaticClass();
	}
	UGeometryScriptLibrary_BoxFunctions::UGeometryScriptLibrary_BoxFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_BoxFunctions);
	UGeometryScriptLibrary_BoxFunctions::~UGeometryScriptLibrary_BoxFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions, UGeometryScriptLibrary_TransformFunctions::StaticClass, TEXT("UGeometryScriptLibrary_TransformFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_TransformFunctions), 3256263211U) },
		{ Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions, UGeometryScriptLibrary_RayFunctions::StaticClass, TEXT("UGeometryScriptLibrary_RayFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_RayFunctions), 1490140819U) },
		{ Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions, UGeometryScriptLibrary_BoxFunctions::StaticClass, TEXT("UGeometryScriptLibrary_BoxFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_BoxFunctions), 141667373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_1764827747(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
