// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShapeSprayTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeSprayTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UShapeSprayTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UShapeSprayTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UShapeSprayToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UShapeSprayToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UShapeSprayToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UShapeSprayToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UShapeSprayToolBuilder::StaticRegisterNativesUShapeSprayToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShapeSprayToolBuilder);
	UClass* Z_Construct_UClass_UShapeSprayToolBuilder_NoRegister()
	{
		return UShapeSprayToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UShapeSprayToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShapeSprayToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshSurfacePointMeshEditingToolBuilder override for UShapeSprayTool\n */" },
		{ "IncludePath", "ShapeSprayTool.h" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
		{ "ToolTip", "UMeshSurfacePointMeshEditingToolBuilder override for UShapeSprayTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShapeSprayToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapeSprayToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShapeSprayToolBuilder_Statics::ClassParams = {
		&UShapeSprayToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShapeSprayToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UShapeSprayToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShapeSprayToolBuilder.OuterSingleton, Z_Construct_UClass_UShapeSprayToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShapeSprayToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UShapeSprayToolBuilder>()
	{
		return UShapeSprayToolBuilder::StaticClass();
	}
	UShapeSprayToolBuilder::UShapeSprayToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeSprayToolBuilder);
	UShapeSprayToolBuilder::~UShapeSprayToolBuilder() {}
	void UShapeSprayToolProperties::StaticRegisterNativesUShapeSprayToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShapeSprayToolProperties);
	UClass* Z_Construct_UClass_UShapeSprayToolProperties_NoRegister()
	{
		return UShapeSprayToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UShapeSprayToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomColor_MetaData[];
#endif
		static void NewProp_bRandomColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DropSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSplats_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSplats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShapeSprayToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UShapeSprayTool. \n */" },
		{ "IncludePath", "ShapeSprayTool.h" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
		{ "ToolTip", "Settings UObject for UShapeSprayTool." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeSprayToolProperties, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_bRandomColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
	};
#endif
	void Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_bRandomColor_SetBit(void* Obj)
	{
		((UShapeSprayToolProperties*)Obj)->bRandomColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_bRandomColor = { "bRandomColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShapeSprayToolProperties), &Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_bRandomColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_bRandomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_bRandomColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_DropSpeed_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Speed" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_DropSpeed = { "DropSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeSprayToolProperties, DropSpeed), METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_DropSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_DropSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_ObjectSize_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Shape Size" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
		{ "UIMax", "30.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_ObjectSize = { "ObjectSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeSprayToolProperties, ObjectSize), METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_ObjectSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_ObjectSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_NumSplats_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Repeat Per Stamp" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_NumSplats = { "NumSplats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeSprayToolProperties, NumSplats), METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_NumSplats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_NumSplats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeSprayToolProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShapeSprayToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_bRandomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_DropSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_ObjectSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_NumSplats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayToolProperties_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShapeSprayToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapeSprayToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShapeSprayToolProperties_Statics::ClassParams = {
		&UShapeSprayToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShapeSprayToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShapeSprayToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShapeSprayToolProperties()
	{
		if (!Z_Registration_Info_UClass_UShapeSprayToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShapeSprayToolProperties.OuterSingleton, Z_Construct_UClass_UShapeSprayToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShapeSprayToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UShapeSprayToolProperties>()
	{
		return UShapeSprayToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeSprayToolProperties);
	UShapeSprayToolProperties::~UShapeSprayToolProperties() {}
	void UShapeSprayTool::StaticRegisterNativesUShapeSprayTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShapeSprayTool);
	UClass* Z_Construct_UClass_UShapeSprayTool_NoRegister()
	{
		return UShapeSprayTool::StaticClass();
	}
	struct Z_Construct_UClass_UShapeSprayTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AccumMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShapeSprayTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicMeshBrushTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UShapeSprayTool is a brush-based tool that generates random points on the\n * target surface within the brush radius, and then creates small meshes\n * at those points. The accumulated meshes are appended and can\n * be emitted as a new StaticMeshComponent on Accept.\n */" },
		{ "IncludePath", "ShapeSprayTool.h" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
		{ "ToolTip", "UShapeSprayTool is a brush-based tool that generates random points on the\ntarget surface within the brush radius, and then creates small meshes\nat those points. The accumulated meshes are appended and can\nbe emitted as a new StaticMeshComponent on Accept." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeSprayTool, Settings), Z_Construct_UClass_UShapeSprayToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_AccumMeshComponent_MetaData[] = {
		{ "Comment", "// small meshes are accumulated here\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShapeSprayTool.h" },
		{ "ToolTip", "small meshes are accumulated here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_AccumMeshComponent = { "AccumMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShapeSprayTool, AccumMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_AccumMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_AccumMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShapeSprayTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeSprayTool_Statics::NewProp_AccumMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShapeSprayTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapeSprayTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShapeSprayTool_Statics::ClassParams = {
		&UShapeSprayTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShapeSprayTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShapeSprayTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeSprayTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShapeSprayTool()
	{
		if (!Z_Registration_Info_UClass_UShapeSprayTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShapeSprayTool.OuterSingleton, Z_Construct_UClass_UShapeSprayTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShapeSprayTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UShapeSprayTool>()
	{
		return UShapeSprayTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeSprayTool);
	UShapeSprayTool::~UShapeSprayTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ShapeSprayTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ShapeSprayTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShapeSprayToolBuilder, UShapeSprayToolBuilder::StaticClass, TEXT("UShapeSprayToolBuilder"), &Z_Registration_Info_UClass_UShapeSprayToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShapeSprayToolBuilder), 2661834979U) },
		{ Z_Construct_UClass_UShapeSprayToolProperties, UShapeSprayToolProperties::StaticClass, TEXT("UShapeSprayToolProperties"), &Z_Registration_Info_UClass_UShapeSprayToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShapeSprayToolProperties), 2746798970U) },
		{ Z_Construct_UClass_UShapeSprayTool, UShapeSprayTool::StaticClass, TEXT("UShapeSprayTool"), &Z_Registration_Info_UClass_UShapeSprayTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShapeSprayTool), 1029280576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ShapeSprayTool_h_1989715031(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ShapeSprayTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ShapeSprayTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
