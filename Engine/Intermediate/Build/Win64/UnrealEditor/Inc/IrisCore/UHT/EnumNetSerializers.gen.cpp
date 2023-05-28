// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/EnumNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FEnumInt8NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumInt8NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig;
class UScriptStruct* FEnumInt8NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumInt8NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumInt8NetSerializerConfig>()
{
	return FEnumInt8NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumInt8NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt8NetSerializerConfig, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt8NetSerializerConfig, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt8NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumInt8NetSerializerConfig",
		sizeof(FEnumInt8NetSerializerConfig),
		alignof(FEnumInt8NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumInt16NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumInt16NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig;
class UScriptStruct* FEnumInt16NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumInt16NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumInt16NetSerializerConfig>()
{
	return FEnumInt16NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumInt16NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt16NetSerializerConfig, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt16NetSerializerConfig, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt16NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumInt16NetSerializerConfig",
		sizeof(FEnumInt16NetSerializerConfig),
		alignof(FEnumInt16NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumInt32NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumInt32NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig;
class UScriptStruct* FEnumInt32NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumInt32NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumInt32NetSerializerConfig>()
{
	return FEnumInt32NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumInt32NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt32NetSerializerConfig, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt32NetSerializerConfig, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt32NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumInt32NetSerializerConfig",
		sizeof(FEnumInt32NetSerializerConfig),
		alignof(FEnumInt32NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumInt64NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumInt64NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig;
class UScriptStruct* FEnumInt64NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumInt64NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumInt64NetSerializerConfig>()
{
	return FEnumInt64NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumInt64NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt64NetSerializerConfig, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt64NetSerializerConfig, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumInt64NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumInt64NetSerializerConfig",
		sizeof(FEnumInt64NetSerializerConfig),
		alignof(FEnumInt64NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumUint8NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumUint8NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig;
class UScriptStruct* FEnumUint8NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumUint8NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumUint8NetSerializerConfig>()
{
	return FEnumUint8NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumUint8NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint8NetSerializerConfig, LowerBound), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint8NetSerializerConfig, UpperBound), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint8NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumUint8NetSerializerConfig",
		sizeof(FEnumUint8NetSerializerConfig),
		alignof(FEnumUint8NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumUint16NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumUint16NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig;
class UScriptStruct* FEnumUint16NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumUint16NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumUint16NetSerializerConfig>()
{
	return FEnumUint16NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumUint16NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint16NetSerializerConfig, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint16NetSerializerConfig, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint16NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumUint16NetSerializerConfig",
		sizeof(FEnumUint16NetSerializerConfig),
		alignof(FEnumUint16NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumUint32NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumUint32NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig;
class UScriptStruct* FEnumUint32NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumUint32NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumUint32NetSerializerConfig>()
{
	return FEnumUint32NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumUint32NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint32NetSerializerConfig, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint32NetSerializerConfig, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint32NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumUint32NetSerializerConfig",
		sizeof(FEnumUint32NetSerializerConfig),
		alignof(FEnumUint32NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumUint64NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FEnumUint64NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig;
class UScriptStruct* FEnumUint64NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EnumUint64NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FEnumUint64NetSerializerConfig>()
{
	return FEnumUint64NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumUint64NetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint64NetSerializerConfig, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint64NetSerializerConfig, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/EnumNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumUint64NetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"EnumUint64NetSerializerConfig",
		sizeof(FEnumUint64NetSerializerConfig),
		alignof(FEnumUint64NetSerializerConfig),
		Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_EnumNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_EnumNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FEnumInt8NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumInt8NetSerializerConfig_Statics::NewStructOps, TEXT("EnumInt8NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumInt8NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumInt8NetSerializerConfig), 137165877U) },
		{ FEnumInt16NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumInt16NetSerializerConfig_Statics::NewStructOps, TEXT("EnumInt16NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumInt16NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumInt16NetSerializerConfig), 4108888438U) },
		{ FEnumInt32NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumInt32NetSerializerConfig_Statics::NewStructOps, TEXT("EnumInt32NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumInt32NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumInt32NetSerializerConfig), 2427872865U) },
		{ FEnumInt64NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumInt64NetSerializerConfig_Statics::NewStructOps, TEXT("EnumInt64NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumInt64NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumInt64NetSerializerConfig), 3816715760U) },
		{ FEnumUint8NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumUint8NetSerializerConfig_Statics::NewStructOps, TEXT("EnumUint8NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumUint8NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumUint8NetSerializerConfig), 4268835254U) },
		{ FEnumUint16NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumUint16NetSerializerConfig_Statics::NewStructOps, TEXT("EnumUint16NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumUint16NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumUint16NetSerializerConfig), 3251858791U) },
		{ FEnumUint32NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumUint32NetSerializerConfig_Statics::NewStructOps, TEXT("EnumUint32NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumUint32NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumUint32NetSerializerConfig), 4019733920U) },
		{ FEnumUint64NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnumUint64NetSerializerConfig_Statics::NewStructOps, TEXT("EnumUint64NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_EnumUint64NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumUint64NetSerializerConfig), 179325782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_EnumNetSerializers_h_786528061(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_EnumNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_EnumNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
