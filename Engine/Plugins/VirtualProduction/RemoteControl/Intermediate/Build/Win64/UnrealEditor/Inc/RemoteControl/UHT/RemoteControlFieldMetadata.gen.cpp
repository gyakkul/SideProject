// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlFieldMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlFieldMetadata() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCFieldMetadata();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_bool();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_byte();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_double();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_float();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_FName();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_FString();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_FVector();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int16();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int32();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int64();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int8();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_UClass();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_uint16();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_uint32();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_uint64();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_UObject();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCFieldMetadata;
class UScriptStruct* FRCFieldMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCFieldMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCFieldMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCFieldMetadata, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCFieldMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RCFieldMetadata.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCFieldMetadata>()
{
	return FRCFieldMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCFieldMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCFieldMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCFieldMetadata>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCFieldMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RCFieldMetadata",
		sizeof(FRCFieldMetadata),
		alignof(FRCFieldMetadata),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCFieldMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_RCFieldMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCFieldMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRCFieldMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCFieldMetadata.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_byte>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_byte cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_byte;
class UScriptStruct* FRCMetadata_byte::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_byte.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_byte.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_byte, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_byte"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_byte.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_byte>()
{
	return FRCMetadata_byte::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_byte_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_byte>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_byte, Min), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_byte, Max), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_byte, DefaultValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_byte",
		sizeof(FRCMetadata_byte),
		alignof(FRCMetadata_byte),
		Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_byte()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_byte.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_byte.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_byte.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_uint16>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_uint16 cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_uint16;
class UScriptStruct* FRCMetadata_uint16::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_uint16.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_uint16.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_uint16, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_uint16"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_uint16.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_uint16>()
{
	return FRCMetadata_uint16::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_uint16>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint16, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint16, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint16, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_uint16",
		sizeof(FRCMetadata_uint16),
		alignof(FRCMetadata_uint16),
		Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_uint16()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_uint16.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_uint16.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_uint16.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_uint32>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_uint32 cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_uint32;
class UScriptStruct* FRCMetadata_uint32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_uint32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_uint32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_uint32, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_uint32"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_uint32.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_uint32>()
{
	return FRCMetadata_uint32::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_uint32>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint32, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint32, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint32, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_uint32",
		sizeof(FRCMetadata_uint32),
		alignof(FRCMetadata_uint32),
		Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_uint32()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_uint32.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_uint32.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_uint32.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_uint64>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_uint64 cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_uint64;
class UScriptStruct* FRCMetadata_uint64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_uint64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_uint64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_uint64, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_uint64"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_uint64.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_uint64>()
{
	return FRCMetadata_uint64::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_uint64>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint64, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint64, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_uint64, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_uint64",
		sizeof(FRCMetadata_uint64),
		alignof(FRCMetadata_uint64),
		Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_uint64()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_uint64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_uint64.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_uint64.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_int8>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_int8 cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_int8;
class UScriptStruct* FRCMetadata_int8::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_int8.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_int8.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_int8, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_int8"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_int8.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_int8>()
{
	return FRCMetadata_int8::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_int8_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_int8>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int8, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int8, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int8, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_int8",
		sizeof(FRCMetadata_int8),
		alignof(FRCMetadata_int8),
		Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int8()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_int8.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_int8.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_int8.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_int16>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_int16 cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_int16;
class UScriptStruct* FRCMetadata_int16::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_int16.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_int16.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_int16, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_int16"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_int16.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_int16>()
{
	return FRCMetadata_int16::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_int16_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_int16>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int16, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int16, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int16, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_int16",
		sizeof(FRCMetadata_int16),
		alignof(FRCMetadata_int16),
		Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int16()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_int16.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_int16.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_int16.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_int32>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_int32 cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_int32;
class UScriptStruct* FRCMetadata_int32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_int32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_int32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_int32, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_int32"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_int32.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_int32>()
{
	return FRCMetadata_int32::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_int32_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_int32>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int32, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int32, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int32, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_int32",
		sizeof(FRCMetadata_int32),
		alignof(FRCMetadata_int32),
		Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int32()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_int32.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_int32.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_int32.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_int64>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_int64 cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_int64;
class UScriptStruct* FRCMetadata_int64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_int64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_int64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_int64, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_int64"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_int64.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_int64>()
{
	return FRCMetadata_int64::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_int64_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_int64>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int64, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int64, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_int64, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_int64",
		sizeof(FRCMetadata_int64),
		alignof(FRCMetadata_int64),
		Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_int64()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_int64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_int64.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_int64.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_float>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_float cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_float;
class UScriptStruct* FRCMetadata_float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_float, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_float"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_float.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_float>()
{
	return FRCMetadata_float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_float_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_float, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_float, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_float, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_float",
		sizeof(FRCMetadata_float),
		alignof(FRCMetadata_float),
		Z_Construct_UScriptStruct_FRCMetadata_float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_float()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_float.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_float.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_double>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_double cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_double;
class UScriptStruct* FRCMetadata_double::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_double.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_double.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_double, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_double"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_double.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_double>()
{
	return FRCMetadata_double::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_double_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_double_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_double>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_double, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_double, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_double, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_double_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_double_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_double",
		sizeof(FRCMetadata_double),
		alignof(FRCMetadata_double),
		Z_Construct_UScriptStruct_FRCMetadata_double_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_double_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_double()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_double.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_double.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_double_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_double.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_FString>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_FString cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_FString;
class UScriptStruct* FRCMetadata_FString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_FString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_FString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_FString, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_FString"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_FString.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_FString>()
{
	return FRCMetadata_FString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_FString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_FString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_FString, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_FString",
		sizeof(FRCMetadata_FString),
		alignof(FRCMetadata_FString),
		Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_FString()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_FString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_FString.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_FString.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_FName>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_FName cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_FName;
class UScriptStruct* FRCMetadata_FName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_FName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_FName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_FName, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_FName"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_FName.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_FName>()
{
	return FRCMetadata_FName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_FName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_FName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_FName, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_FName",
		sizeof(FRCMetadata_FName),
		alignof(FRCMetadata_FName),
		Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_FName()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_FName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_FName.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_FName.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_UObject>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_UObject cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_UObject;
class UScriptStruct* FRCMetadata_UObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_UObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_UObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_UObject, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_UObject"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_UObject.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_UObject>()
{
	return FRCMetadata_UObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_UObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_UObject, DefaultValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_UObject",
		sizeof(FRCMetadata_UObject),
		alignof(FRCMetadata_UObject),
		Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_UObject()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_UObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_UObject.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_UObject.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_UClass>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_UClass cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_UClass;
class UScriptStruct* FRCMetadata_UClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_UClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_UClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_UClass, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_UClass"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_UClass.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_UClass>()
{
	return FRCMetadata_UClass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_UClass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_UClass, DefaultValue), Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_UClass",
		sizeof(FRCMetadata_UClass),
		alignof(FRCMetadata_UClass),
		Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_UClass()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_UClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_UClass.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_UClass.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_UScriptStruct>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_UScriptStruct cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct;
class UScriptStruct* FRCMetadata_UScriptStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_UScriptStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_UScriptStruct>()
{
	return FRCMetadata_UScriptStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_UScriptStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_UScriptStruct, DefaultValue), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_UScriptStruct",
		sizeof(FRCMetadata_UScriptStruct),
		alignof(FRCMetadata_UScriptStruct),
		Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_bool>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_bool cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_bool;
class UScriptStruct* FRCMetadata_bool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_bool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_bool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_bool, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_bool"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_bool.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_bool>()
{
	return FRCMetadata_bool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_bool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_bool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((FRCMetadata_bool*)Obj)->DefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCMetadata_bool), &Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_bool",
		sizeof(FRCMetadata_bool),
		alignof(FRCMetadata_bool),
		Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_bool()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_bool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_bool.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_bool.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCMetadata_FVector>() == std::is_polymorphic<FRCFieldMetadata>(), "USTRUCT FRCMetadata_FVector cannot be polymorphic unless super FRCFieldMetadata is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCMetadata_FVector;
class UScriptStruct* FRCMetadata_FVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCMetadata_FVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCMetadata_FVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCMetadata_FVector, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCMetadata_FVector"));
	}
	return Z_Registration_Info_UScriptStruct_RCMetadata_FVector.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCMetadata_FVector>()
{
	return FRCMetadata_FVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCMetadata_FVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_FVector, DefaultValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_FVector, MinimumValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MinimumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MaximumValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCMetadata_FVector, MaximumValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MaximumValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewProp_MaximumValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRCFieldMetadata,
		&NewStructOps,
		"RCMetadata_FVector",
		sizeof(FRCMetadata_FVector),
		alignof(FRCMetadata_FVector),
		Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCMetadata_FVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RCMetadata_FVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCMetadata_FVector.InnerSingleton, Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCMetadata_FVector.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldMetadata_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldMetadata_h_Statics::ScriptStructInfo[] = {
		{ FRCFieldMetadata::StaticStruct, Z_Construct_UScriptStruct_FRCFieldMetadata_Statics::NewStructOps, TEXT("RCFieldMetadata"), &Z_Registration_Info_UScriptStruct_RCFieldMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCFieldMetadata), 3032861256U) },
		{ FRCMetadata_byte::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_byte_Statics::NewStructOps, TEXT("RCMetadata_byte"), &Z_Registration_Info_UScriptStruct_RCMetadata_byte, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_byte), 2041405806U) },
		{ FRCMetadata_uint16::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_uint16_Statics::NewStructOps, TEXT("RCMetadata_uint16"), &Z_Registration_Info_UScriptStruct_RCMetadata_uint16, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_uint16), 1388487317U) },
		{ FRCMetadata_uint32::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_uint32_Statics::NewStructOps, TEXT("RCMetadata_uint32"), &Z_Registration_Info_UScriptStruct_RCMetadata_uint32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_uint32), 83833165U) },
		{ FRCMetadata_uint64::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_uint64_Statics::NewStructOps, TEXT("RCMetadata_uint64"), &Z_Registration_Info_UScriptStruct_RCMetadata_uint64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_uint64), 3686453462U) },
		{ FRCMetadata_int8::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_int8_Statics::NewStructOps, TEXT("RCMetadata_int8"), &Z_Registration_Info_UScriptStruct_RCMetadata_int8, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_int8), 332515980U) },
		{ FRCMetadata_int16::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_int16_Statics::NewStructOps, TEXT("RCMetadata_int16"), &Z_Registration_Info_UScriptStruct_RCMetadata_int16, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_int16), 635864448U) },
		{ FRCMetadata_int32::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_int32_Statics::NewStructOps, TEXT("RCMetadata_int32"), &Z_Registration_Info_UScriptStruct_RCMetadata_int32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_int32), 771023781U) },
		{ FRCMetadata_int64::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_int64_Statics::NewStructOps, TEXT("RCMetadata_int64"), &Z_Registration_Info_UScriptStruct_RCMetadata_int64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_int64), 91999872U) },
		{ FRCMetadata_float::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_float_Statics::NewStructOps, TEXT("RCMetadata_float"), &Z_Registration_Info_UScriptStruct_RCMetadata_float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_float), 39520002U) },
		{ FRCMetadata_double::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_double_Statics::NewStructOps, TEXT("RCMetadata_double"), &Z_Registration_Info_UScriptStruct_RCMetadata_double, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_double), 3108970039U) },
		{ FRCMetadata_FString::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_FString_Statics::NewStructOps, TEXT("RCMetadata_FString"), &Z_Registration_Info_UScriptStruct_RCMetadata_FString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_FString), 1697941448U) },
		{ FRCMetadata_FName::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_FName_Statics::NewStructOps, TEXT("RCMetadata_FName"), &Z_Registration_Info_UScriptStruct_RCMetadata_FName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_FName), 1954787606U) },
		{ FRCMetadata_UObject::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_UObject_Statics::NewStructOps, TEXT("RCMetadata_UObject"), &Z_Registration_Info_UScriptStruct_RCMetadata_UObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_UObject), 2658240654U) },
		{ FRCMetadata_UClass::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_UClass_Statics::NewStructOps, TEXT("RCMetadata_UClass"), &Z_Registration_Info_UScriptStruct_RCMetadata_UClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_UClass), 186627307U) },
		{ FRCMetadata_UScriptStruct::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_UScriptStruct_Statics::NewStructOps, TEXT("RCMetadata_UScriptStruct"), &Z_Registration_Info_UScriptStruct_RCMetadata_UScriptStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_UScriptStruct), 2184303592U) },
		{ FRCMetadata_bool::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_bool_Statics::NewStructOps, TEXT("RCMetadata_bool"), &Z_Registration_Info_UScriptStruct_RCMetadata_bool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_bool), 106400584U) },
		{ FRCMetadata_FVector::StaticStruct, Z_Construct_UScriptStruct_FRCMetadata_FVector_Statics::NewStructOps, TEXT("RCMetadata_FVector"), &Z_Registration_Info_UScriptStruct_RCMetadata_FVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCMetadata_FVector), 482155396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldMetadata_h_3006647066(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldMetadata_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
