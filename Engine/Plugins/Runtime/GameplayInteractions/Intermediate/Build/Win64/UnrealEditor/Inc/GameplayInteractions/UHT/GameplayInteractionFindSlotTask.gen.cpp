// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionFindSlotTask.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionFindSlotTask() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType;
	static UEnum* EGameplayInteractionSlotReferenceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayInteractionSlotReferenceType"));
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionSlotReferenceType>()
	{
		return EGameplayInteractionSlotReferenceType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::Enumerators[] = {
		{ "EGameplayInteractionSlotReferenceType::ByActivityTag", (int64)EGameplayInteractionSlotReferenceType::ByActivityTag },
		{ "EGameplayInteractionSlotReferenceType::ByLinkTag", (int64)EGameplayInteractionSlotReferenceType::ByLinkTag },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::Enum_MetaDataParams[] = {
		{ "ByActivityTag.Comment", "/** Consider all slots on the Reference Slot's Smart Object. Match by activity tag. */" },
		{ "ByActivityTag.Name", "EGameplayInteractionSlotReferenceType::ByActivityTag" },
		{ "ByActivityTag.ToolTip", "Consider all slots on the Reference Slot's Smart Object. Match by activity tag." },
		{ "ByLinkTag.Comment", "/** Consider slots linked via Link Annotations on Reference Slot. Match by link's tag. */" },
		{ "ByLinkTag.Name", "EGameplayInteractionSlotReferenceType::ByLinkTag" },
		{ "ByLinkTag.ToolTip", "Consider slots linked via Link Annotations on Reference Slot. Match by link's tag." },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionFindSlotTask.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayInteractionSlotReferenceType",
		"EGameplayInteractionSlotReferenceType",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData;
class UScriptStruct* FGameplayInteractionFindSlotTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionFindSlotTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionFindSlotTaskInstanceData>()
{
	return FGameplayInteractionFindSlotTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionFindSlotTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionFindSlotTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ReferenceSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Slot to use as reference to find the result slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionFindSlotTask.h" },
		{ "ToolTip", "Slot to use as reference to find the result slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ReferenceSlot = { "ReferenceSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionFindSlotTaskInstanceData, ReferenceSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ReferenceSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ReferenceSlot_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ResultSlot_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Result slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionFindSlotTask.h" },
		{ "ToolTip", "Result slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ResultSlot = { "ResultSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionFindSlotTaskInstanceData, ResultSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ResultSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ResultSlot_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ReferenceSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewProp_ResultSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionFindSlotTaskInstanceData",
		sizeof(FGameplayInteractionFindSlotTaskInstanceData),
		alignof(FGameplayInteractionFindSlotTaskInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionFindSlotTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionFindSlotTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask;
class UScriptStruct* FGameplayInteractionFindSlotTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionFindSlotTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionFindSlotTask>()
{
	return FGameplayInteractionFindSlotTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReferenceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReferenceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindByTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FindByTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to find a Smart Object slot based on a reference slot.\n * The search can look up slots in the whole Smart Object based on Activity tags,\n * or use Smart Object Slot Link annotations on the reference slot.\n */" },
		{ "DisplayName", "Find Slot" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionFindSlotTask.h" },
		{ "ToolTip", "Task to find a Smart Object slot based on a reference slot.\nThe search can look up slots in the whole Smart Object based on Activity tags,\nor use Smart Object Slot Link annotations on the reference slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionFindSlotTask>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_ReferenceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_ReferenceType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Specified which slots to consider when finding the slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionFindSlotTask.h" },
		{ "ToolTip", "Specified which slots to consider when finding the slot." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_ReferenceType = { "ReferenceType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionFindSlotTask, ReferenceType), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSlotReferenceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_ReferenceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_ReferenceType_MetaData)) }; // 2714353630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_FindByTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Tag to use to lookup the slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionFindSlotTask.h" },
		{ "ToolTip", "Tag to use to lookup the slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_FindByTag = { "FindByTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionFindSlotTask, FindByTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_FindByTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_FindByTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_ReferenceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_ReferenceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewProp_FindByTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionFindSlotTask",
		sizeof(FGameplayInteractionFindSlotTask),
		alignof(FGameplayInteractionFindSlotTask),
		Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_Statics::EnumInfo[] = {
		{ EGameplayInteractionSlotReferenceType_StaticEnum, TEXT("EGameplayInteractionSlotReferenceType"), &Z_Registration_Info_UEnum_EGameplayInteractionSlotReferenceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2714353630U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionFindSlotTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionFindSlotTaskInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionFindSlotTaskInstanceData), 2296210579U) },
		{ FGameplayInteractionFindSlotTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics::NewStructOps, TEXT("GameplayInteractionFindSlotTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionFindSlotTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionFindSlotTask), 3352926874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_3720086326(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
