// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/Nodes/SPinViewerNodeMaterialPinImageDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPinViewerNodeMaterialPinImageDetails() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVLayoutMode;
	static UEnum* EUVLayoutMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVLayoutMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVLayoutMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("EUVLayoutMode"));
		}
		return Z_Registration_Info_UEnum_EUVLayoutMode.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EUVLayoutMode>()
	{
		return EUVLayoutMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::Enumerators[] = {
		{ "EUVLayoutMode::Default", (int64)EUVLayoutMode::Default },
		{ "EUVLayoutMode::Ignore", (int64)EUVLayoutMode::Ignore },
		{ "EUVLayoutMode::Index", (int64)EUVLayoutMode::Index },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** UV Layout Mode UI Enum. */" },
		{ "Default.Comment", "/** Equal to UV_LAYOUT_DEFAULT */" },
		{ "Default.Name", "EUVLayoutMode::Default" },
		{ "Default.ToolTip", "Equal to UV_LAYOUT_DEFAULT" },
		{ "Ignore.Comment", "/** Equal to UV_LAYOUT_IGNORE */" },
		{ "Ignore.Name", "EUVLayoutMode::Ignore" },
		{ "Ignore.ToolTip", "Equal to UV_LAYOUT_IGNORE" },
		{ "Index.Comment", "/** Any valid index. */" },
		{ "Index.Name", "EUVLayoutMode::Index" },
		{ "Index.ToolTip", "Any valid index." },
		{ "ModuleRelativePath", "Private/MuCOE/Nodes/SPinViewerNodeMaterialPinImageDetails.h" },
		{ "ToolTip", "UV Layout Mode UI Enum." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"EUVLayoutMode",
		"EUVLayoutMode",
		Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode()
	{
		if (!Z_Registration_Info_UEnum_EUVLayoutMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVLayoutMode.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_EUVLayoutMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVLayoutMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_SPinViewerNodeMaterialPinImageDetails_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_SPinViewerNodeMaterialPinImageDetails_h_Statics::EnumInfo[] = {
		{ EUVLayoutMode_StaticEnum, TEXT("EUVLayoutMode"), &Z_Registration_Info_UEnum_EUVLayoutMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2308909213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_SPinViewerNodeMaterialPinImageDetails_h_1465861509(TEXT("/Script/CustomizableObjectEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_SPinViewerNodeMaterialPinImageDetails_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_SPinViewerNodeMaterialPinImageDetails_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
