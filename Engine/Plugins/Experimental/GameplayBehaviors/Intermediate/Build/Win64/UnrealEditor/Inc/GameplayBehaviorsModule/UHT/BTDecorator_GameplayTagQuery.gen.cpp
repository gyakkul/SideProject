// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/BTDecorator_GameplayTagQuery.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_GameplayTagQuery() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UBTDecorator_GameplayTagQuery();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UBTDecorator_GameplayTagQuery_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	void UBTDecorator_GameplayTagQuery::StaticRegisterNativesUBTDecorator_GameplayTagQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_GameplayTagQuery);
	UClass* Z_Construct_UClass_UBTDecorator_GameplayTagQuery_NoRegister()
	{
		return UBTDecorator_GameplayTagQuery::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorForGameplayTagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorForGameplayTagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagQuery;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameplayTagQuery decorator node.\n * A decorator node that bases its condition on matching a gameplay tag query.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "AI/BTDecorator_GameplayTagQuery.h" },
		{ "ModuleRelativePath", "Public/AI/BTDecorator_GameplayTagQuery.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "GameplayTagQuery decorator node.\nA decorator node that bases its condition on matching a gameplay tag query." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_ActorForGameplayTagQuery_MetaData[] = {
		{ "Category", "GameplayTagQuery" },
		{ "ModuleRelativePath", "Public/AI/BTDecorator_GameplayTagQuery.h" },
		{ "ToolTips", "Which Actor (from the blackboard) should be checked for this gameplay tag query?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_ActorForGameplayTagQuery = { "ActorForGameplayTagQuery", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_GameplayTagQuery, ActorForGameplayTagQuery), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_ActorForGameplayTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_ActorForGameplayTagQuery_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_GameplayTagQuery_MetaData[] = {
		{ "Category", "GameplayTagQuery" },
		{ "Comment", "/** Gameplay tag query to match */" },
		{ "ModuleRelativePath", "Public/AI/BTDecorator_GameplayTagQuery.h" },
		{ "ToolTip", "Gameplay tag query to match" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_GameplayTagQuery = { "GameplayTagQuery", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_GameplayTagQuery, GameplayTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_GameplayTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_GameplayTagQuery_MetaData)) }; // 689482789
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_QueryTags_Inner = { "QueryTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_QueryTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/BTDecorator_GameplayTagQuery.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_QueryTags = { "QueryTags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_GameplayTagQuery, QueryTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_QueryTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_QueryTags_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_ActorForGameplayTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_GameplayTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_QueryTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::NewProp_QueryTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_GameplayTagQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::ClassParams = {
		&UBTDecorator_GameplayTagQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_GameplayTagQuery()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_GameplayTagQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_GameplayTagQuery.OuterSingleton, Z_Construct_UClass_UBTDecorator_GameplayTagQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_GameplayTagQuery.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UBTDecorator_GameplayTagQuery>()
	{
		return UBTDecorator_GameplayTagQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_GameplayTagQuery);
	UBTDecorator_GameplayTagQuery::~UBTDecorator_GameplayTagQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTDecorator_GameplayTagQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTDecorator_GameplayTagQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_GameplayTagQuery, UBTDecorator_GameplayTagQuery::StaticClass, TEXT("UBTDecorator_GameplayTagQuery"), &Z_Registration_Info_UClass_UBTDecorator_GameplayTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_GameplayTagQuery), 1593315664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTDecorator_GameplayTagQuery_h_3060554917(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTDecorator_GameplayTagQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTDecorator_GameplayTagQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
