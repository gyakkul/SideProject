// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRAssetFunctionLibrary.h"
#include "IIdentifiableXRDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRAssetFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRAssetFunctionLibrary();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRAssetFunctionLibrary_NoRegister();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	DEFINE_FUNCTION(UXRAssetFunctionLibrary::execAddNamedDeviceVisualizationComponentBlocking)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_PROPERTY(FNameProperty,Z_Param_SystemName);
		P_GET_PROPERTY(FNameProperty,Z_Param_DeviceName);
		P_GET_UBOOL(Z_Param_bManualAttachment);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(Z_Param_Target,Z_Param_SystemName,Z_Param_DeviceName,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_Out_XRDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRAssetFunctionLibrary::execAddDeviceVisualizationComponentBlocking)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_GET_UBOOL(Z_Param_bManualAttachment);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(Z_Param_Target,Z_Param_Out_XRDeviceId,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform);
		P_NATIVE_END;
	}
	void UXRAssetFunctionLibrary::StaticRegisterNativesUXRAssetFunctionLibrary()
	{
		UClass* Class = UXRAssetFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDeviceVisualizationComponentBlocking", &UXRAssetFunctionLibrary::execAddDeviceVisualizationComponentBlocking },
			{ "AddNamedDeviceVisualizationComponentBlocking", &UXRAssetFunctionLibrary::execAddNamedDeviceVisualizationComponentBlocking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics
	{
		struct XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms
		{
			AActor* Target;
			FXRDeviceId XRDeviceId;
			bool bManualAttachment;
			FTransform RelativeTransform;
			UPrimitiveComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static void NewProp_bManualAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_XRDeviceId_MetaData)) }; // 2390384735
	void Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
	{
		((XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms*)Obj)->bManualAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms), &Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_XRDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR|Devices" },
		{ "Comment", "/**\n\x09 * Spawns a render component for the specified XR device.\n\x09 *\n\x09 * NOTE: The associated XR system backend has to provide a model for this to\n\x09 *       work - if one is not available for the specific device, then this\n\x09 *       will fail and return an invalid (null) object.\n\x09 *\n\x09 * @param  Target\x09\x09\x09\x09The intended owner for the component to attach to.\n\x09 * @param  XRDeviceId\x09\x09\x09Specifies the device you're wanting a model for.\n\x09 * @param  bManualAttachment\x09If set, will leave the component unattached (mirror's the same option on the generic AddComponent node). When unset the component will attach to the actor's root.\n\x09 * @param  RelativeTransform\x09Specifies the component initial transform (relative to its attach parent).\n\x09 *\n\x09 * @return A new component representing the specified device (invalid/null if a model for the device doesn't exist).\n\x09 */" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
		{ "ToolTip", "Spawns a render component for the specified XR device.\n\nNOTE: The associated XR system backend has to provide a model for this to\n      work - if one is not available for the specific device, then this\n      will fail and return an invalid (null) object.\n\n@param  Target                               The intended owner for the component to attach to.\n@param  XRDeviceId                   Specifies the device you're wanting a model for.\n@param  bManualAttachment    If set, will leave the component unattached (mirror's the same option on the generic AddComponent node). When unset the component will attach to the actor's root.\n@param  RelativeTransform    Specifies the component initial transform (relative to its attach parent).\n\n@return A new component representing the specified device (invalid/null if a model for the device doesn't exist)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRAssetFunctionLibrary, nullptr, "AddDeviceVisualizationComponentBlocking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::XRAssetFunctionLibrary_eventAddDeviceVisualizationComponentBlocking_Parms), Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics
	{
		struct XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms
		{
			AActor* Target;
			FName SystemName;
			FName DeviceName;
			bool bManualAttachment;
			FTransform RelativeTransform;
			FXRDeviceId XRDeviceId;
			UPrimitiveComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SystemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
		static void NewProp_bManualAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_SystemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_SystemName = { "SystemName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms, SystemName), METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_SystemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_SystemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_DeviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms, DeviceName), METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_DeviceName_MetaData)) };
	void Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
	{
		((XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms*)Obj)->bManualAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms), &Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(nullptr, 0) }; // 2390384735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_SystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_bManualAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_XRDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR|Devices" },
		{ "Comment", "/**\n\x09 * Spawns a render component for the specified XR device.\n\x09 *\n\x09 * NOTE: The associated XR system backend has to provide a model for this to\n\x09 *       work - if one is not available for the specific device, then this\n\x09 *       will fail and return an invalid (null) object.\n\x09 *\n\x09 * @param  Target\x09\x09\x09\x09The intended owner for the component to attach to.\n\x09 * @param  SystemName\x09\x09\x09(optional) Targets a specific XR system (i.e. 'Oculus', 'SteamVR', etc.). If left as 'None', then the first system found that can render the device will be used.\n\x09 * @param  DeviceName\x09\x09\x09Source name of the specific device - expect the same names that the MotionControllerComponent's \"MotionSource\" field uses ('Left', 'Right', etc.).\n\x09 * @param  bManualAttachment\x09If set, will leave the component unattached (mirror's the same option on the generic AddComponent node). When unset the component will attach to the actor's root.\n\x09 * @param  RelativeTransform\x09Specifies the component initial transform (relative to its attach parent).\n\x09 *\n\x09 * @return A new component representing the specified device (invalid/null if a model for the device doesn't exist).\n\x09 */" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
		{ "ToolTip", "Spawns a render component for the specified XR device.\n\nNOTE: The associated XR system backend has to provide a model for this to\n      work - if one is not available for the specific device, then this\n      will fail and return an invalid (null) object.\n\n@param  Target                               The intended owner for the component to attach to.\n@param  SystemName                   (optional) Targets a specific XR system (i.e. 'Oculus', 'SteamVR', etc.). If left as 'None', then the first system found that can render the device will be used.\n@param  DeviceName                   Source name of the specific device - expect the same names that the MotionControllerComponent's \"MotionSource\" field uses ('Left', 'Right', etc.).\n@param  bManualAttachment    If set, will leave the component unattached (mirror's the same option on the generic AddComponent node). When unset the component will attach to the actor's root.\n@param  RelativeTransform    Specifies the component initial transform (relative to its attach parent).\n\n@return A new component representing the specified device (invalid/null if a model for the device doesn't exist)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRAssetFunctionLibrary, nullptr, "AddNamedDeviceVisualizationComponentBlocking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::XRAssetFunctionLibrary_eventAddNamedDeviceVisualizationComponentBlocking_Parms), Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRAssetFunctionLibrary);
	UClass* Z_Construct_UClass_UXRAssetFunctionLibrary_NoRegister()
	{
		return UXRAssetFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UXRAssetFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking, "AddDeviceVisualizationComponentBlocking" }, // 499840423
		{ &Z_Construct_UFunction_UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking, "AddNamedDeviceVisualizationComponentBlocking" }, // 3047807954
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* UXRAssetFunctionLibrary\n *****************************************************************************/" },
		{ "IncludePath", "XRAssetFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
		{ "ToolTip", "UXRAssetFunctionLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRAssetFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::ClassParams = {
		&UXRAssetFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRAssetFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UXRAssetFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRAssetFunctionLibrary.OuterSingleton, Z_Construct_UClass_UXRAssetFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRAssetFunctionLibrary.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UXRAssetFunctionLibrary>()
	{
		return UXRAssetFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRAssetFunctionLibrary);
	UXRAssetFunctionLibrary::~UXRAssetFunctionLibrary() {}
	struct Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics
	{
		struct _Script_HeadMountedDisplay_eventDeviceModelLoadedDelegate_Parms
		{
			const UPrimitiveComponent* LoadedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedComponent = { "LoadedComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HeadMountedDisplay_eventDeviceModelLoadedDelegate_Parms, LoadedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* UAsyncTask_LoadXRDeviceVisComponent\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
		{ "ToolTip", "UAsyncTask_LoadXRDeviceVisComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay, nullptr, "DeviceModelLoadedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::_Script_HeadMountedDisplay_eventDeviceModelLoadedDelegate_Parms), Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDeviceModelLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeviceModelLoadedDelegate, const UPrimitiveComponent* LoadedComponent)
{
	struct _Script_HeadMountedDisplay_eventDeviceModelLoadedDelegate_Parms
	{
		const UPrimitiveComponent* LoadedComponent;
	};
	_Script_HeadMountedDisplay_eventDeviceModelLoadedDelegate_Parms Parms;
	Parms.LoadedComponent=LoadedComponent;
	DeviceModelLoadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncTask_LoadXRDeviceVisComponent::execAddDeviceVisualizationComponentAsync)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_GET_UBOOL(Z_Param_bManualAttachment);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_NewComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncTask_LoadXRDeviceVisComponent**)Z_Param__Result=UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(Z_Param_Target,Z_Param_Out_XRDeviceId,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_Out_NewComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncTask_LoadXRDeviceVisComponent::execAddNamedDeviceVisualizationComponentAsync)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_PROPERTY(FNameProperty,Z_Param_SystemName);
		P_GET_PROPERTY(FNameProperty,Z_Param_DeviceName);
		P_GET_UBOOL(Z_Param_bManualAttachment);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RelativeTransform);
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_NewComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncTask_LoadXRDeviceVisComponent**)Z_Param__Result=UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(Z_Param_Target,Z_Param_SystemName,Z_Param_DeviceName,Z_Param_bManualAttachment,Z_Param_Out_RelativeTransform,Z_Param_Out_XRDeviceId,Z_Param_Out_NewComponent);
		P_NATIVE_END;
	}
	void UAsyncTask_LoadXRDeviceVisComponent::StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent()
	{
		UClass* Class = UAsyncTask_LoadXRDeviceVisComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDeviceVisualizationComponentAsync", &UAsyncTask_LoadXRDeviceVisComponent::execAddDeviceVisualizationComponentAsync },
			{ "AddNamedDeviceVisualizationComponentAsync", &UAsyncTask_LoadXRDeviceVisComponent::execAddNamedDeviceVisualizationComponentAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics
	{
		struct AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms
		{
			AActor* Target;
			FXRDeviceId XRDeviceId;
			bool bManualAttachment;
			FTransform RelativeTransform;
			UPrimitiveComponent* NewComponent;
			UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static void NewProp_bManualAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_XRDeviceId_MetaData)) }; // 2390384735
	void Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
	{
		((AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms*)Obj)->bManualAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms), &Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms, NewComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_XRDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "XR|Devices" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent, nullptr, "AddDeviceVisualizationComponentAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::AsyncTask_LoadXRDeviceVisComponent_eventAddDeviceVisualizationComponentAsync_Parms), Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics
	{
		struct AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms
		{
			AActor* Target;
			FName SystemName;
			FName DeviceName;
			bool bManualAttachment;
			FTransform RelativeTransform;
			FXRDeviceId XRDeviceId;
			UPrimitiveComponent* NewComponent;
			UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SystemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
		static void NewProp_bManualAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_SystemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_SystemName = { "SystemName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms, SystemName), METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_SystemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_SystemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_DeviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms, DeviceName), METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_DeviceName_MetaData)) };
	void Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment_SetBit(void* Obj)
	{
		((AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms*)Obj)->bManualAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment = { "bManualAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms), &Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(nullptr, 0) }; // 2390384735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms, NewComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_SystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_bManualAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_XRDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_NewComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "XR|Devices" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent, nullptr, "AddNamedDeviceVisualizationComponentAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::AsyncTask_LoadXRDeviceVisComponent_eventAddNamedDeviceVisualizationComponentAsync_Parms), Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTask_LoadXRDeviceVisComponent);
	UClass* Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_NoRegister()
	{
		return UAsyncTask_LoadXRDeviceVisComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModelLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnModelLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync, "AddDeviceVisualizationComponentAsync" }, // 4023745463
		{ &Z_Construct_UFunction_UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync, "AddNamedDeviceVisualizationComponentAsync" }, // 3740557871
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRAssetFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnModelLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnModelLoaded = { "OnModelLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncTask_LoadXRDeviceVisComponent, OnModelLoaded), Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnModelLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnModelLoaded_MetaData)) }; // 1524106670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnLoadFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnLoadFailure = { "OnLoadFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncTask_LoadXRDeviceVisComponent, OnLoadFailure), Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnLoadFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnLoadFailure_MetaData)) }; // 1524106670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_SpawnedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRAssetFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_SpawnedComponent = { "SpawnedComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_SpawnedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_SpawnedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnModelLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_OnLoadFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::NewProp_SpawnedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTask_LoadXRDeviceVisComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::ClassParams = {
		&UAsyncTask_LoadXRDeviceVisComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent()
	{
		if (!Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.OuterSingleton, Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UAsyncTask_LoadXRDeviceVisComponent>()
	{
		return UAsyncTask_LoadXRDeviceVisComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTask_LoadXRDeviceVisComponent);
	UAsyncTask_LoadXRDeviceVisComponent::~UAsyncTask_LoadXRDeviceVisComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRAssetFunctionLibrary, UXRAssetFunctionLibrary::StaticClass, TEXT("UXRAssetFunctionLibrary"), &Z_Registration_Info_UClass_UXRAssetFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRAssetFunctionLibrary), 3954385176U) },
		{ Z_Construct_UClass_UAsyncTask_LoadXRDeviceVisComponent, UAsyncTask_LoadXRDeviceVisComponent::StaticClass, TEXT("UAsyncTask_LoadXRDeviceVisComponent"), &Z_Registration_Info_UClass_UAsyncTask_LoadXRDeviceVisComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTask_LoadXRDeviceVisComponent), 4020636966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_4272335937(TEXT("/Script/HeadMountedDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRAssetFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
