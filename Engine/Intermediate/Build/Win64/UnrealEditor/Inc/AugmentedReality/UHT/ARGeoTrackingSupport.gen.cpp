// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARGeoTrackingSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARGeoTrackingSupport() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoTrackingSupport();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoTrackingSupport_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARGeoTrackingState;
	static UEnum* EARGeoTrackingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARGeoTrackingState"));
		}
		return Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingState>()
	{
		return EARGeoTrackingState_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::Enumerators[] = {
		{ "EARGeoTrackingState::Initializing", (int64)EARGeoTrackingState::Initializing },
		{ "EARGeoTrackingState::Localized", (int64)EARGeoTrackingState::Localized },
		{ "EARGeoTrackingState::Localizing", (int64)EARGeoTrackingState::Localizing },
		{ "EARGeoTrackingState::NotAvailable", (int64)EARGeoTrackingState::NotAvailable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Initializing.Comment", "// The session is initializing geo tracking.\n" },
		{ "Initializing.Name", "EARGeoTrackingState::Initializing" },
		{ "Initializing.ToolTip", "The session is initializing geo tracking." },
		{ "Localized.Comment", "// Geo tracking is localized.\n" },
		{ "Localized.Name", "EARGeoTrackingState::Localized" },
		{ "Localized.ToolTip", "Geo tracking is localized." },
		{ "Localizing.Comment", "// Geo tracking is attempting to localize against a map.\n" },
		{ "Localizing.Name", "EARGeoTrackingState::Localizing" },
		{ "Localizing.ToolTip", "Geo tracking is attempting to localize against a map." },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "NotAvailable.Comment", "// Geo tracking is not available.\n" },
		{ "NotAvailable.Name", "EARGeoTrackingState::NotAvailable" },
		{ "NotAvailable.ToolTip", "Geo tracking is not available." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARGeoTrackingState",
		"EARGeoTrackingState",
		Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState()
	{
		if (!Z_Registration_Info_UEnum_EARGeoTrackingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARGeoTrackingState.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARGeoTrackingState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARGeoTrackingStateReason;
	static UEnum* EARGeoTrackingStateReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARGeoTrackingStateReason"));
		}
		return Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingStateReason>()
	{
		return EARGeoTrackingStateReason_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::Enumerators[] = {
		{ "EARGeoTrackingStateReason::None", (int64)EARGeoTrackingStateReason::None },
		{ "EARGeoTrackingStateReason::NotAvailableAtLocation", (int64)EARGeoTrackingStateReason::NotAvailableAtLocation },
		{ "EARGeoTrackingStateReason::NeedLocationPermissions", (int64)EARGeoTrackingStateReason::NeedLocationPermissions },
		{ "EARGeoTrackingStateReason::DevicePointedTooLow", (int64)EARGeoTrackingStateReason::DevicePointedTooLow },
		{ "EARGeoTrackingStateReason::WorldTrackingUnstable", (int64)EARGeoTrackingStateReason::WorldTrackingUnstable },
		{ "EARGeoTrackingStateReason::WaitingForLocation", (int64)EARGeoTrackingStateReason::WaitingForLocation },
		{ "EARGeoTrackingStateReason::GeoDataNotLoaded", (int64)EARGeoTrackingStateReason::GeoDataNotLoaded },
		{ "EARGeoTrackingStateReason::VisualLocalizationFailed", (int64)EARGeoTrackingStateReason::VisualLocalizationFailed },
		{ "EARGeoTrackingStateReason::WaitingForAvailabilityCheck", (int64)EARGeoTrackingStateReason::WaitingForAvailabilityCheck },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevicePointedTooLow.Comment", "// The user is pointing the device too low to use geo tracking.\n" },
		{ "DevicePointedTooLow.Name", "EARGeoTrackingStateReason::DevicePointedTooLow" },
		{ "DevicePointedTooLow.ToolTip", "The user is pointing the device too low to use geo tracking." },
		{ "GeoDataNotLoaded.Comment", "// The framework is actively attempting to download localization imagery.\n" },
		{ "GeoDataNotLoaded.Name", "EARGeoTrackingStateReason::GeoDataNotLoaded" },
		{ "GeoDataNotLoaded.ToolTip", "The framework is actively attempting to download localization imagery." },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "NeedLocationPermissions.Comment", "// Geo tracking needs location permissions from the user.\n" },
		{ "NeedLocationPermissions.Name", "EARGeoTrackingStateReason::NeedLocationPermissions" },
		{ "NeedLocationPermissions.ToolTip", "Geo tracking needs location permissions from the user." },
		{ "None.Comment", "// No issues reported.\n" },
		{ "None.Name", "EARGeoTrackingStateReason::None" },
		{ "None.ToolTip", "No issues reported." },
		{ "NotAvailableAtLocation.Comment", "// Geo tracking is not available at the location.\n" },
		{ "NotAvailableAtLocation.Name", "EARGeoTrackingStateReason::NotAvailableAtLocation" },
		{ "NotAvailableAtLocation.ToolTip", "Geo tracking is not available at the location." },
		{ "VisualLocalizationFailed.Comment", "// The framework failed to match its localization imagery with the device\xe2\x80\x99s camera captures.\n" },
		{ "VisualLocalizationFailed.Name", "EARGeoTrackingStateReason::VisualLocalizationFailed" },
		{ "VisualLocalizationFailed.ToolTip", "The framework failed to match its localization imagery with the device\xe2\x80\x99s camera captures." },
		{ "WaitingForAvailabilityCheck.Comment", "// The framework is waiting for the availability check.\n" },
		{ "WaitingForAvailabilityCheck.Name", "EARGeoTrackingStateReason::WaitingForAvailabilityCheck" },
		{ "WaitingForAvailabilityCheck.ToolTip", "The framework is waiting for the availability check." },
		{ "WaitingForLocation.Comment", "// The framework is waiting for a position for the user.\n" },
		{ "WaitingForLocation.Name", "EARGeoTrackingStateReason::WaitingForLocation" },
		{ "WaitingForLocation.ToolTip", "The framework is waiting for a position for the user." },
		{ "WorldTrackingUnstable.Comment", "// The session is unsure of the device\xe2\x80\x99s pose in the physical environment.\n" },
		{ "WorldTrackingUnstable.Name", "EARGeoTrackingStateReason::WorldTrackingUnstable" },
		{ "WorldTrackingUnstable.ToolTip", "The session is unsure of the device\xe2\x80\x99s pose in the physical environment." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARGeoTrackingStateReason",
		"EARGeoTrackingStateReason",
		Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason()
	{
		if (!Z_Registration_Info_UEnum_EARGeoTrackingStateReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARGeoTrackingStateReason.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARGeoTrackingStateReason.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARGeoTrackingAccuracy;
	static UEnum* EARGeoTrackingAccuracy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARGeoTrackingAccuracy"));
		}
		return Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingAccuracy>()
	{
		return EARGeoTrackingAccuracy_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::Enumerators[] = {
		{ "EARGeoTrackingAccuracy::Undetermined", (int64)EARGeoTrackingAccuracy::Undetermined },
		{ "EARGeoTrackingAccuracy::Low", (int64)EARGeoTrackingAccuracy::Low },
		{ "EARGeoTrackingAccuracy::Medium", (int64)EARGeoTrackingAccuracy::Medium },
		{ "EARGeoTrackingAccuracy::High", (int64)EARGeoTrackingAccuracy::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Comment", "// Geo-tracking accuracy is high.\n" },
		{ "High.Name", "EARGeoTrackingAccuracy::High" },
		{ "High.ToolTip", "Geo-tracking accuracy is high." },
		{ "Low.Comment", "// Geo-tracking accuracy is low.\n" },
		{ "Low.Name", "EARGeoTrackingAccuracy::Low" },
		{ "Low.ToolTip", "Geo-tracking accuracy is low." },
		{ "Medium.Comment", "// Geo-tracking accuracy is average.\n" },
		{ "Medium.Name", "EARGeoTrackingAccuracy::Medium" },
		{ "Medium.ToolTip", "Geo-tracking accuracy is average." },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "Undetermined.Comment", "// Geo-tracking accuracy is undetermined.\n" },
		{ "Undetermined.Name", "EARGeoTrackingAccuracy::Undetermined" },
		{ "Undetermined.ToolTip", "Geo-tracking accuracy is undetermined." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARGeoTrackingAccuracy",
		"EARGeoTrackingAccuracy",
		Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy()
	{
		if (!Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.InnerSingleton;
	}
	DEFINE_FUNCTION(UARGeoTrackingSupport::execAddGeoAnchorAtLocationWithAltitude)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AltitudeMeters);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalAnchorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddGeoAnchorAtLocationWithAltitude(Z_Param_Longitude,Z_Param_Latitude,Z_Param_AltitudeMeters,Z_Param_OptionalAnchorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoTrackingSupport::execAddGeoAnchorAtLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalAnchorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddGeoAnchorAtLocation(Z_Param_Longitude,Z_Param_Latitude,Z_Param_OptionalAnchorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoTrackingSupport::execGetGeoTrackingAccuracy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARGeoTrackingAccuracy*)Z_Param__Result=P_THIS->GetGeoTrackingAccuracy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoTrackingSupport::execGetGeoTrackingStateReason)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARGeoTrackingStateReason*)Z_Param__Result=P_THIS->GetGeoTrackingStateReason();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoTrackingSupport::execGetGeoTrackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARGeoTrackingState*)Z_Param__Result=P_THIS->GetGeoTrackingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoTrackingSupport::execGetGeoTrackingSupport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARGeoTrackingSupport**)Z_Param__Result=UARGeoTrackingSupport::GetGeoTrackingSupport();
		P_NATIVE_END;
	}
	void UARGeoTrackingSupport::StaticRegisterNativesUARGeoTrackingSupport()
	{
		UClass* Class = UARGeoTrackingSupport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGeoAnchorAtLocation", &UARGeoTrackingSupport::execAddGeoAnchorAtLocation },
			{ "AddGeoAnchorAtLocationWithAltitude", &UARGeoTrackingSupport::execAddGeoAnchorAtLocationWithAltitude },
			{ "GetGeoTrackingAccuracy", &UARGeoTrackingSupport::execGetGeoTrackingAccuracy },
			{ "GetGeoTrackingState", &UARGeoTrackingSupport::execGetGeoTrackingState },
			{ "GetGeoTrackingStateReason", &UARGeoTrackingSupport::execGetGeoTrackingStateReason },
			{ "GetGeoTrackingSupport", &UARGeoTrackingSupport::execGetGeoTrackingSupport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics
	{
		struct ARGeoTrackingSupport_eventAddGeoAnchorAtLocation_Parms
		{
			float Longitude;
			float Latitude;
			FString OptionalAnchorName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalAnchorName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventAddGeoAnchorAtLocation_Parms, Longitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventAddGeoAnchorAtLocation_Parms, Latitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_OptionalAnchorName = { "OptionalAnchorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventAddGeoAnchorAtLocation_Parms, OptionalAnchorName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARGeoTrackingSupport_eventAddGeoAnchorAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARGeoTrackingSupport_eventAddGeoAnchorAtLocation_Parms), &Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_OptionalAnchorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * @return add an Geo anchor at a specific location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "@return add an Geo anchor at a specific location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoTrackingSupport, nullptr, "AddGeoAnchorAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::ARGeoTrackingSupport_eventAddGeoAnchorAtLocation_Parms), Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics
	{
		struct ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms
		{
			float Longitude;
			float Latitude;
			float AltitudeMeters;
			FString OptionalAnchorName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AltitudeMeters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalAnchorName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms, Longitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms, Latitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_AltitudeMeters = { "AltitudeMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms, AltitudeMeters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_OptionalAnchorName = { "OptionalAnchorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms, OptionalAnchorName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms), &Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_AltitudeMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_OptionalAnchorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * @return add an Geo anchor at a specific location with an altitude (in meters).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "@return add an Geo anchor at a specific location with an altitude (in meters)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoTrackingSupport, nullptr, "AddGeoAnchorAtLocationWithAltitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::ARGeoTrackingSupport_eventAddGeoAnchorAtLocationWithAltitude_Parms), Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics
	{
		struct ARGeoTrackingSupport_eventGetGeoTrackingAccuracy_Parms
		{
			EARGeoTrackingAccuracy ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventGetGeoTrackingAccuracy_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy, METADATA_PARAMS(nullptr, 0) }; // 2822810115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * @return the current session's Geo tracking state accuracy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "@return the current session's Geo tracking state accuracy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoTrackingSupport, nullptr, "GetGeoTrackingAccuracy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::ARGeoTrackingSupport_eventGetGeoTrackingAccuracy_Parms), Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics
	{
		struct ARGeoTrackingSupport_eventGetGeoTrackingState_Parms
		{
			EARGeoTrackingState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventGetGeoTrackingState_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState, METADATA_PARAMS(nullptr, 0) }; // 1447516020
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * @return the current session's Geo tracking state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "@return the current session's Geo tracking state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoTrackingSupport, nullptr, "GetGeoTrackingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::ARGeoTrackingSupport_eventGetGeoTrackingState_Parms), Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics
	{
		struct ARGeoTrackingSupport_eventGetGeoTrackingStateReason_Parms
		{
			EARGeoTrackingStateReason ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventGetGeoTrackingStateReason_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason, METADATA_PARAMS(nullptr, 0) }; // 1913000692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * @return the current session's Geo tracking state reason.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "@return the current session's Geo tracking state reason." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoTrackingSupport, nullptr, "GetGeoTrackingStateReason", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::ARGeoTrackingSupport_eventGetGeoTrackingStateReason_Parms), Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics
	{
		struct ARGeoTrackingSupport_eventGetGeoTrackingSupport_Parms
		{
			UARGeoTrackingSupport* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoTrackingSupport_eventGetGeoTrackingSupport_Parms, ReturnValue), Z_Construct_UClass_UARGeoTrackingSupport_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/** @return the interface object to support Geo tracking, return null on platforms don't support the feature. */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "@return the interface object to support Geo tracking, return null on platforms don't support the feature." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoTrackingSupport, nullptr, "GetGeoTrackingSupport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::ARGeoTrackingSupport_eventGetGeoTrackingSupport_Parms), Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARGeoTrackingSupport);
	UClass* Z_Construct_UClass_UARGeoTrackingSupport_NoRegister()
	{
		return UARGeoTrackingSupport::StaticClass();
	}
	struct Z_Construct_UClass_UARGeoTrackingSupport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGeoTrackingSupport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGeoTrackingSupport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation, "AddGeoAnchorAtLocation" }, // 1306049220
		{ &Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude, "AddGeoAnchorAtLocationWithAltitude" }, // 3253844819
		{ &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy, "GetGeoTrackingAccuracy" }, // 1622416182
		{ &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState, "GetGeoTrackingState" }, // 2067248151
		{ &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason, "GetGeoTrackingStateReason" }, // 882925331
		{ &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport, "GetGeoTrackingSupport" }, // 1732707915
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGeoTrackingSupport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR|Geo Tracking" },
		{ "Comment", "/**\n * Interface class for Geo tracking related features.\n */" },
		{ "IncludePath", "ARGeoTrackingSupport.h" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "Interface class for Geo tracking related features." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGeoTrackingSupport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGeoTrackingSupport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARGeoTrackingSupport_Statics::ClassParams = {
		&UARGeoTrackingSupport::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARGeoTrackingSupport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoTrackingSupport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGeoTrackingSupport()
	{
		if (!Z_Registration_Info_UClass_UARGeoTrackingSupport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARGeoTrackingSupport.OuterSingleton, Z_Construct_UClass_UARGeoTrackingSupport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARGeoTrackingSupport.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARGeoTrackingSupport>()
	{
		return UARGeoTrackingSupport::StaticClass();
	}
	UARGeoTrackingSupport::UARGeoTrackingSupport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGeoTrackingSupport);
	UARGeoTrackingSupport::~UARGeoTrackingSupport() {}
	struct Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics
	{
		struct CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms
		{
			bool bIsAvailable;
			FString Error;
		};
		static void NewProp_bIsAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAvailable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::NewProp_bIsAvailable_SetBit(void* Obj)
	{
		((CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms*)Obj)->bIsAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::NewProp_bIsAvailable = { "bIsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms), &Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::NewProp_bIsAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::NewProp_bIsAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, nullptr, "GeoTrackingAvailabilityDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms), Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::FGeoTrackingAvailabilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& GeoTrackingAvailabilityDelegate, bool bIsAvailable, const FString& Error)
{
	struct CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms
	{
		bool bIsAvailable;
		FString Error;
	};
	CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventGeoTrackingAvailabilityDelegate_Parms Parms;
	Parms.bIsAvailable=bIsAvailable ? true : false;
	Parms.Error=Error;
	GeoTrackingAvailabilityDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::execCheckGeoTrackingAvailabilityAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy**)Z_Param__Result=UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(Z_Param_WorldContextObject,Z_Param_Longitude,Z_Param_Latitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::execCheckGeoTrackingAvailability)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy**)Z_Param__Result=UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy()
	{
		UClass* Class = UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckGeoTrackingAvailability", &UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::execCheckGeoTrackingAvailability },
			{ "CheckGeoTrackingAvailabilityAtLocation", &UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::execCheckGeoTrackingAvailabilityAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics
	{
		struct CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailability_Parms
		{
			UObject* WorldContextObject;
			UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailability_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailability_Parms, ReturnValue), Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * Check Geo tracking availability at the user's current location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "Check Geo tracking availability at the user's current location." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, nullptr, "CheckGeoTrackingAvailability", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailability_Parms), Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics
	{
		struct CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailabilityAtLocation_Parms
		{
			UObject* WorldContextObject;
			float Longitude;
			float Latitude;
			UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailabilityAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailabilityAtLocation_Parms, Longitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailabilityAtLocation_Parms, Latitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailabilityAtLocation_Parms, ReturnValue), Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * Check Geo tracking availability at a specific Geo location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "Check Geo tracking availability at a specific Geo location." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, nullptr, "CheckGeoTrackingAvailabilityAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_eventCheckGeoTrackingAvailabilityAtLocation_Parms), Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy);
	UClass* Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister()
	{
		return UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability, "CheckGeoTrackingAvailability" }, // 852050090
		{ &Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation, "CheckGeoTrackingAvailabilityAtLocation" }, // 2184732105
		{ &Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature, "GeoTrackingAvailabilityDelegate__DelegateSignature" }, // 2556914596
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint async task to check Geo tracking availability.\n */" },
		{ "IncludePath", "ARGeoTrackingSupport.h" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "Blueprint async task to check Geo tracking availability." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2556914596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, OnFailed), Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData)) }; // 2556914596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy()
	{
		if (!Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>()
	{
		return UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass();
	}
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy);
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::~UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy() {}
	struct Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics
	{
		struct GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms
		{
			float Longitude;
			float Latitude;
			float Altitude;
			FString Error;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Altitude;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms, Longitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms, Latitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms, Altitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Altitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy, nullptr, "GetGeoLocationDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms), Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGetGeoLocationAsyncTaskBlueprintProxy::FGetGeoLocationDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetGeoLocationDelegate, float Longitude, float Latitude, float Altitude, const FString& Error)
{
	struct GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms
	{
		float Longitude;
		float Latitude;
		float Altitude;
		FString Error;
	};
	GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationDelegate_Parms Parms;
	Parms.Longitude=Longitude;
	Parms.Latitude=Latitude;
	Parms.Altitude=Altitude;
	Parms.Error=Error;
	GetGeoLocationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGetGeoLocationAsyncTaskBlueprintProxy::execGetGeoLocationAtWorldPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetGeoLocationAsyncTaskBlueprintProxy**)Z_Param__Result=UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(Z_Param_WorldContextObject,Z_Param_Out_WorldPosition);
		P_NATIVE_END;
	}
	void UGetGeoLocationAsyncTaskBlueprintProxy::StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy()
	{
		UClass* Class = UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGeoLocationAtWorldPosition", &UGetGeoLocationAsyncTaskBlueprintProxy::execGetGeoLocationAtWorldPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics
	{
		struct GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationAtWorldPosition_Parms
		{
			UObject* WorldContextObject;
			FVector WorldPosition;
			UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationAtWorldPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationAtWorldPosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_WorldPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationAtWorldPosition_Parms, ReturnValue), Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/**\n\x09 * Convert a position in UE4 world space into a Geo location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "Convert a position in UE4 world space into a Geo location." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy, nullptr, "GetGeoLocationAtWorldPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::GetGeoLocationAsyncTaskBlueprintProxy_eventGetGeoLocationAtWorldPosition_Parms), Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetGeoLocationAsyncTaskBlueprintProxy);
	UClass* Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister()
	{
		return UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition, "GetGeoLocationAtWorldPosition" }, // 1038118358
		{ &Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature, "GetGeoLocationDelegate__DelegateSignature" }, // 676537608
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint async task to convert Geo location.\n */" },
		{ "IncludePath", "ARGeoTrackingSupport.h" },
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
		{ "ToolTip", "Blueprint async task to convert Geo location." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGetGeoLocationAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 676537608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARGeoTrackingSupport.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGetGeoLocationAsyncTaskBlueprintProxy, OnFailed), Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData)) }; // 676537608
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetGeoLocationAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy()
	{
		if (!Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UGetGeoLocationAsyncTaskBlueprintProxy>()
	{
		return UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass();
	}
	UGetGeoLocationAsyncTaskBlueprintProxy::UGetGeoLocationAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetGeoLocationAsyncTaskBlueprintProxy);
	UGetGeoLocationAsyncTaskBlueprintProxy::~UGetGeoLocationAsyncTaskBlueprintProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_Statics::EnumInfo[] = {
		{ EARGeoTrackingState_StaticEnum, TEXT("EARGeoTrackingState"), &Z_Registration_Info_UEnum_EARGeoTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1447516020U) },
		{ EARGeoTrackingStateReason_StaticEnum, TEXT("EARGeoTrackingStateReason"), &Z_Registration_Info_UEnum_EARGeoTrackingStateReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1913000692U) },
		{ EARGeoTrackingAccuracy_StaticEnum, TEXT("EARGeoTrackingAccuracy"), &Z_Registration_Info_UEnum_EARGeoTrackingAccuracy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2822810115U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARGeoTrackingSupport, UARGeoTrackingSupport::StaticClass, TEXT("UARGeoTrackingSupport"), &Z_Registration_Info_UClass_UARGeoTrackingSupport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARGeoTrackingSupport), 1400017933U) },
		{ Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass, TEXT("UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy), 2819026923U) },
		{ Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy, UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass, TEXT("UGetGeoLocationAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetGeoLocationAsyncTaskBlueprintProxy), 895043238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_1406808845(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
