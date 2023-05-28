// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Columns/TypedElementMiscColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementMiscColumns() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FTypedElementSyncBackToWorldTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FTypedElementSyncBackToWorldTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag;
class UScriptStruct* FTypedElementSyncBackToWorldTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSyncBackToWorldTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSyncBackToWorldTag>()
{
	return FTypedElementSyncBackToWorldTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to indicate that there are one or more bits of information in the row that\n * need to be copied out the Data Storage and into the original object. This tag\n * will automatically be removed at the end of a tick.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementMiscColumns.h" },
		{ "ToolTip", "Tag to indicate that there are one or more bits of information in the row that\nneed to be copied out the Data Storage and into the original object. This tag\nwill automatically be removed at the end of a tick." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSyncBackToWorldTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
		&NewStructOps,
		"TypedElementSyncBackToWorldTag",
		sizeof(FTypedElementSyncBackToWorldTag),
		alignof(FTypedElementSyncBackToWorldTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementSyncBackToWorldTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::NewStructOps, TEXT("TypedElementSyncBackToWorldTag"), &Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSyncBackToWorldTag), 2123474907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_2424908672(TEXT("/Script/TypedElementFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
