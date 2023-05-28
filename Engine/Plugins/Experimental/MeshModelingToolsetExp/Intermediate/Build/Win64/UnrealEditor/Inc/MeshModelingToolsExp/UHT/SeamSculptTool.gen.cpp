// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeamSculptTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeamSculptTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USeamSculptTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USeamSculptTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USeamSculptToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USeamSculptToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USeamSculptToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USeamSculptToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void USeamSculptToolBuilder::StaticRegisterNativesUSeamSculptToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeamSculptToolBuilder);
	UClass* Z_Construct_UClass_USeamSculptToolBuilder_NoRegister()
	{
		return USeamSculptToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USeamSculptToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeamSculptToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeamSculptToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SeamSculptTool.h" },
		{ "ModuleRelativePath", "Public/SeamSculptTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeamSculptToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeamSculptToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USeamSculptToolBuilder_Statics::ClassParams = {
		&USeamSculptToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USeamSculptToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeamSculptToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USeamSculptToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeamSculptToolBuilder.OuterSingleton, Z_Construct_UClass_USeamSculptToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USeamSculptToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USeamSculptToolBuilder>()
	{
		return USeamSculptToolBuilder::StaticClass();
	}
	USeamSculptToolBuilder::USeamSculptToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeamSculptToolBuilder);
	USeamSculptToolBuilder::~USeamSculptToolBuilder() {}
	void USeamSculptToolProperties::StaticRegisterNativesUSeamSculptToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeamSculptToolProperties);
	UClass* Z_Construct_UClass_USeamSculptToolProperties_NoRegister()
	{
		return USeamSculptToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USeamSculptToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[];
#endif
		static void NewProp_bShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitBackFaces_MetaData[];
#endif
		static void NewProp_bHitBackFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBackFaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeamSculptToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeamSculptToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SeamSculptTool.h" },
		{ "ModuleRelativePath", "Public/SeamSculptTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/SeamSculptTool.h" },
	};
#endif
	void Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
	{
		((USeamSculptToolProperties*)Obj)->bShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USeamSculptToolProperties), &Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bShowWireframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bHitBackFaces_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/SeamSculptTool.h" },
	};
#endif
	void Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bHitBackFaces_SetBit(void* Obj)
	{
		((USeamSculptToolProperties*)Obj)->bHitBackFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bHitBackFaces = { "bHitBackFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USeamSculptToolProperties), &Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bHitBackFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bHitBackFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bHitBackFaces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeamSculptToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bShowWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeamSculptToolProperties_Statics::NewProp_bHitBackFaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeamSculptToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeamSculptToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USeamSculptToolProperties_Statics::ClassParams = {
		&USeamSculptToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USeamSculptToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USeamSculptToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeamSculptToolProperties()
	{
		if (!Z_Registration_Info_UClass_USeamSculptToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeamSculptToolProperties.OuterSingleton, Z_Construct_UClass_USeamSculptToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USeamSculptToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USeamSculptToolProperties>()
	{
		return USeamSculptToolProperties::StaticClass();
	}
	USeamSculptToolProperties::USeamSculptToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeamSculptToolProperties);
	USeamSculptToolProperties::~USeamSculptToolProperties() {}
	void USeamSculptTool::StaticRegisterNativesUSeamSculptTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeamSculptTool);
	UClass* Z_Construct_UClass_USeamSculptTool_NoRegister()
	{
		return USeamSculptTool::StaticClass();
	}
	struct Z_Construct_UClass_USeamSculptTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeamSculptTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicMeshBrushTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeamSculptTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SeamSculptTool.h" },
		{ "ModuleRelativePath", "Public/SeamSculptTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeamSculptTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/SeamSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USeamSculptTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USeamSculptTool, Settings), Z_Construct_UClass_USeamSculptToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USeamSculptTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeamSculptTool_Statics::NewProp_PreviewGeom_MetaData[] = {
		{ "ModuleRelativePath", "Public/SeamSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USeamSculptTool_Statics::NewProp_PreviewGeom = { "PreviewGeom", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USeamSculptTool, PreviewGeom), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USeamSculptTool_Statics::NewProp_PreviewGeom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptTool_Statics::NewProp_PreviewGeom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeamSculptTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeamSculptTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeamSculptTool_Statics::NewProp_PreviewGeom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeamSculptTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeamSculptTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USeamSculptTool_Statics::ClassParams = {
		&USeamSculptTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USeamSculptTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USeamSculptTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeamSculptTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeamSculptTool()
	{
		if (!Z_Registration_Info_UClass_USeamSculptTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeamSculptTool.OuterSingleton, Z_Construct_UClass_USeamSculptTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USeamSculptTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USeamSculptTool>()
	{
		return USeamSculptTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeamSculptTool);
	USeamSculptTool::~USeamSculptTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SeamSculptTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SeamSculptTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USeamSculptToolBuilder, USeamSculptToolBuilder::StaticClass, TEXT("USeamSculptToolBuilder"), &Z_Registration_Info_UClass_USeamSculptToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeamSculptToolBuilder), 1832377971U) },
		{ Z_Construct_UClass_USeamSculptToolProperties, USeamSculptToolProperties::StaticClass, TEXT("USeamSculptToolProperties"), &Z_Registration_Info_UClass_USeamSculptToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeamSculptToolProperties), 839272590U) },
		{ Z_Construct_UClass_USeamSculptTool, USeamSculptTool::StaticClass, TEXT("USeamSculptTool"), &Z_Registration_Info_UClass_USeamSculptTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeamSculptTool), 1488559212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SeamSculptTool_h_4222242232(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SeamSculptTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SeamSculptTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
