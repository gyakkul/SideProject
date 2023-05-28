// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SunPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSunPosition() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SUNPOSITION_API UClass* Z_Construct_UClass_USunPositionFunctionLibrary();
	SUNPOSITION_API UClass* Z_Construct_UClass_USunPositionFunctionLibrary_NoRegister();
	SUNPOSITION_API UScriptStruct* Z_Construct_UScriptStruct_FSunPositionData();
	UPackage* Z_Construct_UPackage__Script_SunPosition();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SunPositionData;
class UScriptStruct* FSunPositionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SunPositionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SunPositionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSunPositionData, (UObject*)Z_Construct_UPackage__Script_SunPosition(), TEXT("SunPositionData"));
	}
	return Z_Registration_Info_UScriptStruct_SunPositionData.OuterSingleton;
}
template<> SUNPOSITION_API UScriptStruct* StaticStruct<FSunPositionData>()
{
	return FSunPositionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSunPositionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elevation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Elevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectedElevation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CorrectedElevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Azimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Azimuth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunriseTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunriseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunsetTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunsetTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolarNoon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SolarNoon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSunPositionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSunPositionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Elevation_MetaData[] = {
		{ "Category", "Sun Position" },
		{ "Comment", "/** Sun Elevation */" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
		{ "ToolTip", "Sun Elevation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSunPositionData, Elevation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Elevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Elevation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_CorrectedElevation_MetaData[] = {
		{ "Category", "Sun Position" },
		{ "Comment", "/** Sun Elevation, corrected for atmospheric diffraction */" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
		{ "ToolTip", "Sun Elevation, corrected for atmospheric diffraction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_CorrectedElevation = { "CorrectedElevation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSunPositionData, CorrectedElevation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_CorrectedElevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_CorrectedElevation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Azimuth_MetaData[] = {
		{ "Category", "Sun Position" },
		{ "Comment", "/** Sun azimuth */" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
		{ "ToolTip", "Sun azimuth" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Azimuth = { "Azimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSunPositionData, Azimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Azimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Azimuth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunriseTime_MetaData[] = {
		{ "Category", "Sun Position" },
		{ "Comment", "/** Sunrise time */" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
		{ "ToolTip", "Sunrise time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunriseTime = { "SunriseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSunPositionData, SunriseTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunriseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunriseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunsetTime_MetaData[] = {
		{ "Category", "Sun Position" },
		{ "Comment", "/** Sunset time */" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
		{ "ToolTip", "Sunset time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunsetTime = { "SunsetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSunPositionData, SunsetTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunsetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunsetTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SolarNoon_MetaData[] = {
		{ "Category", "Sun Position" },
		{ "Comment", "/** Solar noon */" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
		{ "ToolTip", "Solar noon" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SolarNoon = { "SolarNoon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSunPositionData, SolarNoon), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SolarNoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SolarNoon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSunPositionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Elevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_CorrectedElevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_Azimuth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunriseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SunsetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunPositionData_Statics::NewProp_SolarNoon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSunPositionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SunPosition,
		nullptr,
		&NewStructOps,
		"SunPositionData",
		sizeof(FSunPositionData),
		alignof(FSunPositionData),
		Z_Construct_UScriptStruct_FSunPositionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSunPositionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunPositionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSunPositionData()
	{
		if (!Z_Registration_Info_UScriptStruct_SunPositionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SunPositionData.InnerSingleton, Z_Construct_UScriptStruct_FSunPositionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SunPositionData.InnerSingleton;
	}
	DEFINE_FUNCTION(USunPositionFunctionLibrary::execGetSunPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeZone);
		P_GET_UBOOL(Z_Param_bIsDaylightSavingTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Year);
		P_GET_PROPERTY(FIntProperty,Z_Param_Month);
		P_GET_PROPERTY(FIntProperty,Z_Param_Day);
		P_GET_PROPERTY(FIntProperty,Z_Param_Hours);
		P_GET_PROPERTY(FIntProperty,Z_Param_Minutes);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seconds);
		P_GET_STRUCT_REF(FSunPositionData,Z_Param_Out_SunPositionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		USunPositionFunctionLibrary::GetSunPosition(Z_Param_Latitude,Z_Param_Longitude,Z_Param_TimeZone,Z_Param_bIsDaylightSavingTime,Z_Param_Year,Z_Param_Month,Z_Param_Day,Z_Param_Hours,Z_Param_Minutes,Z_Param_Seconds,Z_Param_Out_SunPositionData);
		P_NATIVE_END;
	}
	void USunPositionFunctionLibrary::StaticRegisterNativesUSunPositionFunctionLibrary()
	{
		UClass* Class = USunPositionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSunPosition", &USunPositionFunctionLibrary::execGetSunPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics
	{
		struct SunPositionFunctionLibrary_eventGetSunPosition_Parms
		{
			float Latitude;
			float Longitude;
			float TimeZone;
			bool bIsDaylightSavingTime;
			int32 Year;
			int32 Month;
			int32 Day;
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			FSunPositionData SunPositionData;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeZone;
		static void NewProp_bIsDaylightSavingTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDaylightSavingTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Year;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Month;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Day;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hours;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunPositionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Latitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Longitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, TimeZone), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit(void* Obj)
	{
		((SunPositionFunctionLibrary_eventGetSunPosition_Parms*)Obj)->bIsDaylightSavingTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_bIsDaylightSavingTime = { "bIsDaylightSavingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SunPositionFunctionLibrary_eventGetSunPosition_Parms), &Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Year), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Month), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Day), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Hours), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Minutes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_SunPositionData = { "SunPositionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SunPositionFunctionLibrary_eventGetSunPosition_Parms, SunPositionData), Z_Construct_UScriptStruct_FSunPositionData, METADATA_PARAMS(nullptr, 0) }; // 1813481547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_TimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_bIsDaylightSavingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Year,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Month,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Hours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::NewProp_SunPositionData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sun Position" },
		{ "Comment", "/** Get the sun's position data based on position, date and time */" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
		{ "ToolTip", "Get the sun's position data based on position, date and time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USunPositionFunctionLibrary, nullptr, "GetSunPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::SunPositionFunctionLibrary_eventGetSunPosition_Parms), Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USunPositionFunctionLibrary);
	UClass* Z_Construct_UClass_USunPositionFunctionLibrary_NoRegister()
	{
		return USunPositionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USunPositionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USunPositionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SunPosition,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USunPositionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USunPositionFunctionLibrary_GetSunPosition, "GetSunPosition" }, // 1703846912
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USunPositionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SunPosition.h" },
		{ "ModuleRelativePath", "Public/SunPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USunPositionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USunPositionFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USunPositionFunctionLibrary_Statics::ClassParams = {
		&USunPositionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USunPositionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USunPositionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USunPositionFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USunPositionFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USunPositionFunctionLibrary.OuterSingleton, Z_Construct_UClass_USunPositionFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USunPositionFunctionLibrary.OuterSingleton;
	}
	template<> SUNPOSITION_API UClass* StaticClass<USunPositionFunctionLibrary>()
	{
		return USunPositionFunctionLibrary::StaticClass();
	}
	USunPositionFunctionLibrary::USunPositionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USunPositionFunctionLibrary);
	USunPositionFunctionLibrary::~USunPositionFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_Statics::ScriptStructInfo[] = {
		{ FSunPositionData::StaticStruct, Z_Construct_UScriptStruct_FSunPositionData_Statics::NewStructOps, TEXT("SunPositionData"), &Z_Registration_Info_UScriptStruct_SunPositionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSunPositionData), 1813481547U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USunPositionFunctionLibrary, USunPositionFunctionLibrary::StaticClass, TEXT("USunPositionFunctionLibrary"), &Z_Registration_Info_UClass_USunPositionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USunPositionFunctionLibrary), 2159138512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_3095290934(TEXT("/Script/SunPosition"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
