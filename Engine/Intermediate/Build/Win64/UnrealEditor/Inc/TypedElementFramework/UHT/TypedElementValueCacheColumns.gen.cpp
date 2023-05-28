// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Columns/TypedElementValueCacheColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementValueCacheColumns() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FTypedElementU32IntValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementU32IntValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn;
class UScriptStruct* FTypedElementU32IntValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementU32IntValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementU32IntValueCacheColumn>()
{
	return FTypedElementU32IntValueCacheColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache an unsigned 32-bit value in.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache an unsigned 32-bit value in." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementU32IntValueCacheColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementU32IntValueCacheColumn",
		sizeof(FTypedElementU32IntValueCacheColumn),
		alignof(FTypedElementU32IntValueCacheColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementI32IntValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementI32IntValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn;
class UScriptStruct* FTypedElementI32IntValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementI32IntValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementI32IntValueCacheColumn>()
{
	return FTypedElementI32IntValueCacheColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache a signed 32-bit value in.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache a signed 32-bit value in." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementI32IntValueCacheColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementI32IntValueCacheColumn",
		sizeof(FTypedElementI32IntValueCacheColumn),
		alignof(FTypedElementI32IntValueCacheColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementFloatValueCacheColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementFloatValueCacheColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn;
class UScriptStruct* FTypedElementFloatValueCacheColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementFloatValueCacheColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementFloatValueCacheColumn>()
{
	return FTypedElementFloatValueCacheColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that can be used to cache a 32-bit floating point value in.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementValueCacheColumns.h" },
		{ "ToolTip", "Column that can be used to cache a 32-bit floating point value in." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementFloatValueCacheColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementFloatValueCacheColumn",
		sizeof(FTypedElementFloatValueCacheColumn),
		alignof(FTypedElementFloatValueCacheColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementU32IntValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementU32IntValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementU32IntValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementU32IntValueCacheColumn), 618514683U) },
		{ FTypedElementI32IntValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementI32IntValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementI32IntValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementI32IntValueCacheColumn), 837776002U) },
		{ FTypedElementFloatValueCacheColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::NewStructOps, TEXT("TypedElementFloatValueCacheColumn"), &Z_Registration_Info_UScriptStruct_TypedElementFloatValueCacheColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementFloatValueCacheColumn), 437062977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_3575743282(TEXT("/Script/TypedElementFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
