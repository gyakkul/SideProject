// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockAI() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI();
	AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UMockAI::StaticRegisterNativesUMockAI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockAI);
	UClass* Z_Construct_UClass_UMockAI_NoRegister()
	{
		return UMockAI::StaticClass();
	}
	struct Z_Construct_UClass_UMockAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BBComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrainComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerceptionComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockAI.h" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAI_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockAI, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockAI_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAI_Statics::NewProp_BBComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_BBComp = { "BBComp", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockAI, BBComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockAI_Statics::NewProp_BBComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::NewProp_BBComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAI_Statics::NewProp_BrainComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_BrainComp = { "BrainComp", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockAI, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockAI_Statics::NewProp_BrainComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::NewProp_BrainComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockAI_Statics::NewProp_PerceptionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MockAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockAI_Statics::NewProp_PerceptionComp = { "PerceptionComp", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockAI, PerceptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockAI_Statics::NewProp_PerceptionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::NewProp_PerceptionComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_BBComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_BrainComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockAI_Statics::NewProp_PerceptionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockAI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockAI_Statics::ClassParams = {
		&UMockAI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMockAI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMockAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockAI()
	{
		if (!Z_Registration_Info_UClass_UMockAI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockAI.OuterSingleton, Z_Construct_UClass_UMockAI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockAI.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UMockAI>()
	{
		return UMockAI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockAI);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockAI, UMockAI::StaticClass, TEXT("UMockAI"), &Z_Registration_Info_UClass_UMockAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockAI), 212874873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_1820721558(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
