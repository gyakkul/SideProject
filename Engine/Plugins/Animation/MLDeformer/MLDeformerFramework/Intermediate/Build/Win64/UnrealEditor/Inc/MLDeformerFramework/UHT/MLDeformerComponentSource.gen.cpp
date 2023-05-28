// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MLDeformerComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerComponentSource() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponentSource();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponentSource_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerComponentSource::StaticRegisterNativesUMLDeformerComponentSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerComponentSource);
	UClass* Z_Construct_UClass_UMLDeformerComponentSource_NoRegister()
	{
		return UMLDeformerComponentSource::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerComponentSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerComponentSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComponentSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerComponentSource_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ML Deformer Component" },
		{ "IncludePath", "MLDeformerComponentSource.h" },
		{ "ModuleRelativePath", "Private/MLDeformerComponentSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerComponentSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerComponentSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerComponentSource_Statics::ClassParams = {
		&UMLDeformerComponentSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerComponentSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerComponentSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerComponentSource()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerComponentSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerComponentSource.OuterSingleton, Z_Construct_UClass_UMLDeformerComponentSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerComponentSource.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerComponentSource>()
	{
		return UMLDeformerComponentSource::StaticClass();
	}
	UMLDeformerComponentSource::UMLDeformerComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerComponentSource);
	UMLDeformerComponentSource::~UMLDeformerComponentSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_MLDeformerComponentSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_MLDeformerComponentSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerComponentSource, UMLDeformerComponentSource::StaticClass, TEXT("UMLDeformerComponentSource"), &Z_Registration_Info_UClass_UMLDeformerComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerComponentSource), 1288838675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_MLDeformerComponentSource_h_2184743062(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_MLDeformerComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Private_MLDeformerComponentSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
