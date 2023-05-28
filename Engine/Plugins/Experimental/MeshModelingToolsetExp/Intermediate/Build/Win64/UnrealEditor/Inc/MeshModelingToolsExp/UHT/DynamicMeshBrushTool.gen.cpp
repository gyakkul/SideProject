// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicMeshBrushTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshBrushTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UDynamicMeshBrushTool::StaticRegisterNativesUDynamicMeshBrushTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshBrushTool);
	UClass* Z_Construct_UClass_UDynamicMeshBrushTool_NoRegister()
	{
		return UDynamicMeshBrushTool::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshBrushTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshBrushTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseBrushTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDynamicMeshBrushTool is a base class that specializes UBaseBrushTool\n * for brushing on an FDynamicMesh3. The input FPrimitiveComponentTarget is hidden\n * and a UPreviewMesh is created and shown in its place. This UPreviewMesh is\n * used for hit-testing and dynamic rendering.\n * \n */" },
		{ "IncludePath", "DynamicMeshBrushTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshBrushTool.h" },
		{ "ToolTip", "UDynamicMeshBrushTool is a base class that specializes UBaseBrushTool\nfor brushing on an FDynamicMesh3. The input FPrimitiveComponentTarget is hidden\nand a UPreviewMesh is created and shown in its place. This UPreviewMesh is\nused for hit-testing and dynamic rendering." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshBrushTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshBrushTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshBrushTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::NewProp_PreviewMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshBrushTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushTool_Statics::NewProp_PreviewMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshBrushTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshBrushTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshBrushTool_Statics::ClassParams = {
		&UDynamicMeshBrushTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDynamicMeshBrushTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshBrushTool()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshBrushTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshBrushTool.OuterSingleton, Z_Construct_UClass_UDynamicMeshBrushTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshBrushTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDynamicMeshBrushTool>()
	{
		return UDynamicMeshBrushTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshBrushTool);
	UDynamicMeshBrushTool::~UDynamicMeshBrushTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshBrushTool, UDynamicMeshBrushTool::StaticClass, TEXT("UDynamicMeshBrushTool"), &Z_Registration_Info_UClass_UDynamicMeshBrushTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshBrushTool), 816691371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_4062614126(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
