// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SampleTools/DrawCurveOnMeshSampleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawCurveOnMeshSampleTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleTool();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleTool_NoRegister();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_NoRegister();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SampleToolsEditorMode();
// End Cross Module References
	void UDrawCurveOnMeshSampleToolBuilder::StaticRegisterNativesUDrawCurveOnMeshSampleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawCurveOnMeshSampleToolBuilder);
	UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_NoRegister()
	{
		return UDrawCurveOnMeshSampleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshSurfacePointToolBuilder override for UDrawCurveOnMeshSampleTool\n */" },
		{ "IncludePath", "SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "ToolTip", "UMeshSurfacePointToolBuilder override for UDrawCurveOnMeshSampleTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawCurveOnMeshSampleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics::ClassParams = {
		&UDrawCurveOnMeshSampleToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolBuilder.OuterSingleton, Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolBuilder.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UDrawCurveOnMeshSampleToolBuilder>()
	{
		return UDrawCurveOnMeshSampleToolBuilder::StaticClass();
	}
	UDrawCurveOnMeshSampleToolBuilder::UDrawCurveOnMeshSampleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawCurveOnMeshSampleToolBuilder);
	UDrawCurveOnMeshSampleToolBuilder::~UDrawCurveOnMeshSampleToolBuilder() {}
	void UDrawCurveOnMeshSampleToolProperties::StaticRegisterNativesUDrawCurveOnMeshSampleToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawCurveOnMeshSampleToolProperties);
	UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_NoRegister()
	{
		return UDrawCurveOnMeshSampleToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScreenSpace_MetaData[];
#endif
		static void NewProp_bScreenSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UDrawCurveOnMeshSampleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
		{ "IncludePath", "SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "ToolTip", "Settings UObject for UDrawCurveOnMeshSampleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleToolProperties, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Thickness" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleToolProperties, Thickness), METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_MinSpacing_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Min Spacing" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_MinSpacing = { "MinSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleToolProperties, MinSpacing), METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_MinSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_MinSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_NormalOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "-1000.0" },
		{ "DisplayName", "Offset" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_NormalOffset = { "NormalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleToolProperties, NormalOffset), METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_NormalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_NormalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_DepthBias_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Depth Bias" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "-10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleToolProperties, DepthBias), METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_DepthBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_DepthBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_bScreenSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
	};
#endif
	void Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_bScreenSpace_SetBit(void* Obj)
	{
		((UDrawCurveOnMeshSampleToolProperties*)Obj)->bScreenSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_bScreenSpace = { "bScreenSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDrawCurveOnMeshSampleToolProperties), &Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_bScreenSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_bScreenSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_bScreenSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_MinSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_NormalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_DepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::NewProp_bScreenSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawCurveOnMeshSampleToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::ClassParams = {
		&UDrawCurveOnMeshSampleToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties()
	{
		if (!Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolProperties.OuterSingleton, Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolProperties.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UDrawCurveOnMeshSampleToolProperties>()
	{
		return UDrawCurveOnMeshSampleToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawCurveOnMeshSampleToolProperties);
	UDrawCurveOnMeshSampleToolProperties::~UDrawCurveOnMeshSampleToolProperties() {}
	void UDrawCurveOnMeshSampleTool::StaticRegisterNativesUDrawCurveOnMeshSampleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawCurveOnMeshSampleTool);
	UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleTool_NoRegister()
	{
		return UDrawCurveOnMeshSampleTool::StaticClass();
	}
	struct Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDrawCurveOnMeshSampleTool is a sample Tool that allows the user to draw curves on the surface of\n * a selected Mesh Component. The various rendering properties of the polycurve are exposed and can be tweaked.\n * Nothing is done with the curve, it is just drawn by ::Render() and discarded when the Tool exits.\n */" },
		{ "IncludePath", "SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
		{ "ToolTip", "UDrawCurveOnMeshSampleTool is a sample Tool that allows the user to draw curves on the surface of\na selected Mesh Component. The various rendering properties of the polycurve are exposed and can be tweaked.\nNothing is done with the curve, it is just drawn by ::Render() and discarded when the Tool exits." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleTool, Settings), Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Positions_MetaData[] = {
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleTool, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Positions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Normals_MetaData[] = {
		{ "ModuleRelativePath", "Private/SampleTools/DrawCurveOnMeshSampleTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawCurveOnMeshSampleTool, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::NewProp_Normals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawCurveOnMeshSampleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::ClassParams = {
		&UDrawCurveOnMeshSampleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawCurveOnMeshSampleTool()
	{
		if (!Z_Registration_Info_UClass_UDrawCurveOnMeshSampleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawCurveOnMeshSampleTool.OuterSingleton, Z_Construct_UClass_UDrawCurveOnMeshSampleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawCurveOnMeshSampleTool.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UDrawCurveOnMeshSampleTool>()
	{
		return UDrawCurveOnMeshSampleTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawCurveOnMeshSampleTool);
	UDrawCurveOnMeshSampleTool::~UDrawCurveOnMeshSampleTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_DrawCurveOnMeshSampleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_DrawCurveOnMeshSampleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrawCurveOnMeshSampleToolBuilder, UDrawCurveOnMeshSampleToolBuilder::StaticClass, TEXT("UDrawCurveOnMeshSampleToolBuilder"), &Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawCurveOnMeshSampleToolBuilder), 508905114U) },
		{ Z_Construct_UClass_UDrawCurveOnMeshSampleToolProperties, UDrawCurveOnMeshSampleToolProperties::StaticClass, TEXT("UDrawCurveOnMeshSampleToolProperties"), &Z_Registration_Info_UClass_UDrawCurveOnMeshSampleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawCurveOnMeshSampleToolProperties), 2228838720U) },
		{ Z_Construct_UClass_UDrawCurveOnMeshSampleTool, UDrawCurveOnMeshSampleTool::StaticClass, TEXT("UDrawCurveOnMeshSampleTool"), &Z_Registration_Info_UClass_UDrawCurveOnMeshSampleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawCurveOnMeshSampleTool), 3937141276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_DrawCurveOnMeshSampleTool_h_2465808457(TEXT("/Script/SampleToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_DrawCurveOnMeshSampleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_DrawCurveOnMeshSampleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
