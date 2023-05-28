// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTTask_SetFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_SetFlag() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetFlag();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_SetFlag_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UTestBTTask_SetFlag::StaticRegisterNativesUTestBTTask_SetFlag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_SetFlag);
	UClass* Z_Construct_UClass_UTestBTTask_SetFlag_NoRegister()
	{
		return UTestBTTask_SetFlag::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTTask_SetFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbortKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnAbortKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnAbortValue_MetaData[];
#endif
		static void NewProp_bOnAbortValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnAbortValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTTask_SetFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_SetFlag_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_SetFlag.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_KeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_SetFlag, KeyName), METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_KeyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
#endif
	void Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((UTestBTTask_SetFlag*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTestBTTask_SetFlag), &Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_OnAbortKeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_OnAbortKeyName = { "OnAbortKeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_SetFlag, OnAbortKeyName), METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_OnAbortKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_OnAbortKeyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
#endif
	void Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue_SetBit(void* Obj)
	{
		((UTestBTTask_SetFlag*)Obj)->bOnAbortValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue = { "bOnAbortValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTestBTTask_SetFlag), &Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_TaskResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_SetFlag.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_TaskResult = { "TaskResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_SetFlag, TaskResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_TaskResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_TaskResult_MetaData)) }; // 2843222845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_SetFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_OnAbortKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_bOnAbortValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_SetFlag_Statics::NewProp_TaskResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTTask_SetFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_SetFlag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_SetFlag_Statics::ClassParams = {
		&UTestBTTask_SetFlag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTTask_SetFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_SetFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTTask_SetFlag()
	{
		if (!Z_Registration_Info_UClass_UTestBTTask_SetFlag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_SetFlag.OuterSingleton, Z_Construct_UClass_UTestBTTask_SetFlag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTTask_SetFlag.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_SetFlag>()
	{
		return UTestBTTask_SetFlag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_SetFlag);
	UTestBTTask_SetFlag::~UTestBTTask_SetFlag() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_SetFlag, UTestBTTask_SetFlag::StaticClass, TEXT("UTestBTTask_SetFlag"), &Z_Registration_Info_UClass_UTestBTTask_SetFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_SetFlag), 1197107572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_2781591115(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_SetFlag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
