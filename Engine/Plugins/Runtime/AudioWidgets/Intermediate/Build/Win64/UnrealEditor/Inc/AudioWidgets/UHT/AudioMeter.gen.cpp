// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMeter.h"
#include "AudioMeterStyle.h"
#include "AudioMeterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMeter() {}
// Cross Module References
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMeter();
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMeter_NoRegister();
	AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature();
	AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMeterStyle();
	AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FMeterChannelInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics
	{
		struct AudioMeter_eventGetMeterChannelInfo_Parms
		{
			TArray<FMeterChannelInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(nullptr, 0) }; // 1502604427
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventGetMeterChannelInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1502604427
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "GetMeterChannelInfo__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::AudioMeter_eventGetMeterChannelInfo_Parms), Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
TArray<FMeterChannelInfo> UAudioMeter::FGetMeterChannelInfo_DelegateWrapper(const FScriptDelegate& GetMeterChannelInfo)
{
	struct AudioMeter_eventGetMeterChannelInfo_Parms
	{
		TArray<FMeterChannelInfo> ReturnValue;
	};
	AudioMeter_eventGetMeterChannelInfo_Parms Parms;
	GetMeterChannelInfo.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	DEFINE_FUNCTION(UAudioMeter::execSetMeterScaleLabelColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeterScaleLabelColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execSetMeterScaleColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeterScaleColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execSetMeterClippingColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeterClippingColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execSetMeterPeakColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeterPeakColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execSetMeterValueColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeterValueColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execSetMeterBackgroundColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeterBackgroundColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execSetBackgroundColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackgroundColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execSetMeterChannelInfo)
	{
		P_GET_TARRAY_REF(FMeterChannelInfo,Z_Param_Out_InMeterChannelInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeterChannelInfo(Z_Param_Out_InMeterChannelInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMeter::execGetMeterChannelInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMeterChannelInfo>*)Z_Param__Result=P_THIS->GetMeterChannelInfo();
		P_NATIVE_END;
	}
	void UAudioMeter::StaticRegisterNativesUAudioMeter()
	{
		UClass* Class = UAudioMeter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeterChannelInfo", &UAudioMeter::execGetMeterChannelInfo },
			{ "SetBackgroundColor", &UAudioMeter::execSetBackgroundColor },
			{ "SetMeterBackgroundColor", &UAudioMeter::execSetMeterBackgroundColor },
			{ "SetMeterChannelInfo", &UAudioMeter::execSetMeterChannelInfo },
			{ "SetMeterClippingColor", &UAudioMeter::execSetMeterClippingColor },
			{ "SetMeterPeakColor", &UAudioMeter::execSetMeterPeakColor },
			{ "SetMeterScaleColor", &UAudioMeter::execSetMeterScaleColor },
			{ "SetMeterScaleLabelColor", &UAudioMeter::execSetMeterScaleLabelColor },
			{ "SetMeterValueColor", &UAudioMeter::execSetMeterValueColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics
	{
		struct AudioMeter_eventGetMeterChannelInfo_Parms
		{
			TArray<FMeterChannelInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(nullptr, 0) }; // 1502604427
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventGetMeterChannelInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1502604427
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current linear value of the meter. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Gets the current linear value of the meter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "GetMeterChannelInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::AudioMeter_eventGetMeterChannelInfo_Parms), Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics
	{
		struct AudioMeter_eventSetBackgroundColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetBackgroundColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the background color */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the background color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetBackgroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::AudioMeter_eventSetBackgroundColor_Parms), Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics
	{
		struct AudioMeter_eventSetMeterBackgroundColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetMeterBackgroundColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the meter background color */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the meter background color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetMeterBackgroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::AudioMeter_eventSetMeterBackgroundColor_Parms), Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics
	{
		struct AudioMeter_eventSetMeterChannelInfo_Parms
		{
			TArray<FMeterChannelInfo> InMeterChannelInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMeterChannelInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMeterChannelInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InMeterChannelInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo_Inner = { "InMeterChannelInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(nullptr, 0) }; // 1502604427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo = { "InMeterChannelInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetMeterChannelInfo_Parms, InMeterChannelInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo_MetaData)) }; // 1502604427
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::NewProp_InMeterChannelInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current meter values. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the current meter values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetMeterChannelInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::AudioMeter_eventSetMeterChannelInfo_Parms), Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics
	{
		struct AudioMeter_eventSetMeterClippingColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetMeterClippingColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the meter clipping color */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the meter clipping color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetMeterClippingColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::AudioMeter_eventSetMeterClippingColor_Parms), Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics
	{
		struct AudioMeter_eventSetMeterPeakColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetMeterPeakColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the meter peak color */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the meter peak color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetMeterPeakColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::AudioMeter_eventSetMeterPeakColor_Parms), Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics
	{
		struct AudioMeter_eventSetMeterScaleColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetMeterScaleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the meter scale color */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the meter scale color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetMeterScaleColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::AudioMeter_eventSetMeterScaleColor_Parms), Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics
	{
		struct AudioMeter_eventSetMeterScaleLabelColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetMeterScaleLabelColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the meter scale color */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the meter scale color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetMeterScaleLabelColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::AudioMeter_eventSetMeterScaleLabelColor_Parms), Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics
	{
		struct AudioMeter_eventSetMeterValueColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMeter_eventSetMeterValueColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the meter value color */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "Sets the meter value color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMeter, nullptr, "SetMeterValueColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::AudioMeter_eventSetMeterValueColor_Parms), Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMeter_SetMeterValueColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMeter);
	UClass* Z_Construct_UClass_UAudioMeter_NoRegister()
	{
		return UAudioMeter::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMeter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterChannelInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterChannelInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeterChannelInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterChannelInfoDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_MeterChannelInfoDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterValueColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterValueColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterPeakColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterPeakColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterClippingColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterClippingColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterScaleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterScaleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterScaleLabelColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterScaleLabelColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMeter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioMeter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo, "GetMeterChannelInfo" }, // 1221176346
		{ &Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature, "GetMeterChannelInfo__DelegateSignature" }, // 1349229254
		{ &Z_Construct_UFunction_UAudioMeter_SetBackgroundColor, "SetBackgroundColor" }, // 2462206027
		{ &Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor, "SetMeterBackgroundColor" }, // 2840090618
		{ &Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo, "SetMeterChannelInfo" }, // 492610160
		{ &Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor, "SetMeterClippingColor" }, // 2988539739
		{ &Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor, "SetMeterPeakColor" }, // 736533909
		{ &Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor, "SetMeterScaleColor" }, // 3384550243
		{ &Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor, "SetMeterScaleLabelColor" }, // 4271585912
		{ &Z_Construct_UFunction_UAudioMeter_SetMeterValueColor, "SetMeterValueColor" }, // 1882427189
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio meter widget.\n *\n * Supports displaying a slower moving peak-hold value as well as the current meter value.\n *\n * A clipping value is also displayed which shows a customizable color to indicate clipping.\n *\n * Internal values are stored and interacted with as linear volume values.\n * \n */" },
		{ "IncludePath", "AudioMeter.h" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "An audio meter widget.\n\nSupports displaying a slower moving peak-hold value as well as the current meter value.\n\nA clipping value is also displayed which shows a customizable color to indicate clipping.\n\nInternal values are stored and interacted with as linear volume values." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfo_Inner = { "MeterChannelInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeterChannelInfo, METADATA_PARAMS(nullptr, 0) }; // 1502604427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfo_MetaData[] = {
		{ "Category", "MeterValues" },
		{ "Comment", "/** The current meter value to display. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The current meter value to display." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfo = { "MeterChannelInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterChannelInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfo_MetaData)) }; // 1502604427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfoDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the meter */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the meter" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfoDelegate = { "MeterChannelInfoDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterChannelInfoDelegate), Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfoDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfoDelegate_MetaData)) }; // 1349229254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The audio meter style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The audio meter style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, WidgetStyle), Z_Construct_UScriptStruct_FAudioMeterStyle, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_WidgetStyle_MetaData)) }; // 1788390445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The slider's orientation. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The slider's orientation." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the background. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The color to draw the background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the meter background. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The color to draw the meter background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterBackgroundColor = { "MeterBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterValueColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the meter value. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The color to draw the meter value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterValueColor = { "MeterValueColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterValueColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterValueColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterValueColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterPeakColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the meter peak value. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The color to draw the meter peak value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterPeakColor = { "MeterPeakColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterPeakColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterPeakColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterPeakColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterClippingColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the meter clipping value. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The color to draw the meter clipping value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterClippingColor = { "MeterClippingColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterClippingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterClippingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterClippingColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the meter scale hashes. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The color to draw the meter scale hashes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleColor = { "MeterScaleColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterScaleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleLabelColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the meter scale label. */" },
		{ "ModuleRelativePath", "Public/AudioMeter.h" },
		{ "ToolTip", "The color to draw the meter scale label." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleLabelColor = { "MeterScaleLabelColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMeter, MeterScaleLabelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleLabelColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleLabelColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMeter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterChannelInfoDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterValueColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterPeakColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterClippingColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMeter_Statics::NewProp_MeterScaleLabelColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMeter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMeter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMeter_Statics::ClassParams = {
		&UAudioMeter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioMeter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioMeter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMeter()
	{
		if (!Z_Registration_Info_UClass_UAudioMeter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMeter.OuterSingleton, Z_Construct_UClass_UAudioMeter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMeter.OuterSingleton;
	}
	template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioMeter>()
	{
		return UAudioMeter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMeter);
	UAudioMeter::~UAudioMeter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMeter, UAudioMeter::StaticClass, TEXT("UAudioMeter"), &Z_Registration_Info_UClass_UAudioMeter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMeter), 1772429676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_2985130478(TEXT("/Script/AudioWidgets"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
