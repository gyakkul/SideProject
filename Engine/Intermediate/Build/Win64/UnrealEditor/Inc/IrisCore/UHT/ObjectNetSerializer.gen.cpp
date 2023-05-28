// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/ObjectNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectNetSerializer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FObjectNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FObjectNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig;
class UScriptStruct* FObjectNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectNetSerializerConfig>()
{
	return FObjectNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"ObjectNetSerializerConfig",
		sizeof(FObjectNetSerializerConfig),
		alignof(FObjectNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWeakObjectNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FWeakObjectNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig;
class UScriptStruct* FWeakObjectNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("WeakObjectNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FWeakObjectNetSerializerConfig>()
{
	return FWeakObjectNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeakObjectNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"WeakObjectNetSerializerConfig",
		sizeof(FWeakObjectNetSerializerConfig),
		alignof(FWeakObjectNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FScriptInterfaceNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FScriptInterfaceNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig;
class UScriptStruct* FScriptInterfaceNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ScriptInterfaceNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FScriptInterfaceNetSerializerConfig>()
{
	return FScriptInterfaceNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_InterfaceClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptInterfaceNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewProp_InterfaceClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/ObjectNetSerializer.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptInterfaceNetSerializerConfig, InterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewProp_InterfaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewProp_InterfaceClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewProp_InterfaceClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"ScriptInterfaceNetSerializerConfig",
		sizeof(FScriptInterfaceNetSerializerConfig),
		alignof(FScriptInterfaceNetSerializerConfig),
		Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FObjectNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectNetSerializerConfig_Statics::NewStructOps, TEXT("ObjectNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_ObjectNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectNetSerializerConfig), 2560371944U) },
		{ FWeakObjectNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FWeakObjectNetSerializerConfig_Statics::NewStructOps, TEXT("WeakObjectNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_WeakObjectNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeakObjectNetSerializerConfig), 1746559570U) },
		{ FScriptInterfaceNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FScriptInterfaceNetSerializerConfig_Statics::NewStructOps, TEXT("ScriptInterfaceNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_ScriptInterfaceNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptInterfaceNetSerializerConfig), 1534481103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_3687465653(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_ObjectNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
