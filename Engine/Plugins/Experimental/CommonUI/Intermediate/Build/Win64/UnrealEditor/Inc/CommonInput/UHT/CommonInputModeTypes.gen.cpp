// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInputModeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputModeTypes() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputMode();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonInputMode;
	static UEnum* ECommonInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputMode, (UObject*)Z_Construct_UPackage__Script_CommonInput(), TEXT("ECommonInputMode"));
		}
		return Z_Registration_Info_UEnum_ECommonInputMode.OuterSingleton;
	}
	template<> COMMONINPUT_API UEnum* StaticEnum<ECommonInputMode>()
	{
		return ECommonInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::Enumerators[] = {
		{ "ECommonInputMode::Menu", (int64)ECommonInputMode::Menu },
		{ "ECommonInputMode::Game", (int64)ECommonInputMode::Game },
		{ "ECommonInputMode::All", (int64)ECommonInputMode::All },
		{ "ECommonInputMode::MAX", (int64)ECommonInputMode::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ECommonInputMode::All" },
		{ "All.Tooltip", "Input is received by UI and the Game" },
		{ "BlueprintType", "true" },
		{ "Game.Name", "ECommonInputMode::Game" },
		{ "Game.Tooltip", "Input is received by the Game only" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ECommonInputMode::MAX" },
		{ "Menu.Name", "ECommonInputMode::Menu" },
		{ "Menu.Tooltip", "Input is received by the UI only" },
		{ "ModuleRelativePath", "Public/CommonInputModeTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		"ECommonInputMode",
		"ECommonInputMode",
		Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonInput_ECommonInputMode()
	{
		if (!Z_Registration_Info_UEnum_ECommonInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonInputMode.InnerSingleton, Z_Construct_UEnum_CommonInput_ECommonInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonInputMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h_Statics::EnumInfo[] = {
		{ ECommonInputMode_StaticEnum, TEXT("ECommonInputMode"), &Z_Registration_Info_UEnum_ECommonInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1573311200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h_3025313919(TEXT("/Script/CommonInput"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
