// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshVertexPaintingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPaintingTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushBaseProperties();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshColorPaintingTool();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshColorPaintingTool_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshColorPaintingToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshColorPaintingToolBuilder_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshColorPaintingToolProperties();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshColorPaintingToolProperties_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshVertexPaintingTool();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshVertexPaintingTool_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshVertexPaintingToolProperties();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshVertexPaintingToolProperties_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshWeightPaintingTool();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshWeightPaintingTool_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshWeightPaintingToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshWeightPaintingToolBuilder_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshWeightPaintingToolProperties();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshWeightPaintingToolProperties_NoRegister();
	MESHPAINTINGTOOLSET_API UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex();
	MESHPAINTINGTOOLSET_API UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes();
	UPackage* Z_Construct_UPackage__Script_MeshPaintingToolset();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshPaintWeightTypes;
	static UEnum* EMeshPaintWeightTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintWeightTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshPaintWeightTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("EMeshPaintWeightTypes"));
		}
		return Z_Registration_Info_UEnum_EMeshPaintWeightTypes.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<EMeshPaintWeightTypes>()
	{
		return EMeshPaintWeightTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::Enumerators[] = {
		{ "EMeshPaintWeightTypes::AlphaLerp", (int64)EMeshPaintWeightTypes::AlphaLerp },
		{ "EMeshPaintWeightTypes::RGB", (int64)EMeshPaintWeightTypes::RGB },
		{ "EMeshPaintWeightTypes::ARGB", (int64)EMeshPaintWeightTypes::ARGB },
		{ "EMeshPaintWeightTypes::OneMinusARGB", (int64)EMeshPaintWeightTypes::OneMinusARGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::Enum_MetaDataParams[] = {
		{ "AlphaLerp.Comment", "/** Lerp Between Two Textures using Alpha Value */" },
		{ "AlphaLerp.DisplayName", "Alpha (Two Textures)" },
		{ "AlphaLerp.Name", "EMeshPaintWeightTypes::AlphaLerp" },
		{ "AlphaLerp.ToolTip", "Lerp Between Two Textures using Alpha Value" },
		{ "ARGB.Comment", "/**  Weighting Four Textures according to Channels*/" },
		{ "ARGB.DisplayName", "ARGB (Four Textures)" },
		{ "ARGB.Name", "EMeshPaintWeightTypes::ARGB" },
		{ "ARGB.ToolTip", "Weighting Four Textures according to Channels" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "OneMinusARGB.Comment", "/**  Weighting Five Textures according to Channels */" },
		{ "OneMinusARGB.DisplayName", "ARGB - 1 (Five Textures)" },
		{ "OneMinusARGB.Name", "EMeshPaintWeightTypes::OneMinusARGB" },
		{ "OneMinusARGB.ToolTip", "Weighting Five Textures according to Channels" },
		{ "RGB.Comment", "/** Weighting Three Textures according to Channels*/" },
		{ "RGB.DisplayName", "RGB (Three Textures)" },
		{ "RGB.Name", "EMeshPaintWeightTypes::RGB" },
		{ "RGB.ToolTip", "Weighting Three Textures according to Channels" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		"EMeshPaintWeightTypes",
		"EMeshPaintWeightTypes",
		Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintWeightTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshPaintWeightTypes.InnerSingleton, Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshPaintWeightTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshPaintTextureIndex;
	static UEnum* EMeshPaintTextureIndex_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintTextureIndex.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshPaintTextureIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("EMeshPaintTextureIndex"));
		}
		return Z_Registration_Info_UEnum_EMeshPaintTextureIndex.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<EMeshPaintTextureIndex>()
	{
		return EMeshPaintTextureIndex_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::Enumerators[] = {
		{ "EMeshPaintTextureIndex::TextureOne", (int64)EMeshPaintTextureIndex::TextureOne },
		{ "EMeshPaintTextureIndex::TextureTwo", (int64)EMeshPaintTextureIndex::TextureTwo },
		{ "EMeshPaintTextureIndex::TextureThree", (int64)EMeshPaintTextureIndex::TextureThree },
		{ "EMeshPaintTextureIndex::TextureFour", (int64)EMeshPaintTextureIndex::TextureFour },
		{ "EMeshPaintTextureIndex::TextureFive", (int64)EMeshPaintTextureIndex::TextureFive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "TextureFive.Name", "EMeshPaintTextureIndex::TextureFive" },
		{ "TextureFour.Name", "EMeshPaintTextureIndex::TextureFour" },
		{ "TextureOne.Name", "EMeshPaintTextureIndex::TextureOne" },
		{ "TextureThree.Name", "EMeshPaintTextureIndex::TextureThree" },
		{ "TextureTwo.Name", "EMeshPaintTextureIndex::TextureTwo" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		"EMeshPaintTextureIndex",
		"EMeshPaintTextureIndex",
		Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintTextureIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshPaintTextureIndex.InnerSingleton, Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshPaintTextureIndex.InnerSingleton;
	}
	void UMeshColorPaintingToolBuilder::StaticRegisterNativesUMeshColorPaintingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshColorPaintingToolBuilder);
	UClass* Z_Construct_UClass_UMeshColorPaintingToolBuilder_NoRegister()
	{
		return UMeshColorPaintingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshColorPaintingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics::ClassParams = {
		&UMeshColorPaintingToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshColorPaintingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshColorPaintingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshColorPaintingToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshColorPaintingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshColorPaintingToolBuilder.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshColorPaintingToolBuilder>()
	{
		return UMeshColorPaintingToolBuilder::StaticClass();
	}
	UMeshColorPaintingToolBuilder::UMeshColorPaintingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshColorPaintingToolBuilder);
	UMeshColorPaintingToolBuilder::~UMeshColorPaintingToolBuilder() {}
	void UMeshWeightPaintingToolBuilder::StaticRegisterNativesUMeshWeightPaintingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshWeightPaintingToolBuilder);
	UClass* Z_Construct_UClass_UMeshWeightPaintingToolBuilder_NoRegister()
	{
		return UMeshWeightPaintingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshWeightPaintingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics::ClassParams = {
		&UMeshWeightPaintingToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshWeightPaintingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshWeightPaintingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshWeightPaintingToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshWeightPaintingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshWeightPaintingToolBuilder.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshWeightPaintingToolBuilder>()
	{
		return UMeshWeightPaintingToolBuilder::StaticClass();
	}
	UMeshWeightPaintingToolBuilder::UMeshWeightPaintingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshWeightPaintingToolBuilder);
	UMeshWeightPaintingToolBuilder::~UMeshWeightPaintingToolBuilder() {}
	void UMeshVertexPaintingToolProperties::StaticRegisterNativesUMeshVertexPaintingToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPaintingToolProperties);
	UClass* Z_Construct_UClass_UMeshVertexPaintingToolProperties_NoRegister()
	{
		return UMeshVertexPaintingToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaintColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EraseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EraseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFlow_MetaData[];
#endif
		static void NewProp_bEnableFlow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFlow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyFrontFacingTriangles_MetaData[];
#endif
		static void NewProp_bOnlyFrontFacingTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyFrontFacingTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexPreviewSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexPreviewSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrushBaseProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_PaintColor_MetaData[] = {
		{ "Category", "VertexPainting" },
		{ "Comment", "/** Color used for Applying Vertex Color Painting */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Color used for Applying Vertex Color Painting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_PaintColor = { "PaintColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexPaintingToolProperties, PaintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_PaintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_PaintColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_EraseColor_MetaData[] = {
		{ "Category", "VertexPainting" },
		{ "Comment", "/** Color used for Erasing Vertex Color Painting */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Color used for Erasing Vertex Color Painting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_EraseColor = { "EraseColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexPaintingToolProperties, EraseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_EraseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_EraseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bEnableFlow_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Enables \"Flow\" painting where paint is continually applied from the brush every tick */" },
		{ "DisplayName", "Enable Brush Flow" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Enables \"Flow\" painting where paint is continually applied from the brush every tick" },
	};
#endif
	void Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bEnableFlow_SetBit(void* Obj)
	{
		((UMeshVertexPaintingToolProperties*)Obj)->bEnableFlow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bEnableFlow = { "bEnableFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshVertexPaintingToolProperties), &Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bEnableFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bEnableFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bEnableFlow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Whether back-facing triangles should be ignored */" },
		{ "DisplayName", "Ignore Back-Facing" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Whether back-facing triangles should be ignored" },
	};
#endif
	void Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit(void* Obj)
	{
		((UMeshVertexPaintingToolProperties*)Obj)->bOnlyFrontFacingTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles = { "bOnlyFrontFacingTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshVertexPaintingToolProperties), &Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_VertexPreviewSize_MetaData[] = {
		{ "Category", "VertexPainting|Visualization" },
		{ "Comment", "/** Size of vertex points drawn when mesh painting is active. */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Size of vertex points drawn when mesh painting is active." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_VertexPreviewSize = { "VertexPreviewSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexPaintingToolProperties, VertexPreviewSize), METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_VertexPreviewSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_VertexPreviewSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_PaintColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_EraseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bEnableFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::NewProp_VertexPreviewSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPaintingToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::ClassParams = {
		&UMeshVertexPaintingToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshVertexPaintingToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshVertexPaintingToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPaintingToolProperties.OuterSingleton, Z_Construct_UClass_UMeshVertexPaintingToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshVertexPaintingToolProperties.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshVertexPaintingToolProperties>()
	{
		return UMeshVertexPaintingToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPaintingToolProperties);
	UMeshVertexPaintingToolProperties::~UMeshVertexPaintingToolProperties() {}
	void UMeshColorPaintingToolProperties::StaticRegisterNativesUMeshColorPaintingToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshColorPaintingToolProperties);
	UClass* Z_Construct_UClass_UMeshColorPaintingToolProperties_NoRegister()
	{
		return UMeshColorPaintingToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRed_MetaData[];
#endif
		static void NewProp_bWriteRed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteGreen_MetaData[];
#endif
		static void NewProp_bWriteGreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBlue_MetaData[];
#endif
		static void NewProp_bWriteBlue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAlpha_MetaData[];
#endif
		static void NewProp_bWriteAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaintOnSpecificLOD_MetaData[];
#endif
		static void NewProp_bPaintOnSpecificLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintOnSpecificLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshVertexPaintingToolProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteRed_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "Comment", "/** Whether or not to apply Vertex Color Painting to the Red Channel */" },
		{ "DisplayName", "Red" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Red Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteRed_SetBit(void* Obj)
	{
		((UMeshColorPaintingToolProperties*)Obj)->bWriteRed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteRed = { "bWriteRed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshColorPaintingToolProperties), &Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteRed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteRed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteGreen_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "Comment", "/** Whether or not to apply Vertex Color Painting to the Green Channel */" },
		{ "DisplayName", "Green" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Green Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteGreen_SetBit(void* Obj)
	{
		((UMeshColorPaintingToolProperties*)Obj)->bWriteGreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteGreen = { "bWriteGreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshColorPaintingToolProperties), &Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteGreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteGreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteBlue_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "Comment", "/** Whether or not to apply Vertex Color Painting to the Blue Channel */" },
		{ "DisplayName", "Blue" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Blue Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteBlue_SetBit(void* Obj)
	{
		((UMeshColorPaintingToolProperties*)Obj)->bWriteBlue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteBlue = { "bWriteBlue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshColorPaintingToolProperties), &Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteBlue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteBlue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteAlpha_MetaData[] = {
		{ "Category", "ColorPainting" },
		{ "Comment", "/** Whether or not to apply Vertex Color Painting to the Alpha Channel */" },
		{ "DisplayName", "Alpha" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Vertex Color Painting to the Alpha Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
	{
		((UMeshColorPaintingToolProperties*)Obj)->bWriteAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshColorPaintingToolProperties), &Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bPaintOnSpecificLOD_MetaData[] = {
		{ "Category", "Painting" },
		{ "Comment", "/** When unchecked the painting on the base LOD will be propagate automatically to all other LODs when exiting the mode or changing the selection */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "When unchecked the painting on the base LOD will be propagate automatically to all other LODs when exiting the mode or changing the selection" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bPaintOnSpecificLOD_SetBit(void* Obj)
	{
		((UMeshColorPaintingToolProperties*)Obj)->bPaintOnSpecificLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bPaintOnSpecificLOD = { "bPaintOnSpecificLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshColorPaintingToolProperties), &Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bPaintOnSpecificLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bPaintOnSpecificLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bPaintOnSpecificLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0" },
		{ "Comment", "/** LOD Index to which should specifically be painted */" },
		{ "EditCondition", "bPaintOnSpecificLOD" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "LOD Index to which should specifically be painted" },
		{ "TransientToolProperty", "" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshColorPaintingToolProperties, LODIndex), METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_LODIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bWriteAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_bPaintOnSpecificLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::NewProp_LODIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshColorPaintingToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::ClassParams = {
		&UMeshColorPaintingToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshColorPaintingToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshColorPaintingToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshColorPaintingToolProperties.OuterSingleton, Z_Construct_UClass_UMeshColorPaintingToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshColorPaintingToolProperties.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshColorPaintingToolProperties>()
	{
		return UMeshColorPaintingToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshColorPaintingToolProperties);
	UMeshColorPaintingToolProperties::~UMeshColorPaintingToolProperties() {}
	void UMeshWeightPaintingToolProperties::StaticRegisterNativesUMeshWeightPaintingToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshWeightPaintingToolProperties);
	UClass* Z_Construct_UClass_UMeshWeightPaintingToolProperties_NoRegister()
	{
		return UMeshWeightPaintingToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureWeightType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureWeightType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureWeightType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PaintTextureWeightIndex_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintTextureWeightIndex_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PaintTextureWeightIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EraseTextureWeightIndex_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EraseTextureWeightIndex_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EraseTextureWeightIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshVertexPaintingToolProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_TextureWeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_TextureWeightType_MetaData[] = {
		{ "Category", "WeightPainting" },
		{ "Comment", "/** Texture Blend Weight Painting Mode */" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Texture Blend Weight Painting Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_TextureWeightType = { "TextureWeightType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWeightPaintingToolProperties, TextureWeightType), Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintWeightTypes, METADATA_PARAMS(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_TextureWeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_TextureWeightType_MetaData)) }; // 4263705144
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_PaintTextureWeightIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_PaintTextureWeightIndex_MetaData[] = {
		{ "Category", "WeightPainting" },
		{ "Comment", "/** Texture Blend Weight index which should be applied during Painting */" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Texture Blend Weight index which should be applied during Painting" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_PaintTextureWeightIndex = { "PaintTextureWeightIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWeightPaintingToolProperties, PaintTextureWeightIndex), Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex, METADATA_PARAMS(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_PaintTextureWeightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_PaintTextureWeightIndex_MetaData)) }; // 1888729626
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_EraseTextureWeightIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_EraseTextureWeightIndex_MetaData[] = {
		{ "Category", "WeightPainting" },
		{ "Comment", "/** Texture Blend Weight index which should be erased during Painting */" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
		{ "ToolTip", "Texture Blend Weight index which should be erased during Painting" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_EraseTextureWeightIndex = { "EraseTextureWeightIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWeightPaintingToolProperties, EraseTextureWeightIndex), Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintTextureIndex, METADATA_PARAMS(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_EraseTextureWeightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_EraseTextureWeightIndex_MetaData)) }; // 1888729626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_TextureWeightType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_TextureWeightType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_PaintTextureWeightIndex_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_PaintTextureWeightIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_EraseTextureWeightIndex_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::NewProp_EraseTextureWeightIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshWeightPaintingToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::ClassParams = {
		&UMeshWeightPaintingToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshWeightPaintingToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshWeightPaintingToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshWeightPaintingToolProperties.OuterSingleton, Z_Construct_UClass_UMeshWeightPaintingToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshWeightPaintingToolProperties.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshWeightPaintingToolProperties>()
	{
		return UMeshWeightPaintingToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshWeightPaintingToolProperties);
	UMeshWeightPaintingToolProperties::~UMeshWeightPaintingToolProperties() {}
	void UMeshVertexPaintingTool::StaticRegisterNativesUMeshVertexPaintingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPaintingTool);
	UClass* Z_Construct_UClass_UMeshVertexPaintingTool_NoRegister()
	{
		return UMeshVertexPaintingTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshVertexPaintingTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VertexProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshVertexPaintingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseBrushTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexPaintingTool, SelectionMechanic), Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_SelectionMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_VertexProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_VertexProperties = { "VertexProperties", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexPaintingTool, VertexProperties), Z_Construct_UClass_UMeshVertexPaintingToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_VertexProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_VertexProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshVertexPaintingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_SelectionMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintingTool_Statics::NewProp_VertexProperties,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshVertexPaintingTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UMeshVertexPaintingTool, IMeshPaintSelectionInterface), false },  // 3916134435
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshVertexPaintingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPaintingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPaintingTool_Statics::ClassParams = {
		&UMeshVertexPaintingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshVertexPaintingTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPaintingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshVertexPaintingTool()
	{
		if (!Z_Registration_Info_UClass_UMeshVertexPaintingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPaintingTool.OuterSingleton, Z_Construct_UClass_UMeshVertexPaintingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshVertexPaintingTool.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshVertexPaintingTool>()
	{
		return UMeshVertexPaintingTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPaintingTool);
	UMeshVertexPaintingTool::~UMeshVertexPaintingTool() {}
	void UMeshColorPaintingTool::StaticRegisterNativesUMeshColorPaintingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshColorPaintingTool);
	UClass* Z_Construct_UClass_UMeshColorPaintingTool_NoRegister()
	{
		return UMeshColorPaintingTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshColorPaintingTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshColorPaintingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshVertexPaintingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshColorPaintingTool_Statics::NewProp_ColorProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshColorPaintingTool_Statics::NewProp_ColorProperties = { "ColorProperties", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshColorPaintingTool, ColorProperties), Z_Construct_UClass_UMeshColorPaintingToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingTool_Statics::NewProp_ColorProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingTool_Statics::NewProp_ColorProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshColorPaintingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshColorPaintingTool_Statics::NewProp_ColorProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshColorPaintingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshColorPaintingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshColorPaintingTool_Statics::ClassParams = {
		&UMeshColorPaintingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshColorPaintingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshColorPaintingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshColorPaintingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshColorPaintingTool()
	{
		if (!Z_Registration_Info_UClass_UMeshColorPaintingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshColorPaintingTool.OuterSingleton, Z_Construct_UClass_UMeshColorPaintingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshColorPaintingTool.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshColorPaintingTool>()
	{
		return UMeshColorPaintingTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshColorPaintingTool);
	UMeshColorPaintingTool::~UMeshColorPaintingTool() {}
	void UMeshWeightPaintingTool::StaticRegisterNativesUMeshWeightPaintingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshWeightPaintingTool);
	UClass* Z_Construct_UClass_UMeshWeightPaintingTool_NoRegister()
	{
		return UMeshWeightPaintingTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshWeightPaintingTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshWeightPaintingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshVertexPaintingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWeightPaintingTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWeightPaintingTool_Statics::NewProp_WeightProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshWeightPaintingTool_Statics::NewProp_WeightProperties = { "WeightProperties", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWeightPaintingTool, WeightProperties), Z_Construct_UClass_UMeshWeightPaintingToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWeightPaintingTool_Statics::NewProp_WeightProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingTool_Statics::NewProp_WeightProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshWeightPaintingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWeightPaintingTool_Statics::NewProp_WeightProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshWeightPaintingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshWeightPaintingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshWeightPaintingTool_Statics::ClassParams = {
		&UMeshWeightPaintingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshWeightPaintingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshWeightPaintingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWeightPaintingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshWeightPaintingTool()
	{
		if (!Z_Registration_Info_UClass_UMeshWeightPaintingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshWeightPaintingTool.OuterSingleton, Z_Construct_UClass_UMeshWeightPaintingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshWeightPaintingTool.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshWeightPaintingTool>()
	{
		return UMeshWeightPaintingTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshWeightPaintingTool);
	UMeshWeightPaintingTool::~UMeshWeightPaintingTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_Statics::EnumInfo[] = {
		{ EMeshPaintWeightTypes_StaticEnum, TEXT("EMeshPaintWeightTypes"), &Z_Registration_Info_UEnum_EMeshPaintWeightTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4263705144U) },
		{ EMeshPaintTextureIndex_StaticEnum, TEXT("EMeshPaintTextureIndex"), &Z_Registration_Info_UEnum_EMeshPaintTextureIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1888729626U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshColorPaintingToolBuilder, UMeshColorPaintingToolBuilder::StaticClass, TEXT("UMeshColorPaintingToolBuilder"), &Z_Registration_Info_UClass_UMeshColorPaintingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshColorPaintingToolBuilder), 1854978582U) },
		{ Z_Construct_UClass_UMeshWeightPaintingToolBuilder, UMeshWeightPaintingToolBuilder::StaticClass, TEXT("UMeshWeightPaintingToolBuilder"), &Z_Registration_Info_UClass_UMeshWeightPaintingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshWeightPaintingToolBuilder), 3940267971U) },
		{ Z_Construct_UClass_UMeshVertexPaintingToolProperties, UMeshVertexPaintingToolProperties::StaticClass, TEXT("UMeshVertexPaintingToolProperties"), &Z_Registration_Info_UClass_UMeshVertexPaintingToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPaintingToolProperties), 1346158046U) },
		{ Z_Construct_UClass_UMeshColorPaintingToolProperties, UMeshColorPaintingToolProperties::StaticClass, TEXT("UMeshColorPaintingToolProperties"), &Z_Registration_Info_UClass_UMeshColorPaintingToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshColorPaintingToolProperties), 2703229103U) },
		{ Z_Construct_UClass_UMeshWeightPaintingToolProperties, UMeshWeightPaintingToolProperties::StaticClass, TEXT("UMeshWeightPaintingToolProperties"), &Z_Registration_Info_UClass_UMeshWeightPaintingToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshWeightPaintingToolProperties), 3358406953U) },
		{ Z_Construct_UClass_UMeshVertexPaintingTool, UMeshVertexPaintingTool::StaticClass, TEXT("UMeshVertexPaintingTool"), &Z_Registration_Info_UClass_UMeshVertexPaintingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPaintingTool), 2294938650U) },
		{ Z_Construct_UClass_UMeshColorPaintingTool, UMeshColorPaintingTool::StaticClass, TEXT("UMeshColorPaintingTool"), &Z_Registration_Info_UClass_UMeshColorPaintingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshColorPaintingTool), 375118146U) },
		{ Z_Construct_UClass_UMeshWeightPaintingTool, UMeshWeightPaintingTool::StaticClass, TEXT("UMeshWeightPaintingTool"), &Z_Registration_Info_UClass_UMeshWeightPaintingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshWeightPaintingTool), 711931937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_961044142(TEXT("/Script/MeshPaintingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshVertexPaintingTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
