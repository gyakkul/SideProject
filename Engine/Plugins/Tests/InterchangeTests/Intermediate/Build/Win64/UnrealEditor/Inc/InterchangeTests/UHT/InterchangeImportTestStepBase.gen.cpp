// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeImportTestStepBase.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeImportTestStepBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepBase_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunction();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	void UInterchangeImportTestStepBase::StaticRegisterNativesUInterchangeImportTestStepBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeImportTestStepBase);
	UClass* Z_Construct_UClass_UInterchangeImportTestStepBase_NoRegister()
	{
		return UInterchangeImportTestStepBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeImportTestStepBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "General Test" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeImportTestStepBase.h" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInterchangeTestFunction, METADATA_PARAMS(nullptr, 0) }; // 2897743584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::NewProp_Tests_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** An array of results to check against */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepBase.h" },
		{ "ToolTip", "An array of results to check against" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestStepBase, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::NewProp_Tests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::NewProp_Tests_MetaData)) }; // 2897743584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::NewProp_Tests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::NewProp_Tests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeImportTestStepBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::ClassParams = {
		&UInterchangeImportTestStepBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeImportTestStepBase()
	{
		if (!Z_Registration_Info_UClass_UInterchangeImportTestStepBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeImportTestStepBase.OuterSingleton, Z_Construct_UClass_UInterchangeImportTestStepBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeImportTestStepBase.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UInterchangeImportTestStepBase>()
	{
		return UInterchangeImportTestStepBase::StaticClass();
	}
	UInterchangeImportTestStepBase::UInterchangeImportTestStepBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeImportTestStepBase);
	UInterchangeImportTestStepBase::~UInterchangeImportTestStepBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeImportTestStepBase, UInterchangeImportTestStepBase::StaticClass, TEXT("UInterchangeImportTestStepBase"), &Z_Registration_Info_UClass_UInterchangeImportTestStepBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeImportTestStepBase), 2973722220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_225112439(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
