// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetInternationalizationLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInternationalizationLibrary() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCultureDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
		P_GET_UBOOL(Z_Param_Localized);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCultureDisplayName(Z_Param_Culture,Z_Param_Localized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetSuitableCulture)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AvailableCultures);
		P_GET_PROPERTY(FStrProperty,Z_Param_CultureToMatch);
		P_GET_PROPERTY(FStrProperty,Z_Param_FallbackCulture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetSuitableCulture(Z_Param_Out_AvailableCultures,Z_Param_CultureToMatch,Z_Param_FallbackCulture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetLocalizedCultures)
	{
		P_GET_UBOOL(Z_Param_IncludeGame);
		P_GET_UBOOL(Z_Param_IncludeEngine);
		P_GET_UBOOL(Z_Param_IncludeEditor);
		P_GET_UBOOL(Z_Param_IncludeAdditional);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UKismetInternationalizationLibrary::GetLocalizedCultures(Z_Param_IncludeGame,Z_Param_IncludeEngine,Z_Param_IncludeEditor,Z_Param_IncludeAdditional);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetNativeCulture)
	{
		P_GET_ENUM(ELocalizedTextSourceCategory,Z_Param_TextCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetNativeCulture(ELocalizedTextSourceCategory(Z_Param_TextCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetGroup);
		P_GET_UBOOL(Z_Param_SaveToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_SaveToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture(Z_Param_AssetGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetGroup);
		P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
		P_GET_UBOOL(Z_Param_SaveToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_Culture,Z_Param_SaveToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
		P_GET_UBOOL(Z_Param_SaveToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(Z_Param_Culture,Z_Param_SaveToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentLocale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLocale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentLocale)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
		P_GET_UBOOL(Z_Param_SaveToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLocale(Z_Param_Culture,Z_Param_SaveToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentLanguage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
		P_GET_UBOOL(Z_Param_SaveToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguage(Z_Param_Culture,Z_Param_SaveToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentCulture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentCulture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentCulture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
		P_GET_UBOOL(Z_Param_SaveToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentCulture(Z_Param_Culture,Z_Param_SaveToConfig);
		P_NATIVE_END;
	}
	void UKismetInternationalizationLibrary::StaticRegisterNativesUKismetInternationalizationLibrary()
	{
		UClass* Class = UKismetInternationalizationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture },
			{ "GetCultureDisplayName", &UKismetInternationalizationLibrary::execGetCultureDisplayName },
			{ "GetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture },
			{ "GetCurrentCulture", &UKismetInternationalizationLibrary::execGetCurrentCulture },
			{ "GetCurrentLanguage", &UKismetInternationalizationLibrary::execGetCurrentLanguage },
			{ "GetCurrentLocale", &UKismetInternationalizationLibrary::execGetCurrentLocale },
			{ "GetLocalizedCultures", &UKismetInternationalizationLibrary::execGetLocalizedCultures },
			{ "GetNativeCulture", &UKismetInternationalizationLibrary::execGetNativeCulture },
			{ "GetSuitableCulture", &UKismetInternationalizationLibrary::execGetSuitableCulture },
			{ "SetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture },
			{ "SetCurrentCulture", &UKismetInternationalizationLibrary::execSetCurrentCulture },
			{ "SetCurrentLanguage", &UKismetInternationalizationLibrary::execSetCurrentLanguage },
			{ "SetCurrentLanguageAndLocale", &UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale },
			{ "SetCurrentLocale", &UKismetInternationalizationLibrary::execSetCurrentLocale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			bool SaveToConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Clear the given asset group category culture.\n\x09 * @param AssetGroup The asset group to clear the culture for.\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Clear the given asset group category culture.\n@param AssetGroup The asset group to clear the culture for.\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "ClearCurrentAssetGroupCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms
		{
			FString Culture;
			bool Localized;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Localized_MetaData[];
#endif
		static void NewProp_Localized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Localized;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms*)Obj)->Localized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized = { "Localized", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the display name of the given culture.\n\x09 * @param Culture The culture to get the display name of, as an IETF language tag (eg, \"zh-Hans-CN\")\n\x09 * @param Localized True to get the localized display name (the name of the culture in its own language), or False to get the display name in the current language.\n\x09 * @return The display name of the culture, or the given culture code on failure.\n\x09 */" },
		{ "CPP_Default_Localized", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the display name of the given culture.\n@param Culture The culture to get the display name of, as an IETF language tag (eg, \"zh-Hans-CN\")\n@param Localized True to get the localized display name (the name of the culture in its own language), or False to get the display name in the current language.\n@return The display name of the culture, or the given culture code on failure." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCultureDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the given asset group category culture.\n\x09 * @note Returns the current language if the group category doesn't have a culture override.\n\x09 * @param AssetGroup The asset group to get the culture for.\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the given asset group category culture.\n@note Returns the current language if the group category doesn't have a culture override.\n@param AssetGroup The asset group to get the culture for.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentAssetGroupCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentCulture_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the current culture as an IETF language tag:\n\x09 *  - A two-letter ISO 639-1 language code (eg, \"zh\").\n\x09 *  - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n\x09 *  - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n\x09 * @note This function exists for legacy API parity with SetCurrentCulture and is equivalent to GetCurrentLanguage.\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current culture as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@note This function exists for legacy API parity with SetCurrentCulture and is equivalent to GetCurrentLanguage.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::KismetInternationalizationLibrary_eventGetCurrentCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the current language (for localization) as an IETF language tag:\n\x09 *  - A two-letter ISO 639-1 language code (eg, \"zh\").\n\x09 *  - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n\x09 *  - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n\x09 * @return The language as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current language (for localization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The language as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLocale_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the current locale (for internationalization) as an IETF language tag:\n\x09 *  - A two-letter ISO 639-1 language code (eg, \"zh\").\n\x09 *  - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n\x09 *  - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n\x09 * @return The locale as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current locale (for internationalization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The locale as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentLocale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::KismetInternationalizationLibrary_eventGetCurrentLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics
	{
		struct KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms
		{
			bool IncludeGame;
			bool IncludeEngine;
			bool IncludeEditor;
			bool IncludeAdditional;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeGame_MetaData[];
#endif
		static void NewProp_IncludeGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeEngine_MetaData[];
#endif
		static void NewProp_IncludeEngine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeEngine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeEditor_MetaData[];
#endif
		static void NewProp_IncludeEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAdditional_MetaData[];
#endif
		static void NewProp_IncludeAdditional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeAdditional;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame = { "IncludeGame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeEngine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine = { "IncludeEngine", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor = { "IncludeEditor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeAdditional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional = { "IncludeAdditional", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the list of cultures that have localization data available for them.\n\x09 * @param IncludeGame Check for localized game resources.\n\x09 * @param IncludeEngine Check for localized engine resources.\n\x09 * @param IncludeEditor Check for localized editor resources.\n\x09 * @param IncludeAdditional Check for localized additional (eg, plugin) resources.\n\x09 * @return The list of cultures as IETF language tags (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "CPP_Default_IncludeAdditional", "false" },
		{ "CPP_Default_IncludeEditor", "false" },
		{ "CPP_Default_IncludeEngine", "false" },
		{ "CPP_Default_IncludeGame", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the list of cultures that have localization data available for them.\n@param IncludeGame Check for localized game resources.\n@param IncludeEngine Check for localized engine resources.\n@param IncludeEditor Check for localized editor resources.\n@param IncludeAdditional Check for localized additional (eg, plugin) resources.\n@return The list of cultures as IETF language tags (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetLocalizedCultures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetNativeCulture_Parms
		{
			ELocalizedTextSourceCategory TextCategory;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextCategory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory = { "TextCategory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetNativeCulture_Parms, TextCategory), Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_MetaData)) }; // 3089542370
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetNativeCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the native culture for the given localization category.\n\x09 * @param Category The localization category to query.\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the native culture for the given localization category.\n@param Category The localization category to query.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetNativeCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::KismetInternationalizationLibrary_eventGetNativeCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetSuitableCulture_Parms
		{
			TArray<FString> AvailableCultures;
			FString CultureToMatch;
			FString FallbackCulture;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableCultures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableCultures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableCultures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CultureToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CultureToMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackCulture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FallbackCulture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_Inner = { "AvailableCultures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures = { "AvailableCultures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, AvailableCultures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch = { "CultureToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, CultureToMatch), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture = { "FallbackCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, FallbackCulture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Given a list of available cultures, try and find the most suitable culture from the list based on culture prioritization.\n\x09 *   eg) If your list was [en, fr, de] and the given culture was \"en-US\", this function would return \"en\".\n\x09 *   eg) If your list was [zh, ar, pl] and the given culture was \"en-US\", this function would return the fallback culture.\n\x09 * @param AvailableCultures List of available cultures to filter against (see GetLocalizedCultures).\n\x09 * @param CultureToMatch Culture to try and match (see GetCurrentLanguage).\n\x09 * @param FallbackCulture The culture to return if there is no suitable match in the list (typically your native culture, see GetNativeCulture).\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "CPP_Default_FallbackCulture", "en" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Given a list of available cultures, try and find the most suitable culture from the list based on culture prioritization.\n  eg) If your list was [en, fr, de] and the given culture was \"en-US\", this function would return \"en\".\n  eg) If your list was [zh, ar, pl] and the given culture was \"en-US\", this function would return the fallback culture.\n@param AvailableCultures List of available cultures to filter against (see GetLocalizedCultures).\n@param CultureToMatch Culture to try and match (see GetCurrentLanguage).\n@param FallbackCulture The culture to return if there is no suitable match in the list (typically your native culture, see GetNativeCulture).\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetSuitableCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::KismetInternationalizationLibrary_eventGetSuitableCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData)) };
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set the given asset group category culture from an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param AssetGroup The asset group to set the culture for.\n\x09 * @param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the culture was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the given asset group category culture from an IETF language tag (eg, \"zh-Hans-CN\").\n@param AssetGroup The asset group to set the culture for.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentAssetGroupCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentCulture_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData)) };
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set the current culture.\n\x09 * @note This function is a sledgehammer, and will set both the language and locale, as well as clear out any asset group cultures that may be set.\n\x09 * @param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the culture was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current culture.\n@note This function is a sledgehammer, and will set both the language and locale, as well as clear out any asset group cultures that may be set.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentCulture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->SaveToConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData)) };
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set *only* the current language (for localization).\n\x09 * @note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n\x09 * @param Culture The language to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the language was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current language (for localization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The language to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language was set, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->SaveToConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData)) };
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set the current language (for localization) and locale (for internationalization).\n\x09 * @param Culture The language and locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the language and locale were set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current language (for localization) and locale (for internationalization).\n@param Culture The language and locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language and locale were set, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLanguageAndLocale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->SaveToConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData)) };
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set *only* the current locale (for internationalization).\n\x09 * @note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n\x09 * @param Culture The locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the locale was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current locale (for internationalization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the locale was set, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLocale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetInternationalizationLibrary);
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister()
	{
		return UKismetInternationalizationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture, "ClearCurrentAssetGroupCulture" }, // 2896259856
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName, "GetCultureDisplayName" }, // 998378991
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture, "GetCurrentAssetGroupCulture" }, // 124505650
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture, "GetCurrentCulture" }, // 1913377234
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage, "GetCurrentLanguage" }, // 3020108616
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale, "GetCurrentLocale" }, // 1835222408
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures, "GetLocalizedCultures" }, // 1220884755
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture, "GetNativeCulture" }, // 2168386813
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture, "GetSuitableCulture" }, // 1591994282
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture, "SetCurrentAssetGroupCulture" }, // 2554697397
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture, "SetCurrentCulture" }, // 144310020
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage, "SetCurrentLanguage" }, // 2269495532
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale, "SetCurrentLanguageAndLocale" }, // 2908112618
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale, "SetCurrentLocale" }, // 1219740978
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetInternationalizationLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ScriptName", "InternationalizationLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetInternationalizationLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams = {
		&UKismetInternationalizationLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetInternationalizationLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetInternationalizationLibrary.OuterSingleton, Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetInternationalizationLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UKismetInternationalizationLibrary>()
	{
		return UKismetInternationalizationLibrary::StaticClass();
	}
	UKismetInternationalizationLibrary::UKismetInternationalizationLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInternationalizationLibrary);
	UKismetInternationalizationLibrary::~UKismetInternationalizationLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetInternationalizationLibrary, UKismetInternationalizationLibrary::StaticClass, TEXT("UKismetInternationalizationLibrary"), &Z_Registration_Info_UClass_UKismetInternationalizationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetInternationalizationLibrary), 2934013487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_784899943(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
