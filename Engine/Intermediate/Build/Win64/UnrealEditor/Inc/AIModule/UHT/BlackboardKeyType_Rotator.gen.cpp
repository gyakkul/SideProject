// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Rotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Rotator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Rotator();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Rotator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBlackboardKeyType_Rotator::StaticRegisterNativesUBlackboardKeyType_Rotator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_Rotator);
	UClass* Z_Construct_UClass_UBlackboardKeyType_Rotator_NoRegister()
	{
		return UBlackboardKeyType_Rotator::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Rotator" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Rotator.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Rotator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Rotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics::ClassParams = {
		&UBlackboardKeyType_Rotator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_Rotator()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_Rotator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType_Rotator>()
	{
		return UBlackboardKeyType_Rotator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Rotator);
	UBlackboardKeyType_Rotator::~UBlackboardKeyType_Rotator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Rotator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Rotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_Rotator, UBlackboardKeyType_Rotator::StaticClass, TEXT("UBlackboardKeyType_Rotator"), &Z_Registration_Info_UClass_UBlackboardKeyType_Rotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_Rotator), 1126252934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Rotator_h_1892061983(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Rotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_Rotator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
