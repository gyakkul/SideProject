// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterEditorPropertyReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterEditorPropertyReference() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference;
class UScriptStruct* FDisplayClusterEditorPropertyReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterEditorPropertyReference"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterEditorPropertyReference>()
{
	return FDisplayClusterEditorPropertyReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A dummy structure used to reference properties of subobjects to be displayed at the root level in a details panel.\n * \n * When placed within an Unreal class or struct, the property reference is replaced with the referenced property in the\n * type's details panel. The display name, tooltip, category, and accessiblity of the property reference will be applied \n * to the referenced property when provided, overwriting the property's own specifiers. If the property path contains lists\n * (arrays, maps, or sets), then each element of the list will be iterated over, and all properties within that list will \n * be displayed together in a group.\n * \n * Use the PropertyPath metadata specifier to specify the path to the referenced property, relative to the object that owns\n * the property reference. \n * \n * Additionally, this type supports using property paths within its EditCondition specifier, allowing the edit condition\n * of the referenced property within a details panel to depend on other referenced properties. The && operator is supported,\n * allowing multipe property paths to be used to construct the edit condition.\n */" },
		{ "ModuleRelativePath", "Public/DisplayClusterEditorPropertyReference.h" },
		{ "ToolTip", "A dummy structure used to reference properties of subobjects to be displayed at the root level in a details panel.\n\nWhen placed within an Unreal class or struct, the property reference is replaced with the referenced property in the\ntype's details panel. The display name, tooltip, category, and accessiblity of the property reference will be applied\nto the referenced property when provided, overwriting the property's own specifiers. If the property path contains lists\n(arrays, maps, or sets), then each element of the list will be iterated over, and all properties within that list will\nbe displayed together in a group.\n\nUse the PropertyPath metadata specifier to specify the path to the referenced property, relative to the object that owns\nthe property reference.\n\nAdditionally, this type supports using property paths within its EditCondition specifier, allowing the edit condition\nof the referenced property within a details panel to depend on other referenced properties. The && operator is supported,\nallowing multipe property paths to be used to construct the edit condition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterEditorPropertyReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterEditorPropertyReference",
		sizeof(FDisplayClusterEditorPropertyReference),
		alignof(FDisplayClusterEditorPropertyReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterEditorPropertyReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterEditorPropertyReference_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterEditorPropertyReference::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference_Statics::NewStructOps, TEXT("DisplayClusterEditorPropertyReference"), &Z_Registration_Info_UScriptStruct_DisplayClusterEditorPropertyReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterEditorPropertyReference), 3388615158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterEditorPropertyReference_h_530965551(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterEditorPropertyReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterEditorPropertyReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
