// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeographicCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeographicCoordinates() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOREFERENCING_API UClass* Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary();
	GEOREFERENCING_API UClass* Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_NoRegister();
	GEOREFERENCING_API UScriptStruct* Z_Construct_UScriptStruct_FGeographicCoordinates();
	UPackage* Z_Construct_UPackage__Script_GeoReferencing();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeographicCoordinates;
class UScriptStruct* FGeographicCoordinates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeographicCoordinates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeographicCoordinates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeographicCoordinates, (UObject*)Z_Construct_UPackage__Script_GeoReferencing(), TEXT("GeographicCoordinates"));
	}
	return Z_Registration_Info_UScriptStruct_GeographicCoordinates.OuterSingleton;
}
template<> GEOREFERENCING_API UScriptStruct* StaticStruct<FGeographicCoordinates>()
{
	return FGeographicCoordinates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeographicCoordinates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Altitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeographicCoordinates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "GeoReferencing" },
		{ "Comment", "// FVector where X = Latitude, Y = Longitude, Z = Altitude\n" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
		{ "ToolTip", "FVector where X = Latitude, Y = Longitude, Z = Altitude" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeographicCoordinates, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "GeoReferencing" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeographicCoordinates, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Altitude_MetaData[] = {
		{ "Category", "GeoReferencing" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeographicCoordinates, Altitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Altitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Altitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewProp_Altitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
		nullptr,
		&NewStructOps,
		"GeographicCoordinates",
		sizeof(FGeographicCoordinates),
		alignof(FGeographicCoordinates),
		Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeographicCoordinates()
	{
		if (!Z_Registration_Info_UScriptStruct_GeographicCoordinates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeographicCoordinates.InnerSingleton, Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeographicCoordinates.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeographicCoordinatesFunctionLibrary::execToLatLongAltVector)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLatLongAltVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeographicCoordinatesFunctionLibrary::ToLatLongAltVector(Z_Param_Out_GeographicCoordinates,Z_Param_Out_OutLatLongAltVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeographicCoordinatesFunctionLibrary::execMakeGeographicCoordinates)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LatLongAltVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeographicCoordinates*)Z_Param__Result=UGeographicCoordinatesFunctionLibrary::MakeGeographicCoordinates(Z_Param_Out_LatLongAltVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeographicCoordinatesFunctionLibrary::execMakeGeographicCoordinatesApproximation)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InLatitude);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InLongitude);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InAltitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeographicCoordinates*)Z_Param__Result=UGeographicCoordinatesFunctionLibrary::MakeGeographicCoordinatesApproximation(Z_Param_Out_InLatitude,Z_Param_Out_InLongitude,Z_Param_Out_InAltitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeographicCoordinatesFunctionLibrary::execToFloatApproximation)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLatitude);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLongitude);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAltitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeographicCoordinatesFunctionLibrary::ToFloatApproximation(Z_Param_Out_GeographicCoordinates,Z_Param_Out_OutLatitude,Z_Param_Out_OutLongitude,Z_Param_Out_OutAltitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeographicCoordinatesFunctionLibrary::execToSeparateTexts)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutLatitude);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutLongitude);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutAltitude);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigitsLatLon);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigitsAlti);
		P_GET_UBOOL(Z_Param_bAsDMS);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeographicCoordinatesFunctionLibrary::ToSeparateTexts(Z_Param_Out_GeographicCoordinates,Z_Param_Out_OutLatitude,Z_Param_Out_OutLongitude,Z_Param_Out_OutAltitude,Z_Param_IntegralDigitsLatLon,Z_Param_IntegralDigitsAlti,Z_Param_bAsDMS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeographicCoordinatesFunctionLibrary::execToCompactText)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigitsLatLon);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigitsAlti);
		P_GET_UBOOL(Z_Param_bAsDMS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UGeographicCoordinatesFunctionLibrary::ToCompactText(Z_Param_Out_GeographicCoordinates,Z_Param_IntegralDigitsLatLon,Z_Param_IntegralDigitsAlti,Z_Param_bAsDMS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeographicCoordinatesFunctionLibrary::execToFullText)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigitsLatLon);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegralDigitsAlti);
		P_GET_UBOOL(Z_Param_bAsDMS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UGeographicCoordinatesFunctionLibrary::ToFullText(Z_Param_Out_GeographicCoordinates,Z_Param_IntegralDigitsLatLon,Z_Param_IntegralDigitsAlti,Z_Param_bAsDMS);
		P_NATIVE_END;
	}
	void UGeographicCoordinatesFunctionLibrary::StaticRegisterNativesUGeographicCoordinatesFunctionLibrary()
	{
		UClass* Class = UGeographicCoordinatesFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeGeographicCoordinates", &UGeographicCoordinatesFunctionLibrary::execMakeGeographicCoordinates },
			{ "MakeGeographicCoordinatesApproximation", &UGeographicCoordinatesFunctionLibrary::execMakeGeographicCoordinatesApproximation },
			{ "ToCompactText", &UGeographicCoordinatesFunctionLibrary::execToCompactText },
			{ "ToFloatApproximation", &UGeographicCoordinatesFunctionLibrary::execToFloatApproximation },
			{ "ToFullText", &UGeographicCoordinatesFunctionLibrary::execToFullText },
			{ "ToLatLongAltVector", &UGeographicCoordinatesFunctionLibrary::execToLatLongAltVector },
			{ "ToSeparateTexts", &UGeographicCoordinatesFunctionLibrary::execToSeparateTexts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics
	{
		struct GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinates_Parms
		{
			FVector LatLongAltVector;
			FGeographicCoordinates ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatLongAltVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatLongAltVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::NewProp_LatLongAltVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::NewProp_LatLongAltVector = { "LatLongAltVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinates_Parms, LatLongAltVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::NewProp_LatLongAltVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::NewProp_LatLongAltVector_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2704990978
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::NewProp_LatLongAltVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Coordinates" },
		{ "Comment", "/**\n\x09 * Make Geographic Coordinates from a FVector where X=Latitude, Y=Longitude, Z=Altitude\n\x09 **/" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
		{ "ToolTip", "Make Geographic Coordinates from a FVector where X=Latitude, Y=Longitude, Z=Altitude" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, nullptr, "MakeGeographicCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinates_Parms), Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics
	{
		struct GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinatesApproximation_Parms
		{
			float InLatitude;
			float InLongitude;
			float InAltitude;
			FGeographicCoordinates ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLatitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLatitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLongitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLongitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAltitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLatitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLatitude = { "InLatitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinatesApproximation_Parms, InLatitude), METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLatitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLatitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLongitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLongitude = { "InLongitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinatesApproximation_Parms, InLongitude), METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLongitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLongitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InAltitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InAltitude = { "InAltitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinatesApproximation_Parms, InAltitude), METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InAltitude_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinatesApproximation_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2704990978
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLatitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InLongitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_InAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Coordinates" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "BP now support doubles, Function useless and can lead to precision issues" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, nullptr, "MakeGeographicCoordinatesApproximation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::GeographicCoordinatesFunctionLibrary_eventMakeGeographicCoordinatesApproximation_Parms), Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics
	{
		struct GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			int32 IntegralDigitsLatLon;
			int32 IntegralDigitsAlti;
			bool bAsDMS;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigitsLatLon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigitsAlti;
		static void NewProp_bAsDMS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsDMS;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2704990978
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_IntegralDigitsLatLon = { "IntegralDigitsLatLon", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms, IntegralDigitsLatLon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_IntegralDigitsAlti = { "IntegralDigitsAlti", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms, IntegralDigitsAlti), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_bAsDMS_SetBit(void* Obj)
	{
		((GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms*)Obj)->bAsDMS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_bAsDMS = { "bAsDMS", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms), &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_bAsDMS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_IntegralDigitsLatLon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_IntegralDigitsAlti,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_bAsDMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09 * Converts a GeographicCoordinates value to formatted text, in the form '(X, Y, Z)'\n\x09 **/" },
		{ "CPP_Default_bAsDMS", "false" },
		{ "CPP_Default_IntegralDigitsAlti", "2" },
		{ "CPP_Default_IntegralDigitsLatLon", "8" },
		{ "DisplayName", "ToCompactText" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
		{ "ToolTip", "Converts a GeographicCoordinates value to formatted text, in the form '(X, Y, Z)'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, nullptr, "ToCompactText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::GeographicCoordinatesFunctionLibrary_eventToCompactText_Parms), Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics
	{
		struct GeographicCoordinatesFunctionLibrary_eventToFloatApproximation_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			float OutLatitude;
			float OutLongitude;
			float OutAltitude;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLatitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLongitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAltitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2704990978
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutLatitude = { "OutLatitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, OutLatitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutLongitude = { "OutLongitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, OutLongitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutAltitude = { "OutAltitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFloatApproximation_Parms, OutAltitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutLatitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutLongitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::NewProp_OutAltitude,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "BP now support doubles, Function useless and can lead to precision issues" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, nullptr, "ToFloatApproximation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::GeographicCoordinatesFunctionLibrary_eventToFloatApproximation_Parms), Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics
	{
		struct GeographicCoordinatesFunctionLibrary_eventToFullText_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			int32 IntegralDigitsLatLon;
			int32 IntegralDigitsAlti;
			bool bAsDMS;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigitsLatLon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigitsAlti;
		static void NewProp_bAsDMS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsDMS;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFullText_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2704990978
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_IntegralDigitsLatLon = { "IntegralDigitsLatLon", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFullText_Parms, IntegralDigitsLatLon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_IntegralDigitsAlti = { "IntegralDigitsAlti", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFullText_Parms, IntegralDigitsAlti), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_bAsDMS_SetBit(void* Obj)
	{
		((GeographicCoordinatesFunctionLibrary_eventToFullText_Parms*)Obj)->bAsDMS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_bAsDMS = { "bAsDMS", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeographicCoordinatesFunctionLibrary_eventToFullText_Parms), &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_bAsDMS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToFullText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_IntegralDigitsLatLon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_IntegralDigitsAlti,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_bAsDMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09 * Converts a GeographicCoordinates value to localized formatted text, in the form 'X= Y= Z='\n\x09 **/" },
		{ "CPP_Default_bAsDMS", "false" },
		{ "CPP_Default_IntegralDigitsAlti", "2" },
		{ "CPP_Default_IntegralDigitsLatLon", "8" },
		{ "DisplayName", "ToFullText" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
		{ "ToolTip", "Converts a GeographicCoordinates value to localized formatted text, in the form 'X= Y= Z='" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, nullptr, "ToFullText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::GeographicCoordinatesFunctionLibrary_eventToFullText_Parms), Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics
	{
		struct GeographicCoordinatesFunctionLibrary_eventToLatLongAltVector_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FVector OutLatLongAltVector;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLatLongAltVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToLatLongAltVector_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2704990978
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::NewProp_OutLatLongAltVector = { "OutLatLongAltVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToLatLongAltVector_Parms, OutLatLongAltVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::NewProp_OutLatLongAltVector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09 * Express the Geographic coordinates as a FVector where  where X=Latitude, Y=Longitude, Z=Altitude\n\x09 **/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "BP now support doubles, Function useless and can lead to precision issues" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
		{ "ToolTip", "Express the Geographic coordinates as a FVector where  where X=Latitude, Y=Longitude, Z=Altitude" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, nullptr, "ToLatLongAltVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::GeographicCoordinatesFunctionLibrary_eventToLatLongAltVector_Parms), Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics
	{
		struct GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FText OutLatitude;
			FText OutLongitude;
			FText OutAltitude;
			int32 IntegralDigitsLatLon;
			int32 IntegralDigitsAlti;
			bool bAsDMS;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutLatitude;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutLongitude;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutAltitude;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigitsLatLon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegralDigitsAlti;
		static void NewProp_bAsDMS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsDMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2704990978
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutLatitude = { "OutLatitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, OutLatitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutLongitude = { "OutLongitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, OutLongitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutAltitude = { "OutAltitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, OutAltitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_IntegralDigitsLatLon = { "IntegralDigitsLatLon", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, IntegralDigitsLatLon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_IntegralDigitsAlti = { "IntegralDigitsAlti", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms, IntegralDigitsAlti), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_bAsDMS_SetBit(void* Obj)
	{
		((GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms*)Obj)->bAsDMS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_bAsDMS = { "bAsDMS", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms), &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_bAsDMS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutLatitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutLongitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_OutAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_IntegralDigitsLatLon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_IntegralDigitsAlti,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::NewProp_bAsDMS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintAutocast", "" },
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09 * Converts a GeographicCoordinates value to 3 separate text values\n\x09 **/" },
		{ "CPP_Default_bAsDMS", "false" },
		{ "CPP_Default_IntegralDigitsAlti", "2" },
		{ "CPP_Default_IntegralDigitsLatLon", "8" },
		{ "DisplayName", "ToSeparateTexts" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
		{ "ToolTip", "Converts a GeographicCoordinates value to 3 separate text values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, nullptr, "ToSeparateTexts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::GeographicCoordinatesFunctionLibrary_eventToSeparateTexts_Parms), Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeographicCoordinatesFunctionLibrary);
	UClass* Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_NoRegister()
	{
		return UGeographicCoordinatesFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinates, "MakeGeographicCoordinates" }, // 1408884633
		{ &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_MakeGeographicCoordinatesApproximation, "MakeGeographicCoordinatesApproximation" }, // 3908917900
		{ &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToCompactText, "ToCompactText" }, // 3677568761
		{ &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFloatApproximation, "ToFloatApproximation" }, // 3959957994
		{ &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToFullText, "ToFullText" }, // 338779359
		{ &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToLatLongAltVector, "ToLatLongAltVector" }, // 344061286
		{ &Z_Construct_UFunction_UGeographicCoordinatesFunctionLibrary_ToSeparateTexts, "ToSeparateTexts" }, // 2806361406
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeographicCoordinates.h" },
		{ "ModuleRelativePath", "Public/GeographicCoordinates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeographicCoordinatesFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::ClassParams = {
		&UGeographicCoordinatesFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGeographicCoordinatesFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeographicCoordinatesFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeographicCoordinatesFunctionLibrary.OuterSingleton;
	}
	template<> GEOREFERENCING_API UClass* StaticClass<UGeographicCoordinatesFunctionLibrary>()
	{
		return UGeographicCoordinatesFunctionLibrary::StaticClass();
	}
	UGeographicCoordinatesFunctionLibrary::UGeographicCoordinatesFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeographicCoordinatesFunctionLibrary);
	UGeographicCoordinatesFunctionLibrary::~UGeographicCoordinatesFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_Statics::ScriptStructInfo[] = {
		{ FGeographicCoordinates::StaticStruct, Z_Construct_UScriptStruct_FGeographicCoordinates_Statics::NewStructOps, TEXT("GeographicCoordinates"), &Z_Registration_Info_UScriptStruct_GeographicCoordinates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeographicCoordinates), 2704990978U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary, UGeographicCoordinatesFunctionLibrary::StaticClass, TEXT("UGeographicCoordinatesFunctionLibrary"), &Z_Registration_Info_UClass_UGeographicCoordinatesFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeographicCoordinatesFunctionLibrary), 3547665600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_53143948(TEXT("/Script/GeoReferencing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
