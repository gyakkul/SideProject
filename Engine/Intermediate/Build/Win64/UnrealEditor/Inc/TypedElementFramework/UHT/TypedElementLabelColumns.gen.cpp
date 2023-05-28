// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Columns/TypedElementLabelColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementLabelColumns() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelHashColumn();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FTypedElementLabelColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementLabelColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLabelColumn;
class UScriptStruct* FTypedElementLabelColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLabelColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementLabelColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementLabelColumn>()
{
	return FTypedElementLabelColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores a label.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementLabelColumns.h" },
		{ "ToolTip", "Column that stores a label." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLabelColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementLabelColumn",
		sizeof(FTypedElementLabelColumn),
		alignof(FTypedElementLabelColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementLabelColumn.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementLabelHashColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementLabelHashColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn;
class UScriptStruct* FTypedElementLabelHashColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLabelHashColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementLabelHashColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementLabelHashColumn>()
{
	return FTypedElementLabelHashColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores the hash of a label. This is typically paired with FTypedElementLabelColumn, but \n * kept separate in order to iterate quickly over all hash values.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementLabelColumns.h" },
		{ "ToolTip", "Column that stores the hash of a label. This is typically paired with FTypedElementLabelColumn, but\nkept separate in order to iterate quickly over all hash values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLabelHashColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementLabelHashColumn",
		sizeof(FTypedElementLabelHashColumn),
		alignof(FTypedElementLabelHashColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLabelHashColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementLabelColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLabelColumn_Statics::NewStructOps, TEXT("TypedElementLabelColumn"), &Z_Registration_Info_UScriptStruct_TypedElementLabelColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLabelColumn), 4030087689U) },
		{ FTypedElementLabelHashColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLabelHashColumn_Statics::NewStructOps, TEXT("TypedElementLabelHashColumn"), &Z_Registration_Info_UScriptStruct_TypedElementLabelHashColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLabelHashColumn), 1122004804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_2428972148(TEXT("/Script/TypedElementFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementLabelColumns_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
