// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VCamWidget.h"
#include "UI/VCamConnectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamWidget() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamWidget();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamWidget_NoRegister();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EConnectionUpdateResult();
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnection();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnectionTargetSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConnectionUpdateResult;
	static UEnum* EConnectionUpdateResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConnectionUpdateResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConnectionUpdateResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VCamCore_EConnectionUpdateResult, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("EConnectionUpdateResult"));
		}
		return Z_Registration_Info_UEnum_EConnectionUpdateResult.OuterSingleton;
	}
	template<> VCAMCORE_API UEnum* StaticEnum<EConnectionUpdateResult>()
	{
		return EConnectionUpdateResult_StaticEnum();
	}
	struct Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::Enumerators[] = {
		{ "EConnectionUpdateResult::DidUpdateConnections", (int64)EConnectionUpdateResult::DidUpdateConnections },
		{ "EConnectionUpdateResult::NoConnectionsUpdated", (int64)EConnectionUpdateResult::NoConnectionsUpdated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DidUpdateConnections.Name", "EConnectionUpdateResult::DidUpdateConnections" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "NoConnectionsUpdated.Name", "EConnectionUpdateResult::NoConnectionsUpdated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		"EConnectionUpdateResult",
		"EConnectionUpdateResult",
		Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VCamCore_EConnectionUpdateResult()
	{
		if (!Z_Registration_Info_UEnum_EConnectionUpdateResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConnectionUpdateResult.InnerSingleton, Z_Construct_UEnum_VCamCore_EConnectionUpdateResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConnectionUpdateResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamWidget, nullptr, "ConnectionsReinitializedDelegate_Blueprint__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UVCamWidget::FConnectionsReinitializedDelegate_Blueprint_DelegateWrapper(const FMulticastScriptDelegate& ConnectionsReinitializedDelegate_Blueprint)
{
	ConnectionsReinitializedDelegate_Blueprint.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UVCamWidget::execOnInitializeConnections)
	{
		P_GET_OBJECT(UVCamComponent,Z_Param_VCam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitializeConnections_Implementation(Z_Param_VCam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamWidget::execUpdateConnectionTargets)
	{
		P_GET_TMAP_REF(FName,FVCamConnectionTargetSettings,Z_Param_Out_NewConnectionTargets);
		P_GET_UBOOL(Z_Param_bReinitializeOnSuccessfulUpdate);
		P_GET_ENUM_REF(EConnectionUpdateResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateConnectionTargets(Z_Param_Out_NewConnectionTargets,Z_Param_bReinitializeOnSuccessfulUpdate,(EConnectionUpdateResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamWidget::execReinitializeConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReinitializeConnections();
		P_NATIVE_END;
	}
	struct VCamWidget_eventOnConnectionUpdated_Parms
	{
		FName ConnectionName;
		bool bDidConnectSuccessfully;
		FName ModifierConnectionPointName;
		UVCamModifier* ConnectedModifier;
		UInputAction* ConnectedAction;
	};
	struct VCamWidget_eventOnInitializeConnections_Parms
	{
		UVCamComponent* VCam;
	};
	static FName NAME_UVCamWidget_OnConnectionUpdated = FName(TEXT("OnConnectionUpdated"));
	void UVCamWidget::OnConnectionUpdated(FName ConnectionName, bool bDidConnectSuccessfully, FName ModifierConnectionPointName, UVCamModifier* ConnectedModifier, UInputAction* ConnectedAction)
	{
		VCamWidget_eventOnConnectionUpdated_Parms Parms;
		Parms.ConnectionName=ConnectionName;
		Parms.bDidConnectSuccessfully=bDidConnectSuccessfully ? true : false;
		Parms.ModifierConnectionPointName=ModifierConnectionPointName;
		Parms.ConnectedModifier=ConnectedModifier;
		Parms.ConnectedAction=ConnectedAction;
		ProcessEvent(FindFunctionChecked(NAME_UVCamWidget_OnConnectionUpdated),&Parms);
	}
	static FName NAME_UVCamWidget_OnInitializeConnections = FName(TEXT("OnInitializeConnections"));
	void UVCamWidget::OnInitializeConnections(UVCamComponent* VCam)
	{
		VCamWidget_eventOnInitializeConnections_Parms Parms;
		Parms.VCam=VCam;
		ProcessEvent(FindFunctionChecked(NAME_UVCamWidget_OnInitializeConnections),&Parms);
	}
	static FName NAME_UVCamWidget_PostConnectionsInitialized = FName(TEXT("PostConnectionsInitialized"));
	void UVCamWidget::PostConnectionsInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVCamWidget_PostConnectionsInitialized),NULL);
	}
	void UVCamWidget::StaticRegisterNativesUVCamWidget()
	{
		UClass* Class = UVCamWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInitializeConnections", &UVCamWidget::execOnInitializeConnections },
			{ "ReinitializeConnections", &UVCamWidget::execReinitializeConnections },
			{ "UpdateConnectionTargets", &UVCamWidget::execUpdateConnectionTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionName;
		static void NewProp_bDidConnectSuccessfully_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDidConnectSuccessfully;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModifierConnectionPointName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedModifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ConnectionName = { "ConnectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamWidget_eventOnConnectionUpdated_Parms, ConnectionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_bDidConnectSuccessfully_SetBit(void* Obj)
	{
		((VCamWidget_eventOnConnectionUpdated_Parms*)Obj)->bDidConnectSuccessfully = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_bDidConnectSuccessfully = { "bDidConnectSuccessfully", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamWidget_eventOnConnectionUpdated_Parms), &Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_bDidConnectSuccessfully_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ModifierConnectionPointName = { "ModifierConnectionPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamWidget_eventOnConnectionUpdated_Parms, ModifierConnectionPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ConnectedModifier = { "ConnectedModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamWidget_eventOnConnectionUpdated_Parms, ConnectedModifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ConnectedAction = { "ConnectedAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamWidget_eventOnConnectionUpdated_Parms, ConnectedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ConnectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_bDidConnectSuccessfully,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ModifierConnectionPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ConnectedModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::NewProp_ConnectedAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Event called when a specific connection has been updated\n\x09 * \n\x09 * The connection is not guaranteed to succeed so \"Did Connect Successfully\" should be checked before using\n\x09 * the connected modifier or action\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* Event called when a specific connection has been updated\n*\n* The connection is not guaranteed to succeed so \"Did Connect Successfully\" should be checked before using\n* the connected modifier or action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamWidget, nullptr, "OnConnectionUpdated", nullptr, nullptr, sizeof(VCamWidget_eventOnConnectionUpdated_Parms), Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VCam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::NewProp_VCam_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::NewProp_VCam = { "VCam", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamWidget_eventOnInitializeConnections_Parms, VCam), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::NewProp_VCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::NewProp_VCam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::NewProp_VCam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamWidget, nullptr, "OnInitializeConnections", nullptr, nullptr, sizeof(VCamWidget_eventOnInitializeConnections_Parms), Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamWidget_OnInitializeConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamWidget_OnInitializeConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Event called after all connections have been initialized or reinitialized\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* Event called after all connections have been initialized or reinitialized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamWidget, nullptr, "PostConnectionsInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics
	{
		struct VCamWidget_eventReinitializeConnections_Parms
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
	void Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamWidget_eventReinitializeConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamWidget_eventReinitializeConnections_Parms), &Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Attempts to use the cached VCam Component to initialize the connections\n\x09 * Returns true if there was a valid VCam Component to initialize with\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* Attempts to use the cached VCam Component to initialize the connections\n* Returns true if there was a valid VCam Component to initialize with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamWidget, nullptr, "ReinitializeConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::VCamWidget_eventReinitializeConnections_Parms), Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamWidget_ReinitializeConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamWidget_ReinitializeConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics
	{
		struct VCamWidget_eventUpdateConnectionTargets_Parms
		{
			TMap<FName,FVCamConnectionTargetSettings> NewConnectionTargets;
			bool bReinitializeOnSuccessfulUpdate;
			EConnectionUpdateResult Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewConnectionTargets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewConnectionTargets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewConnectionTargets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NewConnectionTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializeOnSuccessfulUpdate_MetaData[];
#endif
		static void NewProp_bReinitializeOnSuccessfulUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializeOnSuccessfulUpdate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets_ValueProp = { "NewConnectionTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVCamConnectionTargetSettings, METADATA_PARAMS(nullptr, 0) }; // 259595779
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets_Key_KeyProp = { "NewConnectionTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets = { "NewConnectionTargets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamWidget_eventUpdateConnectionTargets_Parms, NewConnectionTargets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets_MetaData)) }; // 259595779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_bReinitializeOnSuccessfulUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_bReinitializeOnSuccessfulUpdate_SetBit(void* Obj)
	{
		((VCamWidget_eventUpdateConnectionTargets_Parms*)Obj)->bReinitializeOnSuccessfulUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_bReinitializeOnSuccessfulUpdate = { "bReinitializeOnSuccessfulUpdate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamWidget_eventUpdateConnectionTargets_Parms), &Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_bReinitializeOnSuccessfulUpdate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_bReinitializeOnSuccessfulUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_bReinitializeOnSuccessfulUpdate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamWidget_eventUpdateConnectionTargets_Parms, Result), Z_Construct_UEnum_VCamCore_EConnectionUpdateResult, METADATA_PARAMS(nullptr, 0) }; // 2431755710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_NewConnectionTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_bReinitializeOnSuccessfulUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::Function_MetaDataParams[] = {
		{ "bReinitializeOnSuccessfulUpdate", "TRUE" },
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Looks through the set of Connections on this widget and if a matching connection name is found will attempt to update the connection target.\n\x09 * If the new target is the same as the old target then no update is performed.\n\x09 * This function will optionally reinitialize the widget connections if 1 or more targets were updated.\n\x09 * \n\x09 * Note: If a connection name in the NewConnectionTargets map is not found in the Widget Connections then it is ignored\n\x09 * no new connections will be created and no connections will be removed\n\x09 */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* Looks through the set of Connections on this widget and if a matching connection name is found will attempt to update the connection target.\n* If the new target is the same as the old target then no update is performed.\n* This function will optionally reinitialize the widget connections if 1 or more targets were updated.\n*\n* Note: If a connection name in the NewConnectionTargets map is not found in the Widget Connections then it is ignored\n* no new connections will be created and no connections will be removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamWidget, nullptr, "UpdateConnectionTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::VCamWidget_eventUpdateConnectionTargets_Parms), Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamWidget);
	UClass* Z_Construct_UClass_UVCamWidget_NoRegister()
	{
		return UVCamWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVCamWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Connections_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Connections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterForInput_MetaData[];
#endif
		static void NewProp_bRegisterForInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterForInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContextPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputContextPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostConnectionsReinitializedDelegate_Blueprint_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostConnectionsReinitializedDelegate_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VCamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VCamComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature, "ConnectionsReinitializedDelegate_Blueprint__DelegateSignature" }, // 240288369
		{ &Z_Construct_UFunction_UVCamWidget_OnConnectionUpdated, "OnConnectionUpdated" }, // 679566705
		{ &Z_Construct_UFunction_UVCamWidget_OnInitializeConnections, "OnInitializeConnections" }, // 58429138
		{ &Z_Construct_UFunction_UVCamWidget_PostConnectionsInitialized, "PostConnectionsInitialized" }, // 4018343728
		{ &Z_Construct_UFunction_UVCamWidget_ReinitializeConnections, "ReinitializeConnections" }, // 1441650054
		{ &Z_Construct_UFunction_UVCamWidget_UpdateConnectionTargets, "UpdateConnectionTargets" }, // 3126778242
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * A wrapper widget class that contains a set of VCam Connections\n * \n * If you add a widget deriving from UVCamWidget to an Overlay Widget for a VCam Output Provider then when the\n * Overlay is created by the Provider it will also call InitializeConnections with the owning VCam Component.\n */" },
		{ "IncludePath", "UI/VCamWidget.h" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* A wrapper widget class that contains a set of VCam Connections\n*\n* If you add a widget deriving from UVCamWidget to an Overlay Widget for a VCam Output Provider then when the\n* Overlay is created by the Provider it will also call InitializeConnections with the owning VCam Component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections_ValueProp = { "Connections", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVCamConnection, METADATA_PARAMS(nullptr, 0) }; // 1271561758
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections_Key_KeyProp = { "Connections_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * The VCam Connections associated with this Widget\n\x09 * \n\x09 * Each Connection has a unique name associated with it and any connection related event\n\x09 * will provide this name as one of its arguments.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* The VCam Connections associated with this Widget\n*\n* Each Connection has a unique name associated with it and any connection related event\n* will provide this name as one of its arguments." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamWidget, Connections), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections_MetaData)) }; // 1271561758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamWidget_Statics::NewProp_bRegisterForInput_MetaData[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "/*\n\x09 * Determines whether this widget will be automatically registered to receive input when the connections are initialized\n\x09 *\n\x09 * Note: This property is only read during Initialize so toggling at runtime will not have any effect\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* Determines whether this widget will be automatically registered to receive input when the connections are initialized\n*\n* Note: This property is only read during Initialize so toggling at runtime will not have any effect" },
	};
#endif
	void Z_Construct_UClass_UVCamWidget_Statics::NewProp_bRegisterForInput_SetBit(void* Obj)
	{
		((UVCamWidget*)Obj)->bRegisterForInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_bRegisterForInput = { "bRegisterForInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamWidget), &Z_Construct_UClass_UVCamWidget_Statics::NewProp_bRegisterForInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamWidget_Statics::NewProp_bRegisterForInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::NewProp_bRegisterForInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "/*\n\x09 * If this widget is registered for input then this input mapping context will be added to the input system\n\x09 */" },
		{ "EditCondition", "bRegisterForInput" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* If this widget is registered for input then this input mapping context will be added to the input system" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamWidget, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputContextPriority_MetaData[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "/*\n\x09 * If this widget is registered for input then this property defines the priority that the input mapping context is added at\n\x09 */" },
		{ "EditCondition", "bRegisterForInput" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* If this widget is registered for input then this property defines the priority that the input mapping context is added at" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputContextPriority = { "InputContextPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamWidget, InputContextPriority), METADATA_PARAMS(Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputContextPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputContextPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamWidget_Statics::NewProp_OnPostConnectionsReinitializedDelegate_Blueprint_MetaData[] = {
		{ "Comment", "/** Called when ReinitializeConnections is called. */" },
		{ "DisplayName", "OnConnectionsReinitialized" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "Called when ReinitializeConnections is called." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_OnPostConnectionsReinitializedDelegate_Blueprint = { "OnPostConnectionsReinitializedDelegate_Blueprint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamWidget, OnPostConnectionsReinitializedDelegate_Blueprint), Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVCamWidget_Statics::NewProp_OnPostConnectionsReinitializedDelegate_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::NewProp_OnPostConnectionsReinitializedDelegate_Blueprint_MetaData)) }; // 240288369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamWidget_Statics::NewProp_VCamComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VCam" },
		{ "Comment", "/*\n\x09 * Cached pointer to the VCam Component that owns this VCam Widget\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/VCamWidget.h" },
		{ "ToolTip", "* Cached pointer to the VCam Component that owns this VCam Widget" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamWidget_Statics::NewProp_VCamComponent = { "VCamComponent", nullptr, (EPropertyFlags)0x004400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamWidget, VCamComponent), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamWidget_Statics::NewProp_VCamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::NewProp_VCamComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_bRegisterForInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_InputContextPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_OnPostConnectionsReinitializedDelegate_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamWidget_Statics::NewProp_VCamComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamWidget_Statics::ClassParams = {
		&UVCamWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVCamWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamWidget()
	{
		if (!Z_Registration_Info_UClass_UVCamWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamWidget.OuterSingleton, Z_Construct_UClass_UVCamWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamWidget.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamWidget>()
	{
		return UVCamWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamWidget);
	UVCamWidget::~UVCamWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_Statics::EnumInfo[] = {
		{ EConnectionUpdateResult_StaticEnum, TEXT("EConnectionUpdateResult"), &Z_Registration_Info_UEnum_EConnectionUpdateResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2431755710U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamWidget, UVCamWidget::StaticClass, TEXT("UVCamWidget"), &Z_Registration_Info_UClass_UVCamWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamWidget), 2233996633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_5139773(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
