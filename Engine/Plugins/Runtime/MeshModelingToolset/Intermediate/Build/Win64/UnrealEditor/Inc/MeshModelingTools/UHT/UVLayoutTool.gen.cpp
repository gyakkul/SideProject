// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVLayoutTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVLayoutTool() {}
// Cross Module References
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutTool();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutTool_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UUVLayoutToolBuilder::StaticRegisterNativesUUVLayoutToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutToolBuilder);
	UClass* Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister()
	{
		return UUVLayoutToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVLayoutToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVLayoutToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UVLayoutTool.h" },
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVLayoutToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutToolBuilder_Statics::ClassParams = {
		&UUVLayoutToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVLayoutToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVLayoutToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton, Z_Construct_UClass_UUVLayoutToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVLayoutToolBuilder>()
	{
		return UUVLayoutToolBuilder::StaticClass();
	}
	UUVLayoutToolBuilder::UUVLayoutToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutToolBuilder);
	UUVLayoutToolBuilder::~UUVLayoutToolBuilder() {}
	void UUVLayoutTool::StaticRegisterNativesUUVLayoutTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutTool);
	UClass* Z_Construct_UClass_UUVLayoutTool_NoRegister()
	{
		return UUVLayoutTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVLayoutTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVChannelProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialSettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Previews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Factories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayoutView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVLayoutView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVLayoutTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The level editor version of the UV layout tool.\n */" },
		{ "IncludePath", "UVLayoutTool.h" },
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
		{ "ToolTip", "The level editor version of the UV layout tool." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVChannelProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVChannelProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutTool, BasicProperties), Z_Construct_UClass_UUVLayoutProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutTool, MaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_MaterialSettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutTool, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVLayoutView_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVLayoutView = { "UVLayoutView", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutTool, UVLayoutView), Z_Construct_UClass_UUVLayoutPreview_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVLayoutView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVLayoutView_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVChannelProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVLayoutView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVLayoutTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutTool_Statics::ClassParams = {
		&UUVLayoutTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVLayoutTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVLayoutTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVLayoutTool()
	{
		if (!Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton, Z_Construct_UClass_UUVLayoutTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVLayoutTool>()
	{
		return UUVLayoutTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutTool);
	UUVLayoutTool::~UUVLayoutTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVLayoutToolBuilder, UUVLayoutToolBuilder::StaticClass, TEXT("UUVLayoutToolBuilder"), &Z_Registration_Info_UClass_UUVLayoutToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutToolBuilder), 2903523581U) },
		{ Z_Construct_UClass_UUVLayoutTool, UUVLayoutTool::StaticClass, TEXT("UUVLayoutTool"), &Z_Registration_Info_UClass_UUVLayoutTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutTool), 1969669388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_1285556673(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
