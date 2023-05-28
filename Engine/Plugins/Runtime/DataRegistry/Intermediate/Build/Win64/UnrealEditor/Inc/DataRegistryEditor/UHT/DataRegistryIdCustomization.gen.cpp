// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataRegistryIdCustomization.h"
#include "DataRegistryId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistryIdCustomization() {}
// Cross Module References
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryId();
	DATAREGISTRYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper();
	GRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPinStructEditWrapper();
	UPackage* Z_Construct_UPackage__Script_DataRegistryEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FDataRegistryIdEditWrapper>() == std::is_polymorphic<FPinStructEditWrapper>(), "USTRUCT FDataRegistryIdEditWrapper cannot be polymorphic unless super FPinStructEditWrapper is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper;
class UScriptStruct* FDataRegistryIdEditWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper, (UObject*)Z_Construct_UPackage__Script_DataRegistryEditor(), TEXT("DataRegistryIdEditWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper.OuterSingleton;
}
template<> DATAREGISTRYEDITOR_API UScriptStruct* StaticStruct<FDataRegistryIdEditWrapper>()
{
	return FDataRegistryIdEditWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegistryId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This allows using this customization with blueprint pins */" },
		{ "ModuleRelativePath", "Private/DataRegistryIdCustomization.h" },
		{ "ToolTip", "This allows using this customization with blueprint pins" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistryIdEditWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::NewProp_RegistryId_MetaData[] = {
		{ "Category", "Registry" },
		{ "Comment", "/** Actual id to edit */" },
		{ "ModuleRelativePath", "Private/DataRegistryIdCustomization.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Actual id to edit" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::NewProp_RegistryId = { "RegistryId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryIdEditWrapper, RegistryId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::NewProp_RegistryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::NewProp_RegistryId_MetaData)) }; // 2704397205
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::NewProp_RegistryId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistryEditor,
		Z_Construct_UScriptStruct_FPinStructEditWrapper,
		&NewStructOps,
		"DataRegistryIdEditWrapper",
		sizeof(FDataRegistryIdEditWrapper),
		alignof(FDataRegistryIdEditWrapper),
		Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryIdCustomization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryIdCustomization_h_Statics::ScriptStructInfo[] = {
		{ FDataRegistryIdEditWrapper::StaticStruct, Z_Construct_UScriptStruct_FDataRegistryIdEditWrapper_Statics::NewStructOps, TEXT("DataRegistryIdEditWrapper"), &Z_Registration_Info_UScriptStruct_DataRegistryIdEditWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistryIdEditWrapper), 1008109644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryIdCustomization_h_2201653200(TEXT("/Script/DataRegistryEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryIdCustomization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryIdCustomization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
