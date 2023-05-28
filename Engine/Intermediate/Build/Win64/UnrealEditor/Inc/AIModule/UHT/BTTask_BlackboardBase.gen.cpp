// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BlackboardBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_BlackboardBase::StaticRegisterNativesUBTTask_BlackboardBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_BlackboardBase);
	UClass* Z_Construct_UClass_UBTTask_BlackboardBase_NoRegister()
	{
		return UBTTask_BlackboardBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_BlackboardBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_BlackboardBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlackboardBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_BlackboardBase.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlackboardBase_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlackboardBase.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_BlackboardBase_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_BlackboardBase, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlackboardBase_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlackboardBase_Statics::NewProp_BlackboardKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_BlackboardBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlackboardBase_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_BlackboardBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_BlackboardBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_BlackboardBase_Statics::ClassParams = {
		&UBTTask_BlackboardBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_BlackboardBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlackboardBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlackboardBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlackboardBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_BlackboardBase()
	{
		if (!Z_Registration_Info_UClass_UBTTask_BlackboardBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_BlackboardBase.OuterSingleton, Z_Construct_UClass_UBTTask_BlackboardBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_BlackboardBase.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_BlackboardBase>()
	{
		return UBTTask_BlackboardBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BlackboardBase);
	UBTTask_BlackboardBase::~UBTTask_BlackboardBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_BlackboardBase, UBTTask_BlackboardBase::StaticClass, TEXT("UBTTask_BlackboardBase"), &Z_Registration_Info_UClass_UBTTask_BlackboardBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_BlackboardBase), 3442820435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_2473969137(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
