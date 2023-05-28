// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/MeshSurfacePointMeshEditingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSurfacePointMeshEditingTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UMeshSurfacePointMeshEditingToolBuilder::StaticRegisterNativesUMeshSurfacePointMeshEditingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSurfacePointMeshEditingToolBuilder);
	UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_NoRegister()
	{
		return UMeshSurfacePointMeshEditingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base tool builder class for UMeshSurfacePointTools with mesh editing requirements.\n */" },
		{ "IncludePath", "BaseTools/MeshSurfacePointMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointMeshEditingTool.h" },
		{ "ToolTip", "Base tool builder class for UMeshSurfacePointTools with mesh editing requirements." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSurfacePointMeshEditingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics::ClassParams = {
		&UMeshSurfacePointMeshEditingToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshSurfacePointMeshEditingToolBuilder>()
	{
		return UMeshSurfacePointMeshEditingToolBuilder::StaticClass();
	}
	UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSurfacePointMeshEditingToolBuilder);
	UMeshSurfacePointMeshEditingToolBuilder::~UMeshSurfacePointMeshEditingToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MeshSurfacePointMeshEditingTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MeshSurfacePointMeshEditingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder, UMeshSurfacePointMeshEditingToolBuilder::StaticClass, TEXT("UMeshSurfacePointMeshEditingToolBuilder"), &Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSurfacePointMeshEditingToolBuilder), 4181879315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MeshSurfacePointMeshEditingTool_h_3867303824(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MeshSurfacePointMeshEditingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MeshSurfacePointMeshEditingTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
