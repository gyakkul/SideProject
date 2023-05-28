// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AddPatchTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddPatchTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAddPatchTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAddPatchTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAddPatchToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAddPatchToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAddPatchToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAddPatchToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UAddPatchToolBuilder::StaticRegisterNativesUAddPatchToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddPatchToolBuilder);
	UClass* Z_Construct_UClass_UAddPatchToolBuilder_NoRegister()
	{
		return UAddPatchToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UAddPatchToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddPatchToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AddPatchTool.h" },
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddPatchToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddPatchToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddPatchToolBuilder_Statics::ClassParams = {
		&UAddPatchToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAddPatchToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddPatchToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UAddPatchToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddPatchToolBuilder.OuterSingleton, Z_Construct_UClass_UAddPatchToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAddPatchToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UAddPatchToolBuilder>()
	{
		return UAddPatchToolBuilder::StaticClass();
	}
	UAddPatchToolBuilder::UAddPatchToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddPatchToolBuilder);
	UAddPatchToolBuilder::~UAddPatchToolBuilder() {}
	void UAddPatchToolProperties::StaticRegisterNativesUAddPatchToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddPatchToolProperties);
	UClass* Z_Construct_UClass_UAddPatchToolProperties_NoRegister()
	{
		return UAddPatchToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UAddPatchToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subdivisions_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Subdivisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Shift;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddPatchToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AddPatchTool.h" },
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "PatchSettings" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Width of Shape */" },
		{ "DisplayName", "Width" },
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
		{ "ToolTip", "Width of Shape" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPatchToolProperties, Width), METADATA_PARAMS(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "PatchSettings" },
		{ "Comment", "/** Rotation around up axis */" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
		{ "ToolTip", "Rotation around up axis" },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPatchToolProperties, Rotation), METADATA_PARAMS(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Subdivisions_MetaData[] = {
		{ "Category", "PatchSettings" },
		{ "ClampMax", "4000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Subdivisions */" },
		{ "DisplayName", "Subdivisions" },
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
		{ "ToolTip", "Subdivisions" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Subdivisions = { "Subdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPatchToolProperties, Subdivisions), METADATA_PARAMS(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Subdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Subdivisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "PatchSettings" },
		{ "Comment", "/** Rotation around up axis */" },
		{ "DisplayName", "Shift" },
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
		{ "ToolTip", "Rotation around up axis" },
		{ "UIMax", "1000" },
		{ "UIMin", "-1000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPatchToolProperties, Shift), METADATA_PARAMS(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Shift_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddPatchToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Subdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPatchToolProperties_Statics::NewProp_Shift,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddPatchToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddPatchToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddPatchToolProperties_Statics::ClassParams = {
		&UAddPatchToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddPatchToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAddPatchToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddPatchToolProperties()
	{
		if (!Z_Registration_Info_UClass_UAddPatchToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddPatchToolProperties.OuterSingleton, Z_Construct_UClass_UAddPatchToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAddPatchToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UAddPatchToolProperties>()
	{
		return UAddPatchToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddPatchToolProperties);
	UAddPatchToolProperties::~UAddPatchToolProperties() {}
	void UAddPatchTool::StaticRegisterNativesUAddPatchTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddPatchTool);
	UClass* Z_Construct_UClass_UAddPatchTool_NoRegister()
	{
		return UAddPatchTool::StaticClass();
	}
	struct Z_Construct_UClass_UAddPatchTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShapeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddPatchTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AddPatchTool.h" },
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchTool_Statics::NewProp_ShapeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAddPatchTool_Statics::NewProp_ShapeSettings = { "ShapeSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPatchTool, ShapeSettings), Z_Construct_UClass_UAddPatchToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAddPatchTool_Statics::NewProp_ShapeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchTool_Statics::NewProp_ShapeSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchTool_Statics::NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAddPatchTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPatchTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAddPatchTool_Statics::NewProp_MaterialProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchTool_Statics::NewProp_MaterialProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPatchTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AddPatchTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAddPatchTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPatchTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAddPatchTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchTool_Statics::NewProp_PreviewMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddPatchTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPatchTool_Statics::NewProp_ShapeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPatchTool_Statics::NewProp_MaterialProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPatchTool_Statics::NewProp_PreviewMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddPatchTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddPatchTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddPatchTool_Statics::ClassParams = {
		&UAddPatchTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddPatchTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAddPatchTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPatchTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddPatchTool()
	{
		if (!Z_Registration_Info_UClass_UAddPatchTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddPatchTool.OuterSingleton, Z_Construct_UClass_UAddPatchTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAddPatchTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UAddPatchTool>()
	{
		return UAddPatchTool::StaticClass();
	}
	UAddPatchTool::UAddPatchTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddPatchTool);
	UAddPatchTool::~UAddPatchTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AddPatchTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AddPatchTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAddPatchToolBuilder, UAddPatchToolBuilder::StaticClass, TEXT("UAddPatchToolBuilder"), &Z_Registration_Info_UClass_UAddPatchToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddPatchToolBuilder), 2606101586U) },
		{ Z_Construct_UClass_UAddPatchToolProperties, UAddPatchToolProperties::StaticClass, TEXT("UAddPatchToolProperties"), &Z_Registration_Info_UClass_UAddPatchToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddPatchToolProperties), 1564409209U) },
		{ Z_Construct_UClass_UAddPatchTool, UAddPatchTool::StaticClass, TEXT("UAddPatchTool"), &Z_Registration_Info_UClass_UAddPatchTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddPatchTool), 3236290840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AddPatchTool_h_692161413(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AddPatchTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AddPatchTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
