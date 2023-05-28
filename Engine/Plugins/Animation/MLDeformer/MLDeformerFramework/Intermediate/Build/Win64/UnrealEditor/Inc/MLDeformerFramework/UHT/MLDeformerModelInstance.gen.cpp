// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerModelInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerModelInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModel_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModelInstance();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModelInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerModelInstance::StaticRegisterNativesUMLDeformerModelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerModelInstance);
	UClass* Z_Construct_UClass_UMLDeformerModelInstance_NoRegister()
	{
		return UMLDeformerModelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerModelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerModelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModelInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An instance of the ML Deformer model.\n * The ML Deformer model contains shared data, while this instance contains data unique to the actor it is being applied to.\n * So if you have 1 ML Deformer model, applied to 100 enemy actors, you will get 100 ML Deformer Model Instance objects.\n * The model instance is created and managed by the ML Deformer component.\n * The main task of the model instance is to feed the neural network with the right input values and run the neural network\n * inference at runtime, and possibly do something with the output.\n */" },
		{ "IncludePath", "MLDeformerModelInstance.h" },
		{ "ModuleRelativePath", "Public/MLDeformerModelInstance.h" },
		{ "ToolTip", "An instance of the ML Deformer model.\nThe ML Deformer model contains shared data, while this instance contains data unique to the actor it is being applied to.\nSo if you have 1 ML Deformer model, applied to 100 enemy actors, you will get 100 ML Deformer Model Instance objects.\nThe model instance is created and managed by the ML Deformer component.\nThe main task of the model instance is to feed the neural network with the right input values and run the neural network\ninference at runtime, and possibly do something with the output." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModelInstance_Statics::NewProp_Model_MetaData[] = {
		{ "Comment", "/** The ML Deformer model that this is an instance of. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModelInstance.h" },
		{ "ToolTip", "The ML Deformer model that this is an instance of." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerModelInstance_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModelInstance, Model), Z_Construct_UClass_UMLDeformerModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModelInstance_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModelInstance_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerModelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModelInstance_Statics::NewProp_Model,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerModelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerModelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerModelInstance_Statics::ClassParams = {
		&UMLDeformerModelInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLDeformerModelInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModelInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerModelInstance()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerModelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerModelInstance.OuterSingleton, Z_Construct_UClass_UMLDeformerModelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerModelInstance.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerModelInstance>()
	{
		return UMLDeformerModelInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerModelInstance);
	UMLDeformerModelInstance::~UMLDeformerModelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModelInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModelInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerModelInstance, UMLDeformerModelInstance::StaticClass, TEXT("UMLDeformerModelInstance"), &Z_Registration_Info_UClass_UMLDeformerModelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerModelInstance), 3339237832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModelInstance_h_673957994(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModelInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModelInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
