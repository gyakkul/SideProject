// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockAI_BT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockAI_BT() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_BT();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_BT_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UMockAI_BT::StaticRegisterNativesUMockAI_BT()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockAI_BT);
	UClass* Z_Construct_UClass_UMockAI_BT_NoRegister()
	{
		return UMockAI_BT::StaticClass();
	}
	struct Z_Construct_UClass_UMockAI_BT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BTComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BTComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockAI_BT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMockAI,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAI_BT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockAI_BT.h" },
		{ "ModuleRelativePath", "Classes/MockAI_BT.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAI_BT_Statics::NewProp_BTComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI_BT.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockAI_BT_Statics::NewProp_BTComp = { "BTComp", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockAI_BT, BTComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockAI_BT_Statics::NewProp_BTComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_BT_Statics::NewProp_BTComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockAI_BT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_BT_Statics::NewProp_BTComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockAI_BT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockAI_BT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockAI_BT_Statics::ClassParams = {
		&UMockAI_BT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMockAI_BT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_BT_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMockAI_BT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_BT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockAI_BT()
	{
		if (!Z_Registration_Info_UClass_UMockAI_BT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockAI_BT.OuterSingleton, Z_Construct_UClass_UMockAI_BT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockAI_BT.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UMockAI_BT>()
	{
		return UMockAI_BT::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockAI_BT);
	UMockAI_BT::~UMockAI_BT() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockAI_BT, UMockAI_BT::StaticClass, TEXT("UMockAI_BT"), &Z_Registration_Info_UClass_UMockAI_BT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockAI_BT), 517549377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_660789102(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
