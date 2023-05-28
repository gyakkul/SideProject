// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetRenderingLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetRenderingLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetRenderingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetRenderingLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDrawToRenderTargetContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext;
class UScriptStruct* FDrawToRenderTargetContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDrawToRenderTargetContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DrawToRenderTargetContext"));
	}
	return Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDrawToRenderTargetContext>()
{
	return FDrawToRenderTargetContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDrawToRenderTargetContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDrawToRenderTargetContext, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DrawToRenderTargetContext",
		sizeof(FDrawToRenderTargetContext),
		alignof(FDrawToRenderTargetContext),
		Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDrawToRenderTargetContext()
	{
		if (!Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext.InnerSingleton, Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext.InnerSingleton;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execEnablePathTracing)
	{
		P_GET_UBOOL(Z_Param_bEnablePathTracer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::EnablePathTracing(Z_Param_bEnablePathTracer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execCalculateProjectionMatrix)
	{
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_MinimalViewInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatrix*)Z_Param__Result=UKismetRenderingLibrary::CalculateProjectionMatrix(Z_Param_Out_MinimalViewInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execSetCastInsetShadowForAllAttachments)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_UBOOL(Z_Param_bCastInsetShadow);
		P_GET_UBOOL(Z_Param_bLightAttachmentsAsGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::SetCastInsetShadowForAllAttachments(Z_Param_PrimitiveComponent,Z_Param_bCastInsetShadow,Z_Param_bLightAttachmentsAsGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execBreakSkinWeightInfo)
	{
		P_GET_STRUCT(FSkelMeshSkinWeightInfo,Z_Param_InWeight);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Bone0);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Weight0);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Bone1);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Weight1);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Bone2);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Weight2);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Bone3);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Weight3);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::BreakSkinWeightInfo(Z_Param_InWeight,Z_Param_Out_Bone0,Z_Param_Out_Weight0,Z_Param_Out_Bone1,Z_Param_Out_Weight1,Z_Param_Out_Bone2,Z_Param_Out_Weight2,Z_Param_Out_Bone3,Z_Param_Out_Weight3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execMakeSkinWeightInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Bone0);
		P_GET_PROPERTY(FByteProperty,Z_Param_Weight0);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bone1);
		P_GET_PROPERTY(FByteProperty,Z_Param_Weight1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bone2);
		P_GET_PROPERTY(FByteProperty,Z_Param_Weight2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bone3);
		P_GET_PROPERTY(FByteProperty,Z_Param_Weight3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSkelMeshSkinWeightInfo*)Z_Param__Result=UKismetRenderingLibrary::MakeSkinWeightInfo(Z_Param_Bone0,Z_Param_Weight0,Z_Param_Bone1,Z_Param_Weight1,Z_Param_Bone2,Z_Param_Weight2,Z_Param_Bone3,Z_Param_Weight3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execEndDrawCanvasToRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FDrawToRenderTargetContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execBeginDrawCanvasToRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_OBJECT_REF(UCanvas,Z_Param_Out_Canvas);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Size);
		P_GET_STRUCT_REF(FDrawToRenderTargetContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Out_Canvas,Z_Param_Out_Size,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execImportBufferAsTexture2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::ImportBufferAsTexture2D(Z_Param_WorldContextObject,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execImportFileAsTexture2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::ImportFileAsTexture2D(Z_Param_WorldContextObject,Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execExportTexture2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::ExportTexture2D(Z_Param_WorldContextObject,Z_Param_Texture,Z_Param_FilePath,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTargetRawUVArea)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_STRUCT(FBox2D,Z_Param_Area);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawUVArea(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Area,Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTargetRaw)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutLinearSamples);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRaw(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Out_OutLinearSamples,Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTargetRawUV)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_U);
		P_GET_PROPERTY(FFloatProperty,Z_Param_V);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawUV(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_U,Z_Param_V,Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTargetRawPixelArea)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinX);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinY);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxX);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxY);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawPixelArea(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_MinX,Z_Param_MinY,Z_Param_MaxX,Z_Param_MaxY,Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTargetRawPixel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetRawPixel(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_X,Z_Param_Y,Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_OutSamples);
		P_GET_UBOOL(Z_Param_bNormalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Out_OutSamples,Z_Param_bNormalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTargetUV)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_U);
		P_GET_PROPERTY(FFloatProperty,Z_Param_V);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetUV(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_U,Z_Param_V);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReadRenderTargetPixel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UKismetRenderingLibrary::ReadRenderTargetPixel(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execExportRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::ExportRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_FilePath,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(Z_Param_WorldContextObject,Z_Param_RenderTarget,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execRenderTargetCreateStaticTexture2DEditorOnly)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FByteProperty,Z_Param_CompressionSettings);
		P_GET_PROPERTY(FByteProperty,Z_Param_MipSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(Z_Param_RenderTarget,Z_Param_Name,TextureCompressionSettings(Z_Param_CompressionSettings),TextureMipGenSettings(Z_Param_MipSettings));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execDrawMaterialToRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execResizeRenderTarget2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::ResizeRenderTarget2D(Z_Param_TextureRenderTarget,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execReleaseRenderTarget2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::ReleaseRenderTarget2D(Z_Param_TextureRenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execCreateRenderTargetVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
		P_GET_UBOOL(Z_Param_bAutoGenerateMipMaps);
		P_GET_UBOOL(Z_Param_bSupportUAVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTargetVolume**)Z_Param__Result=UKismetRenderingLibrary::CreateRenderTargetVolume(Z_Param_WorldContextObject,Z_Param_Width,Z_Param_Height,Z_Param_Depth,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_ClearColor,Z_Param_bAutoGenerateMipMaps,Z_Param_bSupportUAVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execCreateRenderTarget2DArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slices);
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
		P_GET_UBOOL(Z_Param_bAutoGenerateMipMaps);
		P_GET_UBOOL(Z_Param_bSupportUAVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2DArray**)Z_Param__Result=UKismetRenderingLibrary::CreateRenderTarget2DArray(Z_Param_WorldContextObject,Z_Param_Width,Z_Param_Height,Z_Param_Slices,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_ClearColor,Z_Param_bAutoGenerateMipMaps,Z_Param_bSupportUAVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execCreateRenderTarget2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
		P_GET_UBOOL(Z_Param_bAutoGenerateMipMaps);
		P_GET_UBOOL(Z_Param_bSupportUAVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=UKismetRenderingLibrary::CreateRenderTarget2D(Z_Param_WorldContextObject,Z_Param_Width,Z_Param_Height,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_ClearColor,Z_Param_bAutoGenerateMipMaps,Z_Param_bSupportUAVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetRenderingLibrary::execClearRenderTarget2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetRenderingLibrary::ClearRenderTarget2D(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_ClearColor);
		P_NATIVE_END;
	}
	void UKismetRenderingLibrary::StaticRegisterNativesUKismetRenderingLibrary()
	{
		UClass* Class = UKismetRenderingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDrawCanvasToRenderTarget", &UKismetRenderingLibrary::execBeginDrawCanvasToRenderTarget },
			{ "BreakSkinWeightInfo", &UKismetRenderingLibrary::execBreakSkinWeightInfo },
			{ "CalculateProjectionMatrix", &UKismetRenderingLibrary::execCalculateProjectionMatrix },
			{ "ClearRenderTarget2D", &UKismetRenderingLibrary::execClearRenderTarget2D },
			{ "ConvertRenderTargetToTexture2DEditorOnly", &UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly },
			{ "CreateRenderTarget2D", &UKismetRenderingLibrary::execCreateRenderTarget2D },
			{ "CreateRenderTarget2DArray", &UKismetRenderingLibrary::execCreateRenderTarget2DArray },
			{ "CreateRenderTargetVolume", &UKismetRenderingLibrary::execCreateRenderTargetVolume },
			{ "DrawMaterialToRenderTarget", &UKismetRenderingLibrary::execDrawMaterialToRenderTarget },
			{ "EnablePathTracing", &UKismetRenderingLibrary::execEnablePathTracing },
			{ "EndDrawCanvasToRenderTarget", &UKismetRenderingLibrary::execEndDrawCanvasToRenderTarget },
			{ "ExportRenderTarget", &UKismetRenderingLibrary::execExportRenderTarget },
			{ "ExportTexture2D", &UKismetRenderingLibrary::execExportTexture2D },
			{ "ImportBufferAsTexture2D", &UKismetRenderingLibrary::execImportBufferAsTexture2D },
			{ "ImportFileAsTexture2D", &UKismetRenderingLibrary::execImportFileAsTexture2D },
			{ "MakeSkinWeightInfo", &UKismetRenderingLibrary::execMakeSkinWeightInfo },
			{ "ReadRenderTarget", &UKismetRenderingLibrary::execReadRenderTarget },
			{ "ReadRenderTargetPixel", &UKismetRenderingLibrary::execReadRenderTargetPixel },
			{ "ReadRenderTargetRaw", &UKismetRenderingLibrary::execReadRenderTargetRaw },
			{ "ReadRenderTargetRawPixel", &UKismetRenderingLibrary::execReadRenderTargetRawPixel },
			{ "ReadRenderTargetRawPixelArea", &UKismetRenderingLibrary::execReadRenderTargetRawPixelArea },
			{ "ReadRenderTargetRawUV", &UKismetRenderingLibrary::execReadRenderTargetRawUV },
			{ "ReadRenderTargetRawUVArea", &UKismetRenderingLibrary::execReadRenderTargetRawUVArea },
			{ "ReadRenderTargetUV", &UKismetRenderingLibrary::execReadRenderTargetUV },
			{ "ReleaseRenderTarget2D", &UKismetRenderingLibrary::execReleaseRenderTarget2D },
			{ "RenderTargetCreateStaticTexture2DEditorOnly", &UKismetRenderingLibrary::execRenderTargetCreateStaticTexture2DEditorOnly },
			{ "ResizeRenderTarget2D", &UKismetRenderingLibrary::execResizeRenderTarget2D },
			{ "SetCastInsetShadowForAllAttachments", &UKismetRenderingLibrary::execSetCastInsetShadowForAllAttachments },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			UCanvas* Canvas;
			FVector2D Size;
			FDrawToRenderTargetContext Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Context), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(nullptr, 0) }; // 2872203805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Returns a Canvas object that can be used to draw to the specified render target.\n\x09 * Canvas has functions like DrawMaterial with size parameters that can be used to draw to a specific area of a render target.\n\x09 * Be sure to call EndDrawCanvasToRenderTarget to complete the rendering!\n\x09 */" },
		{ "Keywords", "BeginDrawCanvasToRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Returns a Canvas object that can be used to draw to the specified render target.\nCanvas has functions like DrawMaterial with size parameters that can be used to draw to a specific area of a render target.\nBe sure to call EndDrawCanvasToRenderTarget to complete the rendering!" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "BeginDrawCanvasToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics
	{
		struct KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms
		{
			FSkelMeshSkinWeightInfo InWeight;
			int32 Bone0;
			uint8 Weight0;
			int32 Bone1;
			uint8 Weight1;
			int32 Bone2;
			uint8 Weight2;
			int32 Bone3;
			uint8 Weight3;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight0;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, InWeight), Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) }; // 1814556409
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone0 = { "Bone0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight0 = { "Weight0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone1 = { "Bone1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight1 = { "Weight1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone2 = { "Bone2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight2 = { "Weight2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone3 = { "Bone3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight3 = { "Weight3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_InWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Break FSkelMeshSkinWeightInfo */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Break FSkelMeshSkinWeightInfo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "BreakSkinWeightInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct KismetRenderingLibrary_eventCalculateProjectionMatrix_Parms
		{
			FMinimalViewInfo MinimalViewInfo;
			FMatrix ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimalViewInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimalViewInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::NewProp_MinimalViewInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::NewProp_MinimalViewInfo = { "MinimalViewInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCalculateProjectionMatrix_Parms, MinimalViewInfo), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::NewProp_MinimalViewInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::NewProp_MinimalViewInfo_MetaData)) }; // 1056960465
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCalculateProjectionMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::NewProp_MinimalViewInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Calculates the projection matrix using this view info's aspect ratio (regardless of bConstrainAspectRatio) */" },
		{ "DisplayName", "Calculate Projection Matrix (Minimal View Info)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ScriptMethod", "CalculateProjectionMatrix" },
		{ "ToolTip", "Calculates the projection matrix using this view info's aspect ratio (regardless of bConstrainAspectRatio)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "CalculateProjectionMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::KismetRenderingLibrary_eventCalculateProjectionMatrix_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics
	{
		struct KismetRenderingLibrary_eventClearRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FLinearColor ClearColor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_ClearColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Clears the specified render target with the given ClearColor.\n\x09 */" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "Keywords", "ClearRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Clears the specified render target with the given ClearColor." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ClearRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::KismetRenderingLibrary_eventClearRenderTarget2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics
	{
		struct KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Copies the contents of a render target to a UTexture2D\n\x09 * Only works in the editor\n\x09 */" },
		{ "Keywords", "ConvertRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Copies the contents of a render target to a UTexture2D\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ConvertRenderTargetToTexture2DEditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics
	{
		struct KismetRenderingLibrary_eventCreateRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			int32 Width;
			int32 Height;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			FLinearColor ClearColor;
			bool bAutoGenerateMipMaps;
			bool bSupportUAVs;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static void NewProp_bAutoGenerateMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateMipMaps;
		static void NewProp_bSupportUAVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUAVs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) }; // 1004718673
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bAutoGenerateMipMaps_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventCreateRenderTarget2D_Parms*)Obj)->bAutoGenerateMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bAutoGenerateMipMaps = { "bAutoGenerateMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bAutoGenerateMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bSupportUAVs_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventCreateRenderTarget2D_Parms*)Obj)->bSupportUAVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bSupportUAVs = { "bSupportUAVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bSupportUAVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bAutoGenerateMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_bSupportUAVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Creates a new render target and initializes it to the specified dimensions\n\x09 */" },
		{ "CPP_Default_bAutoGenerateMipMaps", "false" },
		{ "CPP_Default_bSupportUAVs", "false" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Format", "RTF_RGBA16f" },
		{ "CPP_Default_Height", "256" },
		{ "CPP_Default_Width", "256" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Creates a new render target and initializes it to the specified dimensions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "CreateRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::KismetRenderingLibrary_eventCreateRenderTarget2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics
	{
		struct KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms
		{
			UObject* WorldContextObject;
			int32 Width;
			int32 Height;
			int32 Slices;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			FLinearColor ClearColor;
			bool bAutoGenerateMipMaps;
			bool bSupportUAVs;
			UTextureRenderTarget2DArray* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slices;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static void NewProp_bAutoGenerateMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateMipMaps;
		static void NewProp_bSupportUAVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUAVs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Slices = { "Slices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms, Slices), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) }; // 1004718673
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bAutoGenerateMipMaps_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms*)Obj)->bAutoGenerateMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bAutoGenerateMipMaps = { "bAutoGenerateMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bAutoGenerateMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bSupportUAVs_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms*)Obj)->bSupportUAVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bSupportUAVs = { "bSupportUAVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bSupportUAVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Slices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bAutoGenerateMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_bSupportUAVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Creates a new render target array and initializes it to the specified dimensions\n\x09 */" },
		{ "CPP_Default_bAutoGenerateMipMaps", "false" },
		{ "CPP_Default_bSupportUAVs", "false" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Format", "RTF_RGBA16f" },
		{ "CPP_Default_Height", "256" },
		{ "CPP_Default_Slices", "1" },
		{ "CPP_Default_Width", "256" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Creates a new render target array and initializes it to the specified dimensions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "CreateRenderTarget2DArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::KismetRenderingLibrary_eventCreateRenderTarget2DArray_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics
	{
		struct KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms
		{
			UObject* WorldContextObject;
			int32 Width;
			int32 Height;
			int32 Depth;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			FLinearColor ClearColor;
			bool bAutoGenerateMipMaps;
			bool bSupportUAVs;
			UTextureRenderTargetVolume* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static void NewProp_bAutoGenerateMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateMipMaps;
		static void NewProp_bSupportUAVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUAVs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) }; // 1004718673
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bAutoGenerateMipMaps_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms*)Obj)->bAutoGenerateMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bAutoGenerateMipMaps = { "bAutoGenerateMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bAutoGenerateMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bSupportUAVs_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms*)Obj)->bSupportUAVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bSupportUAVs = { "bSupportUAVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bSupportUAVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bAutoGenerateMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_bSupportUAVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Creates a new volume render target and initializes it to the specified dimensions\n\x09 */" },
		{ "CPP_Default_bAutoGenerateMipMaps", "false" },
		{ "CPP_Default_bSupportUAVs", "false" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Depth", "16" },
		{ "CPP_Default_Format", "RTF_RGBA16f" },
		{ "CPP_Default_Height", "16" },
		{ "CPP_Default_Width", "16" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Creates a new volume render target and initializes it to the specified dimensions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "CreateRenderTargetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::KismetRenderingLibrary_eventCreateRenderTargetVolume_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Renders a quad with the material applied to the specified render target.   \n\x09 * This sets the render target even if it is already set, which is an expensive operation. \n\x09 * Use BeginDrawCanvasToRenderTarget / EndDrawCanvasToRenderTarget instead if rendering multiple primitives to the same render target.\n\x09 */" },
		{ "Keywords", "DrawMaterialToRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Renders a quad with the material applied to the specified render target.\nThis sets the render target even if it is already set, which is an expensive operation.\nUse BeginDrawCanvasToRenderTarget / EndDrawCanvasToRenderTarget instead if rendering multiple primitives to the same render target." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "DrawMaterialToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics
	{
		struct KismetRenderingLibrary_eventEnablePathTracing_Parms
		{
			bool bEnablePathTracer;
		};
		static void NewProp_bEnablePathTracer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePathTracer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::NewProp_bEnablePathTracer_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventEnablePathTracing_Parms*)Obj)->bEnablePathTracer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::NewProp_bEnablePathTracer = { "bEnablePathTracer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventEnablePathTracing_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::NewProp_bEnablePathTracer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::NewProp_bEnablePathTracer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Enables or disables the path tracer for all viewports simulatenously.\n\x09 * This command is equivalent to setting ShowFlag.PathTracing, but is accessible even from shipping builds.\n\x09 */" },
		{ "Keywords", "EnablePathTracing" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Enables or disables the path tracer for all viewports simulatenously.\nThis command is equivalent to setting ShowFlag.PathTracing, but is accessible even from shipping builds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "EnablePathTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::KismetRenderingLibrary_eventEnablePathTracing_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			FDrawToRenderTargetContext Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms, Context), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context_MetaData)) }; // 2872203805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**  \n\x09 * Must be paired with a BeginDrawCanvasToRenderTarget to complete rendering to a render target.\n\x09 */" },
		{ "Keywords", "EndDrawCanvasToRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Must be paired with a BeginDrawCanvasToRenderTarget to complete rendering to a render target." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "EndDrawCanvasToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventExportRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FString FilePath;
			FString FileName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Exports a render target as a HDR or PNG image onto the disk (depending on the format of the render target)\n\x09 */" },
		{ "Keywords", "ExportRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Exports a render target as a HDR or PNG image onto the disk (depending on the format of the render target)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ExportRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::KismetRenderingLibrary_eventExportRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics
	{
		struct KismetRenderingLibrary_eventExportTexture2D_Parms
		{
			UObject* WorldContextObject;
			UTexture2D* Texture;
			FString FilePath;
			FString FileName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Exports a Texture2D as a HDR image onto the disk.\n\x09 */" },
		{ "Keywords", "ExportTexture2D" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Exports a Texture2D as a HDR image onto the disk." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ExportTexture2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::KismetRenderingLibrary_eventExportTexture2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics
	{
		struct KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms
		{
			UObject* WorldContextObject;
			TArray<uint8> Buffer;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Imports a texture from a buffer and creates Texture2D from it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Imports a texture from a buffer and creates Texture2D from it." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ImportBufferAsTexture2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics
	{
		struct KismetRenderingLibrary_eventImportFileAsTexture2D_Parms
		{
			UObject* WorldContextObject;
			FString Filename;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportFileAsTexture2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportFileAsTexture2D_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportFileAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Imports a texture file from disk and creates Texture2D from it. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Imports a texture file from disk and creates Texture2D from it." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ImportFileAsTexture2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::KismetRenderingLibrary_eventImportFileAsTexture2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics
	{
		struct KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms
		{
			int32 Bone0;
			uint8 Weight0;
			int32 Bone1;
			uint8 Weight1;
			int32 Bone2;
			uint8 Weight2;
			int32 Bone3;
			uint8 Weight3;
			FSkelMeshSkinWeightInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight0;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bone3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weight3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone0 = { "Bone0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight0 = { "Weight0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone1 = { "Bone1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight1 = { "Weight1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone2 = { "Bone2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight2 = { "Weight2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone3 = { "Bone3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight3 = { "Weight3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) }; // 1814556409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Create FSkelMeshSkinWeightInfo */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create FSkelMeshSkinWeightInfo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "MakeSkinWeightInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			TArray<FColor> OutSamples;
			bool bNormalize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSamples_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSamples;
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_OutSamples_Inner = { "OutSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_OutSamples = { "OutSamples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTarget_Parms, OutSamples), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTarget_Parms*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTarget_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTarget_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_OutSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_OutSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Incredibly inefficient and slow operation! Reads entire render target as sRGB color and returns a linear array of sRGB colors.\n\x09* LDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\n\x09* Result whether the operation succeeded.  If successful, OutSamples will an entry per pixel, where each is 8-bit per channel [0,255] BGRA in sRGB space.\n\x09*/" },
		{ "CPP_Default_bNormalize", "true" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Reads entire render target as sRGB color and returns a linear array of sRGB colors.\nLDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\nResult whether the operation succeeded.  If successful, OutSamples will an entry per pixel, where each is 8-bit per channel [0,255] BGRA in sRGB space." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::KismetRenderingLibrary_eventReadRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetPixel_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			int32 X;
			int32 Y;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Incredibly inefficient and slow operation! Read a value as sRGB color from a render target using integer pixel coordinates.\n\x09* LDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\n\x09* Result is 8-bit per channel [0,255] BGRA in sRGB space.\n\x09*/" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as sRGB color from a render target using integer pixel coordinates.\nLDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\nResult is 8-bit per channel [0,255] BGRA in sRGB space." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTargetPixel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::KismetRenderingLibrary_eventReadRenderTargetPixel_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetRaw_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			TArray<FLinearColor> OutLinearSamples;
			bool bNormalize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLinearSamples_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLinearSamples;
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRaw_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRaw_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_OutLinearSamples_Inner = { "OutLinearSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_OutLinearSamples = { "OutLinearSamples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRaw_Parms, OutLinearSamples), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTargetRaw_Parms*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTargetRaw_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTargetRaw_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTargetRaw_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_OutLinearSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_OutLinearSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Incredibly inefficient and slow operation! Read entire texture as-is from a render target.\n\x09*/" },
		{ "CPP_Default_bNormalize", "true" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read entire texture as-is from a render target." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTargetRaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::KismetRenderingLibrary_eventReadRenderTargetRaw_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			int32 X;
			int32 Y;
			bool bNormalize;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Incredibly inefficient and slow operation! Read a value as-is from a render target using integer pixel coordinates.\n\x09*/" },
		{ "CPP_Default_bNormalize", "true" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as-is from a render target using integer pixel coordinates." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTargetRawPixel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			int32 MinX;
			int32 MinY;
			int32 MaxX;
			int32 MaxY;
			bool bNormalize;
			TArray<FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms, MinX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms, MinY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms, MaxX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms, MaxY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MinX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MinY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MaxX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_MaxY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n    * Incredibly inefficient and slow operation! Read an area of values as-is from a render target using a rectangle defined by integer pixel coordinates.\n\x09*/" },
		{ "CPP_Default_bNormalize", "true" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read an area of values as-is from a render target using a rectangle defined by integer pixel coordinates." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTargetRawPixelArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::KismetRenderingLibrary_eventReadRenderTargetRawPixelArea_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			float U;
			float V;
			bool bNormalize;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, U), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, V), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_V,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Incredibly inefficient and slow operation! Read a value as-is from a render target using UV [0,1]x[0,1] coordinates.\n\x09*/" },
		{ "CPP_Default_bNormalize", "true" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as-is from a render target using UV [0,1]x[0,1] coordinates." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTargetRawUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FBox2D Area;
			bool bNormalize;
			TArray<FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Area;
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms, Area), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_Area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Incredibly inefficient and slow operation! Read an area of values as-is from a render target using a rectangle defined by UV [0,1]x[0,1] coordinates.\n\x09*/" },
		{ "CPP_Default_bNormalize", "true" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read an area of values as-is from a render target using a rectangle defined by UV [0,1]x[0,1] coordinates." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTargetRawUVArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::KismetRenderingLibrary_eventReadRenderTargetRawUVArea_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetUV_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			float U;
			float V;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, U), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, V), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_V,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Incredibly inefficient and slow operation! Read a value as sRGB color from a render target using UV [0,1]x[0,1] coordinates.\n\x09* LDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\n\x09* Result is 8-bit per channel [0,255] BGRA in sRGB space.\n\x09*/" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as sRGB color from a render target using UV [0,1]x[0,1] coordinates.\nLDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\nResult is 8-bit per channel [0,255] BGRA in sRGB space." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReadRenderTargetUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::KismetRenderingLibrary_eventReadRenderTargetUV_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics
	{
		struct KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* TextureRenderTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::NewProp_TextureRenderTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Manually releases GPU resources of a render target. This is useful for blueprint creating a lot of render target that would\n\x09 * normally be released too late by the garbage collector that can be problematic on platforms that have tight GPU memory constrains.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Manually releases GPU resources of a render target. This is useful for blueprint creating a lot of render target that would\nnormally be released too late by the garbage collector that can be problematic on platforms that have tight GPU memory constrains." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ReleaseRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics
	{
		struct KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			FString Name;
			TEnumAsByte<TextureCompressionSettings> CompressionSettings;
			TEnumAsByte<TextureMipGenSettings> MipSettings;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) }; // 3296291951
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_MipSettings = { "MipSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, MipSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(nullptr, 0) }; // 3224170763
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_CompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_MipSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* Creates a new Static Texture from a Render Target 2D.\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_CompressionSettings", "TC_Default" },
		{ "CPP_Default_MipSettings", "TMGS_FromTextureGroup" },
		{ "CPP_Default_Name", "Texture" },
		{ "DisplayName", "Render Target Create Static Texture Editor Only" },
		{ "Keywords", "Create Static Texture from Render Target" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Creates a new Static Texture from a Render Target 2D.\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "RenderTargetCreateStaticTexture2DEditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics
	{
		struct KismetRenderingLibrary_eventResizeRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* TextureRenderTarget;
			int32 Width;
			int32 Height;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventResizeRenderTarget2D_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventResizeRenderTarget2D_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventResizeRenderTarget2D_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::NewProp_Height,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Changes the resolution of a render target. This is useful for when you need to resize the game viewport or change the in-game resolution during runtime\n\x09 * and thus need to update the sizes of all the render targets in the game accordingly.\n\x09 */" },
		{ "CPP_Default_Height", "256" },
		{ "CPP_Default_Width", "256" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Changes the resolution of a render target. This is useful for when you need to resize the game viewport or change the in-game resolution during runtime\nand thus need to update the sizes of all the render targets in the game accordingly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "ResizeRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::KismetRenderingLibrary_eventResizeRenderTarget2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics
	{
		struct KismetRenderingLibrary_eventSetCastInsetShadowForAllAttachments_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			bool bCastInsetShadow;
			bool bLightAttachmentsAsGroup;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static void NewProp_bCastInsetShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastInsetShadow;
		static void NewProp_bLightAttachmentsAsGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLightAttachmentsAsGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventSetCastInsetShadowForAllAttachments_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_PrimitiveComponent_MetaData)) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bCastInsetShadow_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventSetCastInsetShadowForAllAttachments_Parms*)Obj)->bCastInsetShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bCastInsetShadow = { "bCastInsetShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventSetCastInsetShadowForAllAttachments_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bCastInsetShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bLightAttachmentsAsGroup_SetBit(void* Obj)
	{
		((KismetRenderingLibrary_eventSetCastInsetShadowForAllAttachments_Parms*)Obj)->bLightAttachmentsAsGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bLightAttachmentsAsGroup = { "bLightAttachmentsAsGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetRenderingLibrary_eventSetCastInsetShadowForAllAttachments_Parms), &Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bLightAttachmentsAsGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bCastInsetShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::NewProp_bLightAttachmentsAsGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Set the inset shadow casting state of the given component and all its child attachments. \n\x09 *\x09""Also choose if all attachments should be grouped for the inset shadow rendering. If enabled, one depth target will be shared for all attachments.\n\x09 */" },
		{ "Keywords", "SetCastShadowForAllAttachments" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Set the inset shadow casting state of the given component and all its child attachments.\n    Also choose if all attachments should be grouped for the inset shadow rendering. If enabled, one depth target will be shared for all attachments." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, nullptr, "SetCastInsetShadowForAllAttachments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::KismetRenderingLibrary_eventSetCastInsetShadowForAllAttachments_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetRenderingLibrary);
	UClass* Z_Construct_UClass_UKismetRenderingLibrary_NoRegister()
	{
		return UKismetRenderingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetRenderingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetRenderingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetRenderingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget, "BeginDrawCanvasToRenderTarget" }, // 2101215724
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo, "BreakSkinWeightInfo" }, // 1590532792
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_CalculateProjectionMatrix, "CalculateProjectionMatrix" }, // 2261137589
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D, "ClearRenderTarget2D" }, // 2117194834
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly, "ConvertRenderTargetToTexture2DEditorOnly" }, // 2195546846
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D, "CreateRenderTarget2D" }, // 1881614511
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2DArray, "CreateRenderTarget2DArray" }, // 3804053048
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTargetVolume, "CreateRenderTargetVolume" }, // 926154262
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget, "DrawMaterialToRenderTarget" }, // 3970951072
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_EnablePathTracing, "EnablePathTracing" }, // 1729564128
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget, "EndDrawCanvasToRenderTarget" }, // 887015666
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget, "ExportRenderTarget" }, // 3082484135
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D, "ExportTexture2D" }, // 1011230842
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D, "ImportBufferAsTexture2D" }, // 576573958
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D, "ImportFileAsTexture2D" }, // 2339683371
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo, "MakeSkinWeightInfo" }, // 1721433101
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTarget, "ReadRenderTarget" }, // 877993182
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel, "ReadRenderTargetPixel" }, // 2955807632
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRaw, "ReadRenderTargetRaw" }, // 3970478807
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel, "ReadRenderTargetRawPixel" }, // 936976582
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixelArea, "ReadRenderTargetRawPixelArea" }, // 1209689095
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV, "ReadRenderTargetRawUV" }, // 1828565616
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUVArea, "ReadRenderTargetRawUVArea" }, // 3255534551
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV, "ReadRenderTargetUV" }, // 1649106094
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D, "ReleaseRenderTarget2D" }, // 1971640323
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly, "RenderTargetCreateStaticTexture2DEditorOnly" }, // 1400506782
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ResizeRenderTarget2D, "ResizeRenderTarget2D" }, // 339107292
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments, "SetCastInsetShadowForAllAttachments" }, // 1295831194
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetRenderingLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetRenderingLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ScriptName", "RenderingLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetRenderingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetRenderingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetRenderingLibrary_Statics::ClassParams = {
		&UKismetRenderingLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetRenderingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetRenderingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetRenderingLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetRenderingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetRenderingLibrary.OuterSingleton, Z_Construct_UClass_UKismetRenderingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetRenderingLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UKismetRenderingLibrary>()
	{
		return UKismetRenderingLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetRenderingLibrary);
	UKismetRenderingLibrary::~UKismetRenderingLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_Statics::ScriptStructInfo[] = {
		{ FDrawToRenderTargetContext::StaticStruct, Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewStructOps, TEXT("DrawToRenderTargetContext"), &Z_Registration_Info_UScriptStruct_DrawToRenderTargetContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDrawToRenderTargetContext), 2872203805U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetRenderingLibrary, UKismetRenderingLibrary::StaticClass, TEXT("UKismetRenderingLibrary"), &Z_Registration_Info_UClass_UKismetRenderingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetRenderingLibrary), 996547319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_4199048761(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
