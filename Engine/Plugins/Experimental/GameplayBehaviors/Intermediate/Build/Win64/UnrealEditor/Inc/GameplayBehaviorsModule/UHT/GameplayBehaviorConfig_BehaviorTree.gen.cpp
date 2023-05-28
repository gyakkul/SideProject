// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/GameplayBehaviorConfig_BehaviorTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBehaviorConfig_BehaviorTree() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	void UGameplayBehaviorConfig_BehaviorTree::StaticRegisterNativesUGameplayBehaviorConfig_BehaviorTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBehaviorConfig_BehaviorTree);
	UClass* Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_NoRegister()
	{
		return UGameplayBehaviorConfig_BehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRevertToPreviousBTOnFinish_MetaData[];
#endif
		static void NewProp_bRevertToPreviousBTOnFinish_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertToPreviousBTOnFinish;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayBehaviorConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/GameplayBehaviorConfig_BehaviorTree.h" },
		{ "ModuleRelativePath", "Public/AI/GameplayBehaviorConfig_BehaviorTree.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/AI/GameplayBehaviorConfig_BehaviorTree.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehaviorConfig_BehaviorTree, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_bRevertToPreviousBTOnFinish_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/AI/GameplayBehaviorConfig_BehaviorTree.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_bRevertToPreviousBTOnFinish_SetBit(void* Obj)
	{
		((UGameplayBehaviorConfig_BehaviorTree*)Obj)->bRevertToPreviousBTOnFinish = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_bRevertToPreviousBTOnFinish = { "bRevertToPreviousBTOnFinish", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGameplayBehaviorConfig_BehaviorTree), &Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_bRevertToPreviousBTOnFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_bRevertToPreviousBTOnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_bRevertToPreviousBTOnFinish_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::NewProp_bRevertToPreviousBTOnFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBehaviorConfig_BehaviorTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::ClassParams = {
		&UGameplayBehaviorConfig_BehaviorTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree()
	{
		if (!Z_Registration_Info_UClass_UGameplayBehaviorConfig_BehaviorTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBehaviorConfig_BehaviorTree.OuterSingleton, Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayBehaviorConfig_BehaviorTree.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UGameplayBehaviorConfig_BehaviorTree>()
	{
		return UGameplayBehaviorConfig_BehaviorTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBehaviorConfig_BehaviorTree);
	UGameplayBehaviorConfig_BehaviorTree::~UGameplayBehaviorConfig_BehaviorTree() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehaviorConfig_BehaviorTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehaviorConfig_BehaviorTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBehaviorConfig_BehaviorTree, UGameplayBehaviorConfig_BehaviorTree::StaticClass, TEXT("UGameplayBehaviorConfig_BehaviorTree"), &Z_Registration_Info_UClass_UGameplayBehaviorConfig_BehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBehaviorConfig_BehaviorTree), 2154944873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehaviorConfig_BehaviorTree_h_2494359649(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehaviorConfig_BehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehaviorConfig_BehaviorTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
