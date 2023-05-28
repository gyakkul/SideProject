// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableObjectIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectIdentifier() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIdentifier();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIdPair();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair;
class UScriptStruct* FCustomizableObjectIdPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectIdPair, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectIdPair"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectIdPair>()
{
	return FCustomizableObjectIdPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectGroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectIdentifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectIdPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectGroupName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectGroupName = { "CustomizableObjectGroupName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIdPair, CustomizableObjectGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectGroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectName = { "CustomizableObjectName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIdPair, CustomizableObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewProp_CustomizableObjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectIdPair",
		sizeof(FCustomizableObjectIdPair),
		alignof(FCustomizableObjectIdPair),
		Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIdPair()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier;
class UScriptStruct* FCustomizableObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectIdentifier>()
{
	return FCustomizableObjectIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectGroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectIdentifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectGroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectGroupName = { "CustomizableObjectGroupName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIdentifier, CustomizableObjectGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectGroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectName_MetaData[] = {
		{ "Comment", "// Deprecated\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectIdentifier.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectName = { "CustomizableObjectName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIdentifier, CustomizableObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectIdentifier.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIdentifier, Guid), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_CustomizableObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectIdentifier",
		sizeof(FCustomizableObjectIdentifier),
		alignof(FCustomizableObjectIdentifier),
		Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectIdentifier_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectIdentifier_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectIdPair::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectIdPair_Statics::NewStructOps, TEXT("CustomizableObjectIdPair"), &Z_Registration_Info_UScriptStruct_CustomizableObjectIdPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectIdPair), 4030234050U) },
		{ FCustomizableObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectIdentifier_Statics::NewStructOps, TEXT("CustomizableObjectIdentifier"), &Z_Registration_Info_UScriptStruct_CustomizableObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectIdentifier), 3671897226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectIdentifier_h_2024169764(TEXT("/Script/CustomizableObject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectIdentifier_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
