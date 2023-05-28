// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapturableProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapturableProperty() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VariantManager();
	VARIANTMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCapturableProperty();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapturableProperty;
class UScriptStruct* FCapturableProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapturableProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapturableProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturableProperty, (UObject*)Z_Construct_UPackage__Script_VariantManager(), TEXT("CapturableProperty"));
	}
	return Z_Registration_Info_UScriptStruct_CapturableProperty.OuterSingleton;
}
template<> VARIANTMANAGER_API UScriptStruct* StaticStruct<FCapturableProperty>()
{
	return FCapturableProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapturableProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturableProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Describes a property path that can be captured. It just exposes a display name but\n// uses internal data in order to be able to capture exception properties, like materials\n" },
		{ "ModuleRelativePath", "Public/CapturableProperty.h" },
		{ "ToolTip", "Describes a property path that can be captured. It just exposes a display name but\nuses internal data in order to be able to capture exception properties, like materials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturableProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturableProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturableProperty_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "VariantManager" },
		{ "ModuleRelativePath", "Public/CapturableProperty.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCapturableProperty_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapturableProperty, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturableProperty_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturableProperty_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturableProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturableProperty_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturableProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManager,
		nullptr,
		&NewStructOps,
		"CapturableProperty",
		sizeof(FCapturableProperty),
		alignof(FCapturableProperty),
		Z_Construct_UScriptStruct_FCapturableProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturableProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturableProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturableProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturableProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_CapturableProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapturableProperty.InnerSingleton, Z_Construct_UScriptStruct_FCapturableProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapturableProperty.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_CapturableProperty_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_CapturableProperty_h_Statics::ScriptStructInfo[] = {
		{ FCapturableProperty::StaticStruct, Z_Construct_UScriptStruct_FCapturableProperty_Statics::NewStructOps, TEXT("CapturableProperty"), &Z_Registration_Info_UScriptStruct_CapturableProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapturableProperty), 552582907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_CapturableProperty_h_613364061(TEXT("/Script/VariantManager"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_CapturableProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_CapturableProperty_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
