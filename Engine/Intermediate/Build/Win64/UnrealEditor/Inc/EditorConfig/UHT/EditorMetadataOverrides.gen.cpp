// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorMetadataOverrides.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorMetadataOverrides() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorMetadataOverrides();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorMetadataOverrides_NoRegister();
	EDITORCONFIG_API UEnum* Z_Construct_UEnum_EditorConfig_EMetadataType();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataConfig();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataSet();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FStructMetadata();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorConfig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetadataSet;
class UScriptStruct* FMetadataSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetadataSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetadataSet, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("MetadataSet"));
	}
	return Z_Registration_Info_UScriptStruct_MetadataSet.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FMetadataSet>()
{
	return FMetadataSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetadataSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Strings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Strings;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bools_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bools_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bools_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Bools;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ints_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Ints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Ints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Floats_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Floats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Floats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Floats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetadataSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetadataSet>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings_ValueProp = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings_Key_KeyProp = { "Strings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings_MetaData[] = {
		{ "Comment", "// map of metadata key to metadata value\n" },
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
		{ "ToolTip", "map of metadata key to metadata value" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetadataSet, Strings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools_ValueProp = { "Bools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools_Key_KeyProp = { "Bools_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools = { "Bools", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetadataSet, Bools), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints_ValueProp = { "Ints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints_Key_KeyProp = { "Ints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints = { "Ints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetadataSet, Ints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats_ValueProp = { "Floats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats_Key_KeyProp = { "Floats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats = { "Floats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetadataSet, Floats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetadataSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Strings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Bools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Ints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataSet_Statics::NewProp_Floats,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetadataSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"MetadataSet",
		sizeof(FMetadataSet),
		alignof(FMetadataSet),
		Z_Construct_UScriptStruct_FMetadataSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetadataSet()
	{
		if (!Z_Registration_Info_UScriptStruct_MetadataSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetadataSet.InnerSingleton, Z_Construct_UScriptStruct_FMetadataSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetadataSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructMetadata;
class UScriptStruct* FStructMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructMetadata, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("StructMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_StructMetadata.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FStructMetadata>()
{
	return FStructMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Fields_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Fields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructMetadata>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMetadataSet, METADATA_PARAMS(nullptr, 0) }; // 3833219840
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields_MetaData[] = {
		{ "Comment", "// map of field name to field metadata\n" },
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
		{ "ToolTip", "map of field name to field metadata" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructMetadata, Fields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields_MetaData)) }; // 3833219840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_StructMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_StructMetadata = { "StructMetadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructMetadata, StructMetadata), Z_Construct_UScriptStruct_FMetadataSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_StructMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_StructMetadata_MetaData)) }; // 3833219840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_Fields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMetadata_Statics::NewProp_StructMetadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"StructMetadata",
		sizeof(FStructMetadata),
		alignof(FStructMetadata),
		Z_Construct_UScriptStruct_FStructMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_StructMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructMetadata.InnerSingleton, Z_Construct_UScriptStruct_FStructMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetadataConfig;
class UScriptStruct* FMetadataConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetadataConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetadataConfig, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("MetadataConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MetadataConfig.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FMetadataConfig>()
{
	return FMetadataConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetadataConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Classes_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Classes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Classes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetadataConfig>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes_ValueProp = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStructMetadata, METADATA_PARAMS(nullptr, 0) }; // 2216138101
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes_Key_KeyProp = { "Classes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes_MetaData[] = {
		{ "Comment", "// map of class name to class metadata\n" },
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
		{ "ToolTip", "map of class name to class metadata" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetadataConfig, Classes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes_MetaData)) }; // 2216138101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetadataConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewProp_Classes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetadataConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"MetadataConfig",
		sizeof(FMetadataConfig),
		alignof(FMetadataConfig),
		Z_Construct_UScriptStruct_FMetadataConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetadataConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MetadataConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetadataConfig.InnerSingleton, Z_Construct_UScriptStruct_FMetadataConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetadataConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetadataType;
	static UEnum* EMetadataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetadataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetadataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorConfig_EMetadataType, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EMetadataType"));
		}
		return Z_Registration_Info_UEnum_EMetadataType.OuterSingleton;
	}
	template<> EDITORCONFIG_API UEnum* StaticEnum<EMetadataType>()
	{
		return EMetadataType_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorConfig_EMetadataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::Enumerators[] = {
		{ "EMetadataType::None", (int64)EMetadataType::None },
		{ "EMetadataType::Bool", (int64)EMetadataType::Bool },
		{ "EMetadataType::Int", (int64)EMetadataType::Int },
		{ "EMetadataType::Float", (int64)EMetadataType::Float },
		{ "EMetadataType::String", (int64)EMetadataType::String },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EMetadataType::Bool" },
		{ "Float.Name", "EMetadataType::Float" },
		{ "Int.Name", "EMetadataType::Int" },
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
		{ "None.Name", "EMetadataType::None" },
		{ "String.Name", "EMetadataType::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		"EMetadataType",
		"EMetadataType",
		Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorConfig_EMetadataType()
	{
		if (!Z_Registration_Info_UEnum_EMetadataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetadataType.InnerSingleton, Z_Construct_UEnum_EditorConfig_EMetadataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetadataType.InnerSingleton;
	}
	void UEditorMetadataOverrides::StaticRegisterNativesUEditorMetadataOverrides()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorMetadataOverrides);
	UClass* Z_Construct_UClass_UEditorMetadataOverrides_NoRegister()
	{
		return UEditorMetadataOverrides::StaticClass();
	}
	struct Z_Construct_UClass_UEditorMetadataOverrides_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorMetadataOverrides_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorMetadataOverrides_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorMetadataOverrides.h" },
		{ "ModuleRelativePath", "Public/EditorMetadataOverrides.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorMetadataOverrides_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorMetadataOverrides>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorMetadataOverrides_Statics::ClassParams = {
		&UEditorMetadataOverrides::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorMetadataOverrides_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMetadataOverrides_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorMetadataOverrides()
	{
		if (!Z_Registration_Info_UClass_UEditorMetadataOverrides.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorMetadataOverrides.OuterSingleton, Z_Construct_UClass_UEditorMetadataOverrides_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorMetadataOverrides.OuterSingleton;
	}
	template<> EDITORCONFIG_API UClass* StaticClass<UEditorMetadataOverrides>()
	{
		return UEditorMetadataOverrides::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorMetadataOverrides);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::EnumInfo[] = {
		{ EMetadataType_StaticEnum, TEXT("EMetadataType"), &Z_Registration_Info_UEnum_EMetadataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4127869826U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::ScriptStructInfo[] = {
		{ FMetadataSet::StaticStruct, Z_Construct_UScriptStruct_FMetadataSet_Statics::NewStructOps, TEXT("MetadataSet"), &Z_Registration_Info_UScriptStruct_MetadataSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataSet), 3833219840U) },
		{ FStructMetadata::StaticStruct, Z_Construct_UScriptStruct_FStructMetadata_Statics::NewStructOps, TEXT("StructMetadata"), &Z_Registration_Info_UScriptStruct_StructMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructMetadata), 2216138101U) },
		{ FMetadataConfig::StaticStruct, Z_Construct_UScriptStruct_FMetadataConfig_Statics::NewStructOps, TEXT("MetadataConfig"), &Z_Registration_Info_UScriptStruct_MetadataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataConfig), 257618674U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorMetadataOverrides, UEditorMetadataOverrides::StaticClass, TEXT("UEditorMetadataOverrides"), &Z_Registration_Info_UClass_UEditorMetadataOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorMetadataOverrides), 805995323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_185300177(TEXT("/Script/EditorConfig"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorMetadataOverrides_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
