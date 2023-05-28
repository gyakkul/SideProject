// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraController_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraSubsystem();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraSubsystem_NoRegister();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "OnStreamStarted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStreamStarted_DelegateWrapper(const FMulticastScriptDelegate& OnStreamStarted)
{
	OnStreamStarted.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "OnStreamStopped__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStreamStopped_DelegateWrapper(const FMulticastScriptDelegate& OnStreamStopped)
{
	OnStreamStopped.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics
	{
		struct _Script_VirtualCamera_eventOnSelectedAnyActor_Parms
		{
			AActor* SelectedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VirtualCamera_eventOnSelectedAnyActor_Parms, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::NewProp_SelectedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "OnSelectedAnyActor__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::_Script_VirtualCamera_eventOnSelectedAnyActor_Parms), Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSelectedAnyActor_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedAnyActor, AActor* SelectedActor)
{
	struct _Script_VirtualCamera_eventOnSelectedAnyActor_Parms
	{
		AActor* SelectedActor;
	};
	_Script_VirtualCamera_eventOnSelectedAnyActor_Parms Parms;
	Parms.SelectedActor=SelectedActor;
	OnSelectedAnyActor.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics
	{
		struct _Script_VirtualCamera_eventOnSelectedViewportActor_Parms
		{
			AActor* SelectedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VirtualCamera_eventOnSelectedViewportActor_Parms, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::NewProp_SelectedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "OnSelectedViewportActor__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::_Script_VirtualCamera_eventOnSelectedViewportActor_Parms), Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSelectedViewportActor_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedViewportActor, AActor* SelectedActor)
{
	struct _Script_VirtualCamera_eventOnSelectedViewportActor_Parms
	{
		AActor* SelectedActor;
	};
	_Script_VirtualCamera_eventOnSelectedViewportActor_Parms Parms;
	Parms.SelectedActor=SelectedActor;
	OnSelectedViewportActor.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVirtualCameraSubsystem::execSetVirtualCameraController)
	{
		P_GET_TINTERFACE(IVirtualCameraController,Z_Param_VirtualCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVirtualCameraController(Z_Param_VirtualCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraSubsystem::execGetVirtualCameraController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IVirtualCameraController>*)Z_Param__Result=P_THIS->GetVirtualCameraController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraSubsystem::execIsStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStreaming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraSubsystem::execStopStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopStreaming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraSubsystem::execStartStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartStreaming();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UVirtualCameraSubsystem::execHandleSelectObjectEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_SelectedObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSelectObjectEvent(Z_Param_SelectedObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraSubsystem::execHandleSelectionChangedEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_SelectedObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSelectionChangedEvent(Z_Param_SelectedObject);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UVirtualCameraSubsystem::StaticRegisterNativesUVirtualCameraSubsystem()
	{
		UClass* Class = UVirtualCameraSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVirtualCameraController", &UVirtualCameraSubsystem::execGetVirtualCameraController },
#if WITH_EDITOR
			{ "HandleSelectionChangedEvent", &UVirtualCameraSubsystem::execHandleSelectionChangedEvent },
			{ "HandleSelectObjectEvent", &UVirtualCameraSubsystem::execHandleSelectObjectEvent },
#endif // WITH_EDITOR
			{ "IsStreaming", &UVirtualCameraSubsystem::execIsStreaming },
			{ "SetVirtualCameraController", &UVirtualCameraSubsystem::execSetVirtualCameraController },
			{ "StartStreaming", &UVirtualCameraSubsystem::execStartStreaming },
			{ "StopStreaming", &UVirtualCameraSubsystem::execStopStreaming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics
	{
		struct VirtualCameraSubsystem_eventGetVirtualCameraController_Parms
		{
			TScriptInterface<IVirtualCameraController> ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraSubsystem_eventGetVirtualCameraController_Parms, ReturnValue), Z_Construct_UClass_UVirtualCameraController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraSubsystem, nullptr, "GetVirtualCameraController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::VirtualCameraSubsystem_eventGetVirtualCameraController_Parms), Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics
	{
		struct VirtualCameraSubsystem_eventHandleSelectionChangedEvent_Parms
		{
			UObject* SelectedObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::NewProp_SelectedObject = { "SelectedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraSubsystem_eventHandleSelectionChangedEvent_Parms, SelectedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::NewProp_SelectedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraSubsystem, nullptr, "HandleSelectionChangedEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::VirtualCameraSubsystem_eventHandleSelectionChangedEvent_Parms), Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics
	{
		struct VirtualCameraSubsystem_eventHandleSelectObjectEvent_Parms
		{
			UObject* SelectedObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::NewProp_SelectedObject = { "SelectedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraSubsystem_eventHandleSelectObjectEvent_Parms, SelectedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::NewProp_SelectedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraSubsystem, nullptr, "HandleSelectObjectEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::VirtualCameraSubsystem_eventHandleSelectObjectEvent_Parms), Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics
	{
		struct VirtualCameraSubsystem_eventIsStreaming_Parms
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
	void Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraSubsystem_eventIsStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraSubsystem_eventIsStreaming_Parms), &Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraSubsystem, nullptr, "IsStreaming", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::VirtualCameraSubsystem_eventIsStreaming_Parms), Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics
	{
		struct VirtualCameraSubsystem_eventSetVirtualCameraController_Parms
		{
			TScriptInterface<IVirtualCameraController> VirtualCamera;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_VirtualCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::NewProp_VirtualCamera = { "VirtualCamera", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraSubsystem_eventSetVirtualCameraController_Parms, VirtualCamera), Z_Construct_UClass_UVirtualCameraController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::NewProp_VirtualCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraSubsystem, nullptr, "SetVirtualCameraController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::VirtualCameraSubsystem_eventSetVirtualCameraController_Parms), Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics
	{
		struct VirtualCameraSubsystem_eventStartStreaming_Parms
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
	void Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraSubsystem_eventStartStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraSubsystem_eventStartStreaming_Parms), &Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraSubsystem, nullptr, "StartStreaming", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::VirtualCameraSubsystem_eventStartStreaming_Parms), Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics
	{
		struct VirtualCameraSubsystem_eventStopStreaming_Parms
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
	void Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraSubsystem_eventStopStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraSubsystem_eventStopStreaming_Parms), &Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraSubsystem, nullptr, "StopStreaming", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::VirtualCameraSubsystem_eventStopStreaming_Parms), Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraSubsystem);
	UClass* Z_Construct_UClass_UVirtualCameraSubsystem_NoRegister()
	{
		return UVirtualCameraSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlaybackController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequencePlaybackController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStreamStartedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreamStartedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStreamStoppedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreamStoppedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedAnyActorDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedAnyActorDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedActorInViewportDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedActorInViewportDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCameraController_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ActiveCameraController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCameraSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCameraSubsystem_GetVirtualCameraController, "GetVirtualCameraController" }, // 3215638469
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectionChangedEvent, "HandleSelectionChangedEvent" }, // 3373494863
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVirtualCameraSubsystem_HandleSelectObjectEvent, "HandleSelectObjectEvent" }, // 3059515030
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UVirtualCameraSubsystem_IsStreaming, "IsStreaming" }, // 773426172
		{ &Z_Construct_UFunction_UVirtualCameraSubsystem_SetVirtualCameraController, "SetVirtualCameraController" }, // 2542334123
		{ &Z_Construct_UFunction_UVirtualCameraSubsystem_StartStreaming, "StartStreaming" }, // 364090197
		{ &Z_Construct_UFunction_UVirtualCameraSubsystem_StopStreaming, "StopStreaming" }, // 2826031919
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VirtualCamera" },
		{ "DisplayName", "VirtualCameraSubsystem" },
		{ "IncludePath", "VirtualCameraSubsystem.h" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_SequencePlaybackController_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_SequencePlaybackController = { "SequencePlaybackController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSubsystem, SequencePlaybackController), Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_SequencePlaybackController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_SequencePlaybackController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStartedDelegate_MetaData[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStartedDelegate = { "OnStreamStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSubsystem, OnStreamStartedDelegate), Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStartedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStartedDelegate_MetaData)) }; // 2163773425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStoppedDelegate_MetaData[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStoppedDelegate = { "OnStreamStoppedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSubsystem, OnStreamStoppedDelegate), Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStoppedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStoppedDelegate_MetaData)) }; // 99457623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedAnyActorDelegate_MetaData[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedAnyActorDelegate = { "OnSelectedAnyActorDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSubsystem, OnSelectedAnyActorDelegate), Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedAnyActorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedAnyActorDelegate_MetaData)) }; // 233609957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedActorInViewportDelegate_MetaData[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedActorInViewportDelegate = { "OnSelectedActorInViewportDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSubsystem, OnSelectedActorInViewportDelegate), Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedActorInViewportDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedActorInViewportDelegate_MetaData)) }; // 2985268295
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_ActiveCameraController_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_ActiveCameraController = { "ActiveCameraController", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSubsystem, ActiveCameraController), Z_Construct_UClass_UVirtualCameraController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_ActiveCameraController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_ActiveCameraController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualCameraSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_SequencePlaybackController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStartedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnStreamStoppedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedAnyActorDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_OnSelectedActorInViewportDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSubsystem_Statics::NewProp_ActiveCameraController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCameraSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraSubsystem_Statics::ClassParams = {
		&UVirtualCameraSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVirtualCameraSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraSubsystem.OuterSingleton, Z_Construct_UClass_UVirtualCameraSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraSubsystem.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraSubsystem>()
	{
		return UVirtualCameraSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraSubsystem);
	UVirtualCameraSubsystem::~UVirtualCameraSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraSubsystem, UVirtualCameraSubsystem::StaticClass, TEXT("UVirtualCameraSubsystem"), &Z_Registration_Info_UClass_UVirtualCameraSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraSubsystem), 3514172943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_975431465(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
