// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Columns/TypedElementPackageColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementPackageColumns() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackagePathColumn();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FTypedElementPackagePathColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementPackagePathColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn;
class UScriptStruct* FTypedElementPackagePathColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPackagePathColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPackagePathColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPackagePathColumn>()
{
	return FTypedElementPackagePathColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores the path of a package.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementPackageColumns.h" },
		{ "ToolTip", "Column that stores the path of a package." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPackagePathColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementPackagePathColumn",
		sizeof(FTypedElementPackagePathColumn),
		alignof(FTypedElementPackagePathColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackagePathColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementPackageLoadedPathColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementPackageLoadedPathColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn;
class UScriptStruct* FTypedElementPackageLoadedPathColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPackageLoadedPathColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPackageLoadedPathColumn>()
{
	return FTypedElementPackageLoadedPathColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores the full loading path to a package.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementPackageColumns.h" },
		{ "ToolTip", "Column that stores the full loading path to a package." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPackageLoadedPathColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementPackageLoadedPathColumn",
		sizeof(FTypedElementPackageLoadedPathColumn),
		alignof(FTypedElementPackageLoadedPathColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementPackagePathColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPackagePathColumn_Statics::NewStructOps, TEXT("TypedElementPackagePathColumn"), &Z_Registration_Info_UScriptStruct_TypedElementPackagePathColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPackagePathColumn), 2404244753U) },
		{ FTypedElementPackageLoadedPathColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPackageLoadedPathColumn_Statics::NewStructOps, TEXT("TypedElementPackageLoadedPathColumn"), &Z_Registration_Info_UScriptStruct_TypedElementPackageLoadedPathColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPackageLoadedPathColumn), 1727937087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_1559046(TEXT("/Script/TypedElementFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementPackageColumns_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
