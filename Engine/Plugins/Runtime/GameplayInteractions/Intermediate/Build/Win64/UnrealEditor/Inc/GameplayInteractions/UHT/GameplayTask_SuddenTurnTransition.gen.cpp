// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTask_SuddenTurnTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_SuddenTurnTransition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTask_SuddenTurnTransition();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTaskTransition_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayTransitionDesc_SuddenTurn>() == std::is_polymorphic<FGameplayTransitionDesc>(), "USTRUCT FGameplayTransitionDesc_SuddenTurn cannot be polymorphic unless super FGameplayTransitionDesc is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn;
class UScriptStruct* FGameplayTransitionDesc_SuddenTurn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayTransitionDesc_SuddenTurn"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayTransitionDesc_SuddenTurn>()
{
	return FGameplayTransitionDesc_SuddenTurn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayTask_SuddenTurnTransition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTransitionDesc_SuddenTurn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayTransitionDesc,
		&NewStructOps,
		"GameplayTransitionDesc_SuddenTurn",
		sizeof(FGameplayTransitionDesc_SuddenTurn),
		alignof(FGameplayTransitionDesc_SuddenTurn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn.InnerSingleton;
	}
	void UGameplayTask_SuddenTurnTransition::StaticRegisterNativesUGameplayTask_SuddenTurnTransition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_SuddenTurnTransition);
	UClass* Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_NoRegister()
	{
		return UGameplayTask_SuddenTurnTransition::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTask_SuddenTurnTransition.h" },
		{ "ModuleRelativePath", "Public/GameplayTask_SuddenTurnTransition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayTask_SuddenTurnTransition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_SuddenTurnTransition, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::NewProp_MovementComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskTransition_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask_SuddenTurnTransition, IGameplayTaskTransition), false },  // 771245619
			{ Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask_SuddenTurnTransition, IGameplayActuationStateProvider), false },  // 4292633833
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_SuddenTurnTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::ClassParams = {
		&UGameplayTask_SuddenTurnTransition::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_SuddenTurnTransition()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask_SuddenTurnTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_SuddenTurnTransition.OuterSingleton, Z_Construct_UClass_UGameplayTask_SuddenTurnTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask_SuddenTurnTransition.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayTask_SuddenTurnTransition>()
	{
		return UGameplayTask_SuddenTurnTransition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_SuddenTurnTransition);
	UGameplayTask_SuddenTurnTransition::~UGameplayTask_SuddenTurnTransition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTransitionDesc_SuddenTurn::StaticStruct, Z_Construct_UScriptStruct_FGameplayTransitionDesc_SuddenTurn_Statics::NewStructOps, TEXT("GameplayTransitionDesc_SuddenTurn"), &Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_SuddenTurn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTransitionDesc_SuddenTurn), 2035699606U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_SuddenTurnTransition, UGameplayTask_SuddenTurnTransition::StaticClass, TEXT("UGameplayTask_SuddenTurnTransition"), &Z_Registration_Info_UClass_UGameplayTask_SuddenTurnTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_SuddenTurnTransition), 4028439177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_3318468357(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_SuddenTurnTransition_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
