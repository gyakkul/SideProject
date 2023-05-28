// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRTrackingRefComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRTrackingRefComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_NoRegister();
	STEAMVRINPUTDEVICE_API UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature();
	STEAMVRINPUTDEVICE_API UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics
	{
		struct _Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms
		{
			int32 DeviceID;
			FName DeviceClass;
			FString DeviceModel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass = { "DeviceClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms, DeviceClass), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms, DeviceModel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice, nullptr, "ComponentTrackingActivatedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FComponentTrackingActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentTrackingActivatedSignature, int32 DeviceID, FName DeviceClass, const FString& DeviceModel)
{
	struct _Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms
	{
		int32 DeviceID;
		FName DeviceClass;
		FString DeviceModel;
	};
	_Script_SteamVRInputDevice_eventComponentTrackingActivatedSignature_Parms Parms;
	Parms.DeviceID=DeviceID;
	Parms.DeviceClass=DeviceClass;
	Parms.DeviceModel=DeviceModel;
	ComponentTrackingActivatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics
	{
		struct _Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms
		{
			int32 DeviceID;
			FName DeviceClass;
			FString DeviceModel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass = { "DeviceClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms, DeviceClass), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms, DeviceModel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::NewProp_DeviceModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice, nullptr, "ComponentTrackingDeactivatedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FComponentTrackingDeactivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentTrackingDeactivatedSignature, int32 DeviceID, FName DeviceClass, const FString& DeviceModel)
{
	struct _Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms
	{
		int32 DeviceID;
		FName DeviceClass;
		FString DeviceModel;
	};
	_Script_SteamVRInputDevice_eventComponentTrackingDeactivatedSignature_Parms Parms;
	Parms.DeviceID=DeviceID;
	Parms.DeviceClass=DeviceClass;
	Parms.DeviceModel=DeviceModel;
	ComponentTrackingDeactivatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRTrackingReferences::execHideTrackingReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTrackingReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRTrackingReferences::execShowTrackingReferences)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_TrackingReferenceMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowTrackingReferences(Z_Param_TrackingReferenceMesh);
		P_NATIVE_END;
	}
	void UDEPRECATED_USteamVRTrackingReferences::StaticRegisterNativesUDEPRECATED_USteamVRTrackingReferences()
	{
		UClass* Class = UDEPRECATED_USteamVRTrackingReferences::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideTrackingReferences", &UDEPRECATED_USteamVRTrackingReferences::execHideTrackingReferences },
			{ "ShowTrackingReferences", &UDEPRECATED_USteamVRTrackingReferences::execShowTrackingReferences },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences, nullptr, "HideTrackingReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics
	{
		struct USteamVRTrackingReferences_eventShowTrackingReferences_Parms
		{
			UStaticMesh* TrackingReferenceMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackingReferenceMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_TrackingReferenceMesh = { "TrackingReferenceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRTrackingReferences_eventShowTrackingReferences_Parms, TrackingReferenceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((USteamVRTrackingReferences_eventShowTrackingReferences_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRTrackingReferences_eventShowTrackingReferences_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_TrackingReferenceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences, nullptr, "ShowTrackingReferences", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::USteamVRTrackingReferences_eventShowTrackingReferences_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_USteamVRTrackingReferences);
	UClass* Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_NoRegister()
	{
		return UDEPRECATED_USteamVRTrackingReferences::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackedDeviceActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackedDeviceActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackedDeviceDeactivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackedDeviceDeactivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDevicePollFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveDevicePollFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingReferenceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingReferenceScale;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackingReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackingReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_HideTrackingReferences, "HideTrackingReferences" }, // 2185766410
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRTrackingReferences_ShowTrackingReferences, "ShowTrackingReferences" }, // 2576223161
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DeprecationMessage", "SteamVR plugin is deprecated; please use the OpenXR plugin." },
		{ "IncludePath", "SteamVRTrackingRefComponent.h" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated_MetaData[] = {
		{ "Category", "VR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated = { "OnTrackedDeviceActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_USteamVRTrackingReferences, OnTrackedDeviceActivated), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated_MetaData)) }; // 2842330109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated_MetaData[] = {
		{ "Category", "VR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated = { "OnTrackedDeviceDeactivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_USteamVRTrackingReferences, OnTrackedDeviceDeactivated), Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated_MetaData)) }; // 2080402090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency = { "ActiveDevicePollFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_USteamVRTrackingReferences, ActiveDevicePollFrequency), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale = { "TrackingReferenceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_USteamVRTrackingReferences, TrackingReferenceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_Inner = { "TrackingReferences", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SteamVRTrackingRefComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences = { "TrackingReferences", nullptr, (EPropertyFlags)0x001400800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_USteamVRTrackingReferences, TrackingReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_OnTrackedDeviceDeactivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_ActiveDevicePollFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferenceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::NewProp_TrackingReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_USteamVRTrackingReferences>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::ClassParams = {
		&UDEPRECATED_USteamVRTrackingReferences::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_USteamVRTrackingReferences.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_USteamVRTrackingReferences.OuterSingleton, Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_USteamVRTrackingReferences.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<UDEPRECATED_USteamVRTrackingReferences>()
	{
		return UDEPRECATED_USteamVRTrackingReferences::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_USteamVRTrackingReferences);
	UDEPRECATED_USteamVRTrackingReferences::~UDEPRECATED_USteamVRTrackingReferences() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences, UDEPRECATED_USteamVRTrackingReferences::StaticClass, TEXT("UDEPRECATED_USteamVRTrackingReferences"), &Z_Registration_Info_UClass_UDEPRECATED_USteamVRTrackingReferences, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_USteamVRTrackingReferences), 1242147425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_1376560975(TEXT("/Script/SteamVRInputDevice"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
