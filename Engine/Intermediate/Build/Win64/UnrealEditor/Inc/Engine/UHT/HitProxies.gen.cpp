// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/HitProxies.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitProxies() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHitProxyPriority();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitProxyPriority;
	static UEnum* EHitProxyPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitProxyPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHitProxyPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHitProxyPriority, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHitProxyPriority"));
		}
		return Z_Registration_Info_UEnum_EHitProxyPriority.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EHitProxyPriority>()
	{
		return EHitProxyPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EHitProxyPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::Enumerators[] = {
		{ "HPP_World", (int64)HPP_World },
		{ "HPP_Wireframe", (int64)HPP_Wireframe },
		{ "HPP_Foreground", (int64)HPP_Foreground },
		{ "HPP_UI", (int64)HPP_UI },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The priority a hit proxy has when choosing between several hit proxies near the point the user clicked.\n * HPP_World - this is the default priority\n * HPP_Wireframe - the priority of items that are drawn in wireframe, such as volumes\n * HPP_UI - the priority of the UI components such as the translation widget\n */" },
		{ "HPP_Foreground.Name", "HPP_Foreground" },
		{ "HPP_UI.Name", "HPP_UI" },
		{ "HPP_Wireframe.Name", "HPP_Wireframe" },
		{ "HPP_World.Name", "HPP_World" },
		{ "ModuleRelativePath", "Public/HitProxies.h" },
		{ "ToolTip", "The priority a hit proxy has when choosing between several hit proxies near the point the user clicked.\nHPP_World - this is the default priority\nHPP_Wireframe - the priority of items that are drawn in wireframe, such as volumes\nHPP_UI - the priority of the UI components such as the translation widget" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EHitProxyPriority",
		"EHitProxyPriority",
		Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EHitProxyPriority()
	{
		if (!Z_Registration_Info_UEnum_EHitProxyPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitProxyPriority.InnerSingleton, Z_Construct_UEnum_Engine_EHitProxyPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHitProxyPriority.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HitProxies_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HitProxies_h_Statics::EnumInfo[] = {
		{ EHitProxyPriority_StaticEnum, TEXT("EHitProxyPriority"), &Z_Registration_Info_UEnum_EHitProxyPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3271938730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HitProxies_h_3802009070(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HitProxies_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HitProxies_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
