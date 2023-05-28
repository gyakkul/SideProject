// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphNode_Composite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Composite() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraph_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Composite();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Composite_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_Composite::StaticRegisterNativesUMaterialGraphNode_Composite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphNode_Composite);
	UClass* Z_Construct_UClass_UMaterialGraphNode_Composite_NoRegister()
	{
		return UMaterialGraphNode_Composite::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Composite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_Composite.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Composite.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "/** The graph that this composite node is representing */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Composite.h" },
		{ "ToolTip", "The graph that this composite node is representing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraphNode_Composite, BoundGraph), Z_Construct_UClass_UMaterialGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::NewProp_BoundGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Composite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::ClassParams = {
		&UMaterialGraphNode_Composite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Composite()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphNode_Composite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphNode_Composite.OuterSingleton, Z_Construct_UClass_UMaterialGraphNode_Composite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphNode_Composite.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Composite>()
	{
		return UMaterialGraphNode_Composite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Composite);
	UMaterialGraphNode_Composite::~UMaterialGraphNode_Composite() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphNode_Composite, UMaterialGraphNode_Composite::StaticClass, TEXT("UMaterialGraphNode_Composite"), &Z_Registration_Info_UClass_UMaterialGraphNode_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphNode_Composite), 979779502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_3254994370(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Composite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
