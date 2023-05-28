// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerMorphModelInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerMorphModelInstance() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModelInstance();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelInstance();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerMorphModelInstance::StaticRegisterNativesUMLDeformerMorphModelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerMorphModelInstance);
	UClass* Z_Construct_UClass_UMLDeformerMorphModelInstance_NoRegister()
	{
		return UMLDeformerMorphModelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerModelInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The model instance for the UMLDeformerMorphModel.\n * This instance will assume the neural network outputs a set of weights, one for each morph target.\n * The weights of the morph targets in the external morph target set related to the ID of the model will\n * be set to the weights that the neural network outputs.\n * The first morph target contains the means, which need to always be added to the results. Therefore the \n * weight of the first morph target will always be forced to a value of 1.\n */" },
		{ "IncludePath", "MLDeformerMorphModelInstance.h" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModelInstance.h" },
		{ "ToolTip", "The model instance for the UMLDeformerMorphModel.\nThis instance will assume the neural network outputs a set of weights, one for each morph target.\nThe weights of the morph targets in the external morph target set related to the ID of the model will\nbe set to the weights that the neural network outputs.\nThe first morph target contains the means, which need to always be added to the results. Therefore the\nweight of the first morph target will always be forced to a value of 1." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerMorphModelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics::ClassParams = {
		&UMLDeformerMorphModelInstance::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerMorphModelInstance()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerMorphModelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerMorphModelInstance.OuterSingleton, Z_Construct_UClass_UMLDeformerMorphModelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerMorphModelInstance.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerMorphModelInstance>()
	{
		return UMLDeformerMorphModelInstance::StaticClass();
	}
	UMLDeformerMorphModelInstance::UMLDeformerMorphModelInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerMorphModelInstance);
	UMLDeformerMorphModelInstance::~UMLDeformerMorphModelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerMorphModelInstance, UMLDeformerMorphModelInstance::StaticClass, TEXT("UMLDeformerMorphModelInstance"), &Z_Registration_Info_UClass_UMLDeformerMorphModelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerMorphModelInstance), 367085532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInstance_h_2849162869(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
