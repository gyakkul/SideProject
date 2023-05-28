// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputMappingQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingQuery() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryResult();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FMappingQueryIssue();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMappingQueryResult;
	static UEnum* EMappingQueryResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMappingQueryResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMappingQueryResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EMappingQueryResult, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EMappingQueryResult"));
		}
		return Z_Registration_Info_UEnum_EMappingQueryResult.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EMappingQueryResult>()
	{
		return EMappingQueryResult_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::Enumerators[] = {
		{ "EMappingQueryResult::Error_EnhancedInputNotEnabled", (int64)EMappingQueryResult::Error_EnhancedInputNotEnabled },
		{ "EMappingQueryResult::Error_InputContextNotInActiveContexts", (int64)EMappingQueryResult::Error_InputContextNotInActiveContexts },
		{ "EMappingQueryResult::Error_InvalidAction", (int64)EMappingQueryResult::Error_InvalidAction },
		{ "EMappingQueryResult::NotMappable", (int64)EMappingQueryResult::NotMappable },
		{ "EMappingQueryResult::MappingAvailable", (int64)EMappingQueryResult::MappingAvailable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Result summary from a QueryMapKeyIn... call\n" },
		{ "Error_EnhancedInputNotEnabled.Comment", "// Query failed because the player controller being queried is not configured to support enhanced input (PlayerInput is not Enhanced).\n" },
		{ "Error_EnhancedInputNotEnabled.Name", "EMappingQueryResult::Error_EnhancedInputNotEnabled" },
		{ "Error_EnhancedInputNotEnabled.ToolTip", "Query failed because the player controller being queried is not configured to support enhanced input (PlayerInput is not Enhanced)." },
		{ "Error_InputContextNotInActiveContexts.Comment", "// Query failed because the input context being queried against is not part of the active context list.\n" },
		{ "Error_InputContextNotInActiveContexts.Name", "EMappingQueryResult::Error_InputContextNotInActiveContexts" },
		{ "Error_InputContextNotInActiveContexts.ToolTip", "Query failed because the input context being queried against is not part of the active context list." },
		{ "Error_InvalidAction.Comment", "// Query failed because the action being queried against is None/null\n" },
		{ "Error_InvalidAction.Name", "EMappingQueryResult::Error_InvalidAction" },
		{ "Error_InvalidAction.ToolTip", "Query failed because the action being queried against is None/null" },
		{ "MappingAvailable.Comment", "// Mapping will not affect any existing mappings and is safe to apply.\n" },
		{ "MappingAvailable.Name", "EMappingQueryResult::MappingAvailable" },
		{ "MappingAvailable.ToolTip", "Mapping will not affect any existing mappings and is safe to apply." },
		{ "ModuleRelativePath", "Public/InputMappingQuery.h" },
		{ "NotMappable.Comment", "// Mapping cannot be applied due to blocking issues. Check OutIssues for details.\n" },
		{ "NotMappable.Name", "EMappingQueryResult::NotMappable" },
		{ "NotMappable.ToolTip", "Mapping cannot be applied due to blocking issues. Check OutIssues for details." },
		{ "ToolTip", "Result summary from a QueryMapKeyIn... call" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EMappingQueryResult",
		"EMappingQueryResult",
		Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryResult()
	{
		if (!Z_Registration_Info_UEnum_EMappingQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMappingQueryResult.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EMappingQueryResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMappingQueryResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMappingQueryIssue;
	static UEnum* EMappingQueryIssue_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMappingQueryIssue.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMappingQueryIssue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EMappingQueryIssue"));
		}
		return Z_Registration_Info_UEnum_EMappingQueryIssue.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EMappingQueryIssue>()
	{
		return EMappingQueryIssue_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::Enumerators[] = {
		{ "EMappingQueryIssue::NoIssue", (int64)EMappingQueryIssue::NoIssue },
		{ "EMappingQueryIssue::ReservedByAction", (int64)EMappingQueryIssue::ReservedByAction },
		{ "EMappingQueryIssue::HidesExistingMapping", (int64)EMappingQueryIssue::HidesExistingMapping },
		{ "EMappingQueryIssue::HiddenByExistingMapping", (int64)EMappingQueryIssue::HiddenByExistingMapping },
		{ "EMappingQueryIssue::CollisionWithMappingInSameContext", (int64)EMappingQueryIssue::CollisionWithMappingInSameContext },
		{ "EMappingQueryIssue::ForcesTypePromotion", (int64)EMappingQueryIssue::ForcesTypePromotion },
		{ "EMappingQueryIssue::ForcesTypeDemotion", (int64)EMappingQueryIssue::ForcesTypeDemotion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "CollisionWithMappingInSameContext.Comment", "// Mapping will be functional, but a collision with another mapping within this context may cause issues.\n" },
		{ "CollisionWithMappingInSameContext.Name", "EMappingQueryIssue::CollisionWithMappingInSameContext" },
		{ "CollisionWithMappingInSameContext.ToolTip", "Mapping will be functional, but a collision with another mapping within this context may cause issues." },
		{ "Comment", "// Mapping issues arising from a QueryMapKeyIn... call\n" },
		{ "ForcesTypeDemotion.Comment", "// Trying to bind an FKey with a more complex type than the bound action supports (this could behave oddly e.g. 2D Gamepad axis bound to a 1D axis will ignore Y axis)\n" },
		{ "ForcesTypeDemotion.Name", "EMappingQueryIssue::ForcesTypeDemotion" },
		{ "ForcesTypeDemotion.ToolTip", "Trying to bind an FKey with a more complex type than the bound action supports (this could behave oddly e.g. 2D Gamepad axis bound to a 1D axis will ignore Y axis)" },
		{ "ForcesTypePromotion.Comment", "// Trying to bind an FKey with a less complex type than the bound action expects (e.g. Keyboard key bound to a 2D Gamepad axis. May not be desirable). Note: bool -> Axis1D promotions are never considered forced.\n" },
		{ "ForcesTypePromotion.Name", "EMappingQueryIssue::ForcesTypePromotion" },
		{ "ForcesTypePromotion.ToolTip", "Trying to bind an FKey with a less complex type than the bound action expects (e.g. Keyboard key bound to a 2D Gamepad axis. May not be desirable). Note: bool -> Axis1D promotions are never considered forced." },
		{ "HiddenByExistingMapping.Comment", "// Mapping will not be functional, due to an existing mapping blocking it.\n" },
		{ "HiddenByExistingMapping.Name", "EMappingQueryIssue::HiddenByExistingMapping" },
		{ "HiddenByExistingMapping.ToolTip", "Mapping will not be functional, due to an existing mapping blocking it." },
		{ "HidesExistingMapping.Comment", "// Mapping will cause an existing mapping to be hidden and/or need remapping.\n" },
		{ "HidesExistingMapping.Name", "EMappingQueryIssue::HidesExistingMapping" },
		{ "HidesExistingMapping.ToolTip", "Mapping will cause an existing mapping to be hidden and/or need remapping." },
		{ "ModuleRelativePath", "Public/InputMappingQuery.h" },
		{ "NoIssue.Comment", "// Mapping will not affect any existing mappings and is safe to apply.\n" },
		{ "NoIssue.Name", "EMappingQueryIssue::NoIssue" },
		{ "NoIssue.ToolTip", "Mapping will not affect any existing mappings and is safe to apply." },
		{ "ReservedByAction.Comment", "// Mapping has been reserved for the exclusive use of another action. The new mapping should be refused.\n" },
		{ "ReservedByAction.Name", "EMappingQueryIssue::ReservedByAction" },
		{ "ReservedByAction.ToolTip", "Mapping has been reserved for the exclusive use of another action. The new mapping should be refused." },
		{ "ScriptName", "MappingQueryIssueFlag" },
		{ "ToolTip", "Mapping issues arising from a QueryMapKeyIn... call" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EMappingQueryIssue",
		"EMappingQueryIssue",
		Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue()
	{
		if (!Z_Registration_Info_UEnum_EMappingQueryIssue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMappingQueryIssue.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMappingQueryIssue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MappingQueryIssue;
class UScriptStruct* FMappingQueryIssue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MappingQueryIssue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MappingQueryIssue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappingQueryIssue, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("MappingQueryIssue"));
	}
	return Z_Registration_Info_UScriptStruct_MappingQueryIssue.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FMappingQueryIssue>()
{
	return FMappingQueryIssue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMappingQueryIssue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Issue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Issue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Issue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlockingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockingAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlockingAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Potential issue raised with a mapping request\n" },
		{ "ModuleRelativePath", "Public/InputMappingQuery.h" },
		{ "ToolTip", "Potential issue raised with a mapping request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappingQueryIssue>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_Issue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_Issue_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/InputMappingQuery.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_Issue = { "Issue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMappingQueryIssue, Issue), Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_Issue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_Issue_MetaData)) }; // 1804607089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingContext_MetaData[] = {
		{ "Category", "Result" },
		{ "Comment", "// Input context that contains a blocking action bound to the queried key\n" },
		{ "ModuleRelativePath", "Public/InputMappingQuery.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Input context that contains a blocking action bound to the queried key" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingContext = { "BlockingContext", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMappingQueryIssue, BlockingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingAction_MetaData[] = {
		{ "Category", "Result" },
		{ "Comment", "// Action within the input context that caused the blockage\n" },
		{ "ModuleRelativePath", "Public/InputMappingQuery.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Action within the input context that caused the blockage" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingAction = { "BlockingAction", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMappingQueryIssue, BlockingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_Issue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_Issue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewProp_BlockingAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"MappingQueryIssue",
		sizeof(FMappingQueryIssue),
		alignof(FMappingQueryIssue),
		Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMappingQueryIssue()
	{
		if (!Z_Registration_Info_UScriptStruct_MappingQueryIssue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MappingQueryIssue.InnerSingleton, Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MappingQueryIssue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_Statics::EnumInfo[] = {
		{ EMappingQueryResult_StaticEnum, TEXT("EMappingQueryResult"), &Z_Registration_Info_UEnum_EMappingQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4054595501U) },
		{ EMappingQueryIssue_StaticEnum, TEXT("EMappingQueryIssue"), &Z_Registration_Info_UEnum_EMappingQueryIssue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1804607089U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_Statics::ScriptStructInfo[] = {
		{ FMappingQueryIssue::StaticStruct, Z_Construct_UScriptStruct_FMappingQueryIssue_Statics::NewStructOps, TEXT("MappingQueryIssue"), &Z_Registration_Info_UScriptStruct_MappingQueryIssue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMappingQueryIssue), 315887784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_2518906010(TEXT("/Script/EnhancedInput"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
