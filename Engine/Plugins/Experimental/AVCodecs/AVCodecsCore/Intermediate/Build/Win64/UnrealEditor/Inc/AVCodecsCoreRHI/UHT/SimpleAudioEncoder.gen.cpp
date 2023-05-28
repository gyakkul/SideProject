// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/Encoders/SimpleAudioEncoder.h"
#include "Audio/SimpleAudio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAudioEncoder() {}
// Cross Module References
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAudioEncoder();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAudioEncoder_NoRegister();
	AVCODECSCORERHI_API UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec();
	AVCODECSCORERHI_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig();
	AVCODECSCORERHI_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleAudioPacket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AVCodecsCoreRHI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig;
class UScriptStruct* FSimpleAudioEncoderConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig, (UObject*)Z_Construct_UPackage__Script_AVCodecsCoreRHI(), TEXT("SimpleAudioEncoderConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig.OuterSingleton;
}
template<> AVCODECSCORERHI_API UScriptStruct* StaticStruct<FSimpleAudioEncoderConfig>()
{
	return FSimpleAudioEncoderConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bitrate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bitrate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Samplerate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Samplerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleAudioEncoderConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Bitrate_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Bitrate = { "Bitrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleAudioEncoderConfig, Bitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Bitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Bitrate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Samplerate_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Samplerate = { "Samplerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleAudioEncoderConfig, Samplerate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Samplerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Samplerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleAudioEncoderConfig, NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_NumChannels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Bitrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_Samplerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewProp_NumChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
		nullptr,
		&NewStructOps,
		"SimpleAudioEncoderConfig",
		sizeof(FSimpleAudioEncoderConfig),
		alignof(FSimpleAudioEncoderConfig),
		Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig.InnerSingleton, Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execSetConfig)
	{
		P_GET_STRUCT(FSimpleAudioEncoderConfig,Z_Param_NewConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfig(Z_Param_NewConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execGetConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleAudioEncoderConfig*)Z_Param__Result=P_THIS->GetConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execGetCodec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESimpleAudioCodec*)Z_Param__Result=P_THIS->GetCodec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execReceivePackets)
	{
		P_GET_TARRAY_REF(FSimpleAudioPacket,Z_Param_Out_OutPackets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceivePackets(Z_Param_Out_OutPackets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execReceivePacket)
	{
		P_GET_STRUCT_REF(FSimpleAudioPacket,Z_Param_Out_OutPacket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceivePacket(Z_Param_Out_OutPacket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execSendFrameFloat)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Resource);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Timestamp);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSamples);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendFrameFloat(Z_Param_Out_Resource,Z_Param_Timestamp,Z_Param_NumSamples,Z_Param_SampleDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execOpen)
	{
		P_GET_ENUM(ESimpleAudioCodec,Z_Param_Codec);
		P_GET_STRUCT(FSimpleAudioEncoderConfig,Z_Param_Config);
		P_GET_UBOOL(Z_Param_bAsynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Open(ESimpleAudioCodec(Z_Param_Codec),Z_Param_Config,Z_Param_bAsynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleAudioEncoder::execIsAsync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAsync();
		P_NATIVE_END;
	}
	void USimpleAudioEncoder::StaticRegisterNativesUSimpleAudioEncoder()
	{
		UClass* Class = USimpleAudioEncoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &USimpleAudioEncoder::execClose },
			{ "GetCodec", &USimpleAudioEncoder::execGetCodec },
			{ "GetConfig", &USimpleAudioEncoder::execGetConfig },
			{ "IsAsync", &USimpleAudioEncoder::execIsAsync },
			{ "IsOpen", &USimpleAudioEncoder::execIsOpen },
			{ "Open", &USimpleAudioEncoder::execOpen },
			{ "ReceivePacket", &USimpleAudioEncoder::execReceivePacket },
			{ "ReceivePackets", &USimpleAudioEncoder::execReceivePackets },
			{ "SendFrameFloat", &USimpleAudioEncoder::execSendFrameFloat },
			{ "SetConfig", &USimpleAudioEncoder::execSetConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_Close_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics
	{
		struct SimpleAudioEncoder_eventGetCodec_Parms
		{
			ESimpleAudioCodec ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventGetCodec_Parms, ReturnValue), Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec, METADATA_PARAMS(nullptr, 0) }; // 1534690332
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "GetCodec", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::SimpleAudioEncoder_eventGetCodec_Parms), Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_GetCodec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_GetCodec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics
	{
		struct SimpleAudioEncoder_eventGetConfig_Parms
		{
			FSimpleAudioEncoderConfig ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventGetConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig, METADATA_PARAMS(nullptr, 0) }; // 1540280746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "GetConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::SimpleAudioEncoder_eventGetConfig_Parms), Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_GetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_GetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics
	{
		struct SimpleAudioEncoder_eventIsAsync_Parms
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
	void Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleAudioEncoder_eventIsAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleAudioEncoder_eventIsAsync_Parms), &Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "IsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::SimpleAudioEncoder_eventIsAsync_Parms), Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_IsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_IsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics
	{
		struct SimpleAudioEncoder_eventIsOpen_Parms
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
	void Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleAudioEncoder_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleAudioEncoder_eventIsOpen_Parms), &Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "IsOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::SimpleAudioEncoder_eventIsOpen_Parms), Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics
	{
		struct SimpleAudioEncoder_eventOpen_Parms
		{
			ESimpleAudioCodec Codec;
			FSimpleAudioEncoderConfig Config;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_Codec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventOpen_Parms, Codec), Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec, METADATA_PARAMS(nullptr, 0) }; // 1534690332
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventOpen_Parms, Config), Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig, METADATA_PARAMS(nullptr, 0) }; // 1540280746
	void Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_bAsynchronous_SetBit(void* Obj)
	{
		((SimpleAudioEncoder_eventOpen_Parms*)Obj)->bAsynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_bAsynchronous = { "bAsynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleAudioEncoder_eventOpen_Parms), &Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_bAsynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleAudioEncoder_eventOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleAudioEncoder_eventOpen_Parms), &Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_Codec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_Codec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_bAsynchronous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "Open", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::SimpleAudioEncoder_eventOpen_Parms), Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics
	{
		struct SimpleAudioEncoder_eventReceivePacket_Parms
		{
			FSimpleAudioPacket OutPacket;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_OutPacket = { "OutPacket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventReceivePacket_Parms, OutPacket), Z_Construct_UScriptStruct_FSimpleAudioPacket, METADATA_PARAMS(nullptr, 0) }; // 1461193873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleAudioEncoder_eventReceivePacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleAudioEncoder_eventReceivePacket_Parms), &Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_OutPacket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "ReceivePacket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::SimpleAudioEncoder_eventReceivePacket_Parms), Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics
	{
		struct SimpleAudioEncoder_eventReceivePackets_Parms
		{
			TArray<FSimpleAudioPacket> OutPackets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPackets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::NewProp_OutPackets_Inner = { "OutPackets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleAudioPacket, METADATA_PARAMS(nullptr, 0) }; // 1461193873
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::NewProp_OutPackets = { "OutPackets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventReceivePackets_Parms, OutPackets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1461193873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::NewProp_OutPackets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::NewProp_OutPackets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "ReceivePackets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::SimpleAudioEncoder_eventReceivePackets_Parms), Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics
	{
		struct SimpleAudioEncoder_eventSendFrameFloat_Parms
		{
			TArray<float> Resource;
			double Timestamp;
			int32 NumSamples;
			float SampleDuration;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Resource_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Resource;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleDuration;
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Resource_Inner = { "Resource", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Resource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventSendFrameFloat_Parms, Resource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Resource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Resource_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventSendFrameFloat_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventSendFrameFloat_Parms, NumSamples), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_SampleDuration = { "SampleDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventSendFrameFloat_Parms, SampleDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Was Success" },
	};
#endif
	void Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleAudioEncoder_eventSendFrameFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleAudioEncoder_eventSendFrameFloat_Parms), &Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Resource_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Resource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_NumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_SampleDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Send Frame (PCM16)" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "SendFrameFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::SimpleAudioEncoder_eventSendFrameFloat_Parms), Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics
	{
		struct SimpleAudioEncoder_eventSetConfig_Parms
		{
			FSimpleAudioEncoderConfig NewConfig;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleAudioEncoder_eventSetConfig_Parms, NewConfig), Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig, METADATA_PARAMS(nullptr, 0) }; // 1540280746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::NewProp_NewConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAudioEncoder, nullptr, "SetConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::SimpleAudioEncoder_eventSetConfig_Parms), Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleAudioEncoder_SetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAudioEncoder_SetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAudioEncoder);
	UClass* Z_Construct_UClass_USimpleAudioEncoder_NoRegister()
	{
		return USimpleAudioEncoder::StaticClass();
	}
	struct Z_Construct_UClass_USimpleAudioEncoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleAudioEncoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleAudioEncoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleAudioEncoder_Close, "Close" }, // 2595270752
		{ &Z_Construct_UFunction_USimpleAudioEncoder_GetCodec, "GetCodec" }, // 225043426
		{ &Z_Construct_UFunction_USimpleAudioEncoder_GetConfig, "GetConfig" }, // 3079630561
		{ &Z_Construct_UFunction_USimpleAudioEncoder_IsAsync, "IsAsync" }, // 1122722995
		{ &Z_Construct_UFunction_USimpleAudioEncoder_IsOpen, "IsOpen" }, // 1946313477
		{ &Z_Construct_UFunction_USimpleAudioEncoder_Open, "Open" }, // 87342126
		{ &Z_Construct_UFunction_USimpleAudioEncoder_ReceivePacket, "ReceivePacket" }, // 2413000887
		{ &Z_Construct_UFunction_USimpleAudioEncoder_ReceivePackets, "ReceivePackets" }, // 3761584521
		{ &Z_Construct_UFunction_USimpleAudioEncoder_SendFrameFloat, "SendFrameFloat" }, // 332808162
		{ &Z_Construct_UFunction_USimpleAudioEncoder_SetConfig, "SetConfig" }, // 3454357792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleAudioEncoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Audio/Encoders/SimpleAudioEncoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Audio/Encoders/SimpleAudioEncoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleAudioEncoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAudioEncoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAudioEncoder_Statics::ClassParams = {
		&USimpleAudioEncoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleAudioEncoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAudioEncoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleAudioEncoder()
	{
		if (!Z_Registration_Info_UClass_USimpleAudioEncoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAudioEncoder.OuterSingleton, Z_Construct_UClass_USimpleAudioEncoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleAudioEncoder.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UClass* StaticClass<USimpleAudioEncoder>()
	{
		return USimpleAudioEncoder::StaticClass();
	}
	USimpleAudioEncoder::USimpleAudioEncoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAudioEncoder);
	USimpleAudioEncoder::~USimpleAudioEncoder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_Statics::ScriptStructInfo[] = {
		{ FSimpleAudioEncoderConfig::StaticStruct, Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics::NewStructOps, TEXT("SimpleAudioEncoderConfig"), &Z_Registration_Info_UScriptStruct_SimpleAudioEncoderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleAudioEncoderConfig), 1540280746U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAudioEncoder, USimpleAudioEncoder::StaticClass, TEXT("USimpleAudioEncoder"), &Z_Registration_Info_UClass_USimpleAudioEncoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAudioEncoder), 3579334011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_2114584940(TEXT("/Script/AVCodecsCoreRHI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
