// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSerialization() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FVector_NetQuantize>() == std::is_polymorphic<FVector>(), "USTRUCT FVector_NetQuantize cannot be polymorphic unless super FVector is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector_NetQuantize;
class UScriptStruct* FVector_NetQuantize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector_NetQuantize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize"));
	}
	return Z_Registration_Info_UScriptStruct_Vector_NetQuantize.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantize>()
{
	return FVector_NetQuantize::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVector_NetQuantize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantize\n *\n *\x09""0 decimal place of precision.\n *\x09Up to 20 bits per component.\n *\x09Valid range: 2^20 = +/- 1,048,576\n *\n *\x09Note: this is the historical UE format for vector net serialization\n *\n */" },
		{ "HasNativeBreak", "/Script/Engine.KismetMathLibrary.BreakVector_NetQuantize" },
		{ "HasNativeMake", "/Script/Engine.KismetMathLibrary.MakeVector_NetQuantize" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantize\n\n0 decimal place of precision.\nUp to 20 bits per component.\nValid range: 2^20 = +/- 1,048,576\n\nNote: this is the historical UE format for vector net serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantize",
		sizeof(FVector_NetQuantize),
		alignof(FVector_NetQuantize),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize()
	{
		if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector_NetQuantize.InnerSingleton, Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Vector_NetQuantize.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVector_NetQuantize10>() == std::is_polymorphic<FVector>(), "USTRUCT FVector_NetQuantize10 cannot be polymorphic unless super FVector is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector_NetQuantize10;
class UScriptStruct* FVector_NetQuantize10::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantize10.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector_NetQuantize10.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize10, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize10"));
	}
	return Z_Registration_Info_UScriptStruct_Vector_NetQuantize10.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantize10>()
{
	return FVector_NetQuantize10::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantize10\n *\n *\x09""1 decimal place of precision.\n *\x09Up to 24 bits per component.\n *\x09Valid range: 2^24 / 10 = +/- 1,677,721.6\n *\n */" },
		{ "HasNativeBreak", "/Script/Engine.KismetMathLibrary.BreakVector_NetQuantize10" },
		{ "HasNativeMake", "/Script/Engine.KismetMathLibrary.MakeVector_NetQuantize10" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantize10\n\n1 decimal place of precision.\nUp to 24 bits per component.\nValid range: 2^24 / 10 = +/- 1,677,721.6" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize10>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantize10",
		sizeof(FVector_NetQuantize10),
		alignof(FVector_NetQuantize10),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10()
	{
		if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantize10.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector_NetQuantize10.InnerSingleton, Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Vector_NetQuantize10.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVector_NetQuantize100>() == std::is_polymorphic<FVector>(), "USTRUCT FVector_NetQuantize100 cannot be polymorphic unless super FVector is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector_NetQuantize100;
class UScriptStruct* FVector_NetQuantize100::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantize100.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector_NetQuantize100.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize100, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize100"));
	}
	return Z_Registration_Info_UScriptStruct_Vector_NetQuantize100.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantize100>()
{
	return FVector_NetQuantize100::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantize100\n *\n *\x09""2 decimal place of precision.\n *\x09Up to 30 bits per component.\n *\x09Valid range: 2^30 / 100 = +/- 10,737,418.24\n *\n */" },
		{ "HasNativeBreak", "/Script/Engine.KismetMathLibrary.BreakVector_NetQuantize100" },
		{ "HasNativeMake", "/Script/Engine.KismetMathLibrary.MakeVector_NetQuantize100" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantize100\n\n2 decimal place of precision.\nUp to 30 bits per component.\nValid range: 2^30 / 100 = +/- 10,737,418.24" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize100>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantize100",
		sizeof(FVector_NetQuantize100),
		alignof(FVector_NetQuantize100),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100()
	{
		if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantize100.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector_NetQuantize100.InnerSingleton, Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Vector_NetQuantize100.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVector_NetQuantizeNormal>() == std::is_polymorphic<FVector>(), "USTRUCT FVector_NetQuantizeNormal cannot be polymorphic unless super FVector is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal;
class UScriptStruct* FVector_NetQuantizeNormal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantizeNormal"));
	}
	return Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVector_NetQuantizeNormal>()
{
	return FVector_NetQuantizeNormal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""FVector_NetQuantizeNormal\n *\n *\x09""16 bits per component\n *\x09Valid range: -1..+1 inclusive\n */" },
		{ "HasNativeBreak", "/Script/Engine.KismetMathLibrary.BreakVector_NetQuantizeNormal" },
		{ "HasNativeMake", "/Script/Engine.KismetMathLibrary.MakeVector_NetQuantizeNormal" },
		{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
		{ "ToolTip", "FVector_NetQuantizeNormal\n\n16 bits per component\nValid range: -1..+1 inclusive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantizeNormal>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FVector,
		&NewStructOps,
		"Vector_NetQuantizeNormal",
		sizeof(FVector_NetQuantizeNormal),
		alignof(FVector_NetQuantizeNormal),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal()
	{
		if (!Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal.InnerSingleton, Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_Statics::ScriptStructInfo[] = {
		{ FVector_NetQuantize::StaticStruct, Z_Construct_UScriptStruct_FVector_NetQuantize_Statics::NewStructOps, TEXT("Vector_NetQuantize"), &Z_Registration_Info_UScriptStruct_Vector_NetQuantize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector_NetQuantize), 1613593159U) },
		{ FVector_NetQuantize10::StaticStruct, Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics::NewStructOps, TEXT("Vector_NetQuantize10"), &Z_Registration_Info_UScriptStruct_Vector_NetQuantize10, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector_NetQuantize10), 3369118706U) },
		{ FVector_NetQuantize100::StaticStruct, Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics::NewStructOps, TEXT("Vector_NetQuantize100"), &Z_Registration_Info_UScriptStruct_Vector_NetQuantize100, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector_NetQuantize100), 255231453U) },
		{ FVector_NetQuantizeNormal::StaticStruct, Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics::NewStructOps, TEXT("Vector_NetQuantizeNormal"), &Z_Registration_Info_UScriptStruct_Vector_NetQuantizeNormal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector_NetQuantizeNormal), 903499713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_209604485(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
