// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeImportTestPlan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeImportTestPlan() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestPlan();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestPlan_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeImportTestPlan::execRunThisTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunThisTest();
		P_NATIVE_END;
	}
	void UInterchangeImportTestPlan::StaticRegisterNativesUInterchangeImportTestPlan()
	{
		UClass* Class = UInterchangeImportTestPlan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunThisTest", &UInterchangeImportTestPlan::execRunThisTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Run" },
		{ "Comment", "/** Click here to immediately run this single test through the automation framework */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestPlan.h" },
		{ "ToolTip", "Click here to immediately run this single test through the automation framework" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeImportTestPlan, nullptr, "RunThisTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeImportTestPlan);
	UClass* Z_Construct_UClass_UInterchangeImportTestPlan_NoRegister()
	{
		return UInterchangeImportTestPlan::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeImportTestPlan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steps_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Steps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Steps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledInAutomationTests_MetaData[];
#endif
		static void NewProp_bIsEnabledInAutomationTests_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledInAutomationTests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledTestReason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisabledTestReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeImportTestPlan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeImportTestPlan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeImportTestPlan_RunThisTest, "RunThisTest" }, // 2310209408
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestPlan_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Define a test plan\n*/" },
		{ "IncludePath", "InterchangeImportTestPlan.h" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestPlan.h" },
		{ "PrioritizeCategories", "Definition" },
		{ "ToolTip", "Define a test plan" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_Inner_MetaData[] = {
		{ "Category", "Definition" },
		{ "Comment", "/** Set of steps to perform to carry out this test plan */" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestPlan.h" },
		{ "ToolTip", "Set of steps to perform to carry out this test plan" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_Inner = { "Steps", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangeImportTestStepBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_MetaData[] = {
		{ "Category", "Definition" },
		{ "Comment", "/** Set of steps to perform to carry out this test plan */" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestPlan.h" },
		{ "ToolTip", "Set of steps to perform to carry out this test plan" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestPlan, Steps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_bIsEnabledInAutomationTests_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Whether or not this test plan is currently enabled */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestPlan.h" },
		{ "ToolTip", "Whether or not this test plan is currently enabled" },
	};
#endif
	void Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_bIsEnabledInAutomationTests_SetBit(void* Obj)
	{
		((UInterchangeImportTestPlan*)Obj)->bIsEnabledInAutomationTests = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_bIsEnabledInAutomationTests = { "bIsEnabledInAutomationTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeImportTestPlan), &Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_bIsEnabledInAutomationTests_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_bIsEnabledInAutomationTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_bIsEnabledInAutomationTests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_DisabledTestReason_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Why is the test plan disabled. */" },
		{ "EditCondition", "!bIsEnabledInAutomationTests" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestPlan.h" },
		{ "ToolTip", "Why is the test plan disabled." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_DisabledTestReason = { "DisabledTestReason", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestPlan, DisabledTestReason), METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_DisabledTestReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_DisabledTestReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeImportTestPlan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_Steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_bIsEnabledInAutomationTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestPlan_Statics::NewProp_DisabledTestReason,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeImportTestPlan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeImportTestPlan>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeImportTestPlan_Statics::ClassParams = {
		&UInterchangeImportTestPlan::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterchangeImportTestPlan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestPlan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeImportTestPlan()
	{
		if (!Z_Registration_Info_UClass_UInterchangeImportTestPlan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeImportTestPlan.OuterSingleton, Z_Construct_UClass_UInterchangeImportTestPlan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeImportTestPlan.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UInterchangeImportTestPlan>()
	{
		return UInterchangeImportTestPlan::StaticClass();
	}
	UInterchangeImportTestPlan::UInterchangeImportTestPlan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeImportTestPlan);
	UInterchangeImportTestPlan::~UInterchangeImportTestPlan() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeImportTestPlan, UInterchangeImportTestPlan::StaticClass, TEXT("UInterchangeImportTestPlan"), &Z_Registration_Info_UClass_UInterchangeImportTestPlan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeImportTestPlan), 1560607045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_1275276852(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestPlan_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
