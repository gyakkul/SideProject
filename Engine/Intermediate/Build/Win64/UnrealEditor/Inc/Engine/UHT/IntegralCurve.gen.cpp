// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/IntegralCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegralCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegralKey;
class UScriptStruct* FIntegralKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegralKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegralKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("IntegralKey"));
	}
	return Z_Registration_Info_UScriptStruct_IntegralKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegralKey>()
{
	return FIntegralKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntegralKey_Statics
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An integral key, which holds the key time and the key value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "An integral key, which holds the key time and the key value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntegralKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The keyed time */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keyed time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegralKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The keyed integral value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keyed integral value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegralKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegralKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"IntegralKey",
		sizeof(FIntegralKey),
		alignof(FIntegralKey),
		Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey()
	{
		if (!Z_Registration_Info_UScriptStruct_IntegralKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegralKey.InnerSingleton, Z_Construct_UScriptStruct_FIntegralKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntegralKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FIntegralCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FIntegralCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegralCurve;
class UScriptStruct* FIntegralCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegralCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegralCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("IntegralCurve"));
	}
	return Z_Registration_Info_UScriptStruct_IntegralCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegralCurve>()
{
	return FIntegralCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntegralCurve_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultValueBeforeFirstKey_MetaData[];
#endif
		static void NewProp_bUseDefaultValueBeforeFirstKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultValueBeforeFirstKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An integral curve, which holds the key time and the key value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "An integral curve, which holds the key time and the key value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralCurve>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntegralKey, METADATA_PARAMS(nullptr, 0) }; // 223573429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** The keys, ordered by time */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keys, ordered by time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegralCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_MetaData)) }; // 223573429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Default value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "Default value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegralCurve, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_SetBit(void* Obj)
	{
		((FIntegralCurve*)Obj)->bUseDefaultValueBeforeFirstKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey = { "bUseDefaultValueBeforeFirstKey", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FIntegralCurve), &Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIndexedCurve,
		&NewStructOps,
		"IntegralCurve",
		sizeof(FIntegralCurve),
		alignof(FIntegralCurve),
		Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_IntegralCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegralCurve.InnerSingleton, Z_Construct_UScriptStruct_FIntegralCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntegralCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_Statics::ScriptStructInfo[] = {
		{ FIntegralKey::StaticStruct, Z_Construct_UScriptStruct_FIntegralKey_Statics::NewStructOps, TEXT("IntegralKey"), &Z_Registration_Info_UScriptStruct_IntegralKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegralKey), 223573429U) },
		{ FIntegralCurve::StaticStruct, Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewStructOps, TEXT("IntegralCurve"), &Z_Registration_Info_UScriptStruct_IntegralCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegralCurve), 397992019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_3227401662(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
