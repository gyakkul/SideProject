// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaSourceCacheSettings();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings;
class UScriptStruct* FMediaSourceCacheSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaSourceCacheSettings, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaSourceCacheSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.OuterSingleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaSourceCacheSettings>()
{
	return FMediaSourceCacheSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToLookAhead_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToLookAhead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Cache settings to pass to the player. */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Cache settings to pass to the player." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaSourceCacheSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_MetaData[] = {
		{ "Category", "Media Cache" },
		{ "Comment", "/**\n\x09 * Override the default cache settings.\n\x09 * Currently only the ImgMedia player supports these settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Override the default cache settings.\nCurrently only the ImgMedia player supports these settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FMediaSourceCacheSettings*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaSourceCacheSettings), &Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_TimeToLookAhead_MetaData[] = {
		{ "Category", "Media Cache" },
		{ "Comment", "/**\n\x09 * The cache will fill up with frames that are up to this time from the current time.\n\x09 * E.g. if this is 0.2, and we are at time index 5 seconds,\n\x09 * then we will fill the cache with frames between 5 seconds and 5.2 seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "The cache will fill up with frames that are up to this time from the current time.\nE.g. if this is 0.2, and we are at time index 5 seconds,\nthen we will fill the cache with frames between 5 seconds and 5.2 seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_TimeToLookAhead = { "TimeToLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaSourceCacheSettings, TimeToLookAhead), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_TimeToLookAhead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_TimeToLookAhead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_TimeToLookAhead,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
		nullptr,
		&NewStructOps,
		"MediaSourceCacheSettings",
		sizeof(FMediaSourceCacheSettings),
		alignof(FMediaSourceCacheSettings),
		Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaSourceCacheSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.InnerSingleton, Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionString(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionInt64)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionInt64(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionFloat(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionBool(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	void UMediaSource::StaticRegisterNativesUMediaSource()
	{
		UClass* Class = UMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUrl", &UMediaSource::execGetUrl },
			{ "SetMediaOptionBool", &UMediaSource::execSetMediaOptionBool },
			{ "SetMediaOptionFloat", &UMediaSource::execSetMediaOptionFloat },
			{ "SetMediaOptionInt64", &UMediaSource::execSetMediaOptionInt64 },
			{ "SetMediaOptionString", &UMediaSource::execSetMediaOptionString },
			{ "Validate", &UMediaSource::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaSource_GetUrl_Statics
	{
		struct MediaSource_eventGetUrl_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/**\n\x09 * Get the media source's URL string (must be implemented in child classes).\n\x09 *\n\x09 * @return The media URL.\n\x09 * @see GetProxies\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Get the media source's URL string (must be implemented in child classes).\n\n@return The media URL.\n@see GetProxies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "GetUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::MediaSource_eventGetUrl_Parms), Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics
	{
		struct MediaSource_eventSetMediaOptionBool_Parms
		{
			FName Key;
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventSetMediaOptionBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((MediaSource_eventSetMediaOptionBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaSource_eventSetMediaOptionBool_Parms), &Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a boolean parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (boolean)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a boolean parameter to pass to the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::MediaSource_eventSetMediaOptionBool_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics
	{
		struct MediaSource_eventSetMediaOptionFloat_Parms
		{
			FName Key;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventSetMediaOptionFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventSetMediaOptionFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a float parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (float)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a float parameter to pass to the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::MediaSource_eventSetMediaOptionFloat_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics
	{
		struct MediaSource_eventSetMediaOptionInt64_Parms
		{
			FName Key;
			int64 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventSetMediaOptionInt64_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventSetMediaOptionInt64_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set an integer64 parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (integer64)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set an integer64 parameter to pass to the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::MediaSource_eventSetMediaOptionInt64_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics
	{
		struct MediaSource_eventSetMediaOptionString_Parms
		{
			FName Key;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventSetMediaOptionString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaSource_eventSetMediaOptionString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a string parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (string)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a string parameter to pass to the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::MediaSource_eventSetMediaOptionString_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_Validate_Statics
	{
		struct MediaSource_eventValidate_Parms
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
	void Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaSource_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaSource_eventValidate_Parms), &Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/**\n\x09 * Validate the media source settings (must be implemented in child classes).\n\x09 *\n\x09 * @return true if validation passed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Validate the media source settings (must be implemented in child classes).\n\n@return true if validation passed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "Validate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaSource_Validate_Statics::MediaSource_eventValidate_Parms), Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaSource);
	UClass* Z_Construct_UClass_UMediaSource_NoRegister()
	{
		return UMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceRenderer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSourceRenderer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSource_GetUrl, "GetUrl" }, // 927151497
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionBool, "SetMediaOptionBool" }, // 3241602245
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat, "SetMediaOptionFloat" }, // 742237437
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64, "SetMediaOptionInt64" }, // 3801248552
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionString, "SetMediaOptionString" }, // 1206690835
		{ &Z_Construct_UFunction_UMediaSource_Validate, "Validate" }, // 3071660568
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for media sources.\n *\n * Media sources describe the location and/or settings of media objects that can\n * be played in a media player, such as a video file on disk, a video stream on\n * the internet, or a web cam attached to or built into the target device. The\n * location is encoded as a media URL string, whose URI scheme and optional file\n * extension will be used to locate a suitable media player.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaSource.h" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Abstract base class for media sources.\n\nMedia sources describe the location and/or settings of media objects that can\nbe played in a media player, such as a video file on disk, a video stream on\nthe internet, or a web cam attached to or built into the target device. The\nlocation is encoded as a media URL string, whose URI scheme and optional file\nextension will be used to locate a suitable media player." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSource_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** The thumbnail image.*/" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "The thumbnail image." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaSource_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaSource, ThumbnailImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaSource_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSource_Statics::NewProp_MediaSourceRenderer_MetaData[] = {
		{ "Comment", "/** Renders thumnbnails for us. */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Renders thumnbnails for us." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaSource_Statics::NewProp_MediaSourceRenderer = { "MediaSourceRenderer", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaSource, MediaSourceRenderer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaSource_Statics::NewProp_MediaSourceRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::NewProp_MediaSourceRenderer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSource_Statics::NewProp_ThumbnailImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSource_Statics::NewProp_MediaSourceRenderer,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaSource_Statics::ClassParams = {
		&UMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMediaSource_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::PropPointers), 0),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSource()
	{
		if (!Z_Registration_Info_UClass_UMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaSource.OuterSingleton, Z_Construct_UClass_UMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaSource.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaSource>()
	{
		return UMediaSource::StaticClass();
	}
	UMediaSource::UMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSource);
	UMediaSource::~UMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ScriptStructInfo[] = {
		{ FMediaSourceCacheSettings::StaticStruct, Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewStructOps, TEXT("MediaSourceCacheSettings"), &Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaSourceCacheSettings), 2300968702U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaSource, UMediaSource::StaticClass, TEXT("UMediaSource"), &Z_Registration_Info_UClass_UMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaSource), 473732224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_1312782804(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
