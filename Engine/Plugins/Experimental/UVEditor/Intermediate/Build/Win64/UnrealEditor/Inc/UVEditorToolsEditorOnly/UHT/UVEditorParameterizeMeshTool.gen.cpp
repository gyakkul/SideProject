// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorParameterizeMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorParameterizeMeshTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshOperatorFactory_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorToolsEditorOnly();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UUVEditorParameterizeMeshTool();
	UVEDITORTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UUVEditorParameterizeMeshTool_NoRegister();
	UVEDITORTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder();
	UVEDITORTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_NoRegister();
// End Cross Module References
	void UUVEditorParameterizeMeshToolBuilder::StaticRegisterNativesUUVEditorParameterizeMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorParameterizeMeshToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_NoRegister()
	{
		return UUVEditorParameterizeMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorToolsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorParameterizeMeshTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorParameterizeMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics::ClassParams = {
		&UUVEditorParameterizeMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorParameterizeMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorParameterizeMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorParameterizeMeshToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLSEDITORONLY_API UClass* StaticClass<UUVEditorParameterizeMeshToolBuilder>()
	{
		return UUVEditorParameterizeMeshToolBuilder::StaticClass();
	}
	UUVEditorParameterizeMeshToolBuilder::UUVEditorParameterizeMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorParameterizeMeshToolBuilder);
	UUVEditorParameterizeMeshToolBuilder::~UUVEditorParameterizeMeshToolBuilder() {}
	void UUVEditorParameterizeMeshTool::StaticRegisterNativesUUVEditorParameterizeMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorParameterizeMeshTool);
	UClass* Z_Construct_UClass_UUVEditorParameterizeMeshTool_NoRegister()
	{
		return UUVEditorParameterizeMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygroupLayerProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Factories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorToolsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UParameterizeMeshTool automatically decomposes the input mesh into charts, solves for UVs,\n * and then packs the resulting charts\n */" },
		{ "IncludePath", "UVEditorParameterizeMeshTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
		{ "ToolTip", "UParameterizeMeshTool automatically decomposes the input mesh into charts, solves for UVs,\nand then packs the resulting charts" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorParameterizeMeshTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorParameterizeMeshTool, Settings), Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_UVAtlasProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_UVAtlasProperties = { "UVAtlasProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorParameterizeMeshTool, UVAtlasProperties), Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_UVAtlasProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_UVAtlasProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_XAtlasProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_XAtlasProperties = { "XAtlasProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorParameterizeMeshTool, XAtlasProperties), Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_XAtlasProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_XAtlasProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties = { "PatchBuilderProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorParameterizeMeshTool, PatchBuilderProperties), Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorParameterizeMeshTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParameterizeMeshOperatorFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorParameterizeMeshTool, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Factories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Factories_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_UVAtlasProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_XAtlasProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Factories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::NewProp_Factories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorParameterizeMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::ClassParams = {
		&UUVEditorParameterizeMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorParameterizeMeshTool()
	{
		if (!Z_Registration_Info_UClass_UUVEditorParameterizeMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorParameterizeMeshTool.OuterSingleton, Z_Construct_UClass_UUVEditorParameterizeMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorParameterizeMeshTool.OuterSingleton;
	}
	template<> UVEDITORTOOLSEDITORONLY_API UClass* StaticClass<UUVEditorParameterizeMeshTool>()
	{
		return UUVEditorParameterizeMeshTool::StaticClass();
	}
	UUVEditorParameterizeMeshTool::UUVEditorParameterizeMeshTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorParameterizeMeshTool);
	UUVEditorParameterizeMeshTool::~UUVEditorParameterizeMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorToolsEditorOnly_Public_UVEditorParameterizeMeshTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorToolsEditorOnly_Public_UVEditorParameterizeMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorParameterizeMeshToolBuilder, UUVEditorParameterizeMeshToolBuilder::StaticClass, TEXT("UUVEditorParameterizeMeshToolBuilder"), &Z_Registration_Info_UClass_UUVEditorParameterizeMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorParameterizeMeshToolBuilder), 3526537249U) },
		{ Z_Construct_UClass_UUVEditorParameterizeMeshTool, UUVEditorParameterizeMeshTool::StaticClass, TEXT("UUVEditorParameterizeMeshTool"), &Z_Registration_Info_UClass_UUVEditorParameterizeMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorParameterizeMeshTool), 3946003333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorToolsEditorOnly_Public_UVEditorParameterizeMeshTool_h_3268124943(TEXT("/Script/UVEditorToolsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorToolsEditorOnly_Public_UVEditorParameterizeMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorToolsEditorOnly_Public_UVEditorParameterizeMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
