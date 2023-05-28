// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Iris/Serialization/InternalNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalNetSerializers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FBitfieldNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FBitfieldNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig;
class UScriptStruct* FBitfieldNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("BitfieldNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FBitfieldNetSerializerConfig>()
{
	return FBitfieldNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitMask_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Bitfield property\n" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "Bitfield property" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBitfieldNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewProp_BitMask_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewProp_BitMask = { "BitMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBitfieldNetSerializerConfig, BitMask), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewProp_BitMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewProp_BitMask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewProp_BitMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"BitfieldNetSerializerConfig",
		sizeof(FBitfieldNetSerializerConfig),
		alignof(FBitfieldNetSerializerConfig),
		Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FArrayPropertyNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FArrayPropertyNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig;
class UScriptStruct* FArrayPropertyNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ArrayPropertyNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FArrayPropertyNetSerializerConfig>()
{
	return FArrayPropertyNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxElementCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MaxElementCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountBitCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ElementCountBitCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Array property\n" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "Array property" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayPropertyNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_MaxElementCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_MaxElementCount = { "MaxElementCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FArrayPropertyNetSerializerConfig, MaxElementCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_MaxElementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_MaxElementCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_ElementCountBitCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_ElementCountBitCount = { "ElementCountBitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FArrayPropertyNetSerializerConfig, ElementCountBitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_ElementCountBitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_ElementCountBitCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FArrayPropertyNetSerializerConfig, Property), &FArrayProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_Property_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_MaxElementCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_ElementCountBitCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewProp_Property,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"ArrayPropertyNetSerializerConfig",
		sizeof(FArrayPropertyNetSerializerConfig),
		alignof(FArrayPropertyNetSerializerConfig),
		Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLastResortPropertyNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FLastResortPropertyNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig;
class UScriptStruct* FLastResortPropertyNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("LastResortPropertyNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FLastResortPropertyNetSerializerConfig>()
{
	return FLastResortPropertyNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Any property that doesn't have any other option will end up using this.\n * As the name suggests it's a last resort.\n * - Cannot support delta compression in a meaningful way.\n * - Must allocate memory to store quantized state.\n */" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "Any property that doesn't have any other option will end up using this.\nAs the name suggests it's a last resort.\n- Cannot support delta compression in a meaningful way.\n- Must allocate memory to store quantized state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLastResortPropertyNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLastResortPropertyNetSerializerConfig, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_Property_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewProp_Property,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"LastResortPropertyNetSerializerConfig",
		sizeof(FLastResortPropertyNetSerializerConfig),
		alignof(FLastResortPropertyNetSerializerConfig),
		Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNetRoleNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FNetRoleNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig;
class UScriptStruct* FNetRoleNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetRoleNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetRoleNetSerializerConfig>()
{
	return FNetRoleNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeInternalOffsetToOtherRole_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RelativeInternalOffsetToOtherRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeExternalOffsetToOtherRole_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RelativeExternalOffsetToOtherRole;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutonomousProxyValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutonomousProxyValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedProxyValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulatedProxyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// ENetRole. With role swapping at deserialization\n" },
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
		{ "ToolTip", "ENetRole. With role swapping at deserialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetRoleNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeInternalOffsetToOtherRole_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeInternalOffsetToOtherRole = { "RelativeInternalOffsetToOtherRole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetRoleNetSerializerConfig, RelativeInternalOffsetToOtherRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeInternalOffsetToOtherRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeInternalOffsetToOtherRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeExternalOffsetToOtherRole_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeExternalOffsetToOtherRole = { "RelativeExternalOffsetToOtherRole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetRoleNetSerializerConfig, RelativeExternalOffsetToOtherRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeExternalOffsetToOtherRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeExternalOffsetToOtherRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_LowerBound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetRoleNetSerializerConfig, LowerBound), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetRoleNetSerializerConfig, UpperBound), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetRoleNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_AutonomousProxyValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_AutonomousProxyValue = { "AutonomousProxyValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetRoleNetSerializerConfig, AutonomousProxyValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_AutonomousProxyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_AutonomousProxyValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_SimulatedProxyValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_SimulatedProxyValue = { "SimulatedProxyValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetRoleNetSerializerConfig, SimulatedProxyValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_SimulatedProxyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_SimulatedProxyValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeInternalOffsetToOtherRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_RelativeExternalOffsetToOtherRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_BitCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_AutonomousProxyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewProp_SimulatedProxyValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"NetRoleNetSerializerConfig",
		sizeof(FNetRoleNetSerializerConfig),
		alignof(FNetRoleNetSerializerConfig),
		Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFieldPathNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FFieldPathNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig;
class UScriptStruct* FFieldPathNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("FieldPathNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FFieldPathNetSerializerConfig>()
{
	return FFieldPathNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldPathNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldPathNetSerializerConfig, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewProp_Property_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewProp_Property,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"FieldPathNetSerializerConfig",
		sizeof(FFieldPathNetSerializerConfig),
		alignof(FFieldPathNetSerializerConfig),
		Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper;
class UScriptStruct* FFieldPathNetSerializerSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("FieldPathNetSerializerSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FFieldPathNetSerializerSerializationHelper>()
{
	return FFieldPathNetSerializerSerializationHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldPathNetSerializerSerializationHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldPathNetSerializerSerializationHelper, Owner), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath_Inner = { "PropertyPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/Serialization/InternalNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldPathNetSerializerSerializationHelper, PropertyPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewProp_PropertyPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"FieldPathNetSerializerSerializationHelper",
		sizeof(FFieldPathNetSerializerSerializationHelper),
		alignof(FFieldPathNetSerializerSerializationHelper),
		Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FBitfieldNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FBitfieldNetSerializerConfig_Statics::NewStructOps, TEXT("BitfieldNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_BitfieldNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBitfieldNetSerializerConfig), 2515131807U) },
		{ FArrayPropertyNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig_Statics::NewStructOps, TEXT("ArrayPropertyNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_ArrayPropertyNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayPropertyNetSerializerConfig), 2969772841U) },
		{ FLastResortPropertyNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FLastResortPropertyNetSerializerConfig_Statics::NewStructOps, TEXT("LastResortPropertyNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_LastResortPropertyNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLastResortPropertyNetSerializerConfig), 2576412331U) },
		{ FNetRoleNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNetRoleNetSerializerConfig_Statics::NewStructOps, TEXT("NetRoleNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NetRoleNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetRoleNetSerializerConfig), 2201046279U) },
		{ FFieldPathNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FFieldPathNetSerializerConfig_Statics::NewStructOps, TEXT("FieldPathNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_FieldPathNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldPathNetSerializerConfig), 240703595U) },
		{ FFieldPathNetSerializerSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FFieldPathNetSerializerSerializationHelper_Statics::NewStructOps, TEXT("FieldPathNetSerializerSerializationHelper"), &Z_Registration_Info_UScriptStruct_FieldPathNetSerializerSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldPathNetSerializerSerializationHelper), 2729149698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_3619999875(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_Serialization_InternalNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
