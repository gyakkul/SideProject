// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunBehaviorDynamic() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_RunBehaviorDynamic::StaticRegisterNativesUBTTask_RunBehaviorDynamic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RunBehaviorDynamic);
	UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister()
	{
		return UBTTask_RunBehaviorDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InjectionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InjectionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultBehaviorAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * RunBehaviorDynamic task allows pushing subtrees on execution stack.\n * Subtree asset can be assigned at runtime with SetDynamicSubtree function of BehaviorTreeComponent.\n *\n * Does NOT support subtree's root level decorators!\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
		{ "ToolTip", "RunBehaviorDynamic task allows pushing subtrees on execution stack.\nSubtree asset can be assigned at runtime with SetDynamicSubtree function of BehaviorTreeComponent.\n\nDoes NOT support subtree's root level decorators!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_InjectionTag_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Gameplay tag that will identify this task for subtree injection */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
		{ "ToolTip", "Gameplay tag that will identify this task for subtree injection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_InjectionTag = { "InjectionTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunBehaviorDynamic, InjectionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_InjectionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_InjectionTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_DefaultBehaviorAsset_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** default behavior to run */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
		{ "ToolTip", "default behavior to run" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_DefaultBehaviorAsset = { "DefaultBehaviorAsset", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_DefaultBehaviorAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_DefaultBehaviorAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_BehaviorAsset_MetaData[] = {
		{ "Comment", "/** current subtree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h" },
		{ "ToolTip", "current subtree" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_BehaviorAsset = { "BehaviorAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunBehaviorDynamic, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_BehaviorAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_BehaviorAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_InjectionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_DefaultBehaviorAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::NewProp_BehaviorAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunBehaviorDynamic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::ClassParams = {
		&UBTTask_RunBehaviorDynamic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RunBehaviorDynamic()
	{
		if (!Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.OuterSingleton, Z_Construct_UClass_UBTTask_RunBehaviorDynamic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_RunBehaviorDynamic>()
	{
		return UBTTask_RunBehaviorDynamic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunBehaviorDynamic);
	UBTTask_RunBehaviorDynamic::~UBTTask_RunBehaviorDynamic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RunBehaviorDynamic, UBTTask_RunBehaviorDynamic::StaticClass, TEXT("UBTTask_RunBehaviorDynamic"), &Z_Registration_Info_UClass_UBTTask_RunBehaviorDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RunBehaviorDynamic), 1708184037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_408228280(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehaviorDynamic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
