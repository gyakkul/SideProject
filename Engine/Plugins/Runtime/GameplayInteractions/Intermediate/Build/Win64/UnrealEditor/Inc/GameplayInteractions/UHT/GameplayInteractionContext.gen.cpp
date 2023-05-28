// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayInteractionContext.h"
#include "GameplayInteractionsTypes.h"
#include "SmartObjectRuntime.h"
#include "StateTreeInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionContext() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionAbortContext();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionContext();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionContext;
class UScriptStruct* FGameplayInteractionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionContext, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionContext"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionContext.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionContext>()
{
	return FGameplayInteractionContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateTreeInstanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimedHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimedHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbortContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbortContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContextActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SmartObjectActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Definition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that holds data required to perform the interaction\n * and wraps StateTree execution\n */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionContext.h" },
		{ "ToolTip", "Struct that holds data required to perform the interaction\nand wraps StateTree execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_StateTreeInstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_StateTreeInstanceData = { "StateTreeInstanceData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionContext, StateTreeInstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_StateTreeInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_StateTreeInstanceData_MetaData)) }; // 4128275611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ClaimedHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ClaimedHandle = { "ClaimedHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionContext, ClaimedHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ClaimedHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ClaimedHandle_MetaData)) }; // 931449528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_AbortContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_AbortContext = { "AbortContext", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionContext, AbortContext), Z_Construct_UScriptStruct_FGameplayInteractionAbortContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_AbortContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_AbortContext_MetaData)) }; // 2210915608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ContextActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ContextActor = { "ContextActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionContext, ContextActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ContextActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ContextActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_SmartObjectActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_SmartObjectActor = { "SmartObjectActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionContext, SmartObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_SmartObjectActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_SmartObjectActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_Definition_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionContext.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionContext, Definition), Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_Definition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_StateTreeInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ClaimedHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_AbortContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_ContextActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_SmartObjectActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewProp_Definition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionContext",
		sizeof(FGameplayInteractionContext),
		alignof(FGameplayInteractionContext),
		Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionContext.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionContext_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionContext::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionContext_Statics::NewStructOps, TEXT("GameplayInteractionContext"), &Z_Registration_Info_UScriptStruct_GameplayInteractionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionContext), 1598215578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionContext_h_1982732771(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
