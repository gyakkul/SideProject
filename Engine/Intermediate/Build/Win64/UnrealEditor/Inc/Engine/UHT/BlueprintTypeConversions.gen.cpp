// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Internal/Kismet/BlueprintTypeConversions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintTypeConversions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintTypeConversions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintTypeConversions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlueprintTypeConversions::StaticRegisterNativesUBlueprintTypeConversions()
	{
		UClass* Class = UBlueprintTypeConversions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertArrayType", &UBlueprintTypeConversions::execConvertArrayType },
			{ "ConvertFBox2dToFBox2f", &UBlueprintTypeConversions::execConvertFBox2dToFBox2f },
			{ "ConvertFBox2fToFBox2d", &UBlueprintTypeConversions::execConvertFBox2fToFBox2d },
			{ "ConvertFMatrix44dToFMatrix44f", &UBlueprintTypeConversions::execConvertFMatrix44dToFMatrix44f },
			{ "ConvertFMatrix44fToFMatrix44d", &UBlueprintTypeConversions::execConvertFMatrix44fToFMatrix44d },
			{ "ConvertFPlane4dToFPlane4f", &UBlueprintTypeConversions::execConvertFPlane4dToFPlane4f },
			{ "ConvertFPlane4fToFPlane4d", &UBlueprintTypeConversions::execConvertFPlane4fToFPlane4d },
			{ "ConvertFQuat4dToFQuat4f", &UBlueprintTypeConversions::execConvertFQuat4dToFQuat4f },
			{ "ConvertFQuat4fToFQuat4d", &UBlueprintTypeConversions::execConvertFQuat4fToFQuat4d },
			{ "ConvertFRotator3dToFRotator3f", &UBlueprintTypeConversions::execConvertFRotator3dToFRotator3f },
			{ "ConvertFRotator3fToFRotator3d", &UBlueprintTypeConversions::execConvertFRotator3fToFRotator3d },
			{ "ConvertFTransform3dToFTransform3f", &UBlueprintTypeConversions::execConvertFTransform3dToFTransform3f },
			{ "ConvertFTransform3fToFTransform3d", &UBlueprintTypeConversions::execConvertFTransform3fToFTransform3d },
			{ "ConvertFVector2dToFVector2f", &UBlueprintTypeConversions::execConvertFVector2dToFVector2f },
			{ "ConvertFVector2fToFVector2d", &UBlueprintTypeConversions::execConvertFVector2fToFVector2d },
			{ "ConvertFVector3dToFVector3f", &UBlueprintTypeConversions::execConvertFVector3dToFVector3f },
			{ "ConvertFVector3fToFVector3d", &UBlueprintTypeConversions::execConvertFVector3fToFVector3d },
			{ "ConvertFVector4dToFVector4f", &UBlueprintTypeConversions::execConvertFVector4dToFVector4f },
			{ "ConvertFVector4fToFVector4d", &UBlueprintTypeConversions::execConvertFVector4fToFVector4d },
			{ "ConvertMapType", &UBlueprintTypeConversions::execConvertMapType },
			{ "ConvertSetType", &UBlueprintTypeConversions::execConvertSetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics
	{
		struct BlueprintTypeConversions_eventConvertArrayType_Parms
		{
			TArray<int32> InArray;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertArrayType_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertArrayType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_InArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Container conversions\n" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
		{ "ToolTip", "Container conversions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertArrayType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::BlueprintTypeConversions_eventConvertArrayType_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFBox2dToFBox2f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::BlueprintTypeConversions_eventConvertFBox2dToFBox2f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFBox2fToFBox2d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::BlueprintTypeConversions_eventConvertFBox2fToFBox2d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFMatrix44dToFMatrix44f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::BlueprintTypeConversions_eventConvertFMatrix44dToFMatrix44f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFMatrix44fToFMatrix44d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::BlueprintTypeConversions_eventConvertFMatrix44fToFMatrix44d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFPlane4dToFPlane4f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::BlueprintTypeConversions_eventConvertFPlane4dToFPlane4f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFPlane4fToFPlane4d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::BlueprintTypeConversions_eventConvertFPlane4fToFPlane4d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFQuat4dToFQuat4f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::BlueprintTypeConversions_eventConvertFQuat4dToFQuat4f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFQuat4fToFQuat4d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::BlueprintTypeConversions_eventConvertFQuat4fToFQuat4d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFRotator3dToFRotator3f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::BlueprintTypeConversions_eventConvertFRotator3dToFRotator3f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFRotator3fToFRotator3d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::BlueprintTypeConversions_eventConvertFRotator3fToFRotator3d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFTransform3dToFTransform3f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::BlueprintTypeConversions_eventConvertFTransform3dToFTransform3f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFTransform3fToFTransform3d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::BlueprintTypeConversions_eventConvertFTransform3fToFTransform3d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector2dToFVector2f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::BlueprintTypeConversions_eventConvertFVector2dToFVector2f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector2fToFVector2d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::BlueprintTypeConversions_eventConvertFVector2fToFVector2d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector3dToFVector3f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::BlueprintTypeConversions_eventConvertFVector3dToFVector3f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector3fToFVector3d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::BlueprintTypeConversions_eventConvertFVector3fToFVector3d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics
	{
		struct BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector4dToFVector4f", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::BlueprintTypeConversions_eventConvertFVector4dToFVector4f_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics
	{
		struct BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms
		{
			int32 InFromData;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFromData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_InFromData = { "InFromData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms, InFromData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_InFromData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertFVector4fToFVector4d", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::BlueprintTypeConversions_eventConvertFVector4fToFVector4d_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics
	{
		struct BlueprintTypeConversions_eventConvertMapType_Parms
		{
			TMap<int32,int32> InMap;
			TMap<int32,int32> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InMap_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InMap;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_ValueProp = { "InMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_Key_KeyProp = { "InMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap = { "InMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertMapType_Parms, InMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertMapType_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_InMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertMapType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::BlueprintTypeConversions_eventConvertMapType_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics
	{
		struct BlueprintTypeConversions_eventConvertSetType_Parms
		{
			TSet<int32> InSet;
			TSet<int32> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InSet;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet_ElementProp = { "InSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet = { "InSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertSetType_Parms, InSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintTypeConversions_eventConvertSetType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_InSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintTypeConversions, nullptr, "ConvertSetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::BlueprintTypeConversions_eventConvertSetType_Parms), Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintTypeConversions);
	UClass* Z_Construct_UClass_UBlueprintTypeConversions_NoRegister()
	{
		return UBlueprintTypeConversions::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintTypeConversions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintTypeConversions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintTypeConversions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType, "ConvertArrayType" }, // 997825737
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f, "ConvertFBox2dToFBox2f" }, // 2418978291
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d, "ConvertFBox2fToFBox2d" }, // 4075755085
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f, "ConvertFMatrix44dToFMatrix44f" }, // 1178144964
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d, "ConvertFMatrix44fToFMatrix44d" }, // 1373799267
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f, "ConvertFPlane4dToFPlane4f" }, // 584991902
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d, "ConvertFPlane4fToFPlane4d" }, // 867542906
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f, "ConvertFQuat4dToFQuat4f" }, // 227874616
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d, "ConvertFQuat4fToFQuat4d" }, // 602274861
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f, "ConvertFRotator3dToFRotator3f" }, // 1933015431
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d, "ConvertFRotator3fToFRotator3d" }, // 2520053202
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f, "ConvertFTransform3dToFTransform3f" }, // 3631302601
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d, "ConvertFTransform3fToFTransform3d" }, // 2850975543
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f, "ConvertFVector2dToFVector2f" }, // 2499923858
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d, "ConvertFVector2fToFVector2d" }, // 4199243392
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f, "ConvertFVector3dToFVector3f" }, // 1468531006
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d, "ConvertFVector3fToFVector3d" }, // 1047155819
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f, "ConvertFVector4dToFVector4f" }, // 1447551415
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d, "ConvertFVector4fToFVector4d" }, // 2258629553
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType, "ConvertMapType" }, // 1629994204
		{ &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType, "ConvertSetType" }, // 1302905481
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintTypeConversions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/BlueprintTypeConversions.h" },
		{ "ModuleRelativePath", "Internal/Kismet/BlueprintTypeConversions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintTypeConversions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintTypeConversions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintTypeConversions_Statics::ClassParams = {
		&UBlueprintTypeConversions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintTypeConversions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintTypeConversions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintTypeConversions()
	{
		if (!Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton, Z_Construct_UClass_UBlueprintTypeConversions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlueprintTypeConversions>()
	{
		return UBlueprintTypeConversions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintTypeConversions);
	UBlueprintTypeConversions::~UBlueprintTypeConversions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintTypeConversions, UBlueprintTypeConversions::StaticClass, TEXT("UBlueprintTypeConversions"), &Z_Registration_Info_UClass_UBlueprintTypeConversions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintTypeConversions), 758069530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_2133034186(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
