// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Slate/SGameLayerManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameLayerManager() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowTitleBarMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWindowTitleBarMode;
	static UEnum* EWindowTitleBarMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWindowTitleBarMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWindowTitleBarMode"));
		}
		return Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWindowTitleBarMode>()
	{
		return EWindowTitleBarMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::Enumerators[] = {
		{ "EWindowTitleBarMode::Overlay", (int64)EWindowTitleBarMode::Overlay },
		{ "EWindowTitleBarMode::VerticalBox", (int64)EWindowTitleBarMode::VerticalBox },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Slate/SGameLayerManager.h" },
		{ "Overlay.Name", "EWindowTitleBarMode::Overlay" },
		{ "VerticalBox.Name", "EWindowTitleBarMode::VerticalBox" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EWindowTitleBarMode",
		"EWindowTitleBarMode",
		Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EWindowTitleBarMode()
	{
		if (!Z_Registration_Info_UEnum_EWindowTitleBarMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWindowTitleBarMode.InnerSingleton, Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWindowTitleBarMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h_Statics::EnumInfo[] = {
		{ EWindowTitleBarMode_StaticEnum, TEXT("EWindowTitleBarMode"), &Z_Registration_Info_UEnum_EWindowTitleBarMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1865454137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h_3653504334(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
