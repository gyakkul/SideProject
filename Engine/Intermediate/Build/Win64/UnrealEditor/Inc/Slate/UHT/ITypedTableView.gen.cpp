// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Views/ITypedTableView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITypedTableView() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETableViewMode();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectionMode;
	static UEnum* ESelectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_ESelectionMode, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ESelectionMode"));
		}
		return Z_Registration_Info_UEnum_ESelectionMode.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ESelectionMode::Type>()
	{
		return ESelectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_ESelectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_ESelectionMode_Statics::Enumerators[] = {
		{ "ESelectionMode::None", (int64)ESelectionMode::None },
		{ "ESelectionMode::Single", (int64)ESelectionMode::Single },
		{ "ESelectionMode::SingleToggle", (int64)ESelectionMode::SingleToggle },
		{ "ESelectionMode::Multi", (int64)ESelectionMode::Multi },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_ESelectionMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/Views/ITypedTableView.h" },
		{ "Multi.Comment", "/** Multiple items can be selected at the same time. */" },
		{ "Multi.Name", "ESelectionMode::Multi" },
		{ "Multi.ToolTip", "Multiple items can be selected at the same time." },
		{ "None.Comment", "/** Nothing can be selected and there is no hover cue for selection.  You can still handle mouse button events though. */" },
		{ "None.Name", "ESelectionMode::None" },
		{ "None.ToolTip", "Nothing can be selected and there is no hover cue for selection.  You can still handle mouse button events though." },
		{ "Single.Comment", "/** A single item can be selected at once, or no item may be selected. */" },
		{ "Single.Name", "ESelectionMode::Single" },
		{ "Single.ToolTip", "A single item can be selected at once, or no item may be selected." },
		{ "SingleToggle.Comment", "/** A single item can be selected at once, or no item may be selected.  You can click the item to toggle selection on and off. */" },
		{ "SingleToggle.Name", "ESelectionMode::SingleToggle" },
		{ "SingleToggle.ToolTip", "A single item can be selected at once, or no item may be selected.  You can click the item to toggle selection on and off." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_ESelectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"ESelectionMode",
		"ESelectionMode::Type",
		Z_Construct_UEnum_Slate_ESelectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ESelectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_ESelectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ESelectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_ESelectionMode()
	{
		if (!Z_Registration_Info_UEnum_ESelectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectionMode.InnerSingleton, Z_Construct_UEnum_Slate_ESelectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETableViewMode;
	static UEnum* ETableViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETableViewMode, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ETableViewMode"));
		}
		return Z_Registration_Info_UEnum_ETableViewMode.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ETableViewMode::Type>()
	{
		return ETableViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_ETableViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_ETableViewMode_Statics::Enumerators[] = {
		{ "ETableViewMode::List", (int64)ETableViewMode::List },
		{ "ETableViewMode::Tile", (int64)ETableViewMode::Tile },
		{ "ETableViewMode::Tree", (int64)ETableViewMode::Tree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_ETableViewMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Lists can exist as regular lists or as backing widgets for a tree. */" },
		{ "List.Name", "ETableViewMode::List" },
		{ "ModuleRelativePath", "Public/Framework/Views/ITypedTableView.h" },
		{ "Tile.Name", "ETableViewMode::Tile" },
		{ "ToolTip", "Lists can exist as regular lists or as backing widgets for a tree." },
		{ "Tree.Name", "ETableViewMode::Tree" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_ETableViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"ETableViewMode",
		"ETableViewMode::Type",
		Z_Construct_UEnum_Slate_ETableViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETableViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_ETableViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETableViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_ETableViewMode()
	{
		if (!Z_Registration_Info_UEnum_ETableViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETableViewMode.InnerSingleton, Z_Construct_UEnum_Slate_ETableViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETableViewMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h_Statics::EnumInfo[] = {
		{ ESelectionMode_StaticEnum, TEXT("ESelectionMode"), &Z_Registration_Info_UEnum_ESelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 194986416U) },
		{ ETableViewMode_StaticEnum, TEXT("ETableViewMode"), &Z_Registration_Info_UEnum_ETableViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4115609697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h_122237902(TEXT("/Script/Slate"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
