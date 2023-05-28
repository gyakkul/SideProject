// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerAsset();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerAsset_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerAsset::StaticRegisterNativesUMLDeformerAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerAsset);
	UClass* Z_Construct_UClass_UMLDeformerAsset_NoRegister()
	{
		return UMLDeformerAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerAsset_Statics
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
	UObject* (*const Z_Construct_UClass_UMLDeformerAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The machine learning deformer asset class.\n * This class contains a Model property, through which most functionality happens.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MLDeformerAsset.h" },
		{ "ModuleRelativePath", "Public/MLDeformerAsset.h" },
		{ "ToolTip", "The machine learning deformer asset class.\nThis class contains a Model property, through which most functionality happens." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerAsset_Statics::NewProp_Model_MetaData[] = {
		{ "Comment", "/** The ML Deformer model, used to deform the mesh. */" },
		{ "ModuleRelativePath", "Public/MLDeformerAsset.h" },
		{ "ToolTip", "The ML Deformer model, used to deform the mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerAsset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerAsset, Model), Z_Construct_UClass_UMLDeformerModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerAsset_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerAsset_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerAsset_Statics::NewProp_Model,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerAsset_Statics::ClassParams = {
		&UMLDeformerAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLDeformerAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerAsset()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerAsset.OuterSingleton, Z_Construct_UClass_UMLDeformerAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerAsset.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerAsset>()
	{
		return UMLDeformerAsset::StaticClass();
	}
	UMLDeformerAsset::UMLDeformerAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerAsset);
	UMLDeformerAsset::~UMLDeformerAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerAsset, UMLDeformerAsset::StaticClass, TEXT("UMLDeformerAsset"), &Z_Registration_Info_UClass_UMLDeformerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerAsset), 3681987823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_2384528307(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
