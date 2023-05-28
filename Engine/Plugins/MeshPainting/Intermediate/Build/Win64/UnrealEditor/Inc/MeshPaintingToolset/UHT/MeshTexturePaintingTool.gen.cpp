// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshTexturePaintingTool.h"
#include "MeshPaintingToolsetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshTexturePaintingTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushBaseProperties();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshTexturePaintingTool();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshTexturePaintingTool_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshTexturePaintingToolBuilder();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshTexturePaintingToolBuilder_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshTexturePaintingToolProperties();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshTexturePaintingToolProperties_NoRegister();
	MESHPAINTINGTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FPaintComponentOverride();
	MESHPAINTINGTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FPaintTexture2DData();
	UPackage* Z_Construct_UPackage__Script_MeshPaintingToolset();
// End Cross Module References
	void UMeshTexturePaintingToolBuilder::StaticRegisterNativesUMeshTexturePaintingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTexturePaintingToolBuilder);
	UClass* Z_Construct_UClass_UMeshTexturePaintingToolBuilder_NoRegister()
	{
		return UMeshTexturePaintingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MeshTexturePaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTexturePaintingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics::ClassParams = {
		&UMeshTexturePaintingToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTexturePaintingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshTexturePaintingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTexturePaintingToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshTexturePaintingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTexturePaintingToolBuilder.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshTexturePaintingToolBuilder>()
	{
		return UMeshTexturePaintingToolBuilder::StaticClass();
	}
	UMeshTexturePaintingToolBuilder::UMeshTexturePaintingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTexturePaintingToolBuilder);
	UMeshTexturePaintingToolBuilder::~UMeshTexturePaintingToolBuilder() {}
	void UMeshTexturePaintingToolProperties::StaticRegisterNativesUMeshTexturePaintingToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTexturePaintingToolProperties);
	UClass* Z_Construct_UClass_UMeshTexturePaintingToolProperties_NoRegister()
	{
		return UMeshTexturePaintingToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSeamPainting_MetaData[];
#endif
		static void NewProp_bEnableSeamPainting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSeamPainting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintTexture;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrushBaseProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshTexturePaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintColor_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Color used for Applying Texture Color Painting */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Color used for Applying Texture Color Painting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintColor = { "PaintColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingToolProperties, PaintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_EraseColor_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Color used for Erasing Texture Color Painting */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Color used for Erasing Texture Color Painting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_EraseColor = { "EraseColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingToolProperties, EraseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_EraseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_EraseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteRed_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Whether or not to apply Texture Color Painting to the Red Channel */" },
		{ "DisplayName", "Red" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Texture Color Painting to the Red Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteRed_SetBit(void* Obj)
	{
		((UMeshTexturePaintingToolProperties*)Obj)->bWriteRed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteRed = { "bWriteRed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTexturePaintingToolProperties), &Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteRed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteRed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteGreen_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Whether or not to apply Texture Color Painting to the Green Channel */" },
		{ "DisplayName", "Green" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Texture Color Painting to the Green Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteGreen_SetBit(void* Obj)
	{
		((UMeshTexturePaintingToolProperties*)Obj)->bWriteGreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteGreen = { "bWriteGreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTexturePaintingToolProperties), &Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteGreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteGreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteBlue_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Whether or not to apply Texture Color Painting to the Blue Channel */" },
		{ "DisplayName", "Blue" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Texture Color Painting to the Blue Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteBlue_SetBit(void* Obj)
	{
		((UMeshTexturePaintingToolProperties*)Obj)->bWriteBlue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteBlue = { "bWriteBlue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTexturePaintingToolProperties), &Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteBlue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteBlue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteAlpha_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Whether or not to apply Texture Color Painting to the Alpha Channel */" },
		{ "DisplayName", "Alpha" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Whether or not to apply Texture Color Painting to the Alpha Channel" },
	};
#endif
	void Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
	{
		((UMeshTexturePaintingToolProperties*)Obj)->bWriteAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTexturePaintingToolProperties), &Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** UV channel which should be used for paint textures */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "UV channel which should be used for paint textures" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingToolProperties, UVChannel), METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_UVChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableSeamPainting_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Seam painting flag, True if we should enable dilation to allow the painting of texture seams */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Seam painting flag, True if we should enable dilation to allow the painting of texture seams" },
	};
#endif
	void Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableSeamPainting_SetBit(void* Obj)
	{
		((UMeshTexturePaintingToolProperties*)Obj)->bEnableSeamPainting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableSeamPainting = { "bEnableSeamPainting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTexturePaintingToolProperties), &Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableSeamPainting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableSeamPainting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableSeamPainting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintTexture_MetaData[] = {
		{ "Category", "TexturePainting" },
		{ "Comment", "/** Texture to which Painting should be Applied */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Texture to which Painting should be Applied" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintTexture = { "PaintTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingToolProperties, PaintTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableFlow_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Enables \"Flow\" painting where paint is continually applied from the brush every tick */" },
		{ "DisplayName", "Enable Brush Flow" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Enables \"Flow\" painting where paint is continually applied from the brush every tick" },
	};
#endif
	void Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableFlow_SetBit(void* Obj)
	{
		((UMeshTexturePaintingToolProperties*)Obj)->bEnableFlow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableFlow = { "bEnableFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTexturePaintingToolProperties), &Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableFlow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Whether back-facing triangles should be ignored */" },
		{ "DisplayName", "Ignore Back-Facing" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Whether back-facing triangles should be ignored" },
	};
#endif
	void Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit(void* Obj)
	{
		((UMeshTexturePaintingToolProperties*)Obj)->bOnlyFrontFacingTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles = { "bOnlyFrontFacingTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTexturePaintingToolProperties), &Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_EraseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bWriteAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableSeamPainting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_PaintTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bEnableFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::NewProp_bOnlyFrontFacingTriangles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTexturePaintingToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::ClassParams = {
		&UMeshTexturePaintingToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTexturePaintingToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshTexturePaintingToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTexturePaintingToolProperties.OuterSingleton, Z_Construct_UClass_UMeshTexturePaintingToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTexturePaintingToolProperties.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshTexturePaintingToolProperties>()
	{
		return UMeshTexturePaintingToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTexturePaintingToolProperties);
	UMeshTexturePaintingToolProperties::~UMeshTexturePaintingToolProperties() {}
	void UMeshTexturePaintingTool::StaticRegisterNativesUMeshTexturePaintingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTexturePaintingTool);
	UClass* Z_Construct_UClass_UMeshTexturePaintingTool_NoRegister()
	{
		return UMeshTexturePaintingTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTexturePaintingTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushRenderTargetTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushRenderTargetTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushMaskRenderTargetTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushMaskRenderTargetTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeamMaskRenderTargetTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SeamMaskRenderTargetTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaintTargetData_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintTargetData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintTargetData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PaintTargetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaintComponentsOverride_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintComponentsOverride_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintComponentsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PaintComponentsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePaintingCurrentMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TexturePaintingCurrentMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintingTexture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintingTexture2D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTexturePaintingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseBrushTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshTexturePaintingTool.h" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, SelectionMechanic), Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SelectionMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TextureProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TextureProperties = { "TextureProperties", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, TextureProperties), Z_Construct_UClass_UMeshTexturePaintingToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TextureProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TextureProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_Textures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushRenderTargetTexture_MetaData[] = {
		{ "Comment", "/** Temporary render target used to draw incremental paint to */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Temporary render target used to draw incremental paint to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushRenderTargetTexture = { "BrushRenderTargetTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, BrushRenderTargetTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushRenderTargetTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushRenderTargetTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushMaskRenderTargetTexture_MetaData[] = {
		{ "Comment", "/** Temporary render target used to store a mask of the affected paint region, updated every time we add incremental texture paint */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Temporary render target used to store a mask of the affected paint region, updated every time we add incremental texture paint" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushMaskRenderTargetTexture = { "BrushMaskRenderTargetTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, BrushMaskRenderTargetTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushMaskRenderTargetTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushMaskRenderTargetTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SeamMaskRenderTargetTexture_MetaData[] = {
		{ "Comment", "/** Temporary render target used to store generated mask for texture seams, we create this by projecting object triangles into texture space using the selected UV channel */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Temporary render target used to store generated mask for texture seams, we create this by projecting object triangles into texture space using the selected UV channel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SeamMaskRenderTargetTexture = { "SeamMaskRenderTargetTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, SeamMaskRenderTargetTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SeamMaskRenderTargetTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SeamMaskRenderTargetTexture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData_ValueProp = { "PaintTargetData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPaintTexture2DData, METADATA_PARAMS(nullptr, 0) }; // 1256278004
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData_Key_KeyProp = { "PaintTargetData_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData_MetaData[] = {
		{ "Comment", "/** Stores data associated with our paint target textures */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Stores data associated with our paint target textures" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData = { "PaintTargetData", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, PaintTargetData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData_MetaData)) }; // 1256278004
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride_ValueProp = { "PaintComponentsOverride", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPaintComponentOverride, METADATA_PARAMS(nullptr, 0) }; // 3322245576
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride_Key_KeyProp = { "PaintComponentsOverride_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride_MetaData[] = {
		{ "Comment", "/** Store the component overrides active for each paint target textures\n\x09 * Note this is not transactional because we use it as cache of the current state of the scene that we can clean/update after each transaction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Store the component overrides active for each paint target textures\nNote this is not transactional because we use it as cache of the current state of the scene that we can clean/update after each transaction." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride = { "PaintComponentsOverride", nullptr, (EPropertyFlags)0x0040008400002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, PaintComponentsOverride), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride_MetaData)) }; // 3322245576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TexturePaintingCurrentMeshComponent_MetaData[] = {
		{ "Comment", "/** Texture paint: The mesh components that we're currently painting */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "Texture paint: The mesh components that we're currently painting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TexturePaintingCurrentMeshComponent = { "TexturePaintingCurrentMeshComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, TexturePaintingCurrentMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TexturePaintingCurrentMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TexturePaintingCurrentMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintingTexture2D_MetaData[] = {
		{ "Comment", "/** The original texture that we're painting */" },
		{ "ModuleRelativePath", "Public/MeshTexturePaintingTool.h" },
		{ "ToolTip", "The original texture that we're painting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintingTexture2D = { "PaintingTexture2D", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTexturePaintingTool, PaintingTexture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintingTexture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintingTexture2D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTexturePaintingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SelectionMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TextureProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushRenderTargetTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_BrushMaskRenderTargetTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_SeamMaskRenderTargetTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintTargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintComponentsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_TexturePaintingCurrentMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTexturePaintingTool_Statics::NewProp_PaintingTexture2D,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UMeshTexturePaintingTool, IMeshPaintSelectionInterface), false },  // 3916134435
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTexturePaintingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTexturePaintingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTexturePaintingTool_Statics::ClassParams = {
		&UMeshTexturePaintingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshTexturePaintingTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTexturePaintingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTexturePaintingTool()
	{
		if (!Z_Registration_Info_UClass_UMeshTexturePaintingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTexturePaintingTool.OuterSingleton, Z_Construct_UClass_UMeshTexturePaintingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTexturePaintingTool.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshTexturePaintingTool>()
	{
		return UMeshTexturePaintingTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTexturePaintingTool);
	UMeshTexturePaintingTool::~UMeshTexturePaintingTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshTexturePaintingTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshTexturePaintingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshTexturePaintingToolBuilder, UMeshTexturePaintingToolBuilder::StaticClass, TEXT("UMeshTexturePaintingToolBuilder"), &Z_Registration_Info_UClass_UMeshTexturePaintingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTexturePaintingToolBuilder), 2487261230U) },
		{ Z_Construct_UClass_UMeshTexturePaintingToolProperties, UMeshTexturePaintingToolProperties::StaticClass, TEXT("UMeshTexturePaintingToolProperties"), &Z_Registration_Info_UClass_UMeshTexturePaintingToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTexturePaintingToolProperties), 3266999223U) },
		{ Z_Construct_UClass_UMeshTexturePaintingTool, UMeshTexturePaintingTool::StaticClass, TEXT("UMeshTexturePaintingTool"), &Z_Registration_Info_UClass_UMeshTexturePaintingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTexturePaintingTool), 2073100260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshTexturePaintingTool_h_1845708081(TEXT("/Script/MeshPaintingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshTexturePaintingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshTexturePaintingTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
