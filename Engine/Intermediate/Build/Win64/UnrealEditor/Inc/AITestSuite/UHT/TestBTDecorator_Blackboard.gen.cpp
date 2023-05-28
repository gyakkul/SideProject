// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTDecorator_Blackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTDecorator_Blackboard() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UTestBTDecorator_Blackboard::StaticRegisterNativesUTestBTDecorator_Blackboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTDecorator_Blackboard);
	UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard_NoRegister()
	{
		return UTestBTDecorator_Blackboard::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexBecomeRelevant_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexBecomeRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCeaseRelevant_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCeaseRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCalculate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCalculate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_Blackboard,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/TestBTDecorator_Blackboard.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexBecomeRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexBecomeRelevant = { "LogIndexBecomeRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blackboard, LogIndexBecomeRelevant), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexBecomeRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexBecomeRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCeaseRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCeaseRelevant = { "LogIndexCeaseRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blackboard, LogIndexCeaseRelevant), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCeaseRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCeaseRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCalculate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blackboard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCalculate = { "LogIndexCalculate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blackboard, LogIndexCalculate), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCalculate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCalculate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexBecomeRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCeaseRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::NewProp_LogIndexCalculate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTDecorator_Blackboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::ClassParams = {
		&UTestBTDecorator_Blackboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTDecorator_Blackboard()
	{
		if (!Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.OuterSingleton, Z_Construct_UClass_UTestBTDecorator_Blackboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTDecorator_Blackboard.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTDecorator_Blackboard>()
	{
		return UTestBTDecorator_Blackboard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTDecorator_Blackboard);
	UTestBTDecorator_Blackboard::~UTestBTDecorator_Blackboard() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTDecorator_Blackboard, UTestBTDecorator_Blackboard::StaticClass, TEXT("UTestBTDecorator_Blackboard"), &Z_Registration_Info_UClass_UTestBTDecorator_Blackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTDecorator_Blackboard), 4242093715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_1426350588(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blackboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
