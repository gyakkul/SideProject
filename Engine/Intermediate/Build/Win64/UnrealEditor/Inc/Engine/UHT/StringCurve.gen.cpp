// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/StringCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurveKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringCurveKey;
class UScriptStruct* FStringCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringCurveKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StringCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_StringCurveKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStringCurveKey>()
{
	return FStringCurveKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStringCurveKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringCurveKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * One key in a curve of FStrings.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "One key in a curve of FStrings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringCurveKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Time at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStringCurveKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Value at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStringCurveKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringCurveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringCurveKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StringCurveKey",
		sizeof(FStringCurveKey),
		alignof(FStringCurveKey),
		Z_Construct_UScriptStruct_FStringCurveKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurveKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStringCurveKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurveKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStringCurveKey()
	{
		if (!Z_Registration_Info_UScriptStruct_StringCurveKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FStringCurveKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StringCurveKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStringCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FStringCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringCurve;
class UScriptStruct* FStringCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StringCurve"));
	}
	return Z_Registration_Info_UScriptStruct_StringCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStringCurve>()
{
	return FStringCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStringCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a curve of FStrings.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Implements a curve of FStrings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStringCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Default value */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Default value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStringCurve, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStringCurveKey, METADATA_PARAMS(nullptr, 0) }; // 66437824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Sorted array of keys */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStringCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys_MetaData)) }; // 66437824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIndexedCurve,
		&NewStructOps,
		"StringCurve",
		sizeof(FStringCurve),
		alignof(FStringCurve),
		Z_Construct_UScriptStruct_FStringCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStringCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStringCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_StringCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringCurve.InnerSingleton, Z_Construct_UScriptStruct_FStringCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StringCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_Statics::ScriptStructInfo[] = {
		{ FStringCurveKey::StaticStruct, Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewStructOps, TEXT("StringCurveKey"), &Z_Registration_Info_UScriptStruct_StringCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringCurveKey), 66437824U) },
		{ FStringCurve::StaticStruct, Z_Construct_UScriptStruct_FStringCurve_Statics::NewStructOps, TEXT("StringCurve"), &Z_Registration_Info_UScriptStruct_StringCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringCurve), 312262636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_1416641562(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
