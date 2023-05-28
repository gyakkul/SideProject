// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/InputDeviceProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDeviceProperties() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
	ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty();
	ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceProperty();
	ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerEffect();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioBasedVibrationData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorCurveData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerBaseData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UInputDeviceProperty::execApplyDeviceProperty)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
		P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDeviceProperty(Z_Param_UserId,Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputDeviceProperty::execResetDeviceProperty)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_PlatformUser);
		P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDeviceProperty_Implementation(Z_Param_PlatformUser,Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputDeviceProperty::execEvaluateDeviceProperty)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_PlatformUser);
		P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateDeviceProperty_Implementation(Z_Param_PlatformUser,Z_Param_DeviceId,Z_Param_DeltaTime,Z_Param_Duration);
		P_NATIVE_END;
	}
	struct InputDeviceProperty_eventEvaluateDeviceProperty_Parms
	{
		FPlatformUserId PlatformUser;
		FInputDeviceId DeviceId;
		float DeltaTime;
		float Duration;
	};
	struct InputDeviceProperty_eventResetDeviceProperty_Parms
	{
		FPlatformUserId PlatformUser;
		FInputDeviceId DeviceId;
	};
	static FName NAME_UInputDeviceProperty_EvaluateDeviceProperty = FName(TEXT("EvaluateDeviceProperty"));
	void UInputDeviceProperty::EvaluateDeviceProperty(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceId, const float DeltaTime, const float Duration)
	{
		InputDeviceProperty_eventEvaluateDeviceProperty_Parms Parms;
		Parms.PlatformUser=PlatformUser;
		Parms.DeviceId=DeviceId;
		Parms.DeltaTime=DeltaTime;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UInputDeviceProperty_EvaluateDeviceProperty),&Parms);
	}
	static FName NAME_UInputDeviceProperty_ResetDeviceProperty = FName(TEXT("ResetDeviceProperty"));
	void UInputDeviceProperty::ResetDeviceProperty(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceId)
	{
		InputDeviceProperty_eventResetDeviceProperty_Parms Parms;
		Parms.PlatformUser=PlatformUser;
		Parms.DeviceId=DeviceId;
		ProcessEvent(FindFunctionChecked(NAME_UInputDeviceProperty_ResetDeviceProperty),&Parms);
	}
	void UInputDeviceProperty::StaticRegisterNativesUInputDeviceProperty()
	{
		UClass* Class = UInputDeviceProperty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDeviceProperty", &UInputDeviceProperty::execApplyDeviceProperty },
			{ "EvaluateDeviceProperty", &UInputDeviceProperty::execEvaluateDeviceProperty },
			{ "ResetDeviceProperty", &UInputDeviceProperty::execResetDeviceProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct InputDeviceProperty_eventApplyDeviceProperty_Parms
		{
			FPlatformUserId UserId;
			FInputDeviceId DeviceId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventApplyDeviceProperty_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventApplyDeviceProperty_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_DeviceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputDevice" },
		{ "Comment", "/**\n\x09* Apply the device property from GetInternalDeviceProperty to the given platform user. \n\x09* Note: To remove any applied affects of this device property, call ResetDeviceProperty.\n\x09* \n\x09* @param UserId\x09\x09The owning Platform User whose input device this property should be applied to.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Apply the device property from GetInternalDeviceProperty to the given platform user.\nNote: To remove any applied affects of this device property, call ResetDeviceProperty.\n\n@param UserId         The owning Platform User whose input device this property should be applied to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceProperty, nullptr, "ApplyDeviceProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::InputDeviceProperty_eventApplyDeviceProperty_Parms), Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_PlatformUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_PlatformUser = { "PlatformUser", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, PlatformUser), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_PlatformUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_PlatformUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_PlatformUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputDevice" },
		{ "Comment", "/**\n\x09* Evaluate this device property for a given duration. \n\x09* If overriding in Blueprints, make sure to call the parent function!\n\x09* \n \x09* @param PlatformUser\x09\x09The platform user that should receive this device property change\n\x09* @param DeltaTime\x09\x09\x09""Delta time\n\x09* @param Duration\x09\x09\x09The number of seconds that this property has been active. Use this to get things like curve data over time.\n\x09* @return\x09\x09\x09\x09\x09""A pointer to the evaluated input device property.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Evaluate this device property for a given duration.\nIf overriding in Blueprints, make sure to call the parent function!\n\n@param PlatformUser           The platform user that should receive this device property change\n@param DeltaTime                      Delta time\n@param Duration                       The number of seconds that this property has been active. Use this to get things like curve data over time.\n@return                                       A pointer to the evaluated input device property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceProperty, nullptr, "EvaluateDeviceProperty", nullptr, nullptr, sizeof(InputDeviceProperty_eventEvaluateDeviceProperty_Parms), Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_PlatformUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_PlatformUser = { "PlatformUser", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventResetDeviceProperty_Parms, PlatformUser), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_PlatformUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_PlatformUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputDeviceProperty_eventResetDeviceProperty_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_DeviceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_PlatformUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputDevice" },
		{ "Comment", "/**\n\x09* Reset the current device property. Provides an opportunity to reset device state after evaluation is complete. \n\x09* If overriding in Blueprints, make sure to call the parent function!\n\x09* \n\x09* @param PlatformUser\x09\x09The platform user that should receive this device property change\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Reset the current device property. Provides an opportunity to reset device state after evaluation is complete.\nIf overriding in Blueprints, make sure to call the parent function!\n\n@param PlatformUser           The platform user that should receive this device property change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceProperty, nullptr, "ResetDeviceProperty", nullptr, nullptr, sizeof(InputDeviceProperty_eventResetDeviceProperty_Parms), Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceProperty);
	UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister()
	{
		return UInputDeviceProperty::StaticClass();
	}
	struct Z_Construct_UClass_UInputDeviceProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropertyDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDeviceProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputDeviceProperty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty, "ApplyDeviceProperty" }, // 3680310916
		{ &Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty, "EvaluateDeviceProperty" }, // 1476683532
		{ &Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty, "ResetDeviceProperty" }, // 4054268368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class that represents a single Input Device Property. An Input Device Property\n* represents a feature that can be set on an input device. Things like what color a\n* light is, advanced rumble patterns, or trigger haptics.\n* \n* This top level object can then be evaluated at a specific time to create a lower level\n* FInputDeviceProperty, which the IInputInterface implementation can interpret however it desires.\n* \n* The behavior of device properties can vary depending on the current platform. Some platforms may not\n* support certain device properties. An older gamepad may not have any advanced trigger haptics for \n* example. \n*/" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Base class that represents a single Input Device Property. An Input Device Property\nrepresents a feature that can be set on an input device. Things like what color a\nlight is, advanced rumble patterns, or trigger haptics.\n\nThis top level object can then be evaluated at a specific time to create a lower level\nFInputDeviceProperty, which the IInputInterface implementation can interpret however it desires.\n\nThe behavior of device properties can vary depending on the current platform. Some platforms may not\nsupport certain device properties. An older gamepad may not have any advanced trigger haptics for\nexample." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceProperty_Statics::NewProp_PropertyDuration_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* The duration that this device property should last. Override this if your property has any dynamic curves \n\x09* to be the max time range.\n\x09* \n\x09* A duration of 0 means that the device property will be treated as a \"One Shot\" effect, being applied once\n\x09* before being removed by the Input Device Subsystem.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The duration that this device property should last. Override this if your property has any dynamic curves\nto be the max time range.\n\nA duration of 0 means that the device property will be treated as a \"One Shot\" effect, being applied once\nbefore being removed by the Input Device Subsystem." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputDeviceProperty_Statics::NewProp_PropertyDuration = { "PropertyDuration", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceProperty, PropertyDuration), METADATA_PARAMS(Z_Construct_UClass_UInputDeviceProperty_Statics::NewProp_PropertyDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceProperty_Statics::NewProp_PropertyDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceProperty_Statics::NewProp_PropertyDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDeviceProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceProperty_Statics::ClassParams = {
		&UInputDeviceProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputDeviceProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceProperty_Statics::PropPointers),
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInputDeviceProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDeviceProperty()
	{
		if (!Z_Registration_Info_UClass_UInputDeviceProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputDeviceProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputDeviceProperty>()
	{
		return UInputDeviceProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceProperty);
	UInputDeviceProperty::~UInputDeviceProperty() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceColorData;
class UScriptStruct* FDeviceColorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceColorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceColorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceColorData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceColorData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceColorData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceColorData>()
{
	return FDeviceColorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeviceColorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAfterCompletion_MetaData[];
#endif
		static void NewProp_bResetAfterCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAfterCompletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data required for setting the Input Device Color */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Data required for setting the Input Device Color" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceColorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** True if the light should be enabled at all */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "True if the light should be enabled at all" },
	};
#endif
	void Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDeviceColorData*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDeviceColorData), &Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If true, the light color will be reset to \"off\" after this property has been evaluated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "If true, the light color will be reset to \"off\" after this property has been evaluated." },
	};
#endif
	void Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion_SetBit(void* Obj)
	{
		((FDeviceColorData*)Obj)->bResetAfterCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion = { "bResetAfterCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDeviceColorData), &Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color to set the light on  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The color to set the light on" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceColorData, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_LightColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceColorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_LightColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DeviceColorData",
		sizeof(FDeviceColorData),
		alignof(FDeviceColorData),
		Z_Construct_UScriptStruct_FDeviceColorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorData()
	{
		if (!Z_Registration_Info_UScriptStruct_DeviceColorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceColorData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceColorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeviceColorData.InnerSingleton;
	}
	void UColorInputDeviceProperty::StaticRegisterNativesUColorInputDeviceProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorInputDeviceProperty);
	UClass* Z_Construct_UClass_UColorInputDeviceProperty_NoRegister()
	{
		return UColorInputDeviceProperty::StaticClass();
	}
	struct Z_Construct_UClass_UColorInputDeviceProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorInputDeviceProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorInputDeviceProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Set the color of an Input Device to a static color. This will NOT reset the device color when the property\n* is done evaluating. You can think of this as a \"One Shot\" effect, where you set the device property color.\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Device Color (Static)" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Set the color of an Input Device to a static color. This will NOT reset the device color when the property\nis done evaluating. You can think of this as a \"One Shot\" effect, where you set the device property color.\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_ColorData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Default color data that will be used by default. Device Specific overrides will be used when the current input device matches */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Default color data that will be used by default. Device Specific overrides will be used when the current input device matches" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorInputDeviceProperty, ColorData), Z_Construct_UScriptStruct_FDeviceColorData, METADATA_PARAMS(Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_ColorData_MetaData)) }; // 1060196497
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDeviceColorData, METADATA_PARAMS(nullptr, 0) }; // 1060196497
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorInputDeviceProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_MetaData)) }; // 1060196497
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorInputDeviceProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_ColorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorInputDeviceProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorInputDeviceProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::ClassParams = {
		&UColorInputDeviceProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UColorInputDeviceProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UColorInputDeviceProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorInputDeviceProperty()
	{
		if (!Z_Registration_Info_UClass_UColorInputDeviceProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorInputDeviceProperty.OuterSingleton, Z_Construct_UClass_UColorInputDeviceProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorInputDeviceProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UColorInputDeviceProperty>()
	{
		return UColorInputDeviceProperty::StaticClass();
	}
	UColorInputDeviceProperty::UColorInputDeviceProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorInputDeviceProperty);
	UColorInputDeviceProperty::~UColorInputDeviceProperty() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceColorCurveData;
class UScriptStruct* FDeviceColorCurveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceColorCurveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceColorCurveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceColorCurveData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceColorCurveData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceColorCurveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceColorCurveData>()
{
	return FDeviceColorCurveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAfterCompletion_MetaData[];
#endif
		static void NewProp_bResetAfterCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAfterCompletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceColorCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeviceColorCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data required for setting the Input Device Color */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Data required for setting the Input Device Color" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceColorCurveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** True if the light should be enabled at all */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "True if the light should be enabled at all" },
	};
#endif
	void Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDeviceColorCurveData*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDeviceColorCurveData), &Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If true, the light color will be reset to \"off\" after the curve values are finished evaluating. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "If true, the light color will be reset to \"off\" after the curve values are finished evaluating." },
	};
#endif
	void Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion_SetBit(void* Obj)
	{
		((FDeviceColorCurveData*)Obj)->bResetAfterCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion = { "bResetAfterCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDeviceColorCurveData), &Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_DeviceColorCurve_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color the device light should be */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The color the device light should be" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_DeviceColorCurve = { "DeviceColorCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceColorCurveData, DeviceColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_DeviceColorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_DeviceColorCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_DeviceColorCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DeviceColorCurveData",
		sizeof(FDeviceColorCurveData),
		alignof(FDeviceColorCurveData),
		Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorCurveData()
	{
		if (!Z_Registration_Info_UScriptStruct_DeviceColorCurveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceColorCurveData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeviceColorCurveData.InnerSingleton;
	}
	void UColorInputDeviceCurveProperty::StaticRegisterNativesUColorInputDeviceCurveProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorInputDeviceCurveProperty);
	UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty_NoRegister()
	{
		return UColorInputDeviceCurveProperty::StaticClass();
	}
	struct Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* A property that can be used to change the color of an input device's light over time with a curve\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Device Color (Curve)" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A property that can be used to change the color of an input device's light over time with a curve\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_ColorData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Default color data that will be used by default. Device Specific overrides will be used when the current input device matches */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Default color data that will be used by default. Device Specific overrides will be used when the current input device matches" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorInputDeviceCurveProperty, ColorData), Z_Construct_UScriptStruct_FDeviceColorCurveData, METADATA_PARAMS(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_ColorData_MetaData)) }; // 2036927309
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDeviceColorCurveData, METADATA_PARAMS(nullptr, 0) }; // 2036927309
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorInputDeviceCurveProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_MetaData)) }; // 2036927309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_ColorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorInputDeviceCurveProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::ClassParams = {
		&UColorInputDeviceCurveProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty()
	{
		if (!Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.OuterSingleton, Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UColorInputDeviceCurveProperty>()
	{
		return UColorInputDeviceCurveProperty::StaticClass();
	}
	UColorInputDeviceCurveProperty::UColorInputDeviceCurveProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorInputDeviceCurveProperty);
	UColorInputDeviceCurveProperty::~UColorInputDeviceCurveProperty() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData;
class UScriptStruct* FDeviceTriggerBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerBaseData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerBaseData>()
{
	return FDeviceTriggerBaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AffectedTriggers_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AffectedTriggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetUponCompletion_MetaData[];
#endif
		static void NewProp_bResetUponCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetUponCompletion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerEffect\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerEffect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerBaseData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** Which trigger this property should effect */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Which trigger this property should effect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers = { "AffectedTriggers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerBaseData, AffectedTriggers), Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers_MetaData)) }; // 879339053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** True if the triggers should be reset after the duration of this device property */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "True if the triggers should be reset after the duration of this device property" },
	};
#endif
	void Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion_SetBit(void* Obj)
	{
		((FDeviceTriggerBaseData*)Obj)->bResetUponCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion = { "bResetUponCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDeviceTriggerBaseData), &Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DeviceTriggerBaseData",
		sizeof(FDeviceTriggerBaseData),
		alignof(FDeviceTriggerBaseData),
		Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerBaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.InnerSingleton;
	}
	void UInputDeviceTriggerEffect::StaticRegisterNativesUInputDeviceTriggerEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerEffect);
	UClass* Z_Construct_UClass_UInputDeviceTriggerEffect_NoRegister()
	{
		return UInputDeviceTriggerEffect::StaticClass();
	}
	struct Z_Construct_UClass_UInputDeviceTriggerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTriggerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTriggerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A property that effect the triggers on a gamepad */" },
		{ "DisplayName", "Base Trigger Effect" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A property that effect the triggers on a gamepad" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::NewProp_BaseTriggerData_MetaData[] = {
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::NewProp_BaseTriggerData = { "BaseTriggerData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceTriggerEffect, BaseTriggerData), Z_Construct_UScriptStruct_FDeviceTriggerBaseData, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::NewProp_BaseTriggerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::NewProp_BaseTriggerData_MetaData)) }; // 313142867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::NewProp_BaseTriggerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::ClassParams = {
		&UInputDeviceTriggerEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::PropPointers),
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDeviceTriggerEffect()
	{
		if (!Z_Registration_Info_UClass_UInputDeviceTriggerEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerEffect.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputDeviceTriggerEffect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerEffect>()
	{
		return UInputDeviceTriggerEffect::StaticClass();
	}
	UInputDeviceTriggerEffect::UInputDeviceTriggerEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerEffect);
	UInputDeviceTriggerEffect::~UInputDeviceTriggerEffect() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData;
class UScriptStruct* FDeviceTriggerFeedbackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerFeedbackData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerFeedbackData>()
{
	return FDeviceTriggerFeedbackData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackPositionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FeedbackPositionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackStrenghCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FeedbackStrenghCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerFeedbackProperty\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerFeedbackProperty" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerFeedbackData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackPositionCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** What position on the trigger that the feedback should be applied to over time (1-9) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "What position on the trigger that the feedback should be applied to over time (1-9)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackPositionCurve = { "FeedbackPositionCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerFeedbackData, FeedbackPositionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackPositionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackPositionCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackStrenghCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** How strong the feedback is over time (1-8) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "How strong the feedback is over time (1-8)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackStrenghCurve = { "FeedbackStrenghCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerFeedbackData, FeedbackStrenghCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackStrenghCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackStrenghCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackPositionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackStrenghCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DeviceTriggerFeedbackData",
		sizeof(FDeviceTriggerFeedbackData),
		alignof(FDeviceTriggerFeedbackData),
		Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData()
	{
		if (!Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.InnerSingleton;
	}
	void UInputDeviceTriggerFeedbackProperty::StaticRegisterNativesUInputDeviceTriggerFeedbackProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerFeedbackProperty);
	UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_NoRegister()
	{
		return UInputDeviceTriggerFeedbackProperty::StaticClass();
	}
	struct Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDeviceTriggerEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Sets simple trigger feedback\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Trigger Feedback" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Sets simple trigger feedback\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_TriggerData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** What position on the trigger that the feedback should be applied to over time (1-9) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "What position on the trigger that the feedback should be applied to over time (1-9)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceTriggerFeedbackProperty, TriggerData), Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_TriggerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_TriggerData_MetaData)) }; // 570370967
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData, METADATA_PARAMS(nullptr, 0) }; // 570370967
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceTriggerFeedbackProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_MetaData)) }; // 570370967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_TriggerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerFeedbackProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::ClassParams = {
		&UInputDeviceTriggerFeedbackProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty()
	{
		if (!Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerFeedbackProperty>()
	{
		return UInputDeviceTriggerFeedbackProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerFeedbackProperty);
	UInputDeviceTriggerFeedbackProperty::~UInputDeviceTriggerFeedbackProperty() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData;
class UScriptStruct* FDeviceTriggerTriggerResistanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerTriggerResistanceData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerTriggerResistanceData>()
{
	return FDeviceTriggerTriggerResistanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartStrengh_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartStrengh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndStrengh_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrengh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerResistanceProperty\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerResistanceProperty" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerTriggerResistanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The position that the trigger should start providing resistance */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The position that the trigger should start providing resistance" },
		{ "UIMAX", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartStrengh_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** How strong the resistance is */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "How strong the resistance is" },
		{ "UIMAX", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartStrengh = { "StartStrengh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, StartStrengh), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartStrengh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartStrengh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndPosition_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "UIMAX", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, EndPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndStrengh_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "UIMAX", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndStrengh = { "EndStrengh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, EndStrengh), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndStrengh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndStrengh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartStrengh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndStrengh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DeviceTriggerTriggerResistanceData",
		sizeof(FDeviceTriggerTriggerResistanceData),
		alignof(FDeviceTriggerTriggerResistanceData),
		Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.InnerSingleton;
	}
	void UInputDeviceTriggerResistanceProperty::StaticRegisterNativesUInputDeviceTriggerResistanceProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerResistanceProperty);
	UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_NoRegister()
	{
		return UInputDeviceTriggerResistanceProperty::StaticClass();
	}
	struct Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDeviceTriggerEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Provides linear resistance to a trigger while it is being pressed between a start and end value\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Trigger Resistance" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Provides linear resistance to a trigger while it is being pressed between a start and end value\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_TriggerData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceTriggerResistanceProperty, TriggerData), Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_TriggerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_TriggerData_MetaData)) }; // 1210073036
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData, METADATA_PARAMS(nullptr, 0) }; // 1210073036
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceTriggerResistanceProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_MetaData)) }; // 1210073036
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_TriggerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerResistanceProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::ClassParams = {
		&UInputDeviceTriggerResistanceProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty()
	{
		if (!Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerResistanceProperty>()
	{
		return UInputDeviceTriggerResistanceProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerResistanceProperty);
	UInputDeviceTriggerResistanceProperty::~UInputDeviceTriggerResistanceProperty() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData;
class UScriptStruct* FDeviceTriggerTriggerVibrationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerTriggerVibrationData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerTriggerVibrationData>()
{
	return FDeviceTriggerTriggerVibrationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerPositionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TriggerPositionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VibrationFrequencyCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VibrationFrequencyCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VibrationAmplitudeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VibrationAmplitudeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerVibrationProperty\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerVibrationProperty" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerTriggerVibrationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_TriggerPositionCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** What position on the trigger that the feedback should be applied to over time (1-9) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "What position on the trigger that the feedback should be applied to over time (1-9)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_TriggerPositionCurve = { "TriggerPositionCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerTriggerVibrationData, TriggerPositionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_TriggerPositionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_TriggerPositionCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationFrequencyCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The frequency of the vibration */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The frequency of the vibration" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationFrequencyCurve = { "VibrationFrequencyCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerTriggerVibrationData, VibrationFrequencyCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationFrequencyCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationFrequencyCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationAmplitudeCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The amplitude of the vibration */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The amplitude of the vibration" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationAmplitudeCurve = { "VibrationAmplitudeCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceTriggerTriggerVibrationData, VibrationAmplitudeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationAmplitudeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationAmplitudeCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_TriggerPositionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationFrequencyCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationAmplitudeCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DeviceTriggerTriggerVibrationData",
		sizeof(FDeviceTriggerTriggerVibrationData),
		alignof(FDeviceTriggerTriggerVibrationData),
		Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData()
	{
		if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.InnerSingleton;
	}
	void UInputDeviceTriggerVibrationProperty::StaticRegisterNativesUInputDeviceTriggerVibrationProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerVibrationProperty);
	UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_NoRegister()
	{
		return UInputDeviceTriggerVibrationProperty::StaticClass();
	}
	struct Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDeviceTriggerEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Sets trigger vibration\n*\n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Trigger Vibration" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Sets trigger vibration\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_TriggerData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceTriggerVibrationProperty, TriggerData), Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_TriggerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_TriggerData_MetaData)) }; // 3763815811
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData, METADATA_PARAMS(nullptr, 0) }; // 3763815811
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceTriggerVibrationProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_MetaData)) }; // 3763815811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_TriggerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerVibrationProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::ClassParams = {
		&UInputDeviceTriggerVibrationProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty()
	{
		if (!Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerVibrationProperty>()
	{
		return UInputDeviceTriggerVibrationProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerVibrationProperty);
	UInputDeviceTriggerVibrationProperty::~UInputDeviceTriggerVibrationProperty() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioBasedVibrationData;
class UScriptStruct* FAudioBasedVibrationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioBasedVibrationData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioBasedVibrationData"));
	}
	return Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioBasedVibrationData>()
{
	return FAudioBasedVibrationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioBasedVibrationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The sound to play on the gamepad. Make sure the set the sound's submix sends to the gamepad audio and vibration endpoints! */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The sound to play on the gamepad. Make sure the set the sound's submix sends to the gamepad audio and vibration endpoints!" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioBasedVibrationData, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewProp_Sound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioBasedVibrationData",
		sizeof(FAudioBasedVibrationData),
		alignof(FAudioBasedVibrationData),
		Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioBasedVibrationData()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.InnerSingleton, Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.InnerSingleton;
	}
	void UInputDeviceAudioBasedVibrationProperty::StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceAudioBasedVibrationProperty);
	UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_NoRegister()
	{
		return UInputDeviceAudioBasedVibrationProperty::StaticClass();
	}
	struct Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Plays a sound to an input device's speaker. On platforms that support it, this sound will be played\n * in the form of a vibration where the left and right audio channels represent the left and right side\n * of the controller.\n */" },
		{ "DisplayName", "Audio Based Vibration (Experimental)" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Plays a sound to an input device's speaker. On platforms that support it, this sound will be played\nin the form of a vibration where the left and right audio channels represent the left and right side\nof the controller." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceAudioBasedVibrationProperty, Data), Z_Construct_UScriptStruct_FAudioBasedVibrationData, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_Data_MetaData)) }; // 1757207300
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAudioBasedVibrationData, METADATA_PARAMS(nullptr, 0) }; // 1757207300
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputDeviceAudioBasedVibrationProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_MetaData)) }; // 1757207300
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceAudioBasedVibrationProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::ClassParams = {
		&UInputDeviceAudioBasedVibrationProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty()
	{
		if (!Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputDeviceAudioBasedVibrationProperty>()
	{
		return UInputDeviceAudioBasedVibrationProperty::StaticClass();
	}
	UInputDeviceAudioBasedVibrationProperty::UInputDeviceAudioBasedVibrationProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceAudioBasedVibrationProperty);
	UInputDeviceAudioBasedVibrationProperty::~UInputDeviceAudioBasedVibrationProperty() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ScriptStructInfo[] = {
		{ FDeviceColorData::StaticStruct, Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewStructOps, TEXT("DeviceColorData"), &Z_Registration_Info_UScriptStruct_DeviceColorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceColorData), 1060196497U) },
		{ FDeviceColorCurveData::StaticStruct, Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewStructOps, TEXT("DeviceColorCurveData"), &Z_Registration_Info_UScriptStruct_DeviceColorCurveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceColorCurveData), 2036927309U) },
		{ FDeviceTriggerBaseData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewStructOps, TEXT("DeviceTriggerBaseData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerBaseData), 313142867U) },
		{ FDeviceTriggerFeedbackData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewStructOps, TEXT("DeviceTriggerFeedbackData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerFeedbackData), 570370967U) },
		{ FDeviceTriggerTriggerResistanceData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewStructOps, TEXT("DeviceTriggerTriggerResistanceData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerTriggerResistanceData), 1210073036U) },
		{ FDeviceTriggerTriggerVibrationData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewStructOps, TEXT("DeviceTriggerTriggerVibrationData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerTriggerVibrationData), 3763815811U) },
		{ FAudioBasedVibrationData::StaticStruct, Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewStructOps, TEXT("AudioBasedVibrationData"), &Z_Registration_Info_UScriptStruct_AudioBasedVibrationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioBasedVibrationData), 1757207300U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputDeviceProperty, UInputDeviceProperty::StaticClass, TEXT("UInputDeviceProperty"), &Z_Registration_Info_UClass_UInputDeviceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceProperty), 1017784486U) },
		{ Z_Construct_UClass_UColorInputDeviceProperty, UColorInputDeviceProperty::StaticClass, TEXT("UColorInputDeviceProperty"), &Z_Registration_Info_UClass_UColorInputDeviceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorInputDeviceProperty), 2079452366U) },
		{ Z_Construct_UClass_UColorInputDeviceCurveProperty, UColorInputDeviceCurveProperty::StaticClass, TEXT("UColorInputDeviceCurveProperty"), &Z_Registration_Info_UClass_UColorInputDeviceCurveProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorInputDeviceCurveProperty), 357992547U) },
		{ Z_Construct_UClass_UInputDeviceTriggerEffect, UInputDeviceTriggerEffect::StaticClass, TEXT("UInputDeviceTriggerEffect"), &Z_Registration_Info_UClass_UInputDeviceTriggerEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerEffect), 3149560931U) },
		{ Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty, UInputDeviceTriggerFeedbackProperty::StaticClass, TEXT("UInputDeviceTriggerFeedbackProperty"), &Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerFeedbackProperty), 3995870171U) },
		{ Z_Construct_UClass_UInputDeviceTriggerResistanceProperty, UInputDeviceTriggerResistanceProperty::StaticClass, TEXT("UInputDeviceTriggerResistanceProperty"), &Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerResistanceProperty), 1900820322U) },
		{ Z_Construct_UClass_UInputDeviceTriggerVibrationProperty, UInputDeviceTriggerVibrationProperty::StaticClass, TEXT("UInputDeviceTriggerVibrationProperty"), &Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerVibrationProperty), 2093680158U) },
		{ Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty, UInputDeviceAudioBasedVibrationProperty::StaticClass, TEXT("UInputDeviceAudioBasedVibrationProperty"), &Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceAudioBasedVibrationProperty), 2332015563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_597222994(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
