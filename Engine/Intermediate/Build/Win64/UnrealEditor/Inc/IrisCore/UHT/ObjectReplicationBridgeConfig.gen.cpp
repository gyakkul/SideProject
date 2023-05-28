// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReplicationBridgeConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig;
class UScriptStruct* FObjectReplicationBridgePollConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgePollConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgePollConfig>()
{
	return FObjectReplicationBridgePollConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollFramePeriod_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PollFramePeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSubclasses_MetaData[];
#endif
		static void NewProp_bIncludeSubclasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSubclasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgePollConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Instances of this class, specified by its fully qualified path, should use the supplied poll frame period to check for modified replicated properties.\n\x09 * Object and Actor are forbidden class names for performance reasons.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class, specified by its fully qualified path, should use the supplied poll frame period to check for modified replicated properties.\nObject and Actor are forbidden class names for performance reasons." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectReplicationBridgePollConfig, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_PollFramePeriod_MetaData[] = {
		{ "Comment", "/**\n\x09 * How many frames between polling for modified replicated properties.\n\x09 * The value will be clamped to what the runtime supports, currently [0,255].\n\x09 * 0 means poll every frame and 255 means poll every 256th frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "How many frames between polling for modified replicated properties.\nThe value will be clamped to what the runtime supports, currently [0,255].\n0 means poll every frame and 255 means poll every 256th frame." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_PollFramePeriod = { "PollFramePeriod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectReplicationBridgePollConfig, PollFramePeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_PollFramePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_PollFramePeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses_MetaData[] = {
		{ "Comment", "/** Whether instances of subclasses should also use this poll period. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Whether instances of subclasses should also use this poll period." },
	};
#endif
	void Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses_SetBit(void* Obj)
	{
		((FObjectReplicationBridgePollConfig*)Obj)->bIncludeSubclasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses = { "bIncludeSubclasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FObjectReplicationBridgePollConfig), &Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_PollFramePeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewProp_bIncludeSubclasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"ObjectReplicationBridgePollConfig",
		sizeof(FObjectReplicationBridgePollConfig),
		alignof(FObjectReplicationBridgePollConfig),
		Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig;
class UScriptStruct* FObjectReplicationBridgeFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgeFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgeFilterConfig>()
{
	return FObjectReplicationBridgeFilterConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicFilterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DynamicFilterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgeFilterConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class should use the filter supplied. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class should use the filter supplied." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectReplicationBridgeFilterConfig, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_DynamicFilterName_MetaData[] = {
		{ "Comment", "/** The name of the filter to set on the class instances. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the filter to set on the class instances." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_DynamicFilterName = { "DynamicFilterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectReplicationBridgeFilterConfig, DynamicFilterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_DynamicFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_DynamicFilterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewProp_DynamicFilterName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"ObjectReplicationBridgeFilterConfig",
		sizeof(FObjectReplicationBridgeFilterConfig),
		alignof(FObjectReplicationBridgeFilterConfig),
		Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig;
class UScriptStruct* FObjectReplicationBridgePrioritizerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgePrioritizerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgePrioritizerConfig>()
{
	return FObjectReplicationBridgePrioritizerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrioritizerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgePrioritizerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class and its subclasses, specified by its fully qualified path, should use the prioritizer supplied. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class and its subclasses, specified by its fully qualified path, should use the prioritizer supplied." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectReplicationBridgePrioritizerConfig, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_PrioritizerName_MetaData[] = {
		{ "Comment", "/** The name of the prioritizer to set on the class instances. \"Default\" can be used to specify the default spatial prioritizer. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the prioritizer to set on the class instances. \"Default\" can be used to specify the default spatial prioritizer." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_PrioritizerName = { "PrioritizerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectReplicationBridgePrioritizerConfig, PrioritizerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_PrioritizerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_PrioritizerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewProp_PrioritizerName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"ObjectReplicationBridgePrioritizerConfig",
		sizeof(FObjectReplicationBridgePrioritizerConfig),
		alignof(FObjectReplicationBridgePrioritizerConfig),
		Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig;
class UScriptStruct* FObjectReplicationBridgeDeltaCompressionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ObjectReplicationBridgeDeltaCompressionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FObjectReplicationBridgeDeltaCompressionConfig>()
{
	return FObjectReplicationBridgeDeltaCompressionConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDeltaCompression_MetaData[];
#endif
		static void NewProp_bEnableDeltaCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDeltaCompression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectReplicationBridgeDeltaCompressionConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** Instances of this class or derived from this class should use delta compression */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Instances of this class or derived from this class should use delta compression" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectReplicationBridgeDeltaCompressionConfig, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression_MetaData[] = {
		{ "Comment", "/** Set to true if delta compression should be enabled for instances derived from this class. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Set to true if delta compression should be enabled for instances derived from this class." },
	};
#endif
	void Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression_SetBit(void* Obj)
	{
		((FObjectReplicationBridgeDeltaCompressionConfig*)Obj)->bEnableDeltaCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression = { "bEnableDeltaCompression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FObjectReplicationBridgeDeltaCompressionConfig), &Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewProp_bEnableDeltaCompression,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"ObjectReplicationBridgeDeltaCompressionConfig",
		sizeof(FObjectReplicationBridgeDeltaCompressionConfig),
		alignof(FObjectReplicationBridgeDeltaCompressionConfig),
		Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig.InnerSingleton;
	}
	void UObjectReplicationBridgeConfig::StaticRegisterNativesUObjectReplicationBridgeConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectReplicationBridgeConfig);
	UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister()
	{
		return UObjectReplicationBridgeConfig::StaticClass();
	}
	struct Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PollConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PollConfigs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterConfigs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrioritizerConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizerConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrioritizerConfigs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaCompressionConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaCompressionConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaCompressionConfigs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpatialFilterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultSpatialFilterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredNetDriverChannelClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredNetDriverChannelClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs_Inner = { "PollConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig, METADATA_PARAMS(nullptr, 0) }; // 4164953812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should override how often they're polled for modified replicated properties.\n\x09 * A config for a class deeper in the class hierarchy has precedence over a more generic class.\n\x09 * By default an Actor's NetUpdateFrequency is used to calculate how often it should be polled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should override how often they're polled for modified replicated properties.\nA config for a class deeper in the class hierarchy has precedence over a more generic class.\nBy default an Actor's NetUpdateFrequency is used to calculate how often it should be polled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs = { "PollConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectReplicationBridgeConfig, PollConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs_MetaData)) }; // 4164953812
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs_Inner = { "FilterConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig, METADATA_PARAMS(nullptr, 0) }; // 1522429442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should apply a certain filter. Subclasses will inherit the settings unless\n\x09 * they have different relevancy or spatial behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should apply a certain filter. Subclasses will inherit the settings unless\nthey have different relevancy or spatial behavior." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs = { "FilterConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectReplicationBridgeConfig, FilterConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs_MetaData)) }; // 1522429442
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs_Inner = { "PrioritizerConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig, METADATA_PARAMS(nullptr, 0) }; // 2458304041
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should apply a certain prioritizer. Subclasses will inherit the settings.\n\x09 * Instances with fixed priorities will ignore any config.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should apply a certain prioritizer. Subclasses will inherit the settings.\nInstances with fixed priorities will ignore any config." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs = { "PrioritizerConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectReplicationBridgeConfig, PrioritizerConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs_MetaData)) }; // 2458304041
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs_Inner = { "DeltaCompressionConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig, METADATA_PARAMS(nullptr, 0) }; // 3616539201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which classes should enable deltacompression. Derived classes will get the same behavior unless overidden\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "Which classes should enable deltacompression. Derived classes will get the same behavior unless overidden" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs = { "DeltaCompressionConfigs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectReplicationBridgeConfig, DeltaCompressionConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs_MetaData)) }; // 3616539201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DefaultSpatialFilterName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the filter to apply objects that can have spatial filtering applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the filter to apply objects that can have spatial filtering applied." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DefaultSpatialFilterName = { "DefaultSpatialFilterName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectReplicationBridgeConfig, DefaultSpatialFilterName), METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DefaultSpatialFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DefaultSpatialFilterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_RequiredNetDriverChannelClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the channel class required for object replication to work.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridgeConfig.h" },
		{ "ToolTip", "The name of the channel class required for object replication to work." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_RequiredNetDriverChannelClassName = { "RequiredNetDriverChannelClassName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectReplicationBridgeConfig, RequiredNetDriverChannelClassName), METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_RequiredNetDriverChannelClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_RequiredNetDriverChannelClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PollConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_FilterConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_PrioritizerConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DeltaCompressionConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_DefaultSpatialFilterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_RequiredNetDriverChannelClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReplicationBridgeConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::ClassParams = {
		&UObjectReplicationBridgeConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectReplicationBridgeConfig()
	{
		if (!Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton, Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UObjectReplicationBridgeConfig>()
	{
		return UObjectReplicationBridgeConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReplicationBridgeConfig);
	UObjectReplicationBridgeConfig::~UObjectReplicationBridgeConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ScriptStructInfo[] = {
		{ FObjectReplicationBridgePollConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgePollConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePollConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgePollConfig), 4164953812U) },
		{ FObjectReplicationBridgeFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgeFilterConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgeFilterConfig), 1522429442U) },
		{ FObjectReplicationBridgePrioritizerConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgePrioritizerConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgePrioritizerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgePrioritizerConfig), 2458304041U) },
		{ FObjectReplicationBridgeDeltaCompressionConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewStructOps, TEXT("ObjectReplicationBridgeDeltaCompressionConfig"), &Z_Registration_Info_UScriptStruct_ObjectReplicationBridgeDeltaCompressionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectReplicationBridgeDeltaCompressionConfig), 3616539201U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectReplicationBridgeConfig, UObjectReplicationBridgeConfig::StaticClass, TEXT("UObjectReplicationBridgeConfig"), &Z_Registration_Info_UClass_UObjectReplicationBridgeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectReplicationBridgeConfig), 753415739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_3397118371(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
