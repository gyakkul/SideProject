// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunBehavior() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehavior();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehavior_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_RunBehavior::StaticRegisterNativesUBTTask_RunBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RunBehavior);
	UClass* Z_Construct_UClass_UBTTask_RunBehavior_NoRegister()
	{
		return UBTTask_RunBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RunBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RunBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * RunBehavior task allows pushing subtrees on execution stack.\n * Subtree asset can't be changed in runtime! \n *\n * This limitation is caused by support for subtree's root level decorators,\n * which are injected into parent tree, and structure of running tree\n * cannot be modified in runtime (see: BTNode: ExecutionIndex, MemoryOffset)\n *\n * Use RunBehaviorDynamic task for subtrees that need to be changed in runtime.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ToolTip", "RunBehavior task allows pushing subtrees on execution stack.\nSubtree asset can't be changed in runtime!\n\nThis limitation is caused by support for subtree's root level decorators,\nwhich are injected into parent tree, and structure of running tree\ncannot be modified in runtime (see: BTNode: ExecutionIndex, MemoryOffset)\n\nUse RunBehaviorDynamic task for subtrees that need to be changed in runtime." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** behavior to run */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ToolTip", "behavior to run" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset = { "BehaviorAsset", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunBehavior, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RunBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunBehavior_Statics::ClassParams = {
		&UBTTask_RunBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RunBehavior()
	{
		if (!Z_Registration_Info_UClass_UBTTask_RunBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RunBehavior.OuterSingleton, Z_Construct_UClass_UBTTask_RunBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_RunBehavior.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_RunBehavior>()
	{
		return UBTTask_RunBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunBehavior);
	UBTTask_RunBehavior::~UBTTask_RunBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RunBehavior, UBTTask_RunBehavior::StaticClass, TEXT("UBTTask_RunBehavior"), &Z_Registration_Info_UClass_UBTTask_RunBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RunBehavior), 603088797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_1215528367(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
