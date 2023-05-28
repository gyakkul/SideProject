// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoundPlanetPawn.h"
#include "GeographicCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoundPlanetPawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	GEOREFERENCING_API UClass* Z_Construct_UClass_AGeoReferencingSystem_NoRegister();
	GEOREFERENCING_API UClass* Z_Construct_UClass_ARoundPlanetPawn();
	GEOREFERENCING_API UClass* Z_Construct_UClass_ARoundPlanetPawn_NoRegister();
	GEOREFERENCING_API UScriptStruct* Z_Construct_UScriptStruct_FGeographicCoordinates();
	UPackage* Z_Construct_UPackage__Script_GeoReferencing();
// End Cross Module References
	DEFINE_FUNCTION(ARoundPlanetPawn::execDecreaseSpeedScalar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseSpeedScalar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoundPlanetPawn::execIncreaseSpeedScalar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseSpeedScalar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoundPlanetPawn::execResetSpeedScalar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSpeedScalar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoundPlanetPawn::execInterruptFlyToLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterruptFlyToLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoundPlanetPawn::execFlyToLocationLatitudeLongitudeAltitude)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InLatitude);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InLongitude);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InAltitude);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_YawAtDestination);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_PitchAtDestination);
		P_GET_UBOOL(Z_Param_CanInterruptByMoving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlyToLocationLatitudeLongitudeAltitude(Z_Param_Out_InLatitude,Z_Param_Out_InLongitude,Z_Param_Out_InAltitude,Z_Param_YawAtDestination,Z_Param_PitchAtDestination,Z_Param_CanInterruptByMoving);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoundPlanetPawn::execFlyToLocationGeographic)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicDestination);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_YawAtDestination);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_PitchAtDestination);
		P_GET_UBOOL(Z_Param_CanInterruptByMoving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlyToLocationGeographic(Z_Param_Out_GeographicDestination,Z_Param_YawAtDestination,Z_Param_PitchAtDestination,Z_Param_CanInterruptByMoving);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoundPlanetPawn::execFlyToLocationECEF)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFDestination);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_YawAtDestination);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_PitchAtDestination);
		P_GET_UBOOL(Z_Param_CanInterruptByMoving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlyToLocationECEF(Z_Param_Out_ECEFDestination,Z_Param_YawAtDestination,Z_Param_PitchAtDestination,Z_Param_CanInterruptByMoving);
		P_NATIVE_END;
	}
	void ARoundPlanetPawn::StaticRegisterNativesARoundPlanetPawn()
	{
		UClass* Class = ARoundPlanetPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseSpeedScalar", &ARoundPlanetPawn::execDecreaseSpeedScalar },
			{ "FlyToLocationECEF", &ARoundPlanetPawn::execFlyToLocationECEF },
			{ "FlyToLocationGeographic", &ARoundPlanetPawn::execFlyToLocationGeographic },
			{ "FlyToLocationLatitudeLongitudeAltitude", &ARoundPlanetPawn::execFlyToLocationLatitudeLongitudeAltitude },
			{ "IncreaseSpeedScalar", &ARoundPlanetPawn::execIncreaseSpeedScalar },
			{ "InterruptFlyToLocation", &ARoundPlanetPawn::execInterruptFlyToLocation },
			{ "ResetSpeedScalar", &ARoundPlanetPawn::execResetSpeedScalar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* Decrease the Speed Scalar - MouseWheel Down equivalent\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Decrease the Speed Scalar - MouseWheel Down equivalent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundPlanetPawn, nullptr, "DecreaseSpeedScalar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics
	{
		struct RoundPlanetPawn_eventFlyToLocationECEF_Parms
		{
			FVector ECEFDestination;
			double YawAtDestination;
			double PitchAtDestination;
			bool CanInterruptByMoving;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFDestination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFDestination;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_YawAtDestination;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PitchAtDestination;
		static void NewProp_CanInterruptByMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanInterruptByMoving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_ECEFDestination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_ECEFDestination = { "ECEFDestination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationECEF_Parms, ECEFDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_ECEFDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_ECEFDestination_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_YawAtDestination = { "YawAtDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationECEF_Parms, YawAtDestination), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_PitchAtDestination = { "PitchAtDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationECEF_Parms, PitchAtDestination), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_CanInterruptByMoving_SetBit(void* Obj)
	{
		((RoundPlanetPawn_eventFlyToLocationECEF_Parms*)Obj)->CanInterruptByMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_CanInterruptByMoving = { "CanInterruptByMoving", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RoundPlanetPawn_eventFlyToLocationECEF_Parms), &Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_CanInterruptByMoving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_ECEFDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_YawAtDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_PitchAtDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::NewProp_CanInterruptByMoving,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/**\n\x09* Begin a smooth camera flight to the given ECEF destination such that the camera ends at the specified yaw and pitch.\n\x09* The flight can be enforced or canceled if the user moves the pawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Begin a smooth camera flight to the given ECEF destination such that the camera ends at the specified yaw and pitch.\nThe flight can be enforced or canceled if the user moves the pawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundPlanetPawn, nullptr, "FlyToLocationECEF", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::RoundPlanetPawn_eventFlyToLocationECEF_Parms), Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics
	{
		struct RoundPlanetPawn_eventFlyToLocationGeographic_Parms
		{
			FGeographicCoordinates GeographicDestination;
			double YawAtDestination;
			double PitchAtDestination;
			bool CanInterruptByMoving;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicDestination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicDestination;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_YawAtDestination;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PitchAtDestination;
		static void NewProp_CanInterruptByMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanInterruptByMoving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_GeographicDestination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_GeographicDestination = { "GeographicDestination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationGeographic_Parms, GeographicDestination), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_GeographicDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_GeographicDestination_MetaData)) }; // 2704990978
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_YawAtDestination = { "YawAtDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationGeographic_Parms, YawAtDestination), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_PitchAtDestination = { "PitchAtDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationGeographic_Parms, PitchAtDestination), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_CanInterruptByMoving_SetBit(void* Obj)
	{
		((RoundPlanetPawn_eventFlyToLocationGeographic_Parms*)Obj)->CanInterruptByMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_CanInterruptByMoving = { "CanInterruptByMoving", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RoundPlanetPawn_eventFlyToLocationGeographic_Parms), &Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_CanInterruptByMoving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_GeographicDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_YawAtDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_PitchAtDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::NewProp_CanInterruptByMoving,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/**\n\x09* Begin a smooth camera flight to the given Latitude/Longitude destination such that the camera ends at the specified yaw and pitch.\n\x09* The flight can be enforced or canceled if the user moves the pawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Begin a smooth camera flight to the given Latitude/Longitude destination such that the camera ends at the specified yaw and pitch.\nThe flight can be enforced or canceled if the user moves the pawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundPlanetPawn, nullptr, "FlyToLocationGeographic", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::RoundPlanetPawn_eventFlyToLocationGeographic_Parms), Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics
	{
		struct RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms
		{
			double InLatitude;
			double InLongitude;
			double InAltitude;
			double YawAtDestination;
			double PitchAtDestination;
			bool CanInterruptByMoving;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLatitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InLatitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLongitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InLongitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InAltitude;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_YawAtDestination;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PitchAtDestination;
		static void NewProp_CanInterruptByMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanInterruptByMoving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLatitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLatitude = { "InLatitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms, InLatitude), METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLatitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLatitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLongitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLongitude = { "InLongitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms, InLongitude), METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLongitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLongitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InAltitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InAltitude = { "InAltitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms, InAltitude), METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InAltitude_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_YawAtDestination = { "YawAtDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms, YawAtDestination), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_PitchAtDestination = { "PitchAtDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms, PitchAtDestination), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_CanInterruptByMoving_SetBit(void* Obj)
	{
		((RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms*)Obj)->CanInterruptByMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_CanInterruptByMoving = { "CanInterruptByMoving", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms), &Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_CanInterruptByMoving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLatitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InLongitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_InAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_YawAtDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_PitchAtDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::NewProp_CanInterruptByMoving,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/**\n\x09* Begin a smooth camera flight to the given Latitude/Longitude destination such that the camera ends at the specified yaw and pitch.\n\x09* The flight can be enforced or canceled if the user moves the pawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Begin a smooth camera flight to the given Latitude/Longitude destination such that the camera ends at the specified yaw and pitch.\nThe flight can be enforced or canceled if the user moves the pawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundPlanetPawn, nullptr, "FlyToLocationLatitudeLongitudeAltitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::RoundPlanetPawn_eventFlyToLocationLatitudeLongitudeAltitude_Parms), Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* Increase the Speed Scalar - MouseWheel Up equivalent\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Increase the Speed Scalar - MouseWheel Up equivalent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundPlanetPawn, nullptr, "IncreaseSpeedScalar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/**\n\x09* Stop the current Fly To Location motion\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Stop the current Fly To Location motion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundPlanetPawn, nullptr, "InterruptFlyToLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* Reset the Speed Scalar to its default value - Middle-mouse button click equivalent\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Reset the Speed Scalar to its default value - Middle-mouse button click equivalent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundPlanetPawn, nullptr, "ResetSpeedScalar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoundPlanetPawn);
	UClass* Z_Construct_UClass_ARoundPlanetPawn_NoRegister()
	{
		return ARoundPlanetPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARoundPlanetPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeProfileCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AltitudeProfileCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumAltitudeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaximumAltitudeCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumAltitudeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumAltitudeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProgressCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlyDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlyDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GranularityDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GranularityDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumStepCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumStepCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumStepCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumStepCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitalMotion_MetaData[];
#endif
		static void NewProp_OrbitalMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OrbitalMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeedKmh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeedKmh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScalarIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScalarIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedByHATModifierCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpeedByHATModifierCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HAT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HAT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Altitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeoReferencingSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeoReferencingSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoundPlanetPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoundPlanetPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoundPlanetPawn_DecreaseSpeedScalar, "DecreaseSpeedScalar" }, // 3983975533
		{ &Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationECEF, "FlyToLocationECEF" }, // 1845561371
		{ &Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationGeographic, "FlyToLocationGeographic" }, // 3380679179
		{ &Z_Construct_UFunction_ARoundPlanetPawn_FlyToLocationLatitudeLongitudeAltitude, "FlyToLocationLatitudeLongitudeAltitude" }, // 4013154422
		{ &Z_Construct_UFunction_ARoundPlanetPawn_IncreaseSpeedScalar, "IncreaseSpeedScalar" }, // 2874690839
		{ &Z_Construct_UFunction_ARoundPlanetPawn_InterruptFlyToLocation, "InterruptFlyToLocation" }, // 3746386899
		{ &Z_Construct_UFunction_ARoundPlanetPawn_ResetSpeedScalar, "ResetSpeedScalar" }, // 2616991935
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This pawn can be used to easily move around the globe while maintaining a\n * sensible orientation. As the pawn moves across the horizon, it automatically\n * changes its own up direction such that the world always looks right-side up.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RoundPlanetPawn.h" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "This pawn can be used to easily move around the globe while maintaining a\nsensible orientation. As the pawn moves across the horizon, it automatically\nchanges its own up direction such that the world always looks right-side up." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_AltitudeProfileCurve_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/**\n\x09* This curve dictates what percentage of the max altitude the pawn should take at a given time on the curve.\n\x09* Depending on the total distance to Fly, a constant maximum altitude is computed from FlyToLocationMaximumAltitudeCurve\n\x09* Then during the fly, the actual pawn altitude is computed from this profile and the reference maximum altitude. \n\x09* This allows to have nice movements whenever you FlyTo near or far from your actual location. \n\x09* This curve must be kept in the 0 to 1 range on both axes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "This curve dictates what percentage of the max altitude the pawn should take at a given time on the curve.\nDepending on the total distance to Fly, a constant maximum altitude is computed from FlyToLocationMaximumAltitudeCurve\nThen during the fly, the actual pawn altitude is computed from this profile and the reference maximum altitude.\nThis allows to have nice movements whenever you FlyTo near or far from your actual location.\nThis curve must be kept in the 0 to 1 range on both axes." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_AltitudeProfileCurve = { "AltitudeProfileCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, AltitudeProfileCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_AltitudeProfileCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_AltitudeProfileCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeCurve_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/**\n\x09* This curve is used to pick up a reference the maximum altitude when flying to a location. \n\x09* This maximum altitude will be moderated by the FlyToLocationAltitudeProfileCurve\n\x09* X Axis is the distance of the flight (meters)\n\x09* Y Axis is the maximum altitude to be used for this flight (meters)\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "This curve is used to pick up a reference the maximum altitude when flying to a location.\nThis maximum altitude will be moderated by the FlyToLocationAltitudeProfileCurve\nX Axis is the distance of the flight (meters)\nY Axis is the maximum altitude to be used for this flight (meters)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeCurve = { "MaximumAltitudeCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, MaximumAltitudeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeValue_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/**\n\x09* In case MaximumAltitudeCurve is not defined, the AltitudeProfileCurve will use this Maximum altitude value for the flight, whatever the travel distance. \n\x09* In meters\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "In case MaximumAltitudeCurve is not defined, the AltitudeProfileCurve will use this Maximum altitude value for the flight, whatever the travel distance.\nIn meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeValue = { "MaximumAltitudeValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, MaximumAltitudeValue), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_ProgressCurve_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "Comment", "/** \n\x09* This curve is used to ease in an out the Fly to Location speed.\n\x09* It must be kept in the 0 to 1 range on both axes.\n\x09* X axis is the normalized time of travel \n\x09* Y axis is the progress on the flight motion. \n\x09* A linear curve will give a constant progress speed whereas a easein//easeout one will slow down the speed at beginning/end of motion. \n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "This curve is used to ease in an out the Fly to Location speed.\nIt must be kept in the 0 to 1 range on both axes.\nX axis is the normalized time of travel\nY axis is the progress on the flight motion.\nA linear curve will give a constant progress speed whereas a easein//easeout one will slow down the speed at beginning/end of motion." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_ProgressCurve = { "ProgressCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, ProgressCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_ProgressCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_ProgressCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_FlyDuration_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09* Fly to Location duration (in seconds)\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Fly to Location duration (in seconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_FlyDuration = { "FlyDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, FlyDuration), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_FlyDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_FlyDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GranularityDegrees_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09* The granularity in degrees with which keypoints should be generated for the Fly to Location interpolation. \n\x09* Lower values means smoother motion. \n\x09* ROM : 1 degree latitude ~110km on earth. => 0.1 ~10km \n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "The granularity in degrees with which keypoints should be generated for the Fly to Location interpolation.\nLower values means smoother motion.\nROM : 1 degree latitude ~110km on earth. => 0.1 ~10km" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GranularityDegrees = { "GranularityDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, GranularityDegrees), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GranularityDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GranularityDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MinimumStepCount_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09* The minimum linear steps for the FlyTolocation motion. \n\x09* GranularityDegrees is not sufficient in case of short travels. Eg if 0.1, any jump shorter than 10km will have only one step. \n\x09* Make sure we have at least this number of steps in the trajectory. \n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "The minimum linear steps for the FlyTolocation motion.\nGranularityDegrees is not sufficient in case of short travels. Eg if 0.1, any jump shorter than 10km will have only one step.\nMake sure we have at least this number of steps in the trajectory." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MinimumStepCount = { "MinimumStepCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, MinimumStepCount), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MinimumStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MinimumStepCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumStepCount_MetaData[] = {
		{ "Category", "FlyToLocation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09* Make sure we don't get crazy in case of large flights with small granularity\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Make sure we don't get crazy in case of large flights with small granularity" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumStepCount = { "MaximumStepCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, MaximumStepCount), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumStepCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_OrbitalMotion_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* if True, the motion Forward/Right motion of the pawn are relative to Planet tangent, \n\x09* meaning the altitude will approximately be kept, whatever the pawn camera orientation\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "if True, the motion Forward/Right motion of the pawn are relative to Planet tangent,\nmeaning the altitude will approximately be kept, whatever the pawn camera orientation" },
	};
#endif
	void Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_OrbitalMotion_SetBit(void* Obj)
	{
		((ARoundPlanetPawn*)Obj)->OrbitalMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_OrbitalMotion = { "OrbitalMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARoundPlanetPawn), &Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_OrbitalMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_OrbitalMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_OrbitalMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_BaseSpeedKmh_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* The Reference maximum speed for the pawn, before being altered by any Scalar modifier or by altitude curve\n\x09* ActualMaxSpeed = BaseSpeedKmh * SpeedScalar * AltitudeSpeedModifierCurve(Altitude)\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "The Reference maximum speed for the pawn, before being altered by any Scalar modifier or by altitude curve\nActualMaxSpeed = BaseSpeedKmh * SpeedScalar * AltitudeSpeedModifierCurve(Altitude)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_BaseSpeedKmh = { "BaseSpeedKmh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, BaseSpeedKmh), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_BaseSpeedKmh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_BaseSpeedKmh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalar_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* Scalar modifier for the base speed\n\x09* ActualMaxSpeed = BaseSpeedKmh * SpeedScalar * AltitudeSpeedModifierCurve(Altitude)\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Scalar modifier for the base speed\nActualMaxSpeed = BaseSpeedKmh * SpeedScalar * AltitudeSpeedModifierCurve(Altitude)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalar = { "SpeedScalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, SpeedScalar), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalarIncrement_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* Multiplier/Divider for increasing/decreasing the speed scalar\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Multiplier/Divider for increasing/decreasing the speed scalar" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalarIncrement = { "SpeedScalarIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, SpeedScalarIncrement), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalarIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalarIncrement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedByHATModifierCurve_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* When being very high and moving around the planet, we have to dynamically increase the speed based on Height above terrain to accelerate movement\n\x09* This curve adds a multiplying factor to the maximum speed depending on HAT. \n\x09* ActualMaxSpeed = BaseSpeedKmh * SpeedScalar * AltitudeSpeedModifierCurve(Altitude)\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "When being very high and moving around the planet, we have to dynamically increase the speed based on Height above terrain to accelerate movement\nThis curve adds a multiplying factor to the maximum speed depending on HAT.\nActualMaxSpeed = BaseSpeedKmh * SpeedScalar * AltitudeSpeedModifierCurve(Altitude)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedByHATModifierCurve = { "SpeedByHATModifierCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, SpeedByHATModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedByHATModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedByHATModifierCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_HAT_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* Height Above Terrain. The distance between the ground and the pawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "Height Above Terrain. The distance between the ground and the pawn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_HAT = { "HAT", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, HAT), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_HAT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_HAT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_Altitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09* The distance between the geographic ellipsoid surface and the pawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
		{ "ToolTip", "The distance between the geographic ellipsoid surface and the pawn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, Altitude), METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_Altitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_Altitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GeoReferencingSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundPlanetPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GeoReferencingSystem = { "GeoReferencingSystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPlanetPawn, GeoReferencingSystem), Z_Construct_UClass_AGeoReferencingSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GeoReferencingSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GeoReferencingSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoundPlanetPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_AltitudeProfileCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumAltitudeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_ProgressCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_FlyDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GranularityDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MinimumStepCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_MaximumStepCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_OrbitalMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_BaseSpeedKmh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedScalarIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_SpeedByHATModifierCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_HAT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_Altitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlanetPawn_Statics::NewProp_GeoReferencingSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoundPlanetPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoundPlanetPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoundPlanetPawn_Statics::ClassParams = {
		&ARoundPlanetPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARoundPlanetPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoundPlanetPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlanetPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoundPlanetPawn()
	{
		if (!Z_Registration_Info_UClass_ARoundPlanetPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoundPlanetPawn.OuterSingleton, Z_Construct_UClass_ARoundPlanetPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoundPlanetPawn.OuterSingleton;
	}
	template<> GEOREFERENCING_API UClass* StaticClass<ARoundPlanetPawn>()
	{
		return ARoundPlanetPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoundPlanetPawn);
	ARoundPlanetPawn::~ARoundPlanetPawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoundPlanetPawn, ARoundPlanetPawn::StaticClass, TEXT("ARoundPlanetPawn"), &Z_Registration_Info_UClass_ARoundPlanetPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoundPlanetPawn), 68121662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_309618615(TEXT("/Script/GeoReferencing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
