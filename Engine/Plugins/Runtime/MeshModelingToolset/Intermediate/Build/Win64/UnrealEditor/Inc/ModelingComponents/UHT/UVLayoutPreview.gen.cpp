// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/UVLayoutPreview.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVLayoutPreview() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreviewProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVLayoutPreviewSide;
	static UEnum* EUVLayoutPreviewSide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVLayoutPreviewSide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVLayoutPreviewSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EUVLayoutPreviewSide"));
		}
		return Z_Registration_Info_UEnum_EUVLayoutPreviewSide.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EUVLayoutPreviewSide>()
	{
		return EUVLayoutPreviewSide_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enumerators[] = {
		{ "EUVLayoutPreviewSide::Left", (int64)EUVLayoutPreviewSide::Left },
		{ "EUVLayoutPreviewSide::Right", (int64)EUVLayoutPreviewSide::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Where should in-viewport UVLayoutPreview be shown, relative to target object\n */" },
		{ "Left.Comment", "/** On the left side of the object center relative to the camera */" },
		{ "Left.Name", "EUVLayoutPreviewSide::Left" },
		{ "Left.ToolTip", "On the left side of the object center relative to the camera" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "Right.Comment", "/** On the right side of the object center relative to the camera */" },
		{ "Right.Name", "EUVLayoutPreviewSide::Right" },
		{ "Right.ToolTip", "On the right side of the object center relative to the camera" },
		{ "ToolTip", "Where should in-viewport UVLayoutPreview be shown, relative to target object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EUVLayoutPreviewSide",
		"EUVLayoutPreviewSide",
		Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide()
	{
		if (!Z_Registration_Info_UEnum_EUVLayoutPreviewSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVLayoutPreviewSide.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVLayoutPreviewSide.InnerSingleton;
	}
	void UUVLayoutPreviewProperties::StaticRegisterNativesUUVLayoutPreviewProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutPreviewProperties);
	UClass* Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister()
	{
		return UUVLayoutPreviewProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVLayoutPreviewProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Side_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Side_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Side;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[];
#endif
		static void NewProp_bShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings for UV layout preview\n */" },
		{ "IncludePath", "Drawing/UVLayoutPreview.h" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Visualization settings for UV layout preview" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Enable the preview UV layout */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Enable the preview UV layout" },
	};
#endif
	void Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UUVLayoutPreviewProperties*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVLayoutPreviewProperties), &Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Which side of the selected object the preview UV layout is shown */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Which side of the selected object the preview UV layout is shown" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutPreviewProperties, Side), Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side_MetaData)) }; // 3087252191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Uniform scaling factor */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Uniform scaling factor" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutPreviewProperties, Scale), METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Offset relative to the center of the selected object */" },
		{ "Delta", "0.500000" },
		{ "EditCondition", "bEnabled" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Offset relative to the center of the selected object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutPreviewProperties, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Show wireframe mesh in the preview UV layout */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Show wireframe mesh in the preview UV layout" },
	};
#endif
	void Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
	{
		((UUVLayoutPreviewProperties*)Obj)->bShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVLayoutPreviewProperties), &Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutPreviewProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::ClassParams = {
		&UUVLayoutPreviewProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVLayoutPreviewProperties()
	{
		if (!Z_Registration_Info_UClass_UUVLayoutPreviewProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutPreviewProperties.OuterSingleton, Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVLayoutPreviewProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UUVLayoutPreviewProperties>()
	{
		return UUVLayoutPreviewProperties::StaticClass();
	}
	UUVLayoutPreviewProperties::UUVLayoutPreviewProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutPreviewProperties);
	UUVLayoutPreviewProperties::~UUVLayoutPreviewProperties() {}
	void UUVLayoutPreview::StaticRegisterNativesUUVLayoutPreview()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutPreview);
	UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister()
	{
		return UUVLayoutPreview::StaticClass();
	}
	struct Z_Construct_UClass_UUVLayoutPreview_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TriangleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBackingRectangle_MetaData[];
#endif
		static void NewProp_bShowBackingRectangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBackingRectangle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackingRectangleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackingRectangleMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVLayoutPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreview_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UUVLayoutPreview is a utility object that creates and manages a 3D plane on which a UV layout\n * for a 3D mesh is rendered. The UV layout\n */" },
		{ "IncludePath", "Drawing/UVLayoutPreview.h" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "UUVLayoutPreview is a utility object that creates and manages a 3D plane on which a UV layout\nfor a 3D mesh is rendered. The UV layout" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Visualization settings */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Visualization settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutPreview, Settings), Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Comment", "/** PreviewMesh is initialized with a copy of an input mesh with UVs mapped to position, ie such that (X,Y,Z) = (U,V,0) */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "PreviewMesh is initialized with a copy of an input mesh with UVs mapped to position, ie such that (X,Y,Z) = (U,V,0)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutPreview, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_TriangleComponent_MetaData[] = {
		{ "Comment", "/** Set of additional triangles to draw, eg for backing rectangle, etc */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Set of additional triangles to draw, eg for backing rectangle, etc" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_TriangleComponent = { "TriangleComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutPreview, TriangleComponent), Z_Construct_UClass_UTriangleSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_TriangleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_TriangleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle_MetaData[] = {
		{ "Comment", "/** Configure whether the backing rectangle should be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Configure whether the backing rectangle should be shown" },
	};
#endif
	void Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle_SetBit(void* Obj)
	{
		((UUVLayoutPreview*)Obj)->bShowBackingRectangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle = { "bShowBackingRectangle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVLayoutPreview), &Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_BackingRectangleMaterial_MetaData[] = {
		{ "Comment", "/** Configure the backing rectangle material */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Configure the backing rectangle material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_BackingRectangleMaterial = { "BackingRectangleMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutPreview, BackingRectangleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_BackingRectangleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_BackingRectangleMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_TriangleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_BackingRectangleMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVLayoutPreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutPreview>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutPreview_Statics::ClassParams = {
		&UUVLayoutPreview::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVLayoutPreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVLayoutPreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVLayoutPreview()
	{
		if (!Z_Registration_Info_UClass_UUVLayoutPreview.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutPreview.OuterSingleton, Z_Construct_UClass_UUVLayoutPreview_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVLayoutPreview.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UUVLayoutPreview>()
	{
		return UUVLayoutPreview::StaticClass();
	}
	UUVLayoutPreview::UUVLayoutPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutPreview);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::EnumInfo[] = {
		{ EUVLayoutPreviewSide_StaticEnum, TEXT("EUVLayoutPreviewSide"), &Z_Registration_Info_UEnum_EUVLayoutPreviewSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3087252191U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVLayoutPreviewProperties, UUVLayoutPreviewProperties::StaticClass, TEXT("UUVLayoutPreviewProperties"), &Z_Registration_Info_UClass_UUVLayoutPreviewProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutPreviewProperties), 1517448825U) },
		{ Z_Construct_UClass_UUVLayoutPreview, UUVLayoutPreview::StaticClass, TEXT("UUVLayoutPreview"), &Z_Registration_Info_UClass_UUVLayoutPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutPreview), 3330268302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_2747237932(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
