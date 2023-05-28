// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationUtilsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationUtilsBlueprintLibrary() {}
// Cross Module References
	AUTOMATIONUTILS_API UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary();
	AUTOMATIONUTILS_API UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AutomationUtils();
// End Cross Module References
	DEFINE_FUNCTION(UAutomationUtilsBlueprintLibrary::execTakeGameplayAutomationScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenshotName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxGlobalError);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxLocalError);
		P_GET_PROPERTY(FStrProperty,Z_Param_MapNameOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(Z_Param_ScreenshotName,Z_Param_MaxGlobalError,Z_Param_MaxLocalError,Z_Param_MapNameOverride);
		P_NATIVE_END;
	}
	void UAutomationUtilsBlueprintLibrary::StaticRegisterNativesUAutomationUtilsBlueprintLibrary()
	{
		UClass* Class = UAutomationUtilsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeGameplayAutomationScreenshot", &UAutomationUtilsBlueprintLibrary::execTakeGameplayAutomationScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics
	{
		struct AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms
		{
			FString ScreenshotName;
			float MaxGlobalError;
			float MaxLocalError;
			FString MapNameOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalError;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLocalError;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapNameOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName = { "ScreenshotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, ScreenshotName), METADATA_PARAMS(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxGlobalError = { "MaxGlobalError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MaxGlobalError), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxLocalError = { "MaxLocalError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MaxLocalError), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MapNameOverride = { "MapNameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MapNameOverride), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxGlobalError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxLocalError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MapNameOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "CPP_Default_MapNameOverride", "" },
		{ "CPP_Default_MaxGlobalError", "0.020000" },
		{ "CPP_Default_MaxLocalError", "0.120000" },
		{ "ModuleRelativePath", "Public/AutomationUtilsBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationUtilsBlueprintLibrary, nullptr, "TakeGameplayAutomationScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms), Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationUtilsBlueprintLibrary);
	UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister()
	{
		return UAutomationUtilsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot, "TakeGameplayAutomationScreenshot" }, // 2989518940
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationUtilsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationUtilsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationUtilsBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::ClassParams = {
		&UAutomationUtilsBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton;
	}
	template<> AUTOMATIONUTILS_API UClass* StaticClass<UAutomationUtilsBlueprintLibrary>()
	{
		return UAutomationUtilsBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationUtilsBlueprintLibrary);
	UAutomationUtilsBlueprintLibrary::~UAutomationUtilsBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationUtilsBlueprintLibrary, UAutomationUtilsBlueprintLibrary::StaticClass, TEXT("UAutomationUtilsBlueprintLibrary"), &Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationUtilsBlueprintLibrary), 3154527820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_3700093581(TEXT("/Script/AutomationUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
