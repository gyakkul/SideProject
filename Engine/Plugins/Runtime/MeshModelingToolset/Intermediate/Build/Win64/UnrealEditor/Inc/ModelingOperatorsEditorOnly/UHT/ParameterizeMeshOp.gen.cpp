// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParameterizationOps/ParameterizeMeshOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterizeMeshOp() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshOperatorFactory();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshOperatorFactory_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly();
// End Cross Module References
	void UParameterizeMeshOperatorFactory::StaticRegisterNativesUParameterizeMeshOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterizeMeshOperatorFactory);
	UClass* Z_Construct_UClass_UParameterizeMeshOperatorFactory_NoRegister()
	{
		return UParameterizeMeshOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVAtlasProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVAtlasProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAtlasProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_XAtlasProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchBuilderProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PatchBuilderProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV parameterization operations.\n *\n * Inherits from UObject so that it can hold a strong pointer to the settings UObject, which\n * needs to be a UObject to be displayed in the details panel.\n */" },
		{ "IncludePath", "ParameterizationOps/ParameterizeMeshOp.h" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/ParameterizeMeshOp.h" },
		{ "ToolTip", "Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV parameterization operations.\n\nInherits from UObject so that it can hold a strong pointer to the settings UObject, which\nneeds to be a UObject to be displayed in the details panel." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/ParameterizeMeshOp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshOperatorFactory, Settings), Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_UVAtlasProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/ParameterizeMeshOp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_UVAtlasProperties = { "UVAtlasProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshOperatorFactory, UVAtlasProperties), Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_UVAtlasProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_UVAtlasProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_XAtlasProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/ParameterizeMeshOp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_XAtlasProperties = { "XAtlasProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshOperatorFactory, XAtlasProperties), Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_XAtlasProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_XAtlasProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_PatchBuilderProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/ParameterizeMeshOp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_PatchBuilderProperties = { "PatchBuilderProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshOperatorFactory, PatchBuilderProperties), Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_PatchBuilderProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_PatchBuilderProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_UVAtlasProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_XAtlasProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::NewProp_PatchBuilderProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterizeMeshOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::ClassParams = {
		&UParameterizeMeshOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParameterizeMeshOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UParameterizeMeshOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterizeMeshOperatorFactory.OuterSingleton, Z_Construct_UClass_UParameterizeMeshOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterizeMeshOperatorFactory.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UClass* StaticClass<UParameterizeMeshOperatorFactory>()
	{
		return UParameterizeMeshOperatorFactory::StaticClass();
	}
	UParameterizeMeshOperatorFactory::UParameterizeMeshOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterizeMeshOperatorFactory);
	UParameterizeMeshOperatorFactory::~UParameterizeMeshOperatorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_ParameterizeMeshOp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_ParameterizeMeshOp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParameterizeMeshOperatorFactory, UParameterizeMeshOperatorFactory::StaticClass, TEXT("UParameterizeMeshOperatorFactory"), &Z_Registration_Info_UClass_UParameterizeMeshOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterizeMeshOperatorFactory), 4043858234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_ParameterizeMeshOp_h_3848355877(TEXT("/Script/ModelingOperatorsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_ParameterizeMeshOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_ParameterizeMeshOp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
