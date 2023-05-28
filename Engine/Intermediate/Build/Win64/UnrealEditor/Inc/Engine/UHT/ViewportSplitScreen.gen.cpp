// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ViewportSplitScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportSplitScreen() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplitScreenType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplitScreenType;
	static UEnum* ESplitScreenType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplitScreenType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESplitScreenType"));
		}
		return Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESplitScreenType::Type>()
	{
		return ESplitScreenType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESplitScreenType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESplitScreenType_Statics::Enumerators[] = {
		{ "ESplitScreenType::None", (int64)ESplitScreenType::None },
		{ "ESplitScreenType::TwoPlayer_Horizontal", (int64)ESplitScreenType::TwoPlayer_Horizontal },
		{ "ESplitScreenType::TwoPlayer_Vertical", (int64)ESplitScreenType::TwoPlayer_Vertical },
		{ "ESplitScreenType::ThreePlayer_FavorTop", (int64)ESplitScreenType::ThreePlayer_FavorTop },
		{ "ESplitScreenType::ThreePlayer_FavorBottom", (int64)ESplitScreenType::ThreePlayer_FavorBottom },
		{ "ESplitScreenType::ThreePlayer_Vertical", (int64)ESplitScreenType::ThreePlayer_Vertical },
		{ "ESplitScreenType::ThreePlayer_Horizontal", (int64)ESplitScreenType::ThreePlayer_Horizontal },
		{ "ESplitScreenType::FourPlayer_Grid", (int64)ESplitScreenType::FourPlayer_Grid },
		{ "ESplitScreenType::FourPlayer_Vertical", (int64)ESplitScreenType::FourPlayer_Vertical },
		{ "ESplitScreenType::FourPlayer_Horizontal", (int64)ESplitScreenType::FourPlayer_Horizontal },
		{ "ESplitScreenType::SplitTypeCount", (int64)ESplitScreenType::SplitTypeCount },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESplitScreenType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum of the different splitscreen types\n */" },
		{ "FourPlayer_Grid.Comment", "// 4 Player grid split\n" },
		{ "FourPlayer_Grid.Name", "ESplitScreenType::FourPlayer_Grid" },
		{ "FourPlayer_Grid.ToolTip", "4 Player grid split" },
		{ "FourPlayer_Horizontal.Comment", "// 4 Player horizontal split\n" },
		{ "FourPlayer_Horizontal.Name", "ESplitScreenType::FourPlayer_Horizontal" },
		{ "FourPlayer_Horizontal.ToolTip", "4 Player horizontal split" },
		{ "FourPlayer_Vertical.Comment", "// 4 Player vertical split\n" },
		{ "FourPlayer_Vertical.Name", "ESplitScreenType::FourPlayer_Vertical" },
		{ "FourPlayer_Vertical.ToolTip", "4 Player vertical split" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportSplitScreen.h" },
		{ "None.Comment", "// No split\n" },
		{ "None.Name", "ESplitScreenType::None" },
		{ "None.ToolTip", "No split" },
		{ "SplitTypeCount.Name", "ESplitScreenType::SplitTypeCount" },
		{ "ThreePlayer_FavorBottom.Comment", "// 3 Player split with 1 player on bottom and 2 on top\n" },
		{ "ThreePlayer_FavorBottom.Name", "ESplitScreenType::ThreePlayer_FavorBottom" },
		{ "ThreePlayer_FavorBottom.ToolTip", "3 Player split with 1 player on bottom and 2 on top" },
		{ "ThreePlayer_FavorTop.Comment", "// 3 Player split with 1 player on top and 2 on bottom\n" },
		{ "ThreePlayer_FavorTop.Name", "ESplitScreenType::ThreePlayer_FavorTop" },
		{ "ThreePlayer_FavorTop.ToolTip", "3 Player split with 1 player on top and 2 on bottom" },
		{ "ThreePlayer_Horizontal.Comment", "//3 Player horizontal split\n" },
		{ "ThreePlayer_Horizontal.Name", "ESplitScreenType::ThreePlayer_Horizontal" },
		{ "ThreePlayer_Horizontal.ToolTip", "3 Player horizontal split" },
		{ "ThreePlayer_Vertical.Comment", "//3 Player vertical split\n" },
		{ "ThreePlayer_Vertical.Name", "ESplitScreenType::ThreePlayer_Vertical" },
		{ "ThreePlayer_Vertical.ToolTip", "3 Player vertical split" },
		{ "ToolTip", "Enum of the different splitscreen types" },
		{ "TwoPlayer_Horizontal.Comment", "// 2 player horizontal split\n" },
		{ "TwoPlayer_Horizontal.Name", "ESplitScreenType::TwoPlayer_Horizontal" },
		{ "TwoPlayer_Horizontal.ToolTip", "2 player horizontal split" },
		{ "TwoPlayer_Vertical.Comment", "// 2 player vertical split\n" },
		{ "TwoPlayer_Vertical.Name", "ESplitScreenType::TwoPlayer_Vertical" },
		{ "TwoPlayer_Vertical.ToolTip", "2 player vertical split" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESplitScreenType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESplitScreenType",
		"ESplitScreenType::Type",
		Z_Construct_UEnum_Engine_ESplitScreenType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplitScreenType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESplitScreenType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplitScreenType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESplitScreenType()
	{
		if (!Z_Registration_Info_UEnum_ESplitScreenType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplitScreenType.InnerSingleton, Z_Construct_UEnum_Engine_ESplitScreenType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplitScreenType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h_Statics::EnumInfo[] = {
		{ ESplitScreenType_StaticEnum, TEXT("ESplitScreenType"), &Z_Registration_Info_UEnum_ESplitScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3946288188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h_4151505670(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
