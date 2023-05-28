// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/MLDeformerTestModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerTestModel() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModel();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModelInstance();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerTestModel();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerTestModel_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UTestModelInstance();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UTestModelInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerTestModel::StaticRegisterNativesUMLDeformerTestModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerTestModel);
	UClass* Z_Construct_UClass_UMLDeformerTestModel_NoRegister()
	{
		return UMLDeformerTestModel::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerTestModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerTestModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerModel,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerTestModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MLDeformerTestModel.h" },
		{ "ModuleRelativePath", "Private/Tests/MLDeformerTestModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerTestModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerTestModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerTestModel_Statics::ClassParams = {
		&UMLDeformerTestModel::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerTestModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerTestModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerTestModel()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerTestModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerTestModel.OuterSingleton, Z_Construct_UClass_UMLDeformerTestModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerTestModel.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerTestModel>()
	{
		return UMLDeformerTestModel::StaticClass();
	}
	UMLDeformerTestModel::UMLDeformerTestModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerTestModel);
	UMLDeformerTestModel::~UMLDeformerTestModel() {}
	void UTestModelInstance::StaticRegisterNativesUTestModelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestModelInstance);
	UClass* Z_Construct_UClass_UTestModelInstance_NoRegister()
	{
		return UTestModelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTestModelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestModelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerModelInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestModelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MLDeformerTestModel.h" },
		{ "ModuleRelativePath", "Private/Tests/MLDeformerTestModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestModelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestModelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestModelInstance_Statics::ClassParams = {
		&UTestModelInstance::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestModelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestModelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestModelInstance()
	{
		if (!Z_Registration_Info_UClass_UTestModelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestModelInstance.OuterSingleton, Z_Construct_UClass_UTestModelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestModelInstance.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UTestModelInstance>()
	{
		return UTestModelInstance::StaticClass();
	}
	UTestModelInstance::UTestModelInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestModelInstance);
	UTestModelInstance::~UTestModelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_Tests_MLDeformerTestModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_Tests_MLDeformerTestModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerTestModel, UMLDeformerTestModel::StaticClass, TEXT("UMLDeformerTestModel"), &Z_Registration_Info_UClass_UMLDeformerTestModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerTestModel), 4215823171U) },
		{ Z_Construct_UClass_UTestModelInstance, UTestModelInstance::StaticClass, TEXT("UTestModelInstance"), &Z_Registration_Info_UClass_UTestModelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestModelInstance), 1869634826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_Tests_MLDeformerTestModel_h_4264497301(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_Tests_MLDeformerTestModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_Tests_MLDeformerTestModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
