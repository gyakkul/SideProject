// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshBoundaryToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBoundaryToolBase() {}
// Cross Module References
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshBoundaryToolBase();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshBoundaryToolBase_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMeshBoundaryToolBase::StaticRegisterNativesUMeshBoundaryToolBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshBoundaryToolBase);
	UClass* Z_Construct_UClass_UMeshBoundaryToolBase_NoRegister()
	{
		return UMeshBoundaryToolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeshBoundaryToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshBoundaryToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshBoundaryToolBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * Base class for tools that do things with a mesh boundary. Provides ability to select mesh boundaries\n  * and some other boilerplate code.\n  *\x09TODO: We can refactor to make the HoleFiller tool inherit from this.\n  */" },
		{ "IncludePath", "MeshBoundaryToolBase.h" },
		{ "ModuleRelativePath", "Public/MeshBoundaryToolBase.h" },
		{ "ToolTip", "Base class for tools that do things with a mesh boundary. Provides ability to select mesh boundaries\nand some other boilerplate code.\n   TODO: We can refactor to make the HoleFiller tool inherit from this." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshBoundaryToolBase_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshBoundaryToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshBoundaryToolBase_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshBoundaryToolBase, SelectionMechanic), Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshBoundaryToolBase_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshBoundaryToolBase_Statics::NewProp_SelectionMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshBoundaryToolBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshBoundaryToolBase_Statics::NewProp_SelectionMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshBoundaryToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshBoundaryToolBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshBoundaryToolBase_Statics::ClassParams = {
		&UMeshBoundaryToolBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshBoundaryToolBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshBoundaryToolBase_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshBoundaryToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshBoundaryToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshBoundaryToolBase()
	{
		if (!Z_Registration_Info_UClass_UMeshBoundaryToolBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshBoundaryToolBase.OuterSingleton, Z_Construct_UClass_UMeshBoundaryToolBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshBoundaryToolBase.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshBoundaryToolBase>()
	{
		return UMeshBoundaryToolBase::StaticClass();
	}
	UMeshBoundaryToolBase::UMeshBoundaryToolBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshBoundaryToolBase);
	UMeshBoundaryToolBase::~UMeshBoundaryToolBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshBoundaryToolBase, UMeshBoundaryToolBase::StaticClass, TEXT("UMeshBoundaryToolBase"), &Z_Registration_Info_UClass_UMeshBoundaryToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshBoundaryToolBase), 319152838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_3973356700(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshBoundaryToolBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
