// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkDebuggerSettings.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkDebuggerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	LIVELINKCURVEDEBUGUI_API UClass* Z_Construct_UClass_ULiveLinkDebuggerSettings();
	LIVELINKCURVEDEBUGUI_API UClass* Z_Construct_UClass_ULiveLinkDebuggerSettings_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UPackage* Z_Construct_UPackage__Script_LiveLinkCurveDebugUI();
// End Cross Module References
	DEFINE_FUNCTION(ULiveLinkDebuggerSettings::execGetBarColorForCurveValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurveValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateColor*)Z_Param__Result=P_THIS->GetBarColorForCurveValue(Z_Param_CurveValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkDebuggerSettings::execGetDPIScaleBasedOnSize)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDPIScaleBasedOnSize(Z_Param_Size);
		P_NATIVE_END;
	}
	void ULiveLinkDebuggerSettings::StaticRegisterNativesULiveLinkDebuggerSettings()
	{
		UClass* Class = ULiveLinkDebuggerSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBarColorForCurveValue", &ULiveLinkDebuggerSettings::execGetBarColorForCurveValue },
			{ "GetDPIScaleBasedOnSize", &ULiveLinkDebuggerSettings::execGetDPIScaleBasedOnSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics
	{
		struct LiveLinkDebuggerSettings_eventGetBarColorForCurveValue_Parms
		{
			float CurveValue;
			FSlateColor ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkDebuggerSettings_eventGetBarColorForCurveValue_Parms, CurveValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkDebuggerSettings_eventGetBarColorForCurveValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLinkDebugger" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkDebuggerSettings, nullptr, "GetBarColorForCurveValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::LiveLinkDebuggerSettings_eventGetBarColorForCurveValue_Parms), Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics
	{
		struct LiveLinkDebuggerSettings_eventGetDPIScaleBasedOnSize_Parms
		{
			FIntPoint Size;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkDebuggerSettings_eventGetDPIScaleBasedOnSize_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkDebuggerSettings_eventGetDPIScaleBasedOnSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLinkDebugger" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkDebuggerSettings, nullptr, "GetDPIScaleBasedOnSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::LiveLinkDebuggerSettings_eventGetDPIScaleBasedOnSize_Parms), Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkDebuggerSettings);
	UClass* Z_Construct_UClass_ULiveLinkDebuggerSettings_NoRegister()
	{
		return ULiveLinkDebuggerSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinBarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxBarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DPIScaleMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DPIScaleMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkCurveDebugUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetBarColorForCurveValue, "GetBarColorForCurveValue" }, // 3001644505
		{ &Z_Construct_UFunction_ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize, "GetDPIScaleBasedOnSize" }, // 4264589417
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkDebuggerSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MinBarColor_MetaData[] = {
		{ "Category", "LiveLinkDebugger" },
		{ "Comment", "//Color used when the CurveValue bar is at 0\n" },
		{ "DisplayName", "Minimum Bar Color Value" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerSettings.h" },
		{ "ToolTip", "Color used when the CurveValue bar is at 0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MinBarColor = { "MinBarColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkDebuggerSettings, MinBarColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MinBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MinBarColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MaxBarColor_MetaData[] = {
		{ "Category", "LiveLinkDebugger" },
		{ "Comment", "//Color used when the CurveValueBar is at 1.0\n" },
		{ "DisplayName", "Maximum Bar Color Value" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerSettings.h" },
		{ "ToolTip", "Color used when the CurveValueBar is at 1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MaxBarColor = { "MaxBarColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkDebuggerSettings, MaxBarColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MaxBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MaxBarColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_DPIScaleMultiplier_MetaData[] = {
		{ "Category", "LiveLinkDebugger" },
		{ "Comment", "//This multiplier is used on the Viewport Widget version (IE: In Game) as it needs to be slightly more aggresive then the PC version\n" },
		{ "DisplayName", "DPI Scale Multiplier" },
		{ "ModuleRelativePath", "Public/LiveLinkDebuggerSettings.h" },
		{ "ToolTip", "This multiplier is used on the Viewport Widget version (IE: In Game) as it needs to be slightly more aggresive then the PC version" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_DPIScaleMultiplier = { "DPIScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkDebuggerSettings, DPIScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_DPIScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_DPIScaleMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MinBarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_MaxBarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::NewProp_DPIScaleMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkDebuggerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::ClassParams = {
		&ULiveLinkDebuggerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkDebuggerSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkDebuggerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkDebuggerSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkDebuggerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkDebuggerSettings.OuterSingleton;
	}
	template<> LIVELINKCURVEDEBUGUI_API UClass* StaticClass<ULiveLinkDebuggerSettings>()
	{
		return ULiveLinkDebuggerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkDebuggerSettings);
	ULiveLinkDebuggerSettings::~ULiveLinkDebuggerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkDebuggerSettings, ULiveLinkDebuggerSettings::StaticClass, TEXT("ULiveLinkDebuggerSettings"), &Z_Registration_Info_UClass_ULiveLinkDebuggerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkDebuggerSettings), 295943479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerSettings_h_4103573564(TEXT("/Script/LiveLinkCurveDebugUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLinkCurveDebugUI_Source_LiveLinkCurveDebugUI_Public_LiveLinkDebuggerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
