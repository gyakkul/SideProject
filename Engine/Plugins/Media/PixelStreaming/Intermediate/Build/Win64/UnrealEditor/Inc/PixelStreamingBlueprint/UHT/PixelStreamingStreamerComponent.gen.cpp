// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingStreamerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingStreamerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerComponent();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerComponent_NoRegister();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingBlueprint();
// End Cross Module References
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execSendPlayerMessage)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Descriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerMessage(Z_Param_Type,Z_Param_Descriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execUnfreezeStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnfreezeStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execFreezeStream)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreezeStream(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execForceKeyFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceKeyFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execIsStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStreaming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execStopStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopStreaming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execStartStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStreaming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execIsSignallingConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSignallingConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingStreamerComponent::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void UPixelStreamingStreamerComponent::StaticRegisterNativesUPixelStreamingStreamerComponent()
	{
		UClass* Class = UPixelStreamingStreamerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceKeyFrame", &UPixelStreamingStreamerComponent::execForceKeyFrame },
			{ "FreezeStream", &UPixelStreamingStreamerComponent::execFreezeStream },
			{ "GetId", &UPixelStreamingStreamerComponent::execGetId },
			{ "IsSignallingConnected", &UPixelStreamingStreamerComponent::execIsSignallingConnected },
			{ "IsStreaming", &UPixelStreamingStreamerComponent::execIsStreaming },
			{ "SendPlayerMessage", &UPixelStreamingStreamerComponent::execSendPlayerMessage },
			{ "StartStreaming", &UPixelStreamingStreamerComponent::execStartStreaming },
			{ "StopStreaming", &UPixelStreamingStreamerComponent::execStopStreaming },
			{ "UnfreezeStream", &UPixelStreamingStreamerComponent::execUnfreezeStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "ForceKeyFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics
	{
		struct PixelStreamingStreamerComponent_eventFreezeStream_Parms
		{
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingStreamerComponent_eventFreezeStream_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "FreezeStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::PixelStreamingStreamerComponent_eventFreezeStream_Parms), Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics
	{
		struct PixelStreamingStreamerComponent_eventGetId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingStreamerComponent_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::PixelStreamingStreamerComponent_eventGetId_Parms), Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics
	{
		struct PixelStreamingStreamerComponent_eventIsSignallingConnected_Parms
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
	void Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PixelStreamingStreamerComponent_eventIsSignallingConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingStreamerComponent_eventIsSignallingConnected_Parms), &Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "IsSignallingConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::PixelStreamingStreamerComponent_eventIsSignallingConnected_Parms), Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics
	{
		struct PixelStreamingStreamerComponent_eventIsStreaming_Parms
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
	void Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PixelStreamingStreamerComponent_eventIsStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingStreamerComponent_eventIsStreaming_Parms), &Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "IsStreaming", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::PixelStreamingStreamerComponent_eventIsStreaming_Parms), Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics
	{
		struct PixelStreamingStreamerComponent_eventSendPlayerMessage_Parms
		{
			uint8 Type;
			FString Descriptor;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingStreamerComponent_eventSendPlayerMessage_Parms, Type), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::NewProp_Descriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingStreamerComponent_eventSendPlayerMessage_Parms, Descriptor), METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::NewProp_Descriptor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::NewProp_Descriptor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "SendPlayerMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::PixelStreamingStreamerComponent_eventSendPlayerMessage_Parms), Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "StartStreaming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "StopStreaming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingStreamerComponent, nullptr, "UnfreezeStream", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingStreamerComponent);
	UClass* Z_Construct_UClass_UPixelStreamingStreamerComponent_NoRegister()
	{
		return UPixelStreamingStreamerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignallingServerURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SignallingServerURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamFPS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StreamFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoupleFramerate_MetaData[];
#endif
		static void NewProp_CoupleFramerate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CoupleFramerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VideoInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_ForceKeyFrame, "ForceKeyFrame" }, // 3011569850
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_FreezeStream, "FreezeStream" }, // 1467388522
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_GetId, "GetId" }, // 561400187
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsSignallingConnected, "IsSignallingConnected" }, // 367228048
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_IsStreaming, "IsStreaming" }, // 1113504946
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_SendPlayerMessage, "SendPlayerMessage" }, // 3309832413
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_StartStreaming, "StartStreaming" }, // 2907516292
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_StopStreaming, "StopStreaming" }, // 3592926155
		{ &Z_Construct_UFunction_UPixelStreamingStreamerComponent_UnfreezeStream, "UnfreezeStream" }, // 3574494039
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "PixelStreaming" },
		{ "DisplayName", "Streamer Component" },
		{ "IncludePath", "PixelStreamingStreamerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamerId_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingStreamerComponent, StreamerId), METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_SignallingServerURL_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_SignallingServerURL = { "SignallingServerURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingStreamerComponent, SignallingServerURL), METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_SignallingServerURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_SignallingServerURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamFPS_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamFPS = { "StreamFPS", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingStreamerComponent, StreamFPS), METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_CoupleFramerate_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_CoupleFramerate_SetBit(void* Obj)
	{
		((UPixelStreamingStreamerComponent*)Obj)->CoupleFramerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_CoupleFramerate = { "CoupleFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPixelStreamingStreamerComponent), &Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_CoupleFramerate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_CoupleFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_CoupleFramerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_VideoInput_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_VideoInput = { "VideoInput", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingStreamerComponent, VideoInput), Z_Construct_UClass_UPixelStreamingStreamerVideoInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_VideoInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_VideoInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_SignallingServerURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_StreamFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_CoupleFramerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::NewProp_VideoInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingStreamerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::ClassParams = {
		&UPixelStreamingStreamerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingStreamerComponent()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingStreamerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingStreamerComponent.OuterSingleton, Z_Construct_UClass_UPixelStreamingStreamerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingStreamerComponent.OuterSingleton;
	}
	template<> PIXELSTREAMINGBLUEPRINT_API UClass* StaticClass<UPixelStreamingStreamerComponent>()
	{
		return UPixelStreamingStreamerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingStreamerComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingStreamerComponent, UPixelStreamingStreamerComponent::StaticClass, TEXT("UPixelStreamingStreamerComponent"), &Z_Registration_Info_UClass_UPixelStreamingStreamerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingStreamerComponent), 1446579869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerComponent_h_729786314(TEXT("/Script/PixelStreamingBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
