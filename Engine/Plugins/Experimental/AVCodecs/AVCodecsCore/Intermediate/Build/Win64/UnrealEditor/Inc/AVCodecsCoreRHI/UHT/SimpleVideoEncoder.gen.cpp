// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Video/Encoders/SimpleVideoEncoder.h"
#include "Video/SimpleVideo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleVideoEncoder() {}
// Cross Module References
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoEncoder();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoEncoder_NoRegister();
	AVCODECSCORERHI_API UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec();
	AVCODECSCORERHI_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig();
	AVCODECSCORERHI_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleVideoPacket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AVCodecsCoreRHI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig;
class UScriptStruct* FSimpleVideoEncoderConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig, (UObject*)Z_Construct_UPackage__Script_AVCodecsCoreRHI(), TEXT("SimpleVideoEncoderConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig.OuterSingleton;
}
template<> AVCODECSCORERHI_API UScriptStruct* StaticStruct<FSimpleVideoEncoderConfig>()
{
	return FSimpleVideoEncoderConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFramerate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetFramerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBitrate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetBitrate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBitrate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBitrate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleVideoEncoderConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleVideoEncoderConfig, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleVideoEncoderConfig, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetFramerate_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetFramerate = { "TargetFramerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleVideoEncoderConfig, TargetFramerate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetFramerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetBitrate_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetBitrate = { "TargetBitrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleVideoEncoderConfig, TargetBitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetBitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetBitrate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_MaxBitrate_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_MaxBitrate = { "MaxBitrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleVideoEncoderConfig, MaxBitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_MaxBitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_MaxBitrate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetFramerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_TargetBitrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewProp_MaxBitrate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
		nullptr,
		&NewStructOps,
		"SimpleVideoEncoderConfig",
		sizeof(FSimpleVideoEncoderConfig),
		alignof(FSimpleVideoEncoderConfig),
		Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig.InnerSingleton, Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execSetConfig)
	{
		P_GET_STRUCT(FSimpleVideoEncoderConfig,Z_Param_NewConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfig(Z_Param_NewConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execGetConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleVideoEncoderConfig*)Z_Param__Result=P_THIS->GetConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execGetCodec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESimpleVideoCodec*)Z_Param__Result=P_THIS->GetCodec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execReceivePackets)
	{
		P_GET_TARRAY_REF(FSimpleVideoPacket,Z_Param_Out_OutPackets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceivePackets(Z_Param_Out_OutPackets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execReceivePacket)
	{
		P_GET_STRUCT_REF(FSimpleVideoPacket,Z_Param_Out_OutPacket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceivePacket(Z_Param_Out_OutPacket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execSendFrameTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Resource);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Timestamp);
		P_GET_UBOOL(Z_Param_bForceKeyframe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendFrameTexture(Z_Param_Resource,Z_Param_Timestamp,Z_Param_bForceKeyframe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execSendFrameRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Resource);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Timestamp);
		P_GET_UBOOL(Z_Param_bForceKeyframe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendFrameRenderTarget(Z_Param_Resource,Z_Param_Timestamp,Z_Param_bForceKeyframe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execOpen)
	{
		P_GET_ENUM(ESimpleVideoCodec,Z_Param_Codec);
		P_GET_STRUCT(FSimpleVideoEncoderConfig,Z_Param_Config);
		P_GET_UBOOL(Z_Param_bAsynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Open(ESimpleVideoCodec(Z_Param_Codec),Z_Param_Config,Z_Param_bAsynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleVideoEncoder::execIsAsync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAsync();
		P_NATIVE_END;
	}
	void USimpleVideoEncoder::StaticRegisterNativesUSimpleVideoEncoder()
	{
		UClass* Class = USimpleVideoEncoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &USimpleVideoEncoder::execClose },
			{ "GetCodec", &USimpleVideoEncoder::execGetCodec },
			{ "GetConfig", &USimpleVideoEncoder::execGetConfig },
			{ "IsAsync", &USimpleVideoEncoder::execIsAsync },
			{ "IsOpen", &USimpleVideoEncoder::execIsOpen },
			{ "Open", &USimpleVideoEncoder::execOpen },
			{ "ReceivePacket", &USimpleVideoEncoder::execReceivePacket },
			{ "ReceivePackets", &USimpleVideoEncoder::execReceivePackets },
			{ "SendFrameRenderTarget", &USimpleVideoEncoder::execSendFrameRenderTarget },
			{ "SendFrameTexture", &USimpleVideoEncoder::execSendFrameTexture },
			{ "SetConfig", &USimpleVideoEncoder::execSetConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_Close_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics
	{
		struct SimpleVideoEncoder_eventGetCodec_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventGetCodec_Parms, ReturnValue), Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec, METADATA_PARAMS(nullptr, 0) }; // 1114698386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "GetCodec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::SimpleVideoEncoder_eventGetCodec_Parms), Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_GetCodec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_GetCodec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics
	{
		struct SimpleVideoEncoder_eventGetConfig_Parms
		{
			FSimpleVideoEncoderConfig ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventGetConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig, METADATA_PARAMS(nullptr, 0) }; // 143005916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "GetConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::SimpleVideoEncoder_eventGetConfig_Parms), Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_GetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_GetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics
	{
		struct SimpleVideoEncoder_eventIsAsync_Parms
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
	void Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventIsAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventIsAsync_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "IsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::SimpleVideoEncoder_eventIsAsync_Parms), Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_IsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_IsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics
	{
		struct SimpleVideoEncoder_eventIsOpen_Parms
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
	void Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventIsOpen_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "IsOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::SimpleVideoEncoder_eventIsOpen_Parms), Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics
	{
		struct SimpleVideoEncoder_eventOpen_Parms
		{
			ESimpleVideoCodec Codec;
			FSimpleVideoEncoderConfig Config;
			bool bAsynchronous;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Codec_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Codec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_Codec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventOpen_Parms, Codec), Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec, METADATA_PARAMS(nullptr, 0) }; // 1114698386
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventOpen_Parms, Config), Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig, METADATA_PARAMS(nullptr, 0) }; // 143005916
	void Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_bAsynchronous_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventOpen_Parms*)Obj)->bAsynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_bAsynchronous = { "bAsynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventOpen_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_bAsynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventOpen_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_Codec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_Codec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_bAsynchronous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "Open", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::SimpleVideoEncoder_eventOpen_Parms), Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics
	{
		struct SimpleVideoEncoder_eventReceivePacket_Parms
		{
			FSimpleVideoPacket OutPacket;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPacket;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_OutPacket = { "OutPacket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventReceivePacket_Parms, OutPacket), Z_Construct_UScriptStruct_FSimpleVideoPacket, METADATA_PARAMS(nullptr, 0) }; // 2940460534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventReceivePacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventReceivePacket_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_OutPacket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "ReceivePacket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::SimpleVideoEncoder_eventReceivePacket_Parms), Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics
	{
		struct SimpleVideoEncoder_eventReceivePackets_Parms
		{
			TArray<FSimpleVideoPacket> OutPackets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPackets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::NewProp_OutPackets_Inner = { "OutPackets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleVideoPacket, METADATA_PARAMS(nullptr, 0) }; // 2940460534
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::NewProp_OutPackets = { "OutPackets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventReceivePackets_Parms, OutPackets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2940460534
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::NewProp_OutPackets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::NewProp_OutPackets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "ReceivePackets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::SimpleVideoEncoder_eventReceivePackets_Parms), Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics
	{
		struct SimpleVideoEncoder_eventSendFrameRenderTarget_Parms
		{
			UTextureRenderTarget2D* Resource;
			double Timestamp;
			bool bForceKeyframe;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Resource;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Timestamp;
		static void NewProp_bForceKeyframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceKeyframe;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventSendFrameRenderTarget_Parms, Resource), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventSendFrameRenderTarget_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_bForceKeyframe_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventSendFrameRenderTarget_Parms*)Obj)->bForceKeyframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_bForceKeyframe = { "bForceKeyframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventSendFrameRenderTarget_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_bForceKeyframe_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventSendFrameRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventSendFrameRenderTarget_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_bForceKeyframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "CPP_Default_bForceKeyframe", "false" },
		{ "DisplayName", "Send Frame (Render Target)" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "SendFrameRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::SimpleVideoEncoder_eventSendFrameRenderTarget_Parms), Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics
	{
		struct SimpleVideoEncoder_eventSendFrameTexture_Parms
		{
			UTexture2D* Resource;
			double Timestamp;
			bool bForceKeyframe;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Resource;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Timestamp;
		static void NewProp_bForceKeyframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceKeyframe;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventSendFrameTexture_Parms, Resource), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventSendFrameTexture_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_bForceKeyframe_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventSendFrameTexture_Parms*)Obj)->bForceKeyframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_bForceKeyframe = { "bForceKeyframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventSendFrameTexture_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_bForceKeyframe_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVideoEncoder_eventSendFrameTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleVideoEncoder_eventSendFrameTexture_Parms), &Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_bForceKeyframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "CPP_Default_bForceKeyframe", "false" },
		{ "DisplayName", "Send Frame (Texture)" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "SendFrameTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::SimpleVideoEncoder_eventSendFrameTexture_Parms), Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics
	{
		struct SimpleVideoEncoder_eventSetConfig_Parms
		{
			FSimpleVideoEncoderConfig NewConfig;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoEncoder_eventSetConfig_Parms, NewConfig), Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig, METADATA_PARAMS(nullptr, 0) }; // 143005916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::NewProp_NewConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoEncoder, nullptr, "SetConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::SimpleVideoEncoder_eventSetConfig_Parms), Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoEncoder_SetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoEncoder_SetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleVideoEncoder);
	UClass* Z_Construct_UClass_USimpleVideoEncoder_NoRegister()
	{
		return USimpleVideoEncoder::StaticClass();
	}
	struct Z_Construct_UClass_USimpleVideoEncoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleVideoEncoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleVideoEncoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleVideoEncoder_Close, "Close" }, // 218819613
		{ &Z_Construct_UFunction_USimpleVideoEncoder_GetCodec, "GetCodec" }, // 888861177
		{ &Z_Construct_UFunction_USimpleVideoEncoder_GetConfig, "GetConfig" }, // 2754625357
		{ &Z_Construct_UFunction_USimpleVideoEncoder_IsAsync, "IsAsync" }, // 3015464386
		{ &Z_Construct_UFunction_USimpleVideoEncoder_IsOpen, "IsOpen" }, // 1613509770
		{ &Z_Construct_UFunction_USimpleVideoEncoder_Open, "Open" }, // 3313154820
		{ &Z_Construct_UFunction_USimpleVideoEncoder_ReceivePacket, "ReceivePacket" }, // 3727580866
		{ &Z_Construct_UFunction_USimpleVideoEncoder_ReceivePackets, "ReceivePackets" }, // 2372902165
		{ &Z_Construct_UFunction_USimpleVideoEncoder_SendFrameRenderTarget, "SendFrameRenderTarget" }, // 2162780668
		{ &Z_Construct_UFunction_USimpleVideoEncoder_SendFrameTexture, "SendFrameTexture" }, // 2445894297
		{ &Z_Construct_UFunction_USimpleVideoEncoder_SetConfig, "SetConfig" }, // 2462805671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleVideoEncoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Video/Encoders/SimpleVideoEncoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Video/Encoders/SimpleVideoEncoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleVideoEncoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleVideoEncoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleVideoEncoder_Statics::ClassParams = {
		&USimpleVideoEncoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleVideoEncoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleVideoEncoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleVideoEncoder()
	{
		if (!Z_Registration_Info_UClass_USimpleVideoEncoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleVideoEncoder.OuterSingleton, Z_Construct_UClass_USimpleVideoEncoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleVideoEncoder.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UClass* StaticClass<USimpleVideoEncoder>()
	{
		return USimpleVideoEncoder::StaticClass();
	}
	USimpleVideoEncoder::USimpleVideoEncoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleVideoEncoder);
	USimpleVideoEncoder::~USimpleVideoEncoder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_Statics::ScriptStructInfo[] = {
		{ FSimpleVideoEncoderConfig::StaticStruct, Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics::NewStructOps, TEXT("SimpleVideoEncoderConfig"), &Z_Registration_Info_UScriptStruct_SimpleVideoEncoderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleVideoEncoderConfig), 143005916U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleVideoEncoder, USimpleVideoEncoder::StaticClass, TEXT("USimpleVideoEncoder"), &Z_Registration_Info_UClass_USimpleVideoEncoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleVideoEncoder), 810772654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_1040782897(TEXT("/Script/AVCodecsCoreRHI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
