// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/NameCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNameCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameCurveKey;
class UScriptStruct* FNameCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurveKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NameCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_NameCurveKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameCurveKey>()
{
	return FNameCurveKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNameCurveKey_Statics
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
		static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * One key in a curve of FNames.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "One key in a curve of FNames." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurveKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Time at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNameCurveKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Value at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNameCurveKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NameCurveKey",
		sizeof(FNameCurveKey),
		alignof(FNameCurveKey),
		Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey()
	{
		if (!Z_Registration_Info_UScriptStruct_NameCurveKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FNameCurveKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NameCurveKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNameCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FNameCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameCurve;
class UScriptStruct* FNameCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NameCurve"));
	}
	return Z_Registration_Info_UScriptStruct_NameCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameCurve>()
{
	return FNameCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNameCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a curve of FNames.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Implements a curve of FNames." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurve>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNameCurveKey, METADATA_PARAMS(nullptr, 0) }; // 2509503342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Sorted array of keys */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNameCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_MetaData)) }; // 2509503342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIndexedCurve,
		&NewStructOps,
		"NameCurve",
		sizeof(FNameCurve),
		alignof(FNameCurve),
		Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNameCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_NameCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameCurve.InnerSingleton, Z_Construct_UScriptStruct_FNameCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NameCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_Statics::ScriptStructInfo[] = {
		{ FNameCurveKey::StaticStruct, Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewStructOps, TEXT("NameCurveKey"), &Z_Registration_Info_UScriptStruct_NameCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameCurveKey), 2509503342U) },
		{ FNameCurve::StaticStruct, Z_Construct_UScriptStruct_FNameCurve_Statics::NewStructOps, TEXT("NameCurve"), &Z_Registration_Info_UScriptStruct_NameCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameCurve), 2636934501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_3218539277(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
