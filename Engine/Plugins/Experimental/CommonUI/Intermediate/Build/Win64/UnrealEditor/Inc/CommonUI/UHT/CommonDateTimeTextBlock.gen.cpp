// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonDateTimeTextBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonDateTimeTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonDateTimeTextBlock();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonDateTimeTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonDateTimeTextBlock::execGetDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonDateTimeTextBlock::execSetCountDownCompletionText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InCompletionText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCountDownCompletionText(Z_Param_InCompletionText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonDateTimeTextBlock::execSetTimespanValue)
	{
		P_GET_STRUCT(FTimespan,Z_Param_InTimespan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimespanValue(Z_Param_InTimespan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonDateTimeTextBlock::execSetDateTimeValue)
	{
		P_GET_STRUCT(FDateTime,Z_Param_InDateTime);
		P_GET_UBOOL(Z_Param_bShowAsCountdown);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRefreshDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDateTimeValue(Z_Param_InDateTime,Z_Param_bShowAsCountdown,Z_Param_InRefreshDelay);
		P_NATIVE_END;
	}
	void UCommonDateTimeTextBlock::StaticRegisterNativesUCommonDateTimeTextBlock()
	{
		UClass* Class = UCommonDateTimeTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDateTime", &UCommonDateTimeTextBlock::execGetDateTime },
			{ "SetCountDownCompletionText", &UCommonDateTimeTextBlock::execSetCountDownCompletionText },
			{ "SetDateTimeValue", &UCommonDateTimeTextBlock::execSetDateTimeValue },
			{ "SetTimespanValue", &UCommonDateTimeTextBlock::execSetTimespanValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics
	{
		struct CommonDateTimeTextBlock_eventGetDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventGetDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTime Text Block" },
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, nullptr, "GetDateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::CommonDateTimeTextBlock_eventGetDateTime_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics
	{
		struct CommonDateTimeTextBlock_eventSetCountDownCompletionText_Parms
		{
			FText InCompletionText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCompletionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InCompletionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText = { "InCompletionText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventSetCountDownCompletionText_Parms, InCompletionText), METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTime Text Block" },
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, nullptr, "SetCountDownCompletionText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::CommonDateTimeTextBlock_eventSetCountDownCompletionText_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics
	{
		struct CommonDateTimeTextBlock_eventSetDateTimeValue_Parms
		{
			FDateTime InDateTime;
			bool bShowAsCountdown;
			float InRefreshDelay;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static void NewProp_bShowAsCountdown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAsCountdown;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRefreshDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventSetDateTimeValue_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime_MetaData)) };
	void Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown_SetBit(void* Obj)
	{
		((CommonDateTimeTextBlock_eventSetDateTimeValue_Parms*)Obj)->bShowAsCountdown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown = { "bShowAsCountdown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonDateTimeTextBlock_eventSetDateTimeValue_Parms), &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InRefreshDelay = { "InRefreshDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventSetDateTimeValue_Parms, InRefreshDelay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InRefreshDelay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTime Text Block" },
		{ "CPP_Default_InRefreshDelay", "1.000000" },
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, nullptr, "SetDateTimeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::CommonDateTimeTextBlock_eventSetDateTimeValue_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics
	{
		struct CommonDateTimeTextBlock_eventSetTimespanValue_Parms
		{
			FTimespan InTimespan;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTimespan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTimespan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan = { "InTimespan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventSetTimespanValue_Parms, InTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTime Text Block" },
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, nullptr, "SetTimespanValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::CommonDateTimeTextBlock_eventSetTimespanValue_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonDateTimeTextBlock);
	UClass* Z_Construct_UClass_UCommonDateTimeTextBlock_NoRegister()
	{
		return UCommonDateTimeTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCommonDateTimeTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime, "GetDateTime" }, // 3942779860
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText, "SetCountDownCompletionText" }, // 3663993163
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue, "SetDateTimeValue" }, // 3462557199
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue, "SetTimespanValue" }, // 2205099287
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonDateTimeTextBlock.h" },
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PrioritizeCategories", "Content" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonDateTimeTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::ClassParams = {
		&UCommonDateTimeTextBlock::StaticClass,
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
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonDateTimeTextBlock()
	{
		if (!Z_Registration_Info_UClass_UCommonDateTimeTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonDateTimeTextBlock.OuterSingleton, Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonDateTimeTextBlock.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonDateTimeTextBlock>()
	{
		return UCommonDateTimeTextBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonDateTimeTextBlock);
	UCommonDateTimeTextBlock::~UCommonDateTimeTextBlock() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonDateTimeTextBlock, UCommonDateTimeTextBlock::StaticClass, TEXT("UCommonDateTimeTextBlock"), &Z_Registration_Info_UClass_UCommonDateTimeTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonDateTimeTextBlock), 1137314965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_3470033613(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
