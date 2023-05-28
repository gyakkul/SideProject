// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorBackgroundPreview.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorBackgroundPreview() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorBackgroundPreview();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorBackgroundPreview_NoRegister();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorBackgroundPreviewProperties();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_NoRegister();
	UVEDITOR_API UEnum* Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType;
	static UEnum* EUVEditorBackgroundSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType, (UObject*)Z_Construct_UPackage__Script_UVEditor(), TEXT("EUVEditorBackgroundSourceType"));
		}
		return Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType.OuterSingleton;
	}
	template<> UVEDITOR_API UEnum* StaticEnum<EUVEditorBackgroundSourceType>()
	{
		return EUVEditorBackgroundSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::Enumerators[] = {
		{ "EUVEditorBackgroundSourceType::Checkerboard", (int64)EUVEditorBackgroundSourceType::Checkerboard },
		{ "EUVEditorBackgroundSourceType::Texture", (int64)EUVEditorBackgroundSourceType::Texture },
		{ "EUVEditorBackgroundSourceType::Material", (int64)EUVEditorBackgroundSourceType::Material },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::Enum_MetaDataParams[] = {
		{ "Checkerboard.Name", "EUVEditorBackgroundSourceType::Checkerboard" },
		{ "Comment", "/**\n * Enum to control the background visualiztion mode\n */" },
		{ "Material.Name", "EUVEditorBackgroundSourceType::Material" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "Texture.Name", "EUVEditorBackgroundSourceType::Texture" },
		{ "ToolTip", "Enum to control the background visualiztion mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditor,
		nullptr,
		"EUVEditorBackgroundSourceType",
		"EUVEditorBackgroundSourceType",
		Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType.InnerSingleton, Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType.InnerSingleton;
	}
	void UUVEditorBackgroundPreviewProperties::StaticRegisterNativesUUVEditorBackgroundPreviewProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorBackgroundPreviewProperties);
	UClass* Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_NoRegister()
	{
		return UUVEditorBackgroundPreviewProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMaterial;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UDIMBlocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UDIMBlocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UDIMBlocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUDIMsEnabled_MetaData[];
#endif
		static void NewProp_bUDIMsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUDIMsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings for the UUVEditorBackgroundPreview\n */" },
		{ "IncludePath", "UVEditorBackgroundPreview.h" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "Visualization settings for the UUVEditorBackgroundPreview" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Should the background be shown (Alt+B)*/" },
		{ "DisplayName", "Display Background" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "Should the background be shown (Alt+B)" },
	};
#endif
	void Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UUVEditorBackgroundPreviewProperties*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorBackgroundPreviewProperties), &Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bVisible_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Source of background visuals */" },
		{ "DisplayName", "Background Source" },
		{ "EditCondition", "bVisible" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "Source of background visuals" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorBackgroundPreviewProperties, SourceType), Z_Construct_UEnum_UVEditor_EUVEditorBackgroundSourceType, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceType_MetaData)) }; // 2474460686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceTexture_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Display a background based on the selected texture */" },
		{ "EditCondition", "SourceType==EUVEditorBackgroundSourceType::Texture && bVisible" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "Display a background based on the selected texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorBackgroundPreviewProperties, SourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceMaterial_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Display a background based on the selected material */" },
		{ "EditCondition", "SourceType==EUVEditorBackgroundSourceType::Material && bVisible" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "Display a background based on the selected material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorBackgroundPreviewProperties, SourceMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceMaterial_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_UDIMBlocks_Inner = { "UDIMBlocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_UDIMBlocks_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_UDIMBlocks = { "UDIMBlocks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorBackgroundPreviewProperties, UDIMBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_UDIMBlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_UDIMBlocks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bUDIMsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
	};
#endif
	void Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bUDIMsEnabled_SetBit(void* Obj)
	{
		((UUVEditorBackgroundPreviewProperties*)Obj)->bUDIMsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bUDIMsEnabled = { "bUDIMsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorBackgroundPreviewProperties), &Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bUDIMsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bUDIMsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bUDIMsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_SourceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_UDIMBlocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_UDIMBlocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::NewProp_bUDIMsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorBackgroundPreviewProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::ClassParams = {
		&UUVEditorBackgroundPreviewProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorBackgroundPreviewProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorBackgroundPreviewProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorBackgroundPreviewProperties.OuterSingleton, Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorBackgroundPreviewProperties.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorBackgroundPreviewProperties>()
	{
		return UUVEditorBackgroundPreviewProperties::StaticClass();
	}
	UUVEditorBackgroundPreviewProperties::UUVEditorBackgroundPreviewProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorBackgroundPreviewProperties);
	UUVEditorBackgroundPreviewProperties::~UUVEditorBackgroundPreviewProperties() {}
	void UUVEditorBackgroundPreview::StaticRegisterNativesUUVEditorBackgroundPreview()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorBackgroundPreview);
	UClass* Z_Construct_UClass_UUVEditorBackgroundPreview_NoRegister()
	{
		return UUVEditorBackgroundPreview::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorBackgroundPreview_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackgroundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackgroundMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPreviewGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  Serves as a container for the background texture/material display in the UVEditor. This class is responsible for managing the quad\n  drawn behind the grid, as well as maintaining the texture and material choices from the user to display.\n */" },
		{ "IncludePath", "UVEditorBackgroundPreview.h" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "Serves as a container for the background texture/material display in the UVEditor. This class is responsible for managing the quad\ndrawn behind the grid, as well as maintaining the texture and material choices from the user to display." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Visualization settings */" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "Visualization settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorBackgroundPreview, Settings), Z_Construct_UClass_UUVEditorBackgroundPreviewProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundComponent_MetaData[] = {
		{ "Comment", "/** The component containing the quad visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "The component containing the quad visualization" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundComponent = { "BackgroundComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorBackgroundPreview, BackgroundComponent), Z_Construct_UClass_UTriangleSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundMaterial_MetaData[] = {
		{ "Comment", "/** The active material being displayed for the background */" },
		{ "ModuleRelativePath", "Public/UVEditorBackgroundPreview.h" },
		{ "ToolTip", "The active material being displayed for the background" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundMaterial = { "BackgroundMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorBackgroundPreview, BackgroundMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::NewProp_BackgroundMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorBackgroundPreview>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::ClassParams = {
		&UUVEditorBackgroundPreview::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorBackgroundPreview()
	{
		if (!Z_Registration_Info_UClass_UUVEditorBackgroundPreview.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorBackgroundPreview.OuterSingleton, Z_Construct_UClass_UUVEditorBackgroundPreview_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorBackgroundPreview.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorBackgroundPreview>()
	{
		return UUVEditorBackgroundPreview::StaticClass();
	}
	UUVEditorBackgroundPreview::UUVEditorBackgroundPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorBackgroundPreview);
	UUVEditorBackgroundPreview::~UUVEditorBackgroundPreview() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_Statics::EnumInfo[] = {
		{ EUVEditorBackgroundSourceType_StaticEnum, TEXT("EUVEditorBackgroundSourceType"), &Z_Registration_Info_UEnum_EUVEditorBackgroundSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2474460686U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorBackgroundPreviewProperties, UUVEditorBackgroundPreviewProperties::StaticClass, TEXT("UUVEditorBackgroundPreviewProperties"), &Z_Registration_Info_UClass_UUVEditorBackgroundPreviewProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorBackgroundPreviewProperties), 1019180780U) },
		{ Z_Construct_UClass_UUVEditorBackgroundPreview, UUVEditorBackgroundPreview::StaticClass, TEXT("UUVEditorBackgroundPreview"), &Z_Registration_Info_UClass_UUVEditorBackgroundPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorBackgroundPreview), 2472373551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_3503610523(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorBackgroundPreview_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
