// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayInteractionStateTreeSchema.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionStateTreeSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayInteractionStateTreeSchema();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayInteractionStateTreeSchema_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	void UGameplayInteractionStateTreeSchema::StaticRegisterNativesUGameplayInteractionStateTreeSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayInteractionStateTreeSchema);
	UClass* Z_Construct_UClass_UGameplayInteractionStateTreeSchema_NoRegister()
	{
		return UGameplayInteractionStateTreeSchema::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContextActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SmartObjectActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextDataDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextDataDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextDataDescs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateTreeSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Gameplay Interactions" },
		{ "IncludePath", "GameplayInteractionStateTreeSchema.h" },
		{ "ModuleRelativePath", "Public/GameplayInteractionStateTreeSchema.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextActorClass_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Actor class the StateTree is expected to run on. Allows to bind to specific Actor class' properties. */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionStateTreeSchema.h" },
		{ "ToolTip", "Actor class the StateTree is expected to run on. Allows to bind to specific Actor class' properties." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextActorClass = { "ContextActorClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayInteractionStateTreeSchema, ContextActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_SmartObjectActorClass_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Actor class of the SmartObject the StateTree is expected to run with. Allows to bind to specific Actor class' properties. */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionStateTreeSchema.h" },
		{ "ToolTip", "Actor class of the SmartObject the StateTree is expected to run with. Allows to bind to specific Actor class' properties." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_SmartObjectActorClass = { "SmartObjectActorClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayInteractionStateTreeSchema, SmartObjectActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_SmartObjectActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_SmartObjectActorClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextDataDescs_Inner = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, METADATA_PARAMS(nullptr, 0) }; // 2405474714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextDataDescs_MetaData[] = {
		{ "Comment", "/** List of named external data required by schema and provided to the state tree through the execution context. */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionStateTreeSchema.h" },
		{ "ToolTip", "List of named external data required by schema and provided to the state tree through the execution context." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextDataDescs = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayInteractionStateTreeSchema, ContextDataDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextDataDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextDataDescs_MetaData)) }; // 2405474714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_SmartObjectActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextDataDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::NewProp_ContextDataDescs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayInteractionStateTreeSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::ClassParams = {
		&UGameplayInteractionStateTreeSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayInteractionStateTreeSchema()
	{
		if (!Z_Registration_Info_UClass_UGameplayInteractionStateTreeSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayInteractionStateTreeSchema.OuterSingleton, Z_Construct_UClass_UGameplayInteractionStateTreeSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayInteractionStateTreeSchema.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayInteractionStateTreeSchema>()
	{
		return UGameplayInteractionStateTreeSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayInteractionStateTreeSchema);
	UGameplayInteractionStateTreeSchema::~UGameplayInteractionStateTreeSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionStateTreeSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionStateTreeSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayInteractionStateTreeSchema, UGameplayInteractionStateTreeSchema::StaticClass, TEXT("UGameplayInteractionStateTreeSchema"), &Z_Registration_Info_UClass_UGameplayInteractionStateTreeSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayInteractionStateTreeSchema), 94650088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionStateTreeSchema_h_145077326(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionStateTreeSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionStateTreeSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
