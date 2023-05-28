// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRFunctionLibrary();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRFunctionLibrary_NoRegister();
	STEAMVR_API UEnum* Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType();
	UPackage* Z_Construct_UPackage__Script_SteamVR();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType;
	static UEnum* ESteamVRTrackedDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType, (UObject*)Z_Construct_UPackage__Script_SteamVR(), TEXT("ESteamVRTrackedDeviceType"));
		}
		return Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType.OuterSingleton;
	}
	template<> STEAMVR_API UEnum* StaticEnum<ESteamVRTrackedDeviceType>()
	{
		return ESteamVRTrackedDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::Enumerators[] = {
		{ "ESteamVRTrackedDeviceType::Controller", (int64)ESteamVRTrackedDeviceType::Controller },
		{ "ESteamVRTrackedDeviceType::TrackingReference", (int64)ESteamVRTrackedDeviceType::TrackingReference },
		{ "ESteamVRTrackedDeviceType::Other", (int64)ESteamVRTrackedDeviceType::Other },
		{ "ESteamVRTrackedDeviceType::Invalid", (int64)ESteamVRTrackedDeviceType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines the class of tracked devices in SteamVR*/" },
		{ "Controller.Comment", "/** Represents a Steam VR Controller */" },
		{ "Controller.Name", "ESteamVRTrackedDeviceType::Controller" },
		{ "Controller.ToolTip", "Represents a Steam VR Controller" },
		{ "Invalid.Comment", "/** DeviceId is invalid */" },
		{ "Invalid.Name", "ESteamVRTrackedDeviceType::Invalid" },
		{ "Invalid.ToolTip", "DeviceId is invalid" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "Other.Comment", "/** Misc. device types, for future expansion */" },
		{ "Other.Name", "ESteamVRTrackedDeviceType::Other" },
		{ "Other.ToolTip", "Misc. device types, for future expansion" },
		{ "ToolTip", "Defines the class of tracked devices in SteamVR" },
		{ "TrackingReference.Comment", "/** Represents a static tracking reference device, such as a Lighthouse or tracking camera */" },
		{ "TrackingReference.Name", "ESteamVRTrackedDeviceType::TrackingReference" },
		{ "TrackingReference.ToolTip", "Represents a static tracking reference device, such as a Lighthouse or tracking camera" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVR,
		nullptr,
		"ESteamVRTrackedDeviceType",
		"ESteamVRTrackedDeviceType",
		Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType.InnerSingleton, Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType.InnerSingleton;
	}
	DEFINE_FUNCTION(USteamVRFunctionLibrary::execGetHandPositionAndOrientation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRFunctionLibrary::GetHandPositionAndOrientation(Z_Param_ControllerIndex,EControllerHand(Z_Param_Hand),Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRFunctionLibrary::execGetTrackedDevicePositionAndOrientation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(Z_Param_DeviceId,Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamVRFunctionLibrary::execGetValidTrackedDeviceIds)
	{
		P_GET_ENUM(ESteamVRTrackedDeviceType,Z_Param_DeviceType);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutTrackedDeviceIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamVRFunctionLibrary::GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType(Z_Param_DeviceType),Z_Param_Out_OutTrackedDeviceIds);
		P_NATIVE_END;
	}
	void USteamVRFunctionLibrary::StaticRegisterNativesUSteamVRFunctionLibrary()
	{
		UClass* Class = USteamVRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandPositionAndOrientation", &USteamVRFunctionLibrary::execGetHandPositionAndOrientation },
			{ "GetTrackedDevicePositionAndOrientation", &USteamVRFunctionLibrary::execGetTrackedDevicePositionAndOrientation },
			{ "GetValidTrackedDeviceIds", &USteamVRFunctionLibrary::execGetValidTrackedDeviceIds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics
	{
		struct SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms
		{
			int32 ControllerIndex;
			EControllerHand Hand;
			FVector OutPosition;
			FRotator OutOrientation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms, OutOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms), &Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_OutOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09 * Given a controller index and a hand, returns the position and orientation of the controller\n\x09 *\n\x09 * @param\x09""ControllerIndex\x09Index of the controller to get the tracked device ID for\n\x09 * @param\x09Hand\x09\x09\x09Which hand's controller to get the position and orientation for\n\x09 * @param\x09OutPosition\x09\x09(out) Current position of the device\n\x09 * @param\x09OutRotation\x09\x09(out) Current rotation of the device\n\x09 * @return\x09True if the specified controller index has a valid tracked device ID\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use motion controller components instead" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "Given a controller index and a hand, returns the position and orientation of the controller\n\n@param       ControllerIndex Index of the controller to get the tracked device ID for\n@param       Hand                    Which hand's controller to get the position and orientation for\n@param       OutPosition             (out) Current position of the device\n@param       OutRotation             (out) Current rotation of the device\n@return      True if the specified controller index has a valid tracked device ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRFunctionLibrary, nullptr, "GetHandPositionAndOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::SteamVRFunctionLibrary_eventGetHandPositionAndOrientation_Parms), Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics
	{
		struct SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms
		{
			int32 DeviceId;
			FVector OutPosition;
			FRotator OutOrientation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms, OutOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms), &Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_OutOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09 * Gets the orientation and position (in device space) of the device with the specified ID\n\x09 *\n\x09 * @param\x09""DeviceId\x09\x09Id of the device to get tracking info for\n\x09 * @param\x09OutPosition\x09\x09(out) Current position of the device\n\x09 * @param\x09OutOrientation\x09(out) Current orientation of the device\n\x09 * @return\x09True if the specified device id had a valid tracking pose this frame, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "Gets the orientation and position (in device space) of the device with the specified ID\n\n@param       DeviceId                Id of the device to get tracking info for\n@param       OutPosition             (out) Current position of the device\n@param       OutOrientation  (out) Current orientation of the device\n@return      True if the specified device id had a valid tracking pose this frame, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRFunctionLibrary, nullptr, "GetTrackedDevicePositionAndOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::SteamVRFunctionLibrary_eventGetTrackedDevicePositionAndOrientation_Parms), Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics
	{
		struct SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms
		{
			ESteamVRTrackedDeviceType DeviceType;
			TArray<int32> OutTrackedDeviceIds;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutTrackedDeviceIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTrackedDeviceIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms, DeviceType), Z_Construct_UEnum_SteamVR_ESteamVRTrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 2171152094
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds_Inner = { "OutTrackedDeviceIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds = { "OutTrackedDeviceIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms, OutTrackedDeviceIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::NewProp_OutTrackedDeviceIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09 * Returns an array of the currently tracked device IDs\n\x09 *\n\x09 * @param\x09""DeviceType\x09Which class of device (e.g. controller, tracking devices) to get Device Ids for\n\x09 * @param\x09OutTrackedDeviceIds\x09(out) Array containing the ID of each device that's currently tracked\n\x09 */" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "Returns an array of the currently tracked device IDs\n\n@param       DeviceType      Which class of device (e.g. controller, tracking devices) to get Device Ids for\n@param       OutTrackedDeviceIds     (out) Array containing the ID of each device that's currently tracked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRFunctionLibrary, nullptr, "GetValidTrackedDeviceIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::SteamVRFunctionLibrary_eventGetValidTrackedDeviceIds_Parms), Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamVRFunctionLibrary);
	UClass* Z_Construct_UClass_USteamVRFunctionLibrary_NoRegister()
	{
		return USteamVRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRFunctionLibrary_GetHandPositionAndOrientation, "GetHandPositionAndOrientation" }, // 2666128326
		{ &Z_Construct_UFunction_USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation, "GetTrackedDevicePositionAndOrientation" }, // 318617108
		{ &Z_Construct_UFunction_USteamVRFunctionLibrary_GetValidTrackedDeviceIds, "GetValidTrackedDeviceIds" }, // 4089122218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SteamVR Extensions Function Library\n */" },
		{ "IncludePath", "SteamVRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/SteamVRFunctionLibrary.h" },
		{ "ToolTip", "SteamVR Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamVRFunctionLibrary_Statics::ClassParams = {
		&USteamVRFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamVRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USteamVRFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamVRFunctionLibrary.OuterSingleton, Z_Construct_UClass_USteamVRFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamVRFunctionLibrary.OuterSingleton;
	}
	template<> STEAMVR_API UClass* StaticClass<USteamVRFunctionLibrary>()
	{
		return USteamVRFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRFunctionLibrary);
	USteamVRFunctionLibrary::~USteamVRFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_Statics::EnumInfo[] = {
		{ ESteamVRTrackedDeviceType_StaticEnum, TEXT("ESteamVRTrackedDeviceType"), &Z_Registration_Info_UEnum_ESteamVRTrackedDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2171152094U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamVRFunctionLibrary, USteamVRFunctionLibrary::StaticClass, TEXT("USteamVRFunctionLibrary"), &Z_Registration_Info_UClass_USteamVRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamVRFunctionLibrary), 2833230077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_4212277351(TEXT("/Script/SteamVR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
