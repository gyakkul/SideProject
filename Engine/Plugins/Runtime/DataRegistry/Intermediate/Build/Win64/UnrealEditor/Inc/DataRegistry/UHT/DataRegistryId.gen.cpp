// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistryId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistryId() {}
// Cross Module References
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryId();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryType();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistryType;
class UScriptStruct* FDataRegistryType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistryType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistryType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistryType, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("DataRegistryType"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistryType.OuterSingleton;
}
template<> DATAREGISTRY_API UScriptStruct* StaticStruct<FDataRegistryType>()
{
	return FDataRegistryType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistryType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper struct to represent a global data registry, represented as an FName internally and implicitly convertible back and forth.\n * This exists so the blueprint API can understand it's not a normal FName.\n */" },
		{ "ModuleRelativePath", "Public/DataRegistryId.h" },
		{ "ToolTip", "Wrapper struct to represent a global data registry, represented as an FName internally and implicitly convertible back and forth.\nThis exists so the blueprint API can understand it's not a normal FName." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistryType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistryType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryType_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DataRegistryType" },
		{ "Comment", "/** The FName representing this type */" },
		{ "ModuleRelativePath", "Public/DataRegistryId.h" },
		{ "ToolTip", "The FName representing this type" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataRegistryType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryType, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryType_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryType_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataRegistryType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryType_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistryType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		&NewStructOps,
		"DataRegistryType",
		sizeof(FDataRegistryType),
		alignof(FDataRegistryType),
		Z_Construct_UScriptStruct_FDataRegistryType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryType()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistryType.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistryType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistryType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistryId;
class UScriptStruct* FDataRegistryId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistryId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistryId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistryId, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("DataRegistryId"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistryId.OuterSingleton;
}
template<> DATAREGISTRY_API UScriptStruct* StaticStruct<FDataRegistryId>()
{
	return FDataRegistryId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistryId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegistryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Identifier for a specific DataRegistryItem, provides the user with a Tag or dropdown-based UI for selecting based on the available index info */" },
		{ "ModuleRelativePath", "Public/DataRegistryId.h" },
		{ "ToolTip", "Identifier for a specific DataRegistryItem, provides the user with a Tag or dropdown-based UI for selecting based on the available index info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistryId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_RegistryType_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** The type of this item, used to look up the correct registry */" },
		{ "ModuleRelativePath", "Public/DataRegistryId.h" },
		{ "ToolTip", "The type of this item, used to look up the correct registry" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_RegistryType = { "RegistryType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryId, RegistryType), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_RegistryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_RegistryType_MetaData)) }; // 1634035463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** The name of this object, may be a leaf gameplay tag or a raw name depending on the type */" },
		{ "ModuleRelativePath", "Public/DataRegistryId.h" },
		{ "ToolTip", "The name of this object, may be a leaf gameplay tag or a raw name depending on the type" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryId, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_ItemName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataRegistryId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_RegistryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewProp_ItemName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistryId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		&NewStructOps,
		"DataRegistryId",
		sizeof(FDataRegistryId),
		alignof(FDataRegistryId),
		Z_Construct_UScriptStruct_FDataRegistryId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryId()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistryId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistryId.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistryId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistryId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryId_h_Statics::ScriptStructInfo[] = {
		{ FDataRegistryType::StaticStruct, Z_Construct_UScriptStruct_FDataRegistryType_Statics::NewStructOps, TEXT("DataRegistryType"), &Z_Registration_Info_UScriptStruct_DataRegistryType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistryType), 1634035463U) },
		{ FDataRegistryId::StaticStruct, Z_Construct_UScriptStruct_FDataRegistryId_Statics::NewStructOps, TEXT("DataRegistryId"), &Z_Registration_Info_UScriptStruct_DataRegistryId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistryId), 2704397205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryId_h_1332494297(TEXT("/Script/DataRegistry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
