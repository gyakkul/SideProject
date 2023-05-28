// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/VectorMathFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorMathFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptScalarList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execConstantScalarMultiplyInPlace)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Constant);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace(Z_Param_Constant,Z_Param_Out_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execConstantScalarMultiply)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Constant);
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptScalarList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply(Z_Param_Constant,Z_Param_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarMultiplyInPlace)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarListA);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarListB);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace(Z_Param_ScalarListA,Z_Param_Out_ScalarListB,Z_Param_ConstantMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarMultiply)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarListA);
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarListB);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptScalarList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply(Z_Param_ScalarListA,Z_Param_ScalarListB,Z_Param_ConstantMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarBlendInPlace)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarListA);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarListB);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantA);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace(Z_Param_ScalarListA,Z_Param_Out_ScalarListB,Z_Param_ConstantA,Z_Param_ConstantB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarBlend)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarListA);
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarListB);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantA);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptScalarList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend(Z_Param_ScalarListA,Z_Param_ScalarListB,Z_Param_ConstantA,Z_Param_ConstantB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarInvertInPlace)
	{
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Numerator);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SetOnFailure);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace(Z_Param_Out_ScalarList,Z_Param_Numerator,Z_Param_SetOnFailure,Z_Param_Epsilon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarInvert)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Numerator);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SetOnFailure);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Epsilon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptScalarList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert(Z_Param_ScalarList,Z_Param_Numerator,Z_Param_SetOnFailure,Z_Param_Epsilon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execVectorToScalar)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantX);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantY);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptScalarList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar(Z_Param_VectorList,Z_Param_ConstantX,Z_Param_ConstantY,Z_Param_ConstantZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execConstantVectorMultiplyInPlace)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Constant);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace(Z_Param_Constant,Z_Param_Out_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execConstantVectorMultiply)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Constant);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptVectorList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply(Z_Param_Constant,Z_Param_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarVectorMultiplyInPlace)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ScalarMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace(Z_Param_ScalarList,Z_Param_Out_VectorList,Z_Param_ScalarMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execScalarVectorMultiply)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ScalarMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptVectorList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply(Z_Param_ScalarList,Z_Param_VectorList,Z_Param_ScalarMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execVectorBlendInPlace)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorListA);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorListB);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantA);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace(Z_Param_VectorListA,Z_Param_Out_VectorListB,Z_Param_ConstantA,Z_Param_ConstantB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execVectorBlend)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorListA);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorListB);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantA);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptVectorList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::VectorBlend(Z_Param_VectorListA,Z_Param_VectorListB,Z_Param_ConstantA,Z_Param_ConstantB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execVectorNormalizeInPlace)
	{
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_STRUCT(FVector,Z_Param_SetOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace(Z_Param_Out_VectorList,Z_Param_SetOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execVectorCross)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorListA);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorListB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptVectorList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::VectorCross(Z_Param_VectorListA,Z_Param_VectorListB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execVectorDot)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorListA);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorListB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptScalarList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::VectorDot(Z_Param_VectorListA,Z_Param_VectorListB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_VectorMathFunctions::execVectorLength)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptScalarList*)Z_Param__Result=UGeometryScriptLibrary_VectorMathFunctions::VectorLength(Z_Param_VectorList);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_VectorMathFunctions::StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_VectorMathFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstantScalarMultiply", &UGeometryScriptLibrary_VectorMathFunctions::execConstantScalarMultiply },
			{ "ConstantScalarMultiplyInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execConstantScalarMultiplyInPlace },
			{ "ConstantVectorMultiply", &UGeometryScriptLibrary_VectorMathFunctions::execConstantVectorMultiply },
			{ "ConstantVectorMultiplyInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execConstantVectorMultiplyInPlace },
			{ "ScalarBlend", &UGeometryScriptLibrary_VectorMathFunctions::execScalarBlend },
			{ "ScalarBlendInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execScalarBlendInPlace },
			{ "ScalarInvert", &UGeometryScriptLibrary_VectorMathFunctions::execScalarInvert },
			{ "ScalarInvertInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execScalarInvertInPlace },
			{ "ScalarMultiply", &UGeometryScriptLibrary_VectorMathFunctions::execScalarMultiply },
			{ "ScalarMultiplyInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execScalarMultiplyInPlace },
			{ "ScalarVectorMultiply", &UGeometryScriptLibrary_VectorMathFunctions::execScalarVectorMultiply },
			{ "ScalarVectorMultiplyInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execScalarVectorMultiplyInPlace },
			{ "VectorBlend", &UGeometryScriptLibrary_VectorMathFunctions::execVectorBlend },
			{ "VectorBlendInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execVectorBlendInPlace },
			{ "VectorCross", &UGeometryScriptLibrary_VectorMathFunctions::execVectorCross },
			{ "VectorDot", &UGeometryScriptLibrary_VectorMathFunctions::execVectorDot },
			{ "VectorLength", &UGeometryScriptLibrary_VectorMathFunctions::execVectorLength },
			{ "VectorNormalizeInPlace", &UGeometryScriptLibrary_VectorMathFunctions::execVectorNormalizeInPlace },
			{ "VectorToScalar", &UGeometryScriptLibrary_VectorMathFunctions::execVectorToScalar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiply_Parms
		{
			double Constant;
			FGeometryScriptScalarList ScalarList;
			FGeometryScriptScalarList ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Constant;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiply_Parms, Constant), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiply_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiply_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::NewProp_Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ConstantScalarMultiply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiply_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiplyInPlace_Parms
		{
			double Constant;
			FGeometryScriptScalarList ScalarList;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Constant;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiplyInPlace_Parms, Constant), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiplyInPlace_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::NewProp_Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::NewProp_ScalarList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ConstantScalarMultiplyInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventConstantScalarMultiplyInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiply_Parms
		{
			double Constant;
			FGeometryScriptVectorList VectorList;
			FGeometryScriptVectorList ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Constant;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiply_Parms, Constant), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiply_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiply_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::NewProp_Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (Constant * Vector) for each element in VectorList, and return in a new list\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ToolTip", "Compute (Constant * Vector) for each element in VectorList, and return in a new list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ConstantVectorMultiply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiply_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiplyInPlace_Parms
		{
			double Constant;
			FGeometryScriptVectorList VectorList;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Constant;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiplyInPlace_Parms, Constant), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiplyInPlace_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::NewProp_Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::NewProp_VectorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (Constant * Vector) for each element in VectorList, and store in VectorList\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ToolTip", "Compute (Constant * Vector) for each element in VectorList, and store in VectorList" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ConstantVectorMultiplyInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventConstantVectorMultiplyInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarBlend_Parms
		{
			FGeometryScriptScalarList ScalarListA;
			FGeometryScriptScalarList ScalarListB;
			double ConstantA;
			double ConstantB;
			FGeometryScriptScalarList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantA;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ScalarListA = { "ScalarListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlend_Parms, ScalarListA), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ScalarListB = { "ScalarListB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlend_Parms, ScalarListB), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ConstantA = { "ConstantA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlend_Parms, ConstantA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ConstantB = { "ConstantB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlend_Parms, ConstantB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlend_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ScalarListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ScalarListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ConstantA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ConstantB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (ConstantA * A) + (ConstantB * B) for each pair of values in ScalarListA and ScalarListB and return in new ScalarList.\n\x09 * By default (constants = 1) this just adds the two values. Set ConstantB = -1 to subtract B from A. \n\x09 * Can also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)\n\x09 */" },
		{ "CPP_Default_ConstantA", "1.000000" },
		{ "CPP_Default_ConstantB", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (ConstantA * A) + (ConstantB * B) for each pair of values in ScalarListA and ScalarListB and return in new ScalarList.\nBy default (constants = 1) this just adds the two values. Set ConstantB = -1 to subtract B from A.\nCan also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarBlend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarBlend_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarBlendInPlace_Parms
		{
			FGeometryScriptScalarList ScalarListA;
			FGeometryScriptScalarList ScalarListB;
			double ConstantA;
			double ConstantB;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantA;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ScalarListA = { "ScalarListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlendInPlace_Parms, ScalarListA), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ScalarListB = { "ScalarListB", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlendInPlace_Parms, ScalarListB), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ConstantA = { "ConstantA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlendInPlace_Parms, ConstantA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ConstantB = { "ConstantB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarBlendInPlace_Parms, ConstantB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ScalarListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ScalarListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ConstantA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::NewProp_ConstantB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (ConstantA * A) + (ConstantB * B) for each pair of values in ScalarListA and ScalarListB and return in ScalarListB.\n\x09 * By default (constants = 1) this just adds the two values. Set ConstantB = -1 to subtract B from A. \n\x09 * Can also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)\n\x09 */" },
		{ "CPP_Default_ConstantA", "1.000000" },
		{ "CPP_Default_ConstantB", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (ConstantA * A) + (ConstantB * B) for each pair of values in ScalarListA and ScalarListB and return in ScalarListB.\nBy default (constants = 1) this just adds the two values. Set ConstantB = -1 to subtract B from A.\nCan also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarBlendInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarBlendInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarInvert_Parms
		{
			FGeometryScriptScalarList ScalarList;
			double Numerator;
			double SetOnFailure;
			double Epsilon;
			FGeometryScriptScalarList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Numerator;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SetOnFailure;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvert_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_Numerator = { "Numerator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvert_Parms, Numerator), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_SetOnFailure = { "SetOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvert_Parms, SetOnFailure), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvert_Parms, Epsilon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvert_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_Numerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_SetOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_Epsilon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (Numerator / Scalar) for each element of ScalarList and return in a new ScalarList. \n\x09 * If Abs(Scalar) < Epsilon, set to SetOnFailure value.\n\x09 */" },
		{ "CPP_Default_Epsilon", "0.000000" },
		{ "CPP_Default_Numerator", "1.000000" },
		{ "CPP_Default_SetOnFailure", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (Numerator / Scalar) for each element of ScalarList and return in a new ScalarList.\nIf Abs(Scalar) < Epsilon, set to SetOnFailure value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarInvert", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarInvert_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarInvertInPlace_Parms
		{
			FGeometryScriptScalarList ScalarList;
			double Numerator;
			double SetOnFailure;
			double Epsilon;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Numerator;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SetOnFailure;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Epsilon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvertInPlace_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_Numerator = { "Numerator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvertInPlace_Parms, Numerator), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_SetOnFailure = { "SetOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvertInPlace_Parms, SetOnFailure), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarInvertInPlace_Parms, Epsilon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_Numerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_SetOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::NewProp_Epsilon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09* Compute (Numerator / Scalar) for each element of ScalarList and store in input ScalarList\n\x09* If Abs(Scalar) < Epsilon, set to SetOnFailure value.\n\x09*/" },
		{ "CPP_Default_Epsilon", "0.000000" },
		{ "CPP_Default_Numerator", "1.000000" },
		{ "CPP_Default_SetOnFailure", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (Numerator / Scalar) for each element of ScalarList and store in input ScalarList\nIf Abs(Scalar) < Epsilon, set to SetOnFailure value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarInvertInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarInvertInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiply_Parms
		{
			FGeometryScriptScalarList ScalarListA;
			FGeometryScriptScalarList ScalarListB;
			double ConstantMultiplier;
			FGeometryScriptScalarList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ScalarListA = { "ScalarListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiply_Parms, ScalarListA), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ScalarListB = { "ScalarListB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiply_Parms, ScalarListB), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ConstantMultiplier = { "ConstantMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiply_Parms, ConstantMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiply_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ScalarListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ScalarListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ConstantMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "CPP_Default_ConstantMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarMultiply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiply_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiplyInPlace_Parms
		{
			FGeometryScriptScalarList ScalarListA;
			FGeometryScriptScalarList ScalarListB;
			double ConstantMultiplier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarListB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::NewProp_ScalarListA = { "ScalarListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiplyInPlace_Parms, ScalarListA), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::NewProp_ScalarListB = { "ScalarListB", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiplyInPlace_Parms, ScalarListB), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::NewProp_ConstantMultiplier = { "ConstantMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiplyInPlace_Parms, ConstantMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::NewProp_ScalarListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::NewProp_ScalarListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::NewProp_ConstantMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "CPP_Default_ConstantMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarMultiplyInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarMultiplyInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiply_Parms
		{
			FGeometryScriptScalarList ScalarList;
			FGeometryScriptVectorList VectorList;
			double ScalarMultiplier;
			FGeometryScriptVectorList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ScalarMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiply_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiply_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_ScalarMultiplier = { "ScalarMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiply_Parms, ScalarMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiply_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_ScalarMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (ScalarMultiplier * Scalar * Vector) for each scalar/vector pair in the two input lists, and return in a new VectorList.\n\x09 */" },
		{ "CPP_Default_ScalarMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (ScalarMultiplier * Scalar * Vector) for each scalar/vector pair in the two input lists, and return in a new VectorList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarVectorMultiply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiply_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiplyInPlace_Parms
		{
			FGeometryScriptScalarList ScalarList;
			FGeometryScriptVectorList VectorList;
			double ScalarMultiplier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ScalarMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiplyInPlace_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiplyInPlace_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::NewProp_ScalarMultiplier = { "ScalarMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiplyInPlace_Parms, ScalarMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::NewProp_ScalarMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (ScalarMultiplier * Scalar * Vector) for each scalar/vector pair in the two input lists, and store in the input VectorList\n\x09 */" },
		{ "CPP_Default_ScalarMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (ScalarMultiplier * Scalar * Vector) for each scalar/vector pair in the two input lists, and store in the input VectorList" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "ScalarVectorMultiplyInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventScalarVectorMultiplyInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventVectorBlend_Parms
		{
			FGeometryScriptVectorList VectorListA;
			FGeometryScriptVectorList VectorListB;
			double ConstantA;
			double ConstantB;
			FGeometryScriptVectorList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantA;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_VectorListA = { "VectorListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlend_Parms, VectorListA), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_VectorListB = { "VectorListB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlend_Parms, VectorListB), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_ConstantA = { "ConstantA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlend_Parms, ConstantA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_ConstantB = { "ConstantB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlend_Parms, ConstantB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlend_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_VectorListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_VectorListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_ConstantA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_ConstantB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute (ConstantA * A) + (ConstantB * B) for each pair of vectors in VectorListA and VectorListB and return in new VectorList.\n\x09 * By default (constants = 1) this just adds the two vectors. Set ConstantB = -1 to subtract B from A. \n\x09 * Can also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)\n\x09 */" },
		{ "CPP_Default_ConstantA", "1.000000" },
		{ "CPP_Default_ConstantB", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (ConstantA * A) + (ConstantB * B) for each pair of vectors in VectorListA and VectorListB and return in new VectorList.\nBy default (constants = 1) this just adds the two vectors. Set ConstantB = -1 to subtract B from A.\nCan also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "VectorBlend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::GeometryScriptLibrary_VectorMathFunctions_eventVectorBlend_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventVectorBlendInPlace_Parms
		{
			FGeometryScriptVectorList VectorListA;
			FGeometryScriptVectorList VectorListB;
			double ConstantA;
			double ConstantB;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantA;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_VectorListA = { "VectorListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlendInPlace_Parms, VectorListA), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_VectorListB = { "VectorListB", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlendInPlace_Parms, VectorListB), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_ConstantA = { "ConstantA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlendInPlace_Parms, ConstantA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_ConstantB = { "ConstantB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorBlendInPlace_Parms, ConstantB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_VectorListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_VectorListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_ConstantA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::NewProp_ConstantB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09* Compute (ConstantA * A) + (ConstantB * B) for each pair of vectors in VectorListA and VectorListB, and store in VectorListB\n\x09* By default (constants = 1) this just adds the two vectors. Set ConstantB = -1 to subtract B from A. \n\x09* Can also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)\n\x09*/" },
		{ "CPP_Default_ConstantA", "1.000000" },
		{ "CPP_Default_ConstantB", "1.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute (ConstantA * A) + (ConstantB * B) for each pair of vectors in VectorListA and VectorListB, and store in VectorListB\nBy default (constants = 1) this just adds the two vectors. Set ConstantB = -1 to subtract B from A.\nCan also be used to Linear Interpolate, by setting ConstantB = (1-ConstantA)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "VectorBlendInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventVectorBlendInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventVectorCross_Parms
		{
			FGeometryScriptVectorList VectorListA;
			FGeometryScriptVectorList VectorListB;
			FGeometryScriptVectorList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::NewProp_VectorListA = { "VectorListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorCross_Parms, VectorListA), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::NewProp_VectorListB = { "VectorListB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorCross_Parms, VectorListB), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorCross_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::NewProp_VectorListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::NewProp_VectorListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09* Compute the cross-product between each pair of vectors in VectorListA and VectorListB and return in new VectorList\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the cross-product between each pair of vectors in VectorListA and VectorListB and return in new VectorList" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "VectorCross", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::GeometryScriptLibrary_VectorMathFunctions_eventVectorCross_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventVectorDot_Parms
		{
			FGeometryScriptVectorList VectorListA;
			FGeometryScriptVectorList VectorListB;
			FGeometryScriptScalarList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorListB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::NewProp_VectorListA = { "VectorListA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorDot_Parms, VectorListA), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::NewProp_VectorListB = { "VectorListB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorDot_Parms, VectorListB), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorDot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::NewProp_VectorListA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::NewProp_VectorListB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute the dot-product between each pair of vectors in VectorListA and VectorListB and return in new ScalarList\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the dot-product between each pair of vectors in VectorListA and VectorListB and return in new ScalarList" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "VectorDot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::GeometryScriptLibrary_VectorMathFunctions_eventVectorDot_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventVectorLength_Parms
		{
			FGeometryScriptVectorList VectorList;
			FGeometryScriptScalarList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorLength_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Compute the length/magnitude of each vector in VectorListA and return in new ScalarList.\n\x09 * Note that SquaredLength can be computed using VectorDot(A,A).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the length/magnitude of each vector in VectorListA and return in new ScalarList.\nNote that SquaredLength can be computed using VectorDot(A,A)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "VectorLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::GeometryScriptLibrary_VectorMathFunctions_eventVectorLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventVectorNormalizeInPlace_Parms
		{
			FGeometryScriptVectorList VectorList;
			FVector SetOnFailure;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetOnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorNormalizeInPlace_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::NewProp_SetOnFailure = { "SetOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorNormalizeInPlace_Parms, SetOnFailure), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::NewProp_SetOnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Normalize each vector in VectorList, and store in VectorList. \n\x09 * If a vector is degenerate, set the normal to the SetOnFailure vector.\n\x09 */" },
		{ "CPP_Default_SetOnFailure", "" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Normalize each vector in VectorList, and store in VectorList.\nIf a vector is degenerate, set the normal to the SetOnFailure vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "VectorNormalizeInPlace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::GeometryScriptLibrary_VectorMathFunctions_eventVectorNormalizeInPlace_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics
	{
		struct GeometryScriptLibrary_VectorMathFunctions_eventVectorToScalar_Parms
		{
			FGeometryScriptVectorList VectorList;
			double ConstantX;
			double ConstantY;
			double ConstantZ;
			FGeometryScriptScalarList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantX;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantY;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorToScalar_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ConstantX = { "ConstantX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorToScalar_Parms, ConstantX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ConstantY = { "ConstantY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorToScalar_Parms, ConstantY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ConstantZ = { "ConstantZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorToScalar_Parms, ConstantZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_VectorMathFunctions_eventVectorToScalar_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ConstantX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ConstantY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ConstantZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Math|VectorMath" },
		{ "Comment", "/**\n\x09 * Convert each Vector in VectorList to a Scalar by computing (ConstantX*Vector.X + ConstantY*Vector.Y + ConstantZ*Vector.Z), and return in a new ScalarList.\n\x09 * This can be used to extract the X/Y/Z values from a Vector, or other component-wise math\n\x09 */" },
		{ "CPP_Default_ConstantX", "1.000000" },
		{ "CPP_Default_ConstantY", "0.000000" },
		{ "CPP_Default_ConstantZ", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Convert each Vector in VectorList to a Scalar by computing (ConstantX*Vector.X + ConstantY*Vector.Y + ConstantZ*Vector.Z), and return in a new ScalarList.\nThis can be used to extract the X/Y/Z values from a Vector, or other component-wise math" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, nullptr, "VectorToScalar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::GeometryScriptLibrary_VectorMathFunctions_eventVectorToScalar_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_VectorMathFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_VectorMathFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply, "ConstantScalarMultiply" }, // 3915900704
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace, "ConstantScalarMultiplyInPlace" }, // 1299925235
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply, "ConstantVectorMultiply" }, // 1333195804
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace, "ConstantVectorMultiplyInPlace" }, // 965866360
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend, "ScalarBlend" }, // 2324298829
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace, "ScalarBlendInPlace" }, // 4140542128
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert, "ScalarInvert" }, // 326241701
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace, "ScalarInvertInPlace" }, // 1710536809
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply, "ScalarMultiply" }, // 2406048629
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace, "ScalarMultiplyInPlace" }, // 2708824038
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply, "ScalarVectorMultiply" }, // 773697636
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace, "ScalarVectorMultiplyInPlace" }, // 1436030534
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlend, "VectorBlend" }, // 756110464
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace, "VectorBlendInPlace" }, // 981345590
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorCross, "VectorCross" }, // 2181692474
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorDot, "VectorDot" }, // 1627691222
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorLength, "VectorLength" }, // 2587027073
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace, "VectorNormalizeInPlace" }, // 121903126
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar, "VectorToScalar" }, // 2572155316
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/VectorMathFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/VectorMathFunctions.h" },
		{ "ScriptName", "GeometryScript_VectorMath" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_VectorMathFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_VectorMathFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_VectorMathFunctions>()
	{
		return UGeometryScriptLibrary_VectorMathFunctions::StaticClass();
	}
	UGeometryScriptLibrary_VectorMathFunctions::UGeometryScriptLibrary_VectorMathFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_VectorMathFunctions);
	UGeometryScriptLibrary_VectorMathFunctions::~UGeometryScriptLibrary_VectorMathFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions, UGeometryScriptLibrary_VectorMathFunctions::StaticClass, TEXT("UGeometryScriptLibrary_VectorMathFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_VectorMathFunctions), 3030859983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_2412509174(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
