// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Output/VCamOutputProviderBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "UI/WidgetSnapshots.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamOutputProviderBase() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UGameplayViewTargetPolicy_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase_NoRegister();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EVCamTargetViewportID();
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTreeSnapshot();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister();
	VPUTILITIES_API UEnum* Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics
	{
		struct VCamOutputProviderBase_eventActivationDelegate_Blueprint_Parms
		{
			bool bNewIsActive;
		};
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((VCamOutputProviderBase_eventActivationDelegate_Blueprint_Parms*)Obj)->bNewIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamOutputProviderBase_eventActivationDelegate_Blueprint_Parms), &Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::NewProp_bNewIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "ActivationDelegate_Blueprint__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::VCamOutputProviderBase_eventActivationDelegate_Blueprint_Parms), Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UVCamOutputProviderBase::FActivationDelegate_Blueprint_DelegateWrapper(const FMulticastScriptDelegate& ActivationDelegate_Blueprint, bool bNewIsActive)
{
	struct VCamOutputProviderBase_eventActivationDelegate_Blueprint_Parms
	{
		bool bNewIsActive;
	};
	VCamOutputProviderBase_eventActivationDelegate_Blueprint_Parms Parms;
	Parms.bNewIsActive=bNewIsActive ? true : false;
	ActivationDelegate_Blueprint.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execSetUMGClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InUMGClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUMGClass(Z_Param_InUMGClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execGetUMGClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UUserWidget> *)Z_Param__Result=P_THIS->GetUMGClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execSetTargetViewport)
	{
		P_GET_ENUM(EVCamTargetViewportID,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetViewport(EVCamTargetViewportID(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execGetTargetViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVCamTargetViewportID*)Z_Param__Result=P_THIS->GetTargetViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execSetTargetCamera)
	{
		P_GET_OBJECT(UCineCameraComponent,Z_Param_InTargetCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCamera(Z_Param_InTargetCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamOutputProviderBase::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bInActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bInActive);
		P_NATIVE_END;
	}
	void UVCamOutputProviderBase::StaticRegisterNativesUVCamOutputProviderBase()
	{
		UClass* Class = UVCamOutputProviderBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetViewport", &UVCamOutputProviderBase::execGetTargetViewport },
			{ "GetUMGClass", &UVCamOutputProviderBase::execGetUMGClass },
			{ "IsActive", &UVCamOutputProviderBase::execIsActive },
			{ "IsInitialized", &UVCamOutputProviderBase::execIsInitialized },
			{ "SetActive", &UVCamOutputProviderBase::execSetActive },
			{ "SetTargetCamera", &UVCamOutputProviderBase::execSetTargetCamera },
			{ "SetTargetViewport", &UVCamOutputProviderBase::execSetTargetViewport },
			{ "SetUMGClass", &UVCamOutputProviderBase::execSetUMGClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics
	{
		struct VCamOutputProviderBase_eventGetTargetViewport_Parms
		{
			EVCamTargetViewportID ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamOutputProviderBase_eventGetTargetViewport_Parms, ReturnValue), Z_Construct_UEnum_VCamCore_EVCamTargetViewportID, METADATA_PARAMS(nullptr, 0) }; // 2513585238
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "GetTargetViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::VCamOutputProviderBase_eventGetTargetViewport_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics
	{
		struct VCamOutputProviderBase_eventGetUMGClass_Parms
		{
			TSubclassOf<UUserWidget>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamOutputProviderBase_eventGetUMGClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "GetUMGClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::VCamOutputProviderBase_eventGetUMGClass_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics
	{
		struct VCamOutputProviderBase_eventIsActive_Parms
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
	void Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamOutputProviderBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamOutputProviderBase_eventIsActive_Parms), &Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Returns if this output provider is currently active or not */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Returns if this output provider is currently active or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "IsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::VCamOutputProviderBase_eventIsActive_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics
	{
		struct VCamOutputProviderBase_eventIsInitialized_Parms
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
	void Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamOutputProviderBase_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamOutputProviderBase_eventIsInitialized_Parms), &Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Returns if this output provider has been initialized or not */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Returns if this output provider has been initialized or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "IsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::VCamOutputProviderBase_eventIsInitialized_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics
	{
		struct VCamOutputProviderBase_eventSetActive_Parms
		{
			bool bInActive;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInActive_MetaData[];
#endif
		static void NewProp_bInActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::NewProp_bInActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::NewProp_bInActive_SetBit(void* Obj)
	{
		((VCamOutputProviderBase_eventSetActive_Parms*)Obj)->bInActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::NewProp_bInActive = { "bInActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamOutputProviderBase_eventSetActive_Parms), &Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::NewProp_bInActive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::NewProp_bInActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::NewProp_bInActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::NewProp_bInActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Called to turn on or off this output provider */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Called to turn on or off this output provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "SetActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::VCamOutputProviderBase_eventSetActive_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics
	{
		struct VCamOutputProviderBase_eventSetTargetCamera_Parms
		{
			const UCineCameraComponent* InTargetCamera;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTargetCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::NewProp_InTargetCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::NewProp_InTargetCamera = { "InTargetCamera", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamOutputProviderBase_eventSetTargetCamera_Parms, InTargetCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::NewProp_InTargetCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::NewProp_InTargetCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::NewProp_InTargetCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "SetTargetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::VCamOutputProviderBase_eventSetTargetCamera_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics
	{
		struct VCamOutputProviderBase_eventSetTargetViewport_Parms
		{
			EVCamTargetViewportID Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamOutputProviderBase_eventSetTargetViewport_Parms, Value), Z_Construct_UEnum_VCamCore_EVCamTargetViewportID, METADATA_PARAMS(nullptr, 0) }; // 2513585238
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::NewProp_Value_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "SetTargetViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::VCamOutputProviderBase_eventSetTargetViewport_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics
	{
		struct VCamOutputProviderBase_eventSetUMGClass_Parms
		{
			const TSubclassOf<UUserWidget>  InUMGClass;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUMGClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InUMGClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::NewProp_InUMGClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::NewProp_InUMGClass = { "InUMGClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamOutputProviderBase_eventSetUMGClass_Parms, InUMGClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::NewProp_InUMGClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::NewProp_InUMGClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::NewProp_InUMGClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamOutputProviderBase, nullptr, "SetUMGClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::VCamOutputProviderBase_eventSetUMGClass_Parms), Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamOutputProviderBase);
	UClass* Z_Construct_UClass_UVCamOutputProviderBase_NoRegister()
	{
		return UVCamOutputProviderBase::StaticClass();
	}
	struct Z_Construct_UClass_UVCamOutputProviderBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActivatedDelegate_Blueprint_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivatedDelegate_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideResolution_MetaData[];
#endif
		static void NewProp_bUseOverrideResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayViewTargetPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameplayViewTargetPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetViewport_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetViewport_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UMGClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UMGClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetSnapshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UMGWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UMGWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCamera_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasOutputSuspendedWhileActive_MetaData[];
#endif
		static void NewProp_bWasOutputSuspendedWhileActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasOutputSuspendedWhileActive;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PlayersWhoseViewTargetsWereSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersWhoseViewTargetsWereSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PlayersWhoseViewTargetsWereSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamOutputProviderBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamOutputProviderBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature, "ActivationDelegate_Blueprint__DelegateSignature" }, // 2880003028
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_GetTargetViewport, "GetTargetViewport" }, // 2625483923
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_GetUMGClass, "GetUMGClass" }, // 853907941
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_IsActive, "IsActive" }, // 1534218914
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_IsInitialized, "IsInitialized" }, // 3227274917
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_SetActive, "SetActive" }, // 4000372357
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetCamera, "SetTargetCamera" }, // 3093690475
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_SetTargetViewport, "SetTargetViewport" }, // 3577213234
		{ &Z_Construct_UFunction_UVCamOutputProviderBase_SetUMGClass, "SetUMGClass" }, // 588667098
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Output/VCamOutputProviderBase.h" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OnActivatedDelegate_Blueprint_MetaData[] = {
		{ "Comment", "/** Called when the activation state of this output provider changes. */" },
		{ "DisplayName", "OnActivated" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Called when the activation state of this output provider changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OnActivatedDelegate_Blueprint = { "OnActivatedDelegate_Blueprint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, OnActivatedDelegate_Blueprint), Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OnActivatedDelegate_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OnActivatedDelegate_Blueprint_MetaData)) }; // 2880003028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bUseOverrideResolution_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Override the default output resolution with a custom value - NOTE you must toggle bIsActive off then back on for this to take effect */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Override the default output resolution with a custom value - NOTE you must toggle bIsActive off then back on for this to take effect" },
	};
#endif
	void Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bUseOverrideResolution_SetBit(void* Obj)
	{
		((UVCamOutputProviderBase*)Obj)->bUseOverrideResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bUseOverrideResolution = { "bUseOverrideResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamOutputProviderBase), &Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bUseOverrideResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bUseOverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bUseOverrideResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OverrideResolution_MetaData[] = {
		{ "Category", "Output" },
		{ "ClampMin", "1" },
		{ "Comment", "/** When bUseOverrideResolution is set, use this custom resolution */" },
		{ "DisplayPriority", "6" },
		{ "EditCondition", "bUseOverrideResolution" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "When bUseOverrideResolution is set, use this custom resolution" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OverrideResolution = { "OverrideResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, OverrideResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OverrideResolution_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_DisplayType_MetaData[] = {
		{ "Comment", "/** Defines how the overlay widget should be added to the viewport. This should as early as possible: in  the constructor. */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Defines how the overlay widget should be added to the viewport. This should as early as possible: in  the constructor." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, DisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_DisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_DisplayType_MetaData)) }; // 1154763833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_GameplayViewTargetPolicy_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/**\n\x09 * In game worlds, such as PIE or shipped games, determines which a player controller whose view target should be set to the owning cine camera.\n\x09 * \n\x09 * Note that multiple output providers may have a policy set and policies might choose the same player controllers to set the view target for.\n\x09 * This conflict is resolved as follows: if a player controller already has the cine camera as view target, the policy is not used.\n\x09 * Hence, you can order your output providers array in the VCamComponent. The first policies will get automatically get higher priority.\n\x09 */" },
		{ "DisplayPriority", "99" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "In game worlds, such as PIE or shipped games, determines which a player controller whose view target should be set to the owning cine camera.\n\nNote that multiple output providers may have a policy set and policies might choose the same player controllers to set the view target for.\nThis conflict is resolved as follows: if a player controller already has the cine camera as view target, the policy is not used.\nHence, you can order your output providers array in the VCamComponent. The first policies will get automatically get higher priority." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_GameplayViewTargetPolicy = { "GameplayViewTargetPolicy", nullptr, (EPropertyFlags)0x0026080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, GameplayViewTargetPolicy), Z_Construct_UClass_UGameplayViewTargetPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_GameplayViewTargetPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_GameplayViewTargetPolicy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bIsActive_MetaData[] = {
		{ "BlueprintGetter", "IsActive" },
		{ "BlueprintSetter", "SetActive" },
		{ "Category", "Output" },
		{ "Comment", "/** If set, this output provider will execute every frame */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "If set, this output provider will execute every frame" },
	};
#endif
	void Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UVCamOutputProviderBase*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamOutputProviderBase), &Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bIsActive_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetViewport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetViewport_MetaData[] = {
		{ "BlueprintGetter", "GetTargetViewport" },
		{ "BlueprintSetter", "SetTargetViewport" },
		{ "Category", "Output" },
		{ "Comment", "/** Which viewport to use for this VCam */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Which viewport to use for this VCam" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetViewport = { "TargetViewport", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, TargetViewport), Z_Construct_UEnum_VCamCore_EVCamTargetViewportID, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetViewport_MetaData)) }; // 2513585238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGClass_MetaData[] = {
		{ "BlueprintGetter", "GetUMGClass" },
		{ "BlueprintSetter", "SetUMGClass" },
		{ "Category", "Output" },
		{ "Comment", "/** The UMG class to be rendered in this output provider */" },
		{ "DisplayName", "UMG Overlay" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "The UMG class to be rendered in this output provider" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGClass = { "UMGClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, UMGClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_WidgetSnapshot_MetaData[] = {
		{ "Comment", "/** FOutputProviderLayoutCustomization allows remapping connections and their bound widgets. This is used to persist those overrides since UUserWidgets cannot be saved. */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "FOutputProviderLayoutCustomization allows remapping connections and their bound widgets. This is used to persist those overrides since UUserWidgets cannot be saved." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_WidgetSnapshot = { "WidgetSnapshot", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, WidgetSnapshot), Z_Construct_UScriptStruct_FWidgetTreeSnapshot, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_WidgetSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_WidgetSnapshot_MetaData)) }; // 3386165244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	void Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((UVCamOutputProviderBase*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamOutputProviderBase), &Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGWidget_MetaData[] = {
		{ "Comment", "/** Valid when active and if UMGClass is valid. */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "Valid when active and if UMGClass is valid." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGWidget = { "UMGWidget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, UMGWidget), Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetCamera = { "TargetCamera", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, TargetCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bWasOutputSuspendedWhileActive_MetaData[] = {
		{ "Comment", "/** SuspendOutput can disable output while we're active. This flag indicates whether we should reactivate when RestoreOutput is called. */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "SuspendOutput can disable output while we're active. This flag indicates whether we should reactivate when RestoreOutput is called." },
	};
#endif
	void Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bWasOutputSuspendedWhileActive_SetBit(void* Obj)
	{
		((UVCamOutputProviderBase*)Obj)->bWasOutputSuspendedWhileActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bWasOutputSuspendedWhileActive = { "bWasOutputSuspendedWhileActive", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamOutputProviderBase), &Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bWasOutputSuspendedWhileActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bWasOutputSuspendedWhileActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bWasOutputSuspendedWhileActive_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_PlayersWhoseViewTargetsWereSet_ElementProp = { "PlayersWhoseViewTargetsWereSet", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_PlayersWhoseViewTargetsWereSet_MetaData[] = {
		{ "Comment", "/** If in a game world, these player controllers must have their view targets reverted when this output provider is deactivated. */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputProviderBase.h" },
		{ "ToolTip", "If in a game world, these player controllers must have their view targets reverted when this output provider is deactivated." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_PlayersWhoseViewTargetsWereSet = { "PlayersWhoseViewTargetsWereSet", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputProviderBase, PlayersWhoseViewTargetsWereSet), METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_PlayersWhoseViewTargetsWereSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_PlayersWhoseViewTargetsWereSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamOutputProviderBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OnActivatedDelegate_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bUseOverrideResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_OverrideResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_DisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_DisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_GameplayViewTargetPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetViewport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_WidgetSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_UMGWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_TargetCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_bWasOutputSuspendedWhileActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_PlayersWhoseViewTargetsWereSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputProviderBase_Statics::NewProp_PlayersWhoseViewTargetsWereSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamOutputProviderBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamOutputProviderBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamOutputProviderBase_Statics::ClassParams = {
		&UVCamOutputProviderBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVCamOutputProviderBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamOutputProviderBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputProviderBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamOutputProviderBase()
	{
		if (!Z_Registration_Info_UClass_UVCamOutputProviderBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamOutputProviderBase.OuterSingleton, Z_Construct_UClass_UVCamOutputProviderBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamOutputProviderBase.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamOutputProviderBase>()
	{
		return UVCamOutputProviderBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamOutputProviderBase);
	UVCamOutputProviderBase::~UVCamOutputProviderBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVCamOutputProviderBase)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamOutputProviderBase, UVCamOutputProviderBase::StaticClass, TEXT("UVCamOutputProviderBase"), &Z_Registration_Info_UClass_UVCamOutputProviderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamOutputProviderBase), 3320991523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_4205534926(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
