// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Views/STableViewBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTableViewBase() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EListItemAlignment();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EListItemAlignment;
	static UEnum* EListItemAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EListItemAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EListItemAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EListItemAlignment, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EListItemAlignment"));
		}
		return Z_Registration_Info_UEnum_EListItemAlignment.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EListItemAlignment>()
	{
		return EListItemAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_EListItemAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_EListItemAlignment_Statics::Enumerators[] = {
		{ "EListItemAlignment::EvenlyDistributed", (int64)EListItemAlignment::EvenlyDistributed },
		{ "EListItemAlignment::EvenlySize", (int64)EListItemAlignment::EvenlySize },
		{ "EListItemAlignment::EvenlyWide", (int64)EListItemAlignment::EvenlyWide },
		{ "EListItemAlignment::LeftAligned", (int64)EListItemAlignment::LeftAligned },
		{ "EListItemAlignment::RightAligned", (int64)EListItemAlignment::RightAligned },
		{ "EListItemAlignment::CenterAligned", (int64)EListItemAlignment::CenterAligned },
		{ "EListItemAlignment::Fill", (int64)EListItemAlignment::Fill },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_EListItemAlignment_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CenterAligned.Comment", "/** Items are center aligned on the line (any extra space is halved and added to the left of the items) */" },
		{ "CenterAligned.Name", "EListItemAlignment::CenterAligned" },
		{ "CenterAligned.ToolTip", "Items are center aligned on the line (any extra space is halved and added to the left of the items)" },
		{ "Comment", "/** If the list panel is arranging items as tiles, this enum dictates how the items should be aligned (basically, where any extra space is placed) */" },
		{ "EvenlyDistributed.Comment", "/** Items are distributed evenly along the line (any extra space is added as padding between the items) */" },
		{ "EvenlyDistributed.DisplayName", "Evenly (Padding)" },
		{ "EvenlyDistributed.Name", "EListItemAlignment::EvenlyDistributed" },
		{ "EvenlyDistributed.ToolTip", "Items are distributed evenly along the line (any extra space is added as padding between the items)" },
		{ "EvenlySize.Comment", "/** Items are distributed evenly along the line (any extra space is used to scale up the size of the item proportionally.) */" },
		{ "EvenlySize.DisplayName", "Evenly (Size)" },
		{ "EvenlySize.Name", "EListItemAlignment::EvenlySize" },
		{ "EvenlySize.ToolTip", "Items are distributed evenly along the line (any extra space is used to scale up the size of the item proportionally.)" },
		{ "EvenlyWide.Comment", "/** Items are distributed evenly along the line, any extra space is used to scale up width of the items proportionally.) */" },
		{ "EvenlyWide.DisplayName", "Evenly (Wide)" },
		{ "EvenlyWide.Name", "EListItemAlignment::EvenlyWide" },
		{ "EvenlyWide.ToolTip", "Items are distributed evenly along the line, any extra space is used to scale up width of the items proportionally.)" },
		{ "Fill.Comment", "/** Items are evenly stretched to distribute any extra space on the line */" },
		{ "Fill.Name", "EListItemAlignment::Fill" },
		{ "Fill.ToolTip", "Items are evenly stretched to distribute any extra space on the line" },
		{ "LeftAligned.Comment", "/** Items are left aligned on the line (any extra space is added to the right of the items) */" },
		{ "LeftAligned.Name", "EListItemAlignment::LeftAligned" },
		{ "LeftAligned.ToolTip", "Items are left aligned on the line (any extra space is added to the right of the items)" },
		{ "ModuleRelativePath", "Public/Widgets/Views/STableViewBase.h" },
		{ "RightAligned.Comment", "/** Items are right aligned on the line (any extra space is added to the left of the items) */" },
		{ "RightAligned.Name", "EListItemAlignment::RightAligned" },
		{ "RightAligned.ToolTip", "Items are right aligned on the line (any extra space is added to the left of the items)" },
		{ "ToolTip", "If the list panel is arranging items as tiles, this enum dictates how the items should be aligned (basically, where any extra space is placed)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EListItemAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"EListItemAlignment",
		"EListItemAlignment",
		Z_Construct_UEnum_Slate_EListItemAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EListItemAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_EListItemAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EListItemAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_EListItemAlignment()
	{
		if (!Z_Registration_Info_UEnum_EListItemAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EListItemAlignment.InnerSingleton, Z_Construct_UEnum_Slate_EListItemAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EListItemAlignment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Views_STableViewBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Views_STableViewBase_h_Statics::EnumInfo[] = {
		{ EListItemAlignment_StaticEnum, TEXT("EListItemAlignment"), &Z_Registration_Info_UEnum_EListItemAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1828783791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Views_STableViewBase_h_2076225015(TEXT("/Script/Slate"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Views_STableViewBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Views_STableViewBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
