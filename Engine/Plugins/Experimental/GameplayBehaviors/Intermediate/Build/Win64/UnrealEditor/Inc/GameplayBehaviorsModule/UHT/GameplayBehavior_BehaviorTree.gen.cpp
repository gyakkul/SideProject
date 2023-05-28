// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/GameplayBehavior_BehaviorTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBehavior_BehaviorTree() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_BehaviorTree();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_BehaviorTree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	void UGameplayBehavior_BehaviorTree::StaticRegisterNativesUGameplayBehavior_BehaviorTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBehavior_BehaviorTree);
	UClass* Z_Construct_UClass_UGameplayBehavior_BehaviorTree_NoRegister()
	{
		return UGameplayBehavior_BehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousBT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousBT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleRun_MetaData[];
#endif
		static void NewProp_bSingleRun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleRun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** NOTE: this behavior works only for AIControlled pawns */" },
		{ "IncludePath", "AI/GameplayBehavior_BehaviorTree.h" },
		{ "ModuleRelativePath", "Public/AI/GameplayBehavior_BehaviorTree.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "NOTE: this behavior works only for AIControlled pawns" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_PreviousBT_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/GameplayBehavior_BehaviorTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_PreviousBT = { "PreviousBT", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehavior_BehaviorTree, PreviousBT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_PreviousBT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_PreviousBT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/GameplayBehavior_BehaviorTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehavior_BehaviorTree, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_bSingleRun_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Indicates if BehaviorTree should run only once or in loop. */" },
		{ "ModuleRelativePath", "Public/AI/GameplayBehavior_BehaviorTree.h" },
		{ "ToolTip", "Indicates if BehaviorTree should run only once or in loop." },
	};
#endif
	void Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_bSingleRun_SetBit(void* Obj)
	{
		((UGameplayBehavior_BehaviorTree*)Obj)->bSingleRun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_bSingleRun = { "bSingleRun", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayBehavior_BehaviorTree), &Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_bSingleRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_bSingleRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_bSingleRun_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_PreviousBT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::NewProp_bSingleRun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBehavior_BehaviorTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::ClassParams = {
		&UGameplayBehavior_BehaviorTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayBehavior_BehaviorTree()
	{
		if (!Z_Registration_Info_UClass_UGameplayBehavior_BehaviorTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBehavior_BehaviorTree.OuterSingleton, Z_Construct_UClass_UGameplayBehavior_BehaviorTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayBehavior_BehaviorTree.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UGameplayBehavior_BehaviorTree>()
	{
		return UGameplayBehavior_BehaviorTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBehavior_BehaviorTree);
	UGameplayBehavior_BehaviorTree::~UGameplayBehavior_BehaviorTree() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBehavior_BehaviorTree, UGameplayBehavior_BehaviorTree::StaticClass, TEXT("UGameplayBehavior_BehaviorTree"), &Z_Registration_Info_UClass_UGameplayBehavior_BehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBehavior_BehaviorTree), 3479468316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_551036553(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_GameplayBehavior_BehaviorTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
