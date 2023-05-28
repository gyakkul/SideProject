// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayInteractionSmartObjectBehaviorDefinition.h"
#include "StateTreeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionSmartObjectBehaviorDefinition() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	void UGameplayInteractionSmartObjectBehaviorDefinition::StaticRegisterNativesUGameplayInteractionSmartObjectBehaviorDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayInteractionSmartObjectBehaviorDefinition);
	UClass* Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_NoRegister()
	{
		return UGameplayInteractionSmartObjectBehaviorDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateTreeReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectBehaviorDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SmartObject behavior definition for the GameplayInteractions\n */" },
		{ "IncludePath", "GameplayInteractionSmartObjectBehaviorDefinition.h" },
		{ "ModuleRelativePath", "Public/GameplayInteractionSmartObjectBehaviorDefinition.h" },
		{ "ToolTip", "SmartObject behavior definition for the GameplayInteractions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::NewProp_StateTreeReference_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GameplayInteractionSmartObjectBehaviorDefinition.h" },
		{ "Schema", "/Script/GameplayInteractionsModule.GameplayInteractionStateTreeSchema" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::NewProp_StateTreeReference = { "StateTreeReference", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayInteractionSmartObjectBehaviorDefinition, StateTreeReference), Z_Construct_UScriptStruct_FStateTreeReference, METADATA_PARAMS(Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::NewProp_StateTreeReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::NewProp_StateTreeReference_MetaData)) }; // 323372279
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::NewProp_StateTreeReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayInteractionSmartObjectBehaviorDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::ClassParams = {
		&UGameplayInteractionSmartObjectBehaviorDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition()
	{
		if (!Z_Registration_Info_UClass_UGameplayInteractionSmartObjectBehaviorDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayInteractionSmartObjectBehaviorDefinition.OuterSingleton, Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayInteractionSmartObjectBehaviorDefinition.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayInteractionSmartObjectBehaviorDefinition>()
	{
		return UGameplayInteractionSmartObjectBehaviorDefinition::StaticClass();
	}
	UGameplayInteractionSmartObjectBehaviorDefinition::UGameplayInteractionSmartObjectBehaviorDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayInteractionSmartObjectBehaviorDefinition);
	UGameplayInteractionSmartObjectBehaviorDefinition::~UGameplayInteractionSmartObjectBehaviorDefinition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition, UGameplayInteractionSmartObjectBehaviorDefinition::StaticClass, TEXT("UGameplayInteractionSmartObjectBehaviorDefinition"), &Z_Registration_Info_UClass_UGameplayInteractionSmartObjectBehaviorDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayInteractionSmartObjectBehaviorDefinition), 3243232083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_680423316(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
