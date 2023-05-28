// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrackedDeviceFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrackedDeviceFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execIsMotionSourceTracking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(Z_Param_PlayerIndex,Z_Param_SourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execGetActiveTrackingSystemName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execEnumerateMotionSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfControllersForPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfAllControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingForComponent)
	{
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(Z_Param_MotionControllerComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(Z_Param_PlayerIndex,Z_Param_SourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingForComponent)
	{
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(Z_Param_MotionControllerComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(Z_Param_PlayerIndex,Z_Param_SourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForComponent)
	{
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionControllerComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(Z_Param_MotionControllerComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(Z_Param_PlayerIndex,Z_Param_SourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(Z_Param_PlayerIndex,EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execGetMotionTrackingEnabledControllerCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execGetMaximumMotionTrackedControllerCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execSetIsControllerMotionTrackingEnabledByDefault)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackedDeviceCountManagementNecessary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary();
		P_NATIVE_END;
	}
	void UMotionTrackedDeviceFunctionLibrary::StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary()
	{
		UClass* Class = UMotionTrackedDeviceFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableMotionTrackingForComponent", &UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingForComponent },
			{ "DisableMotionTrackingOfAllControllers", &UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfAllControllers },
			{ "DisableMotionTrackingOfControllersForPlayer", &UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfControllersForPlayer },
			{ "DisableMotionTrackingOfDevice", &UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfDevice },
			{ "DisableMotionTrackingOfSource", &UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfSource },
			{ "EnableMotionTrackingForComponent", &UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingForComponent },
			{ "EnableMotionTrackingOfDevice", &UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfDevice },
			{ "EnableMotionTrackingOfSource", &UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfSource },
			{ "EnumerateMotionSources", &UMotionTrackedDeviceFunctionLibrary::execEnumerateMotionSources },
			{ "GetActiveTrackingSystemName", &UMotionTrackedDeviceFunctionLibrary::execGetActiveTrackingSystemName },
			{ "GetMaximumMotionTrackedControllerCount", &UMotionTrackedDeviceFunctionLibrary::execGetMaximumMotionTrackedControllerCount },
			{ "GetMotionTrackingEnabledControllerCount", &UMotionTrackedDeviceFunctionLibrary::execGetMotionTrackingEnabledControllerCount },
			{ "IsMotionSourceTracking", &UMotionTrackedDeviceFunctionLibrary::execIsMotionSourceTracking },
			{ "IsMotionTrackedDeviceCountManagementNecessary", &UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackedDeviceCountManagementNecessary },
			{ "IsMotionTrackingEnabledForComponent", &UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForComponent },
			{ "IsMotionTrackingEnabledForDevice", &UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForDevice },
			{ "IsMotionTrackingEnabledForSource", &UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForSource },
			{ "SetIsControllerMotionTrackingEnabledByDefault", &UMotionTrackedDeviceFunctionLibrary::execSetIsControllerMotionTrackingEnabledByDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms
		{
			const UMotionControllerComponent* MotionControllerComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent = { "MotionControllerComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Disable tracking of the specified controller, by player index and tracked device type.\n\x09*\n\x09* @param MotionControllerComponent\x09\x09(in) The motion controller component who's associated device is targeted.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Disable tracking of the specified controller, by player index and tracked device type.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "DisableMotionTrackingForComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Disable tracking for all controllers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Disable tracking for all controllers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "DisableMotionTrackingOfAllControllers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Disable tracking for all controllers associated with the specified player.\n\x09*\n\x09* @param PlayerIndex\x09\x09\x09\x09\x09(in) The index of the player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Disable tracking for all controllers associated with the specified player.\n\n@param PlayerIndex                                    (in) The index of the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "DisableMotionTrackingOfControllersForPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Disable tracking of the specified controller, by player index and tracked device type.\n\x09 *\n\x09 * @param PlayerIndex\x09\x09\x09\x09\x09(in) The index of the player.\n\x09 * @param Hand\x09\x09\x09\x09\x09\x09\x09(in) The tracked device type.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "EControllerHand has been deprecated, please use DisableMotionTrackingOfSource instead." },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Disable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The tracked device type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "DisableMotionTrackingOfDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfSource_Parms
		{
			int32 PlayerIndex;
			FName SourceName;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfSource_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfSource_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::NewProp_SourceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Disable tracking of the specified controller, by player index and tracked device type.\n\x09 *\n\x09 * @param PlayerIndex\x09\x09\x09\x09\x09(in) The index of the player.\n\x09 * @param SourceName\x09\x09\x09\x09\x09(in) The tracked device id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Disable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param SourceName                                    (in) The tracked device id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "DisableMotionTrackingOfSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfSource_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms
		{
			UMotionControllerComponent* MotionControllerComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent = { "MotionControllerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent_MetaData)) };
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_MotionControllerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Enable tracking of the specified controller, by player index and tracked device type.\n\x09*\n\x09* @param MotionControllerComponent\x09\x09(in) The motion controller component who's associated device is targeted.\n\x09*\n\x09* @return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Enable tracking of the specified controller, by player index and tracked device type.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted.\n\n@return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "EnableMotionTrackingForComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Enable tracking of the specified controller, by player index and tracked device type.\n\x09 *\n\x09 * @param PlayerIndex\x09\x09\x09\x09\x09(in) The index of the player.\n\x09 * @param Hand\x09\x09\x09\x09\x09\x09\x09(in) The device type.\n\x09 *\n\x09 * @return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "EControllerHand has been deprecated, please use EnableMotionTrackingOfSource instead." },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Enable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The device type.\n\n@return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "EnableMotionTrackingOfDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfSource_Parms
		{
			int32 PlayerIndex;
			FName SourceName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfSource_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfSource_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfSource_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Enable tracking of the specified controller, by player index and tracked device type.\n\x09 *\n\x09 * @param PlayerIndex\x09\x09\x09\x09\x09(in) The index of the player.\n\x09 * @param SourceName\x09\x09\x09\x09\x09(in) The device id.\n\x09 *\n\x09 * @return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Enable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param SourceName                                    (in) The device id.\n\n@return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "EnableMotionTrackingOfSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfSource_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnumerateMotionSources_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnumerateMotionSources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Returns a list of all available motion sources (FNames associated with \n\x09 * discrete tracking data that can be used to drive MotionControllerComponents).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns a list of all available motion sources (FNames associated with\ndiscrete tracking data that can be used to drive MotionControllerComponents)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "EnumerateMotionSources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::MotionTrackedDeviceFunctionLibrary_eventEnumerateMotionSources_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventGetActiveTrackingSystemName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventGetActiveTrackingSystemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Returns the system name used to distinguish the current tracking system.\n\x09 * If no XR tracking system is active, then the name 'None' is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns the system name used to distinguish the current tracking system.\nIf no XR tracking system is active, then the name 'None' is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "GetActiveTrackingSystemName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::MotionTrackedDeviceFunctionLibrary_eventGetActiveTrackingSystemName_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Get the maximum number of controllers that can be tracked.\n\x09*\n\x09* @return (int) number of controllers that can be tracked, or -1 if there is no limit (IsMotionTrackedDeviceCountManagementNecessary() should return false).\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Get the maximum number of controllers that can be tracked.\n\n@return (int) number of controllers that can be tracked, or -1 if there is no limit (IsMotionTrackedDeviceCountManagementNecessary() should return false)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "GetMaximumMotionTrackedControllerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Get the number of controllers for which tracking is enabled.\n\x09*\n\x09* @return (int) number of controllers tracked now, or -1 if this query is unsupported (IsMotionTrackedDeviceCountManagementNecessary() should return false).\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Get the number of controllers for which tracking is enabled.\n\n@return (int) number of controllers tracked now, or -1 if this query is unsupported (IsMotionTrackedDeviceCountManagementNecessary() should return false)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "GetMotionTrackingEnabledControllerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionSourceTracking_Parms
		{
			int32 PlayerIndex;
			FName SourceName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionSourceTracking_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionSourceTracking_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventIsMotionSourceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionSourceTracking_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Queries the specified source's tracking status and returns true if it has tracking.\n\x09 *\n\x09 * @return Tracking status of the specified controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Queries the specified source's tracking status and returns true if it has tracking.\n\n@return Tracking status of the specified controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "IsMotionSourceTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::MotionTrackedDeviceFunctionLibrary_eventIsMotionSourceTracking_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Returns true if it is necessary for the game to manage how many motion tracked devices it is asking to be tracked simultaneously.\n\x09* On some platforms this is unnecessary because all supported devices can be tracked simultaneously.\n\x09*\n\x09* @return (Boolean) true if the game might need to manage which motion tracked devices are actively tracked.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns true if it is necessary for the game to manage how many motion tracked devices it is asking to be tracked simultaneously.\nOn some platforms this is unnecessary because all supported devices can be tracked simultaneously.\n\n@return (Boolean) true if the game might need to manage which motion tracked devices are actively tracked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "IsMotionTrackedDeviceCountManagementNecessary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms
		{
			const UMotionControllerComponent* MotionControllerComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_MotionControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_MotionControllerComponent = { "MotionControllerComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_MotionControllerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_MotionControllerComponent_MetaData)) };
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_MotionControllerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Returns true if tracking is enabled for the specified device.\n\x09*\n\x09* @param MotionControllerComponent\x09\x09(in) The motion controller component who's associated device is targeted.\n\x09*\n\x09* @return (Boolean) true if the specified device is set to be tracked.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns true if tracking is enabled for the specified device.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted.\n\n@return (Boolean) true if the specified device is set to be tracked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "IsMotionTrackingEnabledForComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Returns true if tracking is enabled for the specified device.\n\x09 *\n\x09 * @param PlayerIndex\x09\x09\x09\x09\x09(in) The index of the player.\n\x09 * @param Hand\x09\x09\x09\x09\x09\x09\x09(in) The tracked device type.\n\x09 *\n\x09 * @return (Boolean) true if the specified device is set to be tracked.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "EControllerHand has been deprecated, please use IsMotionTrackingEnabledForSource instead." },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns true if tracking is enabled for the specified device.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The tracked device type.\n\n@return (Boolean) true if the specified device is set to be tracked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "IsMotionTrackingEnabledForDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForSource_Parms
		{
			int32 PlayerIndex;
			FName SourceName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForSource_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForSource_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForSource_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09 * Returns true if tracking is enabled for the specified device.\n\x09 *\n\x09 * @param PlayerIndex\x09\x09\x09\x09\x09(in) The index of the player.\n\x09 * @param SourceName\x09\x09\x09\x09\x09(in) The tracked device id.\n\x09 *\n\x09 * @return (Boolean) true if the specified device is set to be tracked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Returns true if tracking is enabled for the specified device.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param SourceName                                    (in) The tracked device id.\n\n@return (Boolean) true if the specified device is set to be tracked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "IsMotionTrackingEnabledForSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForSource_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics
	{
		struct MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms), &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/**\n\x09* Set whether motion tracked controllers activate on creation by default, or do not and must be explicitly activated.\n\x09*\n\x09* @param Require\x09\x09\x09\x09\x09(in) True means controllers are enabled by default.  Enables beyond the controller count limit will fail.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
		{ "ToolTip", "Set whether motion tracked controllers activate on creation by default, or do not and must be explicitly activated.\n\n@param Require                                        (in) True means controllers are enabled by default.  Enables beyond the controller count limit will fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, nullptr, "SetIsControllerMotionTrackingEnabledByDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms), Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionTrackedDeviceFunctionLibrary);
	UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister()
	{
		return UMotionTrackedDeviceFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent, "DisableMotionTrackingForComponent" }, // 274436913
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers, "DisableMotionTrackingOfAllControllers" }, // 1074378128
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer, "DisableMotionTrackingOfControllersForPlayer" }, // 3398587826
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice, "DisableMotionTrackingOfDevice" }, // 3315357852
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource, "DisableMotionTrackingOfSource" }, // 1045193189
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent, "EnableMotionTrackingForComponent" }, // 3353851915
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice, "EnableMotionTrackingOfDevice" }, // 1696550929
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource, "EnableMotionTrackingOfSource" }, // 1649984405
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources, "EnumerateMotionSources" }, // 1855365607
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName, "GetActiveTrackingSystemName" }, // 1259625181
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount, "GetMaximumMotionTrackedControllerCount" }, // 3026309820
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount, "GetMotionTrackingEnabledControllerCount" }, // 230719285
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking, "IsMotionSourceTracking" }, // 3395148391
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary, "IsMotionTrackedDeviceCountManagementNecessary" }, // 4246596451
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent, "IsMotionTrackingEnabledForComponent" }, // 2890904435
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice, "IsMotionTrackingEnabledForDevice" }, // 3014525507
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource, "IsMotionTrackingEnabledForSource" }, // 1421699300
		{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault, "SetIsControllerMotionTrackingEnabledByDefault" }, // 892768899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotionTrackedDeviceFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionTrackedDeviceFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::ClassParams = {
		&UMotionTrackedDeviceFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UMotionTrackedDeviceFunctionLibrary>()
	{
		return UMotionTrackedDeviceFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrackedDeviceFunctionLibrary);
	UMotionTrackedDeviceFunctionLibrary::~UMotionTrackedDeviceFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, UMotionTrackedDeviceFunctionLibrary::StaticClass, TEXT("UMotionTrackedDeviceFunctionLibrary"), &Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionTrackedDeviceFunctionLibrary), 3096439267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_749940337(TEXT("/Script/HeadMountedDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionTrackedDeviceFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
