// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Columns/TypedElementTransformColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementTransformColumns() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FTypedElementLocalTransformColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementLocalTransformColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn;
class UScriptStruct* FTypedElementLocalTransformColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementLocalTransformColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementLocalTransformColumn>()
{
	return FTypedElementLocalTransformColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores a local transform. \n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementTransformColumns.h" },
		{ "ToolTip", "Column that stores a local transform." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLocalTransformColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementLocalTransformColumn",
		sizeof(FTypedElementLocalTransformColumn),
		alignof(FTypedElementLocalTransformColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementLocalTransformColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::NewStructOps, TEXT("TypedElementLocalTransformColumn"), &Z_Registration_Info_UScriptStruct_TypedElementLocalTransformColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLocalTransformColumn), 452517899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_3242243279(TEXT("/Script/TypedElementFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
