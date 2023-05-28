// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectTypes() {}
// Cross Module References
	MASSSMARTOBJECTS_API UEnum* Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus;
	static UEnum* EMassSmartObjectInteractionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("EMassSmartObjectInteractionStatus"));
		}
		return Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UEnum* StaticEnum<EMassSmartObjectInteractionStatus>()
	{
		return EMassSmartObjectInteractionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enumerators[] = {
		{ "EMassSmartObjectInteractionStatus::Unset", (int64)EMassSmartObjectInteractionStatus::Unset },
		{ "EMassSmartObjectInteractionStatus::InProgress", (int64)EMassSmartObjectInteractionStatus::InProgress },
		{ "EMassSmartObjectInteractionStatus::BehaviorCompleted", (int64)EMassSmartObjectInteractionStatus::BehaviorCompleted },
		{ "EMassSmartObjectInteractionStatus::TaskCompleted", (int64)EMassSmartObjectInteractionStatus::TaskCompleted },
		{ "EMassSmartObjectInteractionStatus::Aborted", (int64)EMassSmartObjectInteractionStatus::Aborted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "// Task has been notified that behavior is completed and completes\n" },
		{ "Aborted.Name", "EMassSmartObjectInteractionStatus::Aborted" },
		{ "Aborted.ToolTip", "Task has been notified that behavior is completed and completes" },
		{ "BehaviorCompleted.Comment", "// Claimed and Behavior activated\n" },
		{ "BehaviorCompleted.Name", "EMassSmartObjectInteractionStatus::BehaviorCompleted" },
		{ "BehaviorCompleted.ToolTip", "Claimed and Behavior activated" },
		{ "InProgress.Name", "EMassSmartObjectInteractionStatus::InProgress" },
		{ "ModuleRelativePath", "Public/MassSmartObjectTypes.h" },
		{ "TaskCompleted.Comment", "// Behavior is completed but task still running (not updated yet)\n" },
		{ "TaskCompleted.Name", "EMassSmartObjectInteractionStatus::TaskCompleted" },
		{ "TaskCompleted.ToolTip", "Behavior is completed but task still running (not updated yet)" },
		{ "Unset.Name", "EMassSmartObjectInteractionStatus::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		"EMassSmartObjectInteractionStatus",
		"EMassSmartObjectInteractionStatus",
		Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus()
	{
		if (!Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.InnerSingleton, Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::EnumInfo[] = {
		{ EMassSmartObjectInteractionStatus_StaticEnum, TEXT("EMassSmartObjectInteractionStatus"), &Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 864764723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_3945598228(TEXT("/Script/MassSmartObjects"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
