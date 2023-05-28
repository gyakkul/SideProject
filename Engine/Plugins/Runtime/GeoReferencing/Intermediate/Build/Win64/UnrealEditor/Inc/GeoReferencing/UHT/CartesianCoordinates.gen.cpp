// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CartesianCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCartesianCoordinates() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOREFERENCING_API UClass* Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary();
	GEOREFERENCING_API UClass* Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_NoRegister();
	GEOREFERENCING_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianCoordinates();
	UPackage* Z_Construct_UPackage__Script_GeoReferencing();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CartesianCoordinates;
class UScriptStruct* FCartesianCoordinates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CartesianCoordinates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CartesianCoordinates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCartesianCoordinates, (UObject*)Z_Construct_UPackage__Script_GeoReferencing(), TEXT("CartesianCoordinates"));
	}
	return Z_Registration_Info_UScriptStruct_CartesianCoordinates.OuterSingleton;
}
template<> GEOREFERENCING_API UScriptStruct* StaticStruct<FCartesianCoordinates>()
{
	return FCartesianCoordinates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCartesianCoordinates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianCoordinates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "5.0" },
		{ "ModuleRelativePath", "Public/CartesianCoordinates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCartesianCoordinates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCartesianCoordinates>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCartesianCoordinates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
		nullptr,
		&NewStructOps,
		"CartesianCoordinates",
		sizeof(FCartesianCoordinates),
		alignof(FCartesianCoordinates),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianCoordinates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianCoordinates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCartesianCoordinates()
	{
		if (!Z_Registration_Info_UScriptStruct_CartesianCoordinates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CartesianCoordinates.InnerSingleton, Z_Construct_UScriptStruct_FCartesianCoordinates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CartesianCoordinates.InnerSingleton;
	}
	DEFINE_FUNCTION(UCartesianCoordinatesFunctionLibrary::execMakeCartesianCoordinatesApproximation)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InY);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCartesianCoordinates*)Z_Param__Result=UCartesianCoordinatesFunctionLibrary::MakeCartesianCoordinatesApproximation(Z_Param_Out_InX,Z_Param_Out_InY,Z_Param_Out_InZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartesianCoordinatesFunctionLibrary::execToFloatApproximation)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_CartesianCoordinates);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutY);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCartesianCoordinatesFunctionLibrary::ToFloatApproximation(Z_Param_Out_CartesianCoordinates,Z_Param_Out_OutX,Z_Param_Out_OutY,Z_Param_Out_OutZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartesianCoordinatesFunctionLibrary::execToSeparateTexts)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_CartesianCoordinates);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutX);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutY);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCartesianCoordinatesFunctionLibrary::ToSeparateTexts(Z_Param_Out_CartesianCoordinates,Z_Param_Out_OutX,Z_Param_Out_OutY,Z_Param_Out_OutZ,Z_Param_IntegralDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartesianCoordinatesFunctionLibrary::execToCompactText)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_CartesianCoordinates);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UCartesianCoordinatesFunctionLibrary::ToCompactText(Z_Param_Out_CartesianCoordinates,Z_Param_IntegralDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCartesianCoordinatesFunctionLibrary::execToFullText)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_CartesianCoordinates);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UCartesianCoordinatesFunctionLibrary::ToFullText(Z_Param_Out_CartesianCoordinates,Z_Param_IntegralDigits);
		P_NATIVE_END;
	}
	void UCartesianCoordinatesFunctionLibrary::StaticRegisterNativesUCartesianCoordinatesFunctionLibrary()
	{
		UClass* Class = UCartesianCoordinatesFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeCartesianCoordinatesApproximation", &UCartesianCoordinatesFunctionLibrary::execMakeCartesianCoordinatesApproximation },
			{ "ToCompactText", &UCartesianCoordinatesFunctionLibrary::execToCompactText },
			{ "ToFloatApproximation", &UCartesianCoordinatesFunctionLibrary::execToFloatApproximation },
			{ "ToFullText", &UCartesianCoordinatesFunctionLibrary::execToFullText },
			{ "ToSeparateTexts", &UCartesianCoordinatesFunctionLibrary::execToSeparateTexts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics
	{
		struct CartesianCoordinatesFunctionLibrary_eventMakeCartesianCoordinatesApproximation_Parms
		{
			float InX;
			float InY;
			float InZ;
			FCartesianCoordinates ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InX = { "InX", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventMakeCartesianCoordinatesApproximation_Parms, InX), METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InY = { "InY", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventMakeCartesianCoordinatesApproximation_Parms, InY), METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InZ = { "InZ", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventMakeCartesianCoordinatesApproximation_Parms, InZ), METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InZ_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventMakeCartesianCoordinatesApproximation_Parms, ReturnValue), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(nullptr, 0) }; // 3215872794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_InZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/CartesianCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary, nullptr, "MakeCartesianCoordinatesApproximation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::CartesianCoordinatesFunctionLibrary_eventMakeCartesianCoordinatesApproximation_Parms), Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics
	{
		struct CartesianCoordinatesFunctionLibrary_eventToCompactText_Parms
		{
			FCartesianCoordinates CartesianCoordinates;
			int32 IntegralDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianCoordinates;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_CartesianCoordinates = { "CartesianCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToCompactText_Parms, CartesianCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(nullptr, 0) }; // 3215872794
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_IntegralDigits = { "IntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToCompactText_Parms, IntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToCompactText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_CartesianCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_IntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "CPP_Default_IntegralDigits", "3" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "DisplayName", "ToCompactText" },
		{ "ModuleRelativePath", "Public/CartesianCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary, nullptr, "ToCompactText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::CartesianCoordinatesFunctionLibrary_eventToCompactText_Parms), Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics
	{
		struct CartesianCoordinatesFunctionLibrary_eventToFloatApproximation_Parms
		{
			FCartesianCoordinates CartesianCoordinates;
			float OutX;
			float OutY;
			float OutZ;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianCoordinates;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_CartesianCoordinates = { "CartesianCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, CartesianCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(nullptr, 0) }; // 3215872794
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutX = { "OutX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, OutX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutY = { "OutY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, OutY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutZ = { "OutZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, OutZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_CartesianCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/CartesianCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary, nullptr, "ToFloatApproximation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::CartesianCoordinatesFunctionLibrary_eventToFloatApproximation_Parms), Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics
	{
		struct CartesianCoordinatesFunctionLibrary_eventToFullText_Parms
		{
			FCartesianCoordinates CartesianCoordinates;
			int32 IntegralDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianCoordinates;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_CartesianCoordinates = { "CartesianCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToFullText_Parms, CartesianCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(nullptr, 0) }; // 3215872794
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_IntegralDigits = { "IntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToFullText_Parms, IntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToFullText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_CartesianCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_IntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "CPP_Default_IntegralDigits", "3" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "DisplayName", "ToFullText" },
		{ "ModuleRelativePath", "Public/CartesianCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary, nullptr, "ToFullText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::CartesianCoordinatesFunctionLibrary_eventToFullText_Parms), Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics
	{
		struct CartesianCoordinatesFunctionLibrary_eventToSeparateTexts_Parms
		{
			FCartesianCoordinates CartesianCoordinates;
			FText OutX;
			FText OutY;
			FText OutZ;
			int32 IntegralDigits;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianCoordinates;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutX;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutY;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_CartesianCoordinates = { "CartesianCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, CartesianCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(nullptr, 0) }; // 3215872794
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutX = { "OutX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, OutX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutY = { "OutY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, OutY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutZ = { "OutZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, OutZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_IntegralDigits = { "IntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CartesianCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, IntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_CartesianCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_IntegralDigits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "CPP_Default_IntegralDigits", "3" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "DisplayName", "ToSeparateTexts" },
		{ "ModuleRelativePath", "Public/CartesianCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary, nullptr, "ToSeparateTexts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::CartesianCoordinatesFunctionLibrary_eventToSeparateTexts_Parms), Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCartesianCoordinatesFunctionLibrary);
	UClass* Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_NoRegister()
	{
		return UCartesianCoordinatesFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_MakeCartesianCoordinatesApproximation, "MakeCartesianCoordinatesApproximation" }, // 746975993
		{ &Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToCompactText, "ToCompactText" }, // 3438698738
		{ &Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFloatApproximation, "ToFloatApproximation" }, // 29367649
		{ &Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToFullText, "ToFullText" }, // 1955520161
		{ &Z_Construct_UFunction_UCartesianCoordinatesFunctionLibrary_ToSeparateTexts, "ToSeparateTexts" }, // 2375631093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CartesianCoordinates.h" },
		{ "ModuleRelativePath", "Public/CartesianCoordinates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCartesianCoordinatesFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::ClassParams = {
		&UCartesianCoordinatesFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCartesianCoordinatesFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCartesianCoordinatesFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCartesianCoordinatesFunctionLibrary.OuterSingleton;
	}
	template<> GEOREFERENCING_API UClass* StaticClass<UCartesianCoordinatesFunctionLibrary>()
	{
		return UCartesianCoordinatesFunctionLibrary::StaticClass();
	}
	UCartesianCoordinatesFunctionLibrary::UCartesianCoordinatesFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCartesianCoordinatesFunctionLibrary);
	UCartesianCoordinatesFunctionLibrary::~UCartesianCoordinatesFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_Statics::ScriptStructInfo[] = {
		{ FCartesianCoordinates::StaticStruct, Z_Construct_UScriptStruct_FCartesianCoordinates_Statics::NewStructOps, TEXT("CartesianCoordinates"), &Z_Registration_Info_UScriptStruct_CartesianCoordinates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCartesianCoordinates), 3215872794U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary, UCartesianCoordinatesFunctionLibrary::StaticClass, TEXT("UCartesianCoordinatesFunctionLibrary"), &Z_Registration_Info_UClass_UCartesianCoordinatesFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCartesianCoordinatesFunctionLibrary), 3894814458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_922151327(TEXT("/Script/GeoReferencing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
