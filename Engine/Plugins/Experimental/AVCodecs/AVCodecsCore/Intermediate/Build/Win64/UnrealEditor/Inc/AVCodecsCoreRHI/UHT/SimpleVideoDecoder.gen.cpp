// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Video/Decoders/SimpleVideoDecoder.h"
#include "Video/SimpleVideo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleVideoDecoder() {}
// Cross Module References
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoDecoder();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoDecoder_NoRegister();
	AVCODECSCORERHI_API UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec();
	AVCODECSCORERHI_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleVideoPacket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AVCodecsCoreRHI();
// End Cross Module References
	DEFINE_FUNCTION(USimpleVideoDecoder::execGetCodec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESimpleVideoCodec*)Z_Param__Result=P_THIS->GetCodec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoDecoder::execReceiveFrame)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Resource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceiveFrame(Z_Param_Resource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoDecoder::execSendPacket)
	{
		P_GET_STRUCT_REF(FSimpleVideoPacket,Z_Param_Out_Packet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPacket(Z_Param_Out_Packet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoDecoder::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoDecoder::execOpen)
	{
		P_GET_ENUM(ESimpleVideoCodec,Z_Param_Codec);
		P_GET_UBOOL(Z_Param_bAsynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Open(ESimpleVideoCodec(Z_Param_Codec),Z_Param_bAsynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoDecoder::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoDecoder::execIsAsync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAsync();
		P_NATIVE_END;
	}
	void USimpleVideoDecoder::StaticRegisterNativesUSimpleVideoDecoder()
	{
		UClass* Class = USimpleVideoDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &USimpleVideoDecoder::execClose },
			{ "GetCodec", &USimpleVideoDecoder::execGetCodec },
			{ "IsAsync", &USimpleVideoDecoder::execIsAsync },
			{ "IsOpen", &USimpleVideoDecoder::execIsOpen },
			{ "Open", &USimpleVideoDecoder::execOpen },
			{ "ReceiveFrame", &USimpleVideoDecoder::execReceiveFrame },
			{ "SendPacket", &USimpleVideoDecoder::execSendPacket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleVideoDecoder_Close_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoDecoder_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoDecoder, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoDecoder_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoDecoder_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics
	{
		struct SimpleVideoDecoder_eventGetCodec_Parms
		{
			ESimpleVideoCodec ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoDecoder_eventGetCodec_Parms, ReturnValue), Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec, METADATA_PARAMS(nullptr, 0) }; // 1114698386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoDecoder, nullptr, "GetCodec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::SimpleVideoDecoder_eventGetCodec_Parms), Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoDecoder_GetCodec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoDecoder_GetCodec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics
	{
		struct SimpleVideoDecoder_eventIsAsync_Parms
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
	void Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoDecoder_eventIsAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoDecoder_eventIsAsync_Parms), &Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoDecoder, nullptr, "IsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::SimpleVideoDecoder_eventIsAsync_Parms), Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoDecoder_IsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoDecoder_IsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics
	{
		struct SimpleVideoDecoder_eventIsOpen_Parms
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
	void Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoDecoder_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoDecoder_eventIsOpen_Parms), &Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoDecoder, nullptr, "IsOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::SimpleVideoDecoder_eventIsOpen_Parms), Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoDecoder_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoDecoder_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics
	{
		struct SimpleVideoDecoder_eventOpen_Parms
		{
			ESimpleVideoCodec Codec;
			bool bAsynchronous;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Codec_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Codec;
		static void NewProp_bAsynchronous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsynchronous;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_Codec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoDecoder_eventOpen_Parms, Codec), Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec, METADATA_PARAMS(nullptr, 0) }; // 1114698386
	void Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_bAsynchronous_SetBit(void* Obj)
	{
		((SimpleVideoDecoder_eventOpen_Parms*)Obj)->bAsynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_bAsynchronous = { "bAsynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoDecoder_eventOpen_Parms), &Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_bAsynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoDecoder_eventOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoDecoder_eventOpen_Parms), &Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_Codec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_Codec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_bAsynchronous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoDecoder, nullptr, "Open", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::SimpleVideoDecoder_eventOpen_Parms), Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoDecoder_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoDecoder_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics
	{
		struct SimpleVideoDecoder_eventReceiveFrame_Parms
		{
			UTextureRenderTarget2D* Resource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Resource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoDecoder_eventReceiveFrame_Parms, Resource), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoDecoder_eventReceiveFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoDecoder_eventReceiveFrame_Parms), &Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoDecoder, nullptr, "ReceiveFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::SimpleVideoDecoder_eventReceiveFrame_Parms), Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics
	{
		struct SimpleVideoDecoder_eventSendPacket_Parms
		{
			FSimpleVideoPacket Packet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Packet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Packet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_Packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_Packet = { "Packet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoDecoder_eventSendPacket_Parms, Packet), Z_Construct_UScriptStruct_FSimpleVideoPacket, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_Packet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_Packet_MetaData)) }; // 2940460534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoDecoder_eventSendPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoDecoder_eventSendPacket_Parms), &Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_Packet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoDecoder, nullptr, "SendPacket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::SimpleVideoDecoder_eventSendPacket_Parms), Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoDecoder_SendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoDecoder_SendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleVideoDecoder);
	UClass* Z_Construct_UClass_USimpleVideoDecoder_NoRegister()
	{
		return USimpleVideoDecoder::StaticClass();
	}
	struct Z_Construct_UClass_USimpleVideoDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleVideoDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleVideoDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleVideoDecoder_Close, "Close" }, // 2312304669
		{ &Z_Construct_UFunction_USimpleVideoDecoder_GetCodec, "GetCodec" }, // 3072253879
		{ &Z_Construct_UFunction_USimpleVideoDecoder_IsAsync, "IsAsync" }, // 716919813
		{ &Z_Construct_UFunction_USimpleVideoDecoder_IsOpen, "IsOpen" }, // 2173000300
		{ &Z_Construct_UFunction_USimpleVideoDecoder_Open, "Open" }, // 960491040
		{ &Z_Construct_UFunction_USimpleVideoDecoder_ReceiveFrame, "ReceiveFrame" }, // 1250407992
		{ &Z_Construct_UFunction_USimpleVideoDecoder_SendPacket, "SendPacket" }, // 2076450235
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleVideoDecoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Video/Decoders/SimpleVideoDecoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Video/Decoders/SimpleVideoDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleVideoDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleVideoDecoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleVideoDecoder_Statics::ClassParams = {
		&USimpleVideoDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleVideoDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleVideoDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleVideoDecoder()
	{
		if (!Z_Registration_Info_UClass_USimpleVideoDecoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleVideoDecoder.OuterSingleton, Z_Construct_UClass_USimpleVideoDecoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleVideoDecoder.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UClass* StaticClass<USimpleVideoDecoder>()
	{
		return USimpleVideoDecoder::StaticClass();
	}
	USimpleVideoDecoder::USimpleVideoDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleVideoDecoder);
	USimpleVideoDecoder::~USimpleVideoDecoder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleVideoDecoder, USimpleVideoDecoder::StaticClass, TEXT("USimpleVideoDecoder"), &Z_Registration_Info_UClass_USimpleVideoDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleVideoDecoder), 581412125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_3647184207(TEXT("/Script/AVCodecsCoreRHI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
