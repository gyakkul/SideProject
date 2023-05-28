// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBlackboardKeyType::StaticRegisterNativesUBlackboardKeyType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType);
	UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister()
	{
		return UBlackboardKeyType::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Statics::ClassParams = {
		&UBlackboardKeyType::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyType.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType>()
	{
		return UBlackboardKeyType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType);
	UBlackboardKeyType::~UBlackboardKeyType() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType, UBlackboardKeyType::StaticClass, TEXT("UBlackboardKeyType"), &Z_Registration_Info_UClass_UBlackboardKeyType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType), 2940968354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_3008175293(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
