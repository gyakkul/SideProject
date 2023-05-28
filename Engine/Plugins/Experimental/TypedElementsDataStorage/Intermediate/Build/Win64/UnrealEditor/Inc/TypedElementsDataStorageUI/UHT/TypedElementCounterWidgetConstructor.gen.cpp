// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypedElementCounterWidgetConstructor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCounterWidgetConstructor() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn();
	TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorageUI();
// End Cross Module References

static_assert(std::is_polymorphic<FTypedElementCounterWidgetConstructor>() == std::is_polymorphic<FTypedElementWidgetConstructor>(), "USTRUCT FTypedElementCounterWidgetConstructor cannot be polymorphic unless super FTypedElementWidgetConstructor is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor;
class UScriptStruct* FTypedElementCounterWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementCounterWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementCounterWidgetConstructor>()
{
	return FTypedElementCounterWidgetConstructor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Constructor for the counter widget. The counter widget accepts a \"count\"-query. The query will be periodically\n * run and the result is written to a textbox widget after it's been formatted using LabelText. An example for \n * LabelText is \"{0} {0}|plural(one=MyCounter, other=MyCounters)\" which will use \"MyCounter\" if there's exactly one\n * entry found and otherwise \"MyCounters\".\n */" },
		{ "ModuleRelativePath", "Public/TypedElementCounterWidgetConstructor.h" },
		{ "ToolTip", "Constructor for the counter widget. The counter widget accepts a \"count\"-query. The query will be periodically\nrun and the result is written to a textbox widget after it's been formatted using LabelText. An example for\nLabelText is \"{0} {0}|plural(one=MyCounter, other=MyCounters)\" which will use \"MyCounter\" if there's exactly one\nentry found and otherwise \"MyCounters\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementCounterWidgetConstructor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementWidgetConstructor,
		&NewStructOps,
		"TypedElementCounterWidgetConstructor",
		sizeof(FTypedElementCounterWidgetConstructor),
		alignof(FTypedElementCounterWidgetConstructor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTypedElementCounterWidgetColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FTypedElementCounterWidgetColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn;
class UScriptStruct* FTypedElementCounterWidgetColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorageUI(), TEXT("TypedElementCounterWidgetColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGEUI_API UScriptStruct* StaticStruct<FTypedElementCounterWidgetColumn>()
{
	return FTypedElementCounterWidgetColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TypedElementCounterWidgetConstructor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementCounterWidgetColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
		Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
		&NewStructOps,
		"TypedElementCounterWidgetColumn",
		sizeof(FTypedElementCounterWidgetColumn),
		alignof(FTypedElementCounterWidgetColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidgetConstructor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidgetConstructor_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementCounterWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementCounterWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementCounterWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementCounterWidgetConstructor), 2918879305U) },
		{ FTypedElementCounterWidgetColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementCounterWidgetColumn_Statics::NewStructOps, TEXT("TypedElementCounterWidgetColumn"), &Z_Registration_Info_UScriptStruct_TypedElementCounterWidgetColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementCounterWidgetColumn), 2079817942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidgetConstructor_h_1538382647(TEXT("/Script/TypedElementsDataStorageUI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidgetConstructor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Public_TypedElementCounterWidgetConstructor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
