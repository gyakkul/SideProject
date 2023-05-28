// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/BlueprintPlatformLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPlatformLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPlatformLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EApplicationState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EScreenOrientation();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScreenOrientation;
	static UEnum* EScreenOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScreenOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScreenOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EScreenOrientation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EScreenOrientation"));
		}
		return Z_Registration_Info_UEnum_EScreenOrientation.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EScreenOrientation::Type>()
	{
		return EScreenOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EScreenOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EScreenOrientation_Statics::Enumerators[] = {
		{ "EScreenOrientation::Unknown", (int64)EScreenOrientation::Unknown },
		{ "EScreenOrientation::Portrait", (int64)EScreenOrientation::Portrait },
		{ "EScreenOrientation::PortraitUpsideDown", (int64)EScreenOrientation::PortraitUpsideDown },
		{ "EScreenOrientation::LandscapeLeft", (int64)EScreenOrientation::LandscapeLeft },
		{ "EScreenOrientation::LandscapeRight", (int64)EScreenOrientation::LandscapeRight },
		{ "EScreenOrientation::FaceUp", (int64)EScreenOrientation::FaceUp },
		{ "EScreenOrientation::FaceDown", (int64)EScreenOrientation::FaceDown },
		{ "EScreenOrientation::PortraitSensor", (int64)EScreenOrientation::PortraitSensor },
		{ "EScreenOrientation::LandscapeSensor", (int64)EScreenOrientation::LandscapeSensor },
		{ "EScreenOrientation::FullSensor", (int64)EScreenOrientation::FullSensor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EScreenOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The list of possible device/screen orientation for mobile devices\n */" },
		{ "FaceDown.Comment", "/** The orientation is as if place on a desk with the screen downward */" },
		{ "FaceDown.Name", "EScreenOrientation::FaceDown" },
		{ "FaceDown.ToolTip", "The orientation is as if place on a desk with the screen downward" },
		{ "FaceUp.Comment", "/** The orientation is as if place on a desk with the screen upward */" },
		{ "FaceUp.Name", "EScreenOrientation::FaceUp" },
		{ "FaceUp.ToolTip", "The orientation is as if place on a desk with the screen upward" },
		{ "FullSensor.Comment", "/** The orientation is no longer locked and adjusts according to the sensor */" },
		{ "FullSensor.Name", "EScreenOrientation::FullSensor" },
		{ "FullSensor.ToolTip", "The orientation is no longer locked and adjusts according to the sensor" },
		{ "LandscapeLeft.Comment", "/** The orientation is landscape with the home button at the right side */" },
		{ "LandscapeLeft.Name", "EScreenOrientation::LandscapeLeft" },
		{ "LandscapeLeft.ToolTip", "The orientation is landscape with the home button at the right side" },
		{ "LandscapeRight.Comment", "/** The orientation is landscape with the home button at the left side */" },
		{ "LandscapeRight.Name", "EScreenOrientation::LandscapeRight" },
		{ "LandscapeRight.ToolTip", "The orientation is landscape with the home button at the left side" },
		{ "LandscapeSensor.Comment", "/** The orientation is landscape, oriented upright with the sensor */" },
		{ "LandscapeSensor.Name", "EScreenOrientation::LandscapeSensor" },
		{ "LandscapeSensor.ToolTip", "The orientation is landscape, oriented upright with the sensor" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "Portrait.Comment", "/** The orientation is portrait with the home button at the bottom */" },
		{ "Portrait.Name", "EScreenOrientation::Portrait" },
		{ "Portrait.ToolTip", "The orientation is portrait with the home button at the bottom" },
		{ "PortraitSensor.Comment", "/** The orientation is portrait, oriented upright with the sensor */" },
		{ "PortraitSensor.Name", "EScreenOrientation::PortraitSensor" },
		{ "PortraitSensor.ToolTip", "The orientation is portrait, oriented upright with the sensor" },
		{ "PortraitUpsideDown.Comment", "/** The orientation is portrait with the home button at the top */" },
		{ "PortraitUpsideDown.Name", "EScreenOrientation::PortraitUpsideDown" },
		{ "PortraitUpsideDown.ToolTip", "The orientation is portrait with the home button at the top" },
		{ "ToolTip", "The list of possible device/screen orientation for mobile devices" },
		{ "Unknown.Comment", "/** The orientation is not known */" },
		{ "Unknown.Name", "EScreenOrientation::Unknown" },
		{ "Unknown.ToolTip", "The orientation is not known" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EScreenOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EScreenOrientation",
		"EScreenOrientation::Type",
		Z_Construct_UEnum_Engine_EScreenOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EScreenOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EScreenOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EScreenOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EScreenOrientation()
	{
		if (!Z_Registration_Info_UEnum_EScreenOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScreenOrientation.InnerSingleton, Z_Construct_UEnum_Engine_EScreenOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScreenOrientation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EApplicationState;
	static UEnum* EApplicationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EApplicationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EApplicationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EApplicationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EApplicationState"));
		}
		return Z_Registration_Info_UEnum_EApplicationState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EApplicationState::Type>()
	{
		return EApplicationState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EApplicationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EApplicationState_Statics::Enumerators[] = {
		{ "EApplicationState::Unknown", (int64)EApplicationState::Unknown },
		{ "EApplicationState::Inactive", (int64)EApplicationState::Inactive },
		{ "EApplicationState::Background", (int64)EApplicationState::Background },
		{ "EApplicationState::Active", (int64)EApplicationState::Active },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EApplicationState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/** The Application was active when receiving the notification */" },
		{ "Active.Name", "EApplicationState::Active" },
		{ "Active.ToolTip", "The Application was active when receiving the notification" },
		{ "Background.Comment", "/** The Application was in the background when receiving the notification */" },
		{ "Background.Name", "EApplicationState::Background" },
		{ "Background.ToolTip", "The Application was in the background when receiving the notification" },
		{ "BlueprintType", "true" },
		{ "Comment", "// application state when the game receives a notification\n" },
		{ "Inactive.Comment", "/** The Application was inactive when receiving the notification */" },
		{ "Inactive.Name", "EApplicationState::Inactive" },
		{ "Inactive.ToolTip", "The Application was inactive when receiving the notification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "application state when the game receives a notification" },
		{ "Unknown.Comment", "/** The Application was in an unknown state when receiving the notification */" },
		{ "Unknown.Name", "EApplicationState::Unknown" },
		{ "Unknown.ToolTip", "The Application was in an unknown state when receiving the notification" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EApplicationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EApplicationState",
		"EApplicationState::Type",
		Z_Construct_UEnum_Engine_EApplicationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EApplicationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EApplicationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EApplicationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EApplicationState()
	{
		if (!Z_Registration_Info_UEnum_EApplicationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EApplicationState.InnerSingleton, Z_Construct_UEnum_Engine_EApplicationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EApplicationState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformDelegate)
{
	PlatformDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms
		{
			TArray<FString> StartupArguments;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartupArguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupArguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupArguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner = { "StartupArguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments = { "StartupArguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms, StartupArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformStartupArgumentsDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformStartupArgumentsDelegate, TArray<FString> const& StartupArguments)
{
	struct PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms
	{
		TArray<FString> StartupArguments;
	};
	PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms Parms;
	Parms.StartupArguments=StartupArguments;
	PlatformStartupArgumentsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms
		{
			TArray<uint8> inArray;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_Inner = { "inArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray = { "inArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms, inArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformRegisteredForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForRemoteNotificationsDelegate, TArray<uint8> const& inArray)
{
	struct PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms
	{
		TArray<uint8> inArray;
	};
	PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms Parms;
	Parms.inArray=inArray;
	PlatformRegisteredForRemoteNotificationsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms
		{
			int32 inInt;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_inInt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::NewProp_inInt = { "inInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms, inInt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::NewProp_inInt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformRegisteredForUserNotificationsDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformRegisteredForUserNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForUserNotificationsDelegate, int32 inInt)
{
	struct PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms
	{
		int32 inInt;
	};
	PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms Parms;
	Parms.inInt=inInt;
	PlatformRegisteredForUserNotificationsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms
		{
			FString inString;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inString = { "inString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformFailedToRegisterForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformFailedToRegisterForRemoteNotificationsDelegate, const FString& inString)
{
	struct PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms
	{
		FString inString;
	};
	PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms Parms;
	Parms.inString=inString;
	PlatformFailedToRegisterForRemoteNotificationsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms
		{
			FString inString;
			TEnumAsByte<EApplicationState::Type> inAppState;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_inAppState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inString = { "inString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState = { "inAppState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms, inAppState), Z_Construct_UEnum_Engine_EApplicationState, METADATA_PARAMS(nullptr, 0) }; // 3615593063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformReceivedRemoteNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformReceivedRemoteNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedRemoteNotificationDelegate, const FString& inString, EApplicationState::Type inAppState)
{
	struct PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms
	{
		FString inString;
		TEnumAsByte<EApplicationState::Type> inAppState;
	};
	PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms Parms;
	Parms.inString=inString;
	Parms.inAppState=inAppState;
	PlatformReceivedRemoteNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms
		{
			FString inString;
			int32 inInt;
			TEnumAsByte<EApplicationState::Type> inAppState;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_inInt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_inAppState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inString = { "inString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inInt = { "inInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inInt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState = { "inAppState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inAppState), Z_Construct_UEnum_Engine_EApplicationState, METADATA_PARAMS(nullptr, 0) }; // 3615593063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformReceivedLocalNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformReceivedLocalNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedLocalNotificationDelegate, const FString& inString, int32 inInt, EApplicationState::Type inAppState)
{
	struct PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms
	{
		FString inString;
		int32 inInt;
		TEnumAsByte<EApplicationState::Type> inAppState;
	};
	PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms Parms;
	Parms.inString=inString;
	Parms.inInt=inInt;
	Parms.inAppState=inAppState;
	PlatformReceivedLocalNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms
		{
			TEnumAsByte<EScreenOrientation::Type> inScreenOrientation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_inScreenOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::NewProp_inScreenOrientation = { "inScreenOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms, inScreenOrientation), Z_Construct_UEnum_Engine_EScreenOrientation, METADATA_PARAMS(nullptr, 0) }; // 2734244968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::NewProp_inScreenOrientation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, nullptr, "PlatformScreenOrientationChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlatformGameInstance::FPlatformScreenOrientationChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformScreenOrientationChangedDelegate, EScreenOrientation::Type inScreenOrientation)
{
	struct PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms
	{
		TEnumAsByte<EScreenOrientation::Type> inScreenOrientation;
	};
	PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms Parms;
	Parms.inScreenOrientation=inScreenOrientation;
	PlatformScreenOrientationChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UPlatformGameInstance::StaticRegisterNativesUPlatformGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformGameInstance);
	UClass* Z_Construct_UClass_UPlatformGameInstance_NoRegister()
	{
		return UPlatformGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillDeactivateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillDeactivateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasReactivatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasReactivatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillEnterBackgroundDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasEnteredForegroundDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillTerminateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillTerminateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationShouldUnloadResourcesDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedStartupArgumentsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationRegisteredForRemoteNotificationsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationRegisteredForUserNotificationsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedRemoteNotificationDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedLocalNotificationDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, "PlatformDelegate__DelegateSignature" }, // 3876593948
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature, "PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature" }, // 2338699181
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature, "PlatformReceivedLocalNotificationDelegate__DelegateSignature" }, // 982689765
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature, "PlatformReceivedRemoteNotificationDelegate__DelegateSignature" }, // 2882712737
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature, "PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature" }, // 3660710498
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature, "PlatformRegisteredForUserNotificationsDelegate__DelegateSignature" }, // 1737052386
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature, "PlatformScreenOrientationChangedDelegate__DelegateSignature" }, // 3556182290
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature, "PlatformStartupArgumentsDelegate__DelegateSignature" }, // 3060161753
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mobile" },
		{ "Comment", "/** UObject based class for handling mobile events. Having this object as an option gives the app lifetime access to these global delegates. The component UApplicationLifecycleComponent is destroyed at level loads */" },
		{ "IncludePath", "Kismet/BlueprintPlatformLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "UObject based class for handling mobile events. Having this object as an option gives the app lifetime access to these global delegates. The component UApplicationLifecycleComponent is destroyed at level loads" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData[] = {
		{ "Comment", "// This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button). \n// The game should be paused if possible, etc... \n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button).\nThe game should be paused if possible, etc..." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate = { "ApplicationWillDeactivateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillDeactivateDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData)) }; // 3876593948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData[] = {
		{ "Comment", "// Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate = { "ApplicationHasReactivatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationHasReactivatedDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData)) }; // 3876593948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[] = {
		{ "Comment", "// This is called when the application is being backgrounded (e.g., due to switching  \n// to another app or closing it via the home button)  \n// The game should release shared resources, save state, etc..., since it can be  \n// terminated from the background state without any further warning.  \n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "This is called when the application is being backgrounded (e.g., due to switching\nto another app or closing it via the home button)\nThe game should release shared resources, save state, etc..., since it can be\nterminated from the background state without any further warning." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate = { "ApplicationWillEnterBackgroundDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillEnterBackgroundDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData)) }; // 3876593948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[] = {
		{ "Comment", "// Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate = { "ApplicationHasEnteredForegroundDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationHasEnteredForegroundDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData)) }; // 3876593948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData[] = {
		{ "Comment", "// This *may* be called when the application is getting terminated by the OS.  \n// There is no guarantee that this will ever be called on a mobile device,  \n// save state when ApplicationWillEnterBackgroundDelegate is called instead.  \n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "This *may* be called when the application is getting terminated by the OS.\nThere is no guarantee that this will ever be called on a mobile device,\nsave state when ApplicationWillEnterBackgroundDelegate is called instead." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate = { "ApplicationWillTerminateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillTerminateDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData)) }; // 3876593948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[] = {
		{ "Comment", "// Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate = { "ApplicationShouldUnloadResourcesDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationShouldUnloadResourcesDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData)) }; // 3876593948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[] = {
		{ "Comment", "// Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate = { "ApplicationReceivedStartupArgumentsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedStartupArgumentsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData)) }; // 3060161753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData[] = {
		{ "Comment", "// called when the user grants permission to register for remote notifications\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the user grants permission to register for remote notifications" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate = { "ApplicationRegisteredForRemoteNotificationsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationRegisteredForRemoteNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData)) }; // 3660710498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData[] = {
		{ "Comment", "// called when the user grants permission to register for notifications\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the user grants permission to register for notifications" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate = { "ApplicationRegisteredForUserNotificationsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationRegisteredForUserNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData)) }; // 1737052386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData[] = {
		{ "Comment", "// called when the application fails to register for remote notifications\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application fails to register for remote notifications" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate = { "ApplicationFailedToRegisterForRemoteNotificationsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationFailedToRegisterForRemoteNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData)) }; // 2338699181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData[] = {
		{ "Comment", "// called when the application receives a remote notification\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application receives a remote notification" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate = { "ApplicationReceivedRemoteNotificationDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedRemoteNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData)) }; // 2882712737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData[] = {
		{ "Comment", "// called when the application receives a local notification\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application receives a local notification" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate = { "ApplicationReceivedLocalNotificationDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedLocalNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData)) }; // 982689765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData[] = {
		{ "Comment", "// called when the application receives a screen orientation change notification\n" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application receives a screen orientation change notification" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate = { "ApplicationReceivedScreenOrientationChangedNotificationDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedScreenOrientationChangedNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData)) }; // 3556182290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformGameInstance_Statics::ClassParams = {
		&UPlatformGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UPlatformGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformGameInstance()
	{
		if (!Z_Registration_Info_UClass_UPlatformGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformGameInstance.OuterSingleton, Z_Construct_UClass_UPlatformGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformGameInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlatformGameInstance>()
	{
		return UPlatformGameInstance::StaticClass();
	}
	UPlatformGameInstance::UPlatformGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformGameInstance);
	UPlatformGameInstance::~UPlatformGameInstance() {}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execSetAllowedDeviceOrientation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewAllowedDeviceOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPlatformLibrary::SetAllowedDeviceOrientation(EScreenOrientation::Type(Z_Param_NewAllowedDeviceOrientation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execGetAllowedDeviceOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EScreenOrientation::Type>*)Z_Param__Result=UBlueprintPlatformLibrary::GetAllowedDeviceOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execGetDeviceOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EScreenOrientation::Type>*)Z_Param__Result=UBlueprintPlatformLibrary::GetDeviceOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execGetLaunchNotification)
	{
		P_GET_UBOOL_REF(Z_Param_Out_NotificationLaunchedApp);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ActivationEvent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FireDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPlatformLibrary::GetLaunchNotification(Z_Param_Out_NotificationLaunchedApp,Z_Param_Out_ActivationEvent,Z_Param_Out_FireDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execCancelLocalNotificationById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NotificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPlatformLibrary::CancelLocalNotificationById(Z_Param_NotificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execCancelLocalNotification)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivationEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPlatformLibrary::CancelLocalNotification(Z_Param_ActivationEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeFromNow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inSecondsFromNow);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivationEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeFromNow(Z_Param_inSecondsFromNow,Z_Param_ActivationEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeAtTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_FireDateTime);
		P_GET_UBOOL(Z_Param_LocalTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivationEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeAtTime(Z_Param_Out_FireDateTime,Z_Param_LocalTime,Z_Param_ActivationEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execScheduleLocalNotificationFromNow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inSecondsFromNow);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Body);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Action);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivationEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBlueprintPlatformLibrary::ScheduleLocalNotificationFromNow(Z_Param_inSecondsFromNow,Z_Param_Out_Title,Z_Param_Out_Body,Z_Param_Out_Action,Z_Param_ActivationEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execScheduleLocalNotificationAtTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_FireDateTime);
		P_GET_UBOOL(Z_Param_LocalTime);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Body);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Action);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivationEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBlueprintPlatformLibrary::ScheduleLocalNotificationAtTime(Z_Param_Out_FireDateTime,Z_Param_LocalTime,Z_Param_Out_Title,Z_Param_Out_Body,Z_Param_Out_Action,Z_Param_ActivationEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformLibrary::execClearAllLocalNotifications)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintPlatformLibrary::ClearAllLocalNotifications();
		P_NATIVE_END;
	}
	void UBlueprintPlatformLibrary::StaticRegisterNativesUBlueprintPlatformLibrary()
	{
		UClass* Class = UBlueprintPlatformLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelLocalNotification", &UBlueprintPlatformLibrary::execCancelLocalNotification },
			{ "CancelLocalNotificationById", &UBlueprintPlatformLibrary::execCancelLocalNotificationById },
			{ "ClearAllLocalNotifications", &UBlueprintPlatformLibrary::execClearAllLocalNotifications },
			{ "GetAllowedDeviceOrientation", &UBlueprintPlatformLibrary::execGetAllowedDeviceOrientation },
			{ "GetDeviceOrientation", &UBlueprintPlatformLibrary::execGetDeviceOrientation },
			{ "GetLaunchNotification", &UBlueprintPlatformLibrary::execGetLaunchNotification },
			{ "ScheduleLocalNotificationAtTime", &UBlueprintPlatformLibrary::execScheduleLocalNotificationAtTime },
			{ "ScheduleLocalNotificationBadgeAtTime", &UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeAtTime },
			{ "ScheduleLocalNotificationBadgeFromNow", &UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeFromNow },
			{ "ScheduleLocalNotificationFromNow", &UBlueprintPlatformLibrary::execScheduleLocalNotificationFromNow },
			{ "SetAllowedDeviceOrientation", &UBlueprintPlatformLibrary::execSetAllowedDeviceOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics
	{
		struct BlueprintPlatformLibrary_eventCancelLocalNotification_Parms
		{
			FString ActivationEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent = { "ActivationEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventCancelLocalNotification_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Cancel a local notification given the ActivationEvent\n\x09 * @param ActivationEvent The string passed into the Schedule call for the notification to be cancelled\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Cancel a local notification given the ActivationEvent\n@param ActivationEvent The string passed into the Schedule call for the notification to be cancelled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "CancelLocalNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::BlueprintPlatformLibrary_eventCancelLocalNotification_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics
	{
		struct BlueprintPlatformLibrary_eventCancelLocalNotificationById_Parms
		{
			int32 NotificationId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NotificationId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::NewProp_NotificationId = { "NotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventCancelLocalNotificationById_Parms, NotificationId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::NewProp_NotificationId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Cancel a local notification given the ActivationEvent\n\x09 * @param NotificationId The Id returned from one of the ScheduleLocalNotification* functions\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Cancel a local notification given the ActivationEvent\n@param NotificationId The Id returned from one of the ScheduleLocalNotification* functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "CancelLocalNotificationById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::BlueprintPlatformLibrary_eventCancelLocalNotificationById_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Clear all pending local notifications. Typically this will be done before scheduling new notifications when going into the background */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Clear all pending local notifications. Typically this will be done before scheduling new notifications when going into the background" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "ClearAllLocalNotifications", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics
	{
		struct BlueprintPlatformLibrary_eventGetAllowedDeviceOrientation_Parms
		{
			TEnumAsByte<EScreenOrientation::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetAllowedDeviceOrientation_Parms, ReturnValue), Z_Construct_UEnum_Engine_EScreenOrientation, METADATA_PARAMS(nullptr, 0) }; // 2734244968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/**\n\x09 * Returns the allowed orientation of the device. This is NOT the same as GetDeviceOrientation, which only returns Portrait, LandscapeLeft,\n\x09 * PortraitUpsideDown or LandscapeRight. The allowed orientation limits what orientation your device can have. So if you set the allowed orientation\n\x09 * to LandscapeLeft, GetDeviceOrientation will only ever return LandscapeLeft. But if you set the allowed orientation to LandscapeSensor, you are actually\n\x09 * restricting the allowed orientations to LandscapeLeft OR LandscapeRight (depending on the sensor), so GetDeviceOrientation might return LandscapeLeft OR LandscapeRight.\n\x09 *\n\x09 * @return An EDeviceScreenOrientation value.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Returns the allowed orientation of the device. This is NOT the same as GetDeviceOrientation, which only returns Portrait, LandscapeLeft,\nPortraitUpsideDown or LandscapeRight. The allowed orientation limits what orientation your device can have. So if you set the allowed orientation\nto LandscapeLeft, GetDeviceOrientation will only ever return LandscapeLeft. But if you set the allowed orientation to LandscapeSensor, you are actually\nrestricting the allowed orientations to LandscapeLeft OR LandscapeRight (depending on the sensor), so GetDeviceOrientation might return LandscapeLeft OR LandscapeRight.\n\n@return An EDeviceScreenOrientation value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "GetAllowedDeviceOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::BlueprintPlatformLibrary_eventGetAllowedDeviceOrientation_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics
	{
		struct BlueprintPlatformLibrary_eventGetDeviceOrientation_Parms
		{
			TEnumAsByte<EScreenOrientation::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetDeviceOrientation_Parms, ReturnValue), Z_Construct_UEnum_Engine_EScreenOrientation, METADATA_PARAMS(nullptr, 0) }; // 2734244968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/**\n\x09 * Returns the current orientation of the device: will be either Portrait, LandscapeLeft, PortraitUpsideDown or LandscapeRight.\n\x09 *\n\x09 * @return An EDeviceScreenOrientation value.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Returns the current orientation of the device: will be either Portrait, LandscapeLeft, PortraitUpsideDown or LandscapeRight.\n\n@return An EDeviceScreenOrientation value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "GetDeviceOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::BlueprintPlatformLibrary_eventGetDeviceOrientation_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics
	{
		struct BlueprintPlatformLibrary_eventGetLaunchNotification_Parms
		{
			bool NotificationLaunchedApp;
			FString ActivationEvent;
			int32 FireDate;
		};
		static void NewProp_NotificationLaunchedApp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NotificationLaunchedApp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FireDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp_SetBit(void* Obj)
	{
		((BlueprintPlatformLibrary_eventGetLaunchNotification_Parms*)Obj)->NotificationLaunchedApp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp = { "NotificationLaunchedApp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms), &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_ActivationEvent = { "ActivationEvent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms, ActivationEvent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_FireDate = { "FireDate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms, FireDate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_ActivationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_FireDate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Get the local notification that was used to launch the app\n\x09 * @param NotificationLaunchedApp Return true if a notification was used to launch the app\n\x09 * @param ActivationEvent Returns the name of the ActivationEvent if a notification was used to launch the app\n\x09 * @param FireDate Returns the time the notification was activated\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Get the local notification that was used to launch the app\n@param NotificationLaunchedApp Return true if a notification was used to launch the app\n@param ActivationEvent Returns the name of the ActivationEvent if a notification was used to launch the app\n@param FireDate Returns the time the notification was activated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "GetLaunchNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::BlueprintPlatformLibrary_eventGetLaunchNotification_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms
		{
			FDateTime FireDateTime;
			bool LocalTime;
			FText Title;
			FText Body;
			FText Action;
			FString ActivationEvent;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireDateTime;
		static void NewProp_LocalTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LocalTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime = { "FireDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, FireDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime_MetaData)) };
	void Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime_SetBit(void* Obj)
	{
		((BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms*)Obj)->LocalTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime = { "LocalTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms), &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Action), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent = { "ActivationEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Schedule a local notification at a specific time, inLocalTime specifies the current local time or if UTC time should be used \n\x09 * @param FireDateTime The time at which to fire the local notification\n\x09 * @param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n\x09 * @param Title The title of the notification\n\x09 * @param Body The more detailed description of the notification\n\x09 * @param Action The text to be displayed on the slider controller\n\x09 * @param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification at a specific time, inLocalTime specifies the current local time or if UTC time should be used\n@param FireDateTime The time at which to fire the local notification\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param Title The title of the notification\n@param Body The more detailed description of the notification\n@param Action The text to be displayed on the slider controller\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "ScheduleLocalNotificationAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms
		{
			FDateTime FireDateTime;
			bool LocalTime;
			FString ActivationEvent;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireDateTime;
		static void NewProp_LocalTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LocalTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime = { "FireDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms, FireDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime_MetaData)) };
	void Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime_SetBit(void* Obj)
	{
		((BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms*)Obj)->LocalTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime = { "LocalTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms), &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent = { "ActivationEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Schedule a local notification badge at a specific time, inLocalTime specifies the current local time or if UTC time should be used\n\x09 * @param FireDateTime The time at which to fire the local notification\n\x09 * @param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n\x09 * @param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification badge at a specific time, inLocalTime specifies the current local time or if UTC time should be used\n@param FireDateTime The time at which to fire the local notification\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "ScheduleLocalNotificationBadgeAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms
		{
			int32 inSecondsFromNow;
			FString ActivationEvent;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_inSecondsFromNow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_inSecondsFromNow = { "inSecondsFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms, inSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent = { "ActivationEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_inSecondsFromNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Schedule a local notification badge to fire inSecondsFromNow from now\n\x09 * @param inSecondsFromNow The seconds until the notification should fire\n\x09 * @param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification badge to fire inSecondsFromNow from now\n@param inSecondsFromNow The seconds until the notification should fire\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "ScheduleLocalNotificationBadgeFromNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms
		{
			int32 inSecondsFromNow;
			FText Title;
			FText Body;
			FText Action;
			FString ActivationEvent;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_inSecondsFromNow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_inSecondsFromNow = { "inSecondsFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, inSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Action), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent = { "ActivationEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_inSecondsFromNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/** Schedule a local notification to fire inSecondsFromNow from now \n\x09 * @param inSecondsFromNow The seconds until the notification should fire\n\x09 * @param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n\x09 * @param Title The title of the notification\n\x09 * @param Body The more detailed description of the notification\n\x09 * @param Action The text to be displayed on the slider controller\n\x09 * @param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification to fire inSecondsFromNow from now\n@param inSecondsFromNow The seconds until the notification should fire\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param Title The title of the notification\n@param Body The more detailed description of the notification\n@param Action The text to be displayed on the slider controller\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "ScheduleLocalNotificationFromNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics
	{
		struct BlueprintPlatformLibrary_eventSetAllowedDeviceOrientation_Parms
		{
			TEnumAsByte<EScreenOrientation::Type> NewAllowedDeviceOrientation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAllowedDeviceOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::NewProp_NewAllowedDeviceOrientation = { "NewAllowedDeviceOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventSetAllowedDeviceOrientation_Parms, NewAllowedDeviceOrientation), Z_Construct_UEnum_Engine_EScreenOrientation, METADATA_PARAMS(nullptr, 0) }; // 2734244968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::NewProp_NewAllowedDeviceOrientation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "Comment", "/**\n\x09 * Set the allowed orientation of the device.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Set the allowed orientation of the device." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, nullptr, "SetAllowedDeviceOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::BlueprintPlatformLibrary_eventSetAllowedDeviceOrientation_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintPlatformLibrary);
	UClass* Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister()
	{
		return UBlueprintPlatformLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintPlatformLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification, "CancelLocalNotification" }, // 3632789327
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotificationById, "CancelLocalNotificationById" }, // 509148857
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications, "ClearAllLocalNotifications" }, // 931172681
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetAllowedDeviceOrientation, "GetAllowedDeviceOrientation" }, // 26894842
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation, "GetDeviceOrientation" }, // 994219329
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification, "GetLaunchNotification" }, // 504746072
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime, "ScheduleLocalNotificationAtTime" }, // 3241762788
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime, "ScheduleLocalNotificationBadgeAtTime" }, // 1648864506
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow, "ScheduleLocalNotificationBadgeFromNow" }, // 1503681198
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow, "ScheduleLocalNotificationFromNow" }, // 269241178
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_SetAllowedDeviceOrientation, "SetAllowedDeviceOrientation" }, // 2447379974
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/BlueprintPlatformLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ScriptName", "PlatformLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintPlatformLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::ClassParams = {
		&UBlueprintPlatformLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintPlatformLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintPlatformLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintPlatformLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintPlatformLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlueprintPlatformLibrary>()
	{
		return UBlueprintPlatformLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPlatformLibrary);
	UBlueprintPlatformLibrary::~UBlueprintPlatformLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_Statics::EnumInfo[] = {
		{ EScreenOrientation_StaticEnum, TEXT("EScreenOrientation"), &Z_Registration_Info_UEnum_EScreenOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2734244968U) },
		{ EApplicationState_StaticEnum, TEXT("EApplicationState"), &Z_Registration_Info_UEnum_EApplicationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3615593063U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformGameInstance, UPlatformGameInstance::StaticClass, TEXT("UPlatformGameInstance"), &Z_Registration_Info_UClass_UPlatformGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformGameInstance), 2048502108U) },
		{ Z_Construct_UClass_UBlueprintPlatformLibrary, UBlueprintPlatformLibrary::StaticClass, TEXT("UBlueprintPlatformLibrary"), &Z_Registration_Info_UClass_UBlueprintPlatformLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintPlatformLibrary), 1835042197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_1535671423(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
