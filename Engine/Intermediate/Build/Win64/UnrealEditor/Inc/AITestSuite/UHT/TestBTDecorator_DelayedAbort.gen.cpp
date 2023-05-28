// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTDecorator_DelayedAbort.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTDecorator_DelayedAbort() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UTestBTDecorator_DelayedAbort::StaticRegisterNativesUTestBTDecorator_DelayedAbort()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTDecorator_DelayedAbort);
	UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort_NoRegister()
	{
		return UTestBTDecorator_DelayedAbort::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DelayTicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyOnce_MetaData[];
#endif
		static void NewProp_bOnlyOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyOnce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTDecorator_DelayedAbort.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_DelayedAbort.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_DelayTicks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_DelayedAbort.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_DelayTicks = { "DelayTicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_DelayedAbort, DelayTicks), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_DelayTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_DelayTicks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_DelayedAbort.h" },
	};
#endif
	void Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce_SetBit(void* Obj)
	{
		((UTestBTDecorator_DelayedAbort*)Obj)->bOnlyOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce = { "bOnlyOnce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTestBTDecorator_DelayedAbort), &Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_DelayTicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::NewProp_bOnlyOnce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTDecorator_DelayedAbort>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::ClassParams = {
		&UTestBTDecorator_DelayedAbort::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTDecorator_DelayedAbort()
	{
		if (!Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.OuterSingleton, Z_Construct_UClass_UTestBTDecorator_DelayedAbort_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTDecorator_DelayedAbort>()
	{
		return UTestBTDecorator_DelayedAbort::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTDecorator_DelayedAbort);
	UTestBTDecorator_DelayedAbort::~UTestBTDecorator_DelayedAbort() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTDecorator_DelayedAbort, UTestBTDecorator_DelayedAbort::StaticClass, TEXT("UTestBTDecorator_DelayedAbort"), &Z_Registration_Info_UClass_UTestBTDecorator_DelayedAbort, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTDecorator_DelayedAbort), 2395771438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_600033837(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_DelayedAbort_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
