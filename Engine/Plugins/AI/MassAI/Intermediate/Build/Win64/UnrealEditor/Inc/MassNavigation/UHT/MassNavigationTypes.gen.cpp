// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassNavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassNavigationTypes() {}
// Cross Module References
	MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassMovementAction;
	static UEnum* EMassMovementAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassMovementAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassMovementAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassNavigation_EMassMovementAction, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("EMassMovementAction"));
		}
		return Z_Registration_Info_UEnum_EMassMovementAction.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UEnum* StaticEnum<EMassMovementAction>()
	{
		return EMassMovementAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::Enumerators[] = {
		{ "EMassMovementAction::Stand", (int64)EMassMovementAction::Stand },
		{ "EMassMovementAction::Move", (int64)EMassMovementAction::Move },
		{ "EMassMovementAction::Animate", (int64)EMassMovementAction::Animate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::Enum_MetaDataParams[] = {
		{ "Animate.Comment", "// Move or keep on moving.\n" },
		{ "Animate.Name", "EMassMovementAction::Animate" },
		{ "Animate.ToolTip", "Move or keep on moving." },
		{ "ModuleRelativePath", "Public/MassNavigationTypes.h" },
		{ "Move.Comment", "// Stop and stand.\n" },
		{ "Move.Name", "EMassMovementAction::Move" },
		{ "Move.ToolTip", "Stop and stand." },
		{ "Stand.Name", "EMassMovementAction::Stand" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassNavigation,
		nullptr,
		"EMassMovementAction",
		"EMassMovementAction",
		Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction()
	{
		if (!Z_Registration_Info_UEnum_EMassMovementAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassMovementAction.InnerSingleton, Z_Construct_UEnum_MassNavigation_EMassMovementAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassMovementAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationTypes_h_Statics::EnumInfo[] = {
		{ EMassMovementAction_StaticEnum, TEXT("EMassMovementAction"), &Z_Registration_Info_UEnum_EMassMovementAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4189626115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationTypes_h_1836927876(TEXT("/Script/MassNavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
