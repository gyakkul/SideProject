// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Columns/TypedElementSlateWidgetColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSlateWidgetColumns() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FTypedElementSlateWidgetReferenceColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementSlateWidgetReferenceColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn;
class UScriptStruct* FTypedElementSlateWidgetReferenceColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSlateWidgetReferenceColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSlateWidgetReferenceColumn>()
{
	return FTypedElementSlateWidgetReferenceColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores a widget reference in the data storage. At the start of processing any\n * columns that are not pointing to a valid widget will be removed. If the\n * FTypedElementSlateWidgetDeletesRowTag is found then the entire row will\n * be deleted.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "Stores a widget reference in the data storage. At the start of processing any\ncolumns that are not pointing to a valid widget will be removed. If the\nFTypedElementSlateWidgetDeletesRowTag is found then the entire row will\nbe deleted." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSlateWidgetReferenceColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementSlateWidgetReferenceColumn",
		sizeof(FTypedElementSlateWidgetReferenceColumn),
		alignof(FTypedElementSlateWidgetReferenceColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementSlateWidgetReferenceDeletesRowTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTypedElementSlateWidgetReferenceDeletesRowTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag;
class UScriptStruct* FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSlateWidgetReferenceDeletesRowTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSlateWidgetReferenceDeletesRowTag>()
{
	return FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to indicate that the entire row needs to be deleted when the widget in\n * FTypedElementSlateWidgetReferenceColumn is no longer valid, otherwise only\n * the column will be removed.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "Tag to indicate that the entire row needs to be deleted when the widget in\nFTypedElementSlateWidgetReferenceColumn is no longer valid, otherwise only\nthe column will be removed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSlateWidgetReferenceDeletesRowTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
		&NewStructOps,
		"TypedElementSlateWidgetReferenceDeletesRowTag",
		sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag),
		alignof(FTypedElementSlateWidgetReferenceDeletesRowTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementSlateWidgetReferenceColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::NewStructOps, TEXT("TypedElementSlateWidgetReferenceColumn"), &Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSlateWidgetReferenceColumn), 2613515229U) },
		{ FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::NewStructOps, TEXT("TypedElementSlateWidgetReferenceDeletesRowTag"), &Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag), 597979261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_2576336441(TEXT("/Script/TypedElementFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
