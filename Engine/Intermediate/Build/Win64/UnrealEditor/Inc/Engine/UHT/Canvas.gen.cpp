// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Canvas.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvas() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReporterGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasUVTri();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CanvasIcon;
class UScriptStruct* FCanvasIcon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CanvasIcon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CanvasIcon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCanvasIcon, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CanvasIcon"));
	}
	return Z_Registration_Info_UScriptStruct_CanvasIcon.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCanvasIcon>()
{
	return FCanvasIcon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCanvasIcon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UL_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VL_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Holds texture information with UV coordinates as well.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Holds texture information with UV coordinates as well." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCanvasIcon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "Comment", "/** Source texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Source texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCanvasIcon, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "Comment", "/** UV coords */" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "UV coords" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCanvasIcon, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCanvasIcon, V), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL = { "UL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCanvasIcon, UL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL_MetaData[] = {
		{ "Category", "CanvasIcon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL = { "VL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCanvasIcon, VL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCanvasIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_V,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_UL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewProp_VL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCanvasIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CanvasIcon",
		sizeof(FCanvasIcon),
		alignof(FCanvasIcon),
		Z_Construct_UScriptStruct_FCanvasIcon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCanvasIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCanvasIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon()
	{
		if (!Z_Registration_Info_UScriptStruct_CanvasIcon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CanvasIcon.InnerSingleton, Z_Construct_UScriptStruct_FCanvasIcon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CanvasIcon.InnerSingleton;
	}
	DEFINE_FUNCTION(UCanvas::execK2_TextSize)
	{
		P_GET_OBJECT(UFont,Z_Param_RenderFont);
		P_GET_PROPERTY(FStrProperty,Z_Param_RenderText);
		P_GET_STRUCT(FVector2D,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->K2_TextSize(Z_Param_RenderFont,Z_Param_RenderText,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_StrLen)
	{
		P_GET_OBJECT(UFont,Z_Param_RenderFont);
		P_GET_PROPERTY(FStrProperty,Z_Param_RenderText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->K2_StrLen(Z_Param_RenderFont,Z_Param_RenderText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_Deproject)
	{
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_Deproject(Z_Param_ScreenPosition,Z_Param_Out_WorldOrigin,Z_Param_Out_WorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_Project)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->K2_Project(Z_Param_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawPolygon)
	{
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT(FVector2D,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSides);
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawPolygon(Z_Param_RenderTexture,Z_Param_ScreenPosition,Z_Param_Radius,Z_Param_NumberOfSides,Z_Param_RenderColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawMaterialTriangle)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_RenderMaterial);
		P_GET_TARRAY(FCanvasUVTri,Z_Param_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawMaterialTriangle(Z_Param_RenderMaterial,Z_Param_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawTriangle)
	{
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture);
		P_GET_TARRAY(FCanvasUVTri,Z_Param_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawTriangle(Z_Param_RenderTexture,Z_Param_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawBox)
	{
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawBox(Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_Thickness,Z_Param_RenderColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawBorder)
	{
		P_GET_OBJECT(UTexture,Z_Param_BorderTexture);
		P_GET_OBJECT(UTexture,Z_Param_BackgroundTexture);
		P_GET_OBJECT(UTexture,Z_Param_LeftBorderTexture);
		P_GET_OBJECT(UTexture,Z_Param_RightBorderTexture);
		P_GET_OBJECT(UTexture,Z_Param_TopBorderTexture);
		P_GET_OBJECT(UTexture,Z_Param_BottomBorderTexture);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize);
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition);
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize);
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor);
		P_GET_STRUCT(FVector2D,Z_Param_BorderScale);
		P_GET_STRUCT(FVector2D,Z_Param_BackgroundScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint);
		P_GET_STRUCT(FVector2D,Z_Param_CornerSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawBorder(Z_Param_BorderTexture,Z_Param_BackgroundTexture,Z_Param_LeftBorderTexture,Z_Param_RightBorderTexture,Z_Param_TopBorderTexture,Z_Param_BottomBorderTexture,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_RenderColor,Z_Param_BorderScale,Z_Param_BackgroundScale,Z_Param_Rotation,Z_Param_PivotPoint,Z_Param_CornerSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawText)
	{
		P_GET_OBJECT(UFont,Z_Param_RenderFont);
		P_GET_PROPERTY(FStrProperty,Z_Param_RenderText);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT(FVector2D,Z_Param_Scale);
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Kerning);
		P_GET_STRUCT(FLinearColor,Z_Param_ShadowColor);
		P_GET_STRUCT(FVector2D,Z_Param_ShadowOffset);
		P_GET_UBOOL(Z_Param_bCentreX);
		P_GET_UBOOL(Z_Param_bCentreY);
		P_GET_UBOOL(Z_Param_bOutlined);
		P_GET_STRUCT(FLinearColor,Z_Param_OutlineColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawText(Z_Param_RenderFont,Z_Param_RenderText,Z_Param_ScreenPosition,Z_Param_Scale,Z_Param_RenderColor,Z_Param_Kerning,Z_Param_ShadowColor,Z_Param_ShadowOffset,Z_Param_bCentreX,Z_Param_bCentreY,Z_Param_bOutlined,Z_Param_OutlineColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_RenderMaterial);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize);
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition);
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawMaterial(Z_Param_RenderMaterial,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_Rotation,Z_Param_PivotPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_RenderTexture);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenSize);
		P_GET_STRUCT(FVector2D,Z_Param_CoordinatePosition);
		P_GET_STRUCT(FVector2D,Z_Param_CoordinateSize);
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlendMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_PivotPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawTexture(Z_Param_RenderTexture,Z_Param_ScreenPosition,Z_Param_ScreenSize,Z_Param_CoordinatePosition,Z_Param_CoordinateSize,Z_Param_RenderColor,EBlendMode(Z_Param_BlendMode),Z_Param_Rotation,Z_Param_PivotPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCanvas::execK2_DrawLine)
	{
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPositionA);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPositionB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_STRUCT(FLinearColor,Z_Param_RenderColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DrawLine(Z_Param_ScreenPositionA,Z_Param_ScreenPositionB,Z_Param_Thickness,Z_Param_RenderColor);
		P_NATIVE_END;
	}
	void UCanvas::StaticRegisterNativesUCanvas()
	{
		UClass* Class = UCanvas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_Deproject", &UCanvas::execK2_Deproject },
			{ "K2_DrawBorder", &UCanvas::execK2_DrawBorder },
			{ "K2_DrawBox", &UCanvas::execK2_DrawBox },
			{ "K2_DrawLine", &UCanvas::execK2_DrawLine },
			{ "K2_DrawMaterial", &UCanvas::execK2_DrawMaterial },
			{ "K2_DrawMaterialTriangle", &UCanvas::execK2_DrawMaterialTriangle },
			{ "K2_DrawPolygon", &UCanvas::execK2_DrawPolygon },
			{ "K2_DrawText", &UCanvas::execK2_DrawText },
			{ "K2_DrawTexture", &UCanvas::execK2_DrawTexture },
			{ "K2_DrawTriangle", &UCanvas::execK2_DrawTriangle },
			{ "K2_Project", &UCanvas::execK2_Project },
			{ "K2_StrLen", &UCanvas::execK2_StrLen },
			{ "K2_TextSize", &UCanvas::execK2_TextSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCanvas_K2_Deproject_Statics
	{
		struct Canvas_eventK2_Deproject_Parms
		{
			FVector2D ScreenPosition;
			FVector WorldOrigin;
			FVector WorldDirection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_Deproject_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::NewProp_WorldDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Performs a deprojection of a screen space coordinate using the projection matrix set up for the Canvas.\n\x09 *\n\x09 * @param ScreenPosition\x09\x09\x09Screen space position to deproject to the World.\n\x09 * @param WorldOrigin\x09\x09\x09\x09Vector which is the world position of the screen space position.\n\x09 * @param WorldDirection\x09\x09\x09Vector which can be used in a trace to determine what is \"behind\" the screen space position. Useful for object picking.\n\x09 */" },
		{ "DisplayName", "Deproject" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "Deproject" },
		{ "ToolTip", "Performs a deprojection of a screen space coordinate using the projection matrix set up for the Canvas.\n\n@param ScreenPosition                        Screen space position to deproject to the World.\n@param WorldOrigin                           Vector which is the world position of the screen space position.\n@param WorldDirection                        Vector which can be used in a trace to determine what is \"behind\" the screen space position. Useful for object picking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_Deproject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::Canvas_eventK2_Deproject_Parms), Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_Deproject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_Deproject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics
	{
		struct Canvas_eventK2_DrawBorder_Parms
		{
			UTexture* BorderTexture;
			UTexture* BackgroundTexture;
			UTexture* LeftBorderTexture;
			UTexture* RightBorderTexture;
			UTexture* TopBorderTexture;
			UTexture* BottomBorderTexture;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			FLinearColor RenderColor;
			FVector2D BorderScale;
			FVector2D BackgroundScale;
			float Rotation;
			FVector2D PivotPoint;
			FVector2D CornerSize;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BorderTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftBorderTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightBorderTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopBorderTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomBorderTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinateSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CornerSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderTexture = { "BorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BackgroundTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_LeftBorderTexture = { "LeftBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, LeftBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RightBorderTexture = { "RightBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, RightBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_TopBorderTexture = { "TopBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, TopBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BottomBorderTexture = { "BottomBorderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BottomBorderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinatePosition = { "CoordinatePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinateSize = { "CoordinateSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderScale = { "BorderScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BorderScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundScale = { "BackgroundScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, BackgroundScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CornerSize = { "CornerSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBorder_Parms, CornerSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_LeftBorderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RightBorderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_TopBorderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BottomBorderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinatePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CoordinateSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_RenderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BorderScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_BackgroundScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_PivotPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::NewProp_CornerSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws a 3x3 grid border with tiled frame and tiled interior on the Canvas.\n\x09 *\n\x09 * @param BorderTexture\x09\x09\x09\x09Texture to use for border.\n\x09 * @param BackgroundTexture\x09\x09\x09Texture to use for border background.\n\x09 * @param LeftBorderTexture\x09\x09\x09Texture to use for the tiling left border.\n\x09 * @param RightBorderTexture\x09\x09Texture to use for the tiling right border.\n\x09 * @param TopBorderTexture\x09\x09\x09Texture to use for the tiling top border.\n\x09 * @param BottomBorderTexture\x09\x09Texture to use for the tiling bottom border.\n\x09 * @param ScreenPosition\x09\x09\x09Screen space position to render the texture.\n\x09 * @param ScreenSize\x09\x09\x09\x09Screen space size to render the texture.\n\x09 * @param CoordinatePosition\x09\x09Normalized UV starting coordinate to use when rendering the border texture.\n\x09 * @param CoordinateSize\x09\x09\x09Normalized UV size coordinate to use when rendering the border texture.\n\x09 * @param RenderColor\x09\x09\x09\x09""Color to tint the border.\n\x09 * @param BorderScale\x09\x09\x09\x09Scale of the border.\n\x09 * @param BackgroundScale\x09\x09\x09Scale of the background.\n\x09 * @param Rotation\x09\x09\x09\x09\x09Rotation, in degrees, to render the texture.\n\x09 * @param PivotPoint\x09\x09\x09\x09Normalized pivot point to use when rotating the texture.\n\x09 * @param CornerSize\x09\x09\x09\x09""Frame corner size in percent of frame texture (should be < 0.5f).\n\x09 */" },
		{ "CPP_Default_BackgroundScale", "(X=0.100,Y=0.100)" },
		{ "CPP_Default_BorderScale", "(X=0.100,Y=0.100)" },
		{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_CornerSize", "" },
		{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "DisplayName", "Draw Border" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawBorder" },
		{ "ToolTip", "Draws a 3x3 grid border with tiled frame and tiled interior on the Canvas.\n\n@param BorderTexture                         Texture to use for border.\n@param BackgroundTexture                     Texture to use for border background.\n@param LeftBorderTexture                     Texture to use for the tiling left border.\n@param RightBorderTexture            Texture to use for the tiling right border.\n@param TopBorderTexture                      Texture to use for the tiling top border.\n@param BottomBorderTexture           Texture to use for the tiling bottom border.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the border texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the border texture.\n@param RenderColor                           Color to tint the border.\n@param BorderScale                           Scale of the border.\n@param BackgroundScale                       Scale of the background.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture.\n@param CornerSize                            Frame corner size in percent of frame texture (should be < 0.5f)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawBorder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::Canvas_eventK2_DrawBorder_Parms), Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics
	{
		struct Canvas_eventK2_DrawBox_Parms
		{
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			float Thickness;
			FLinearColor RenderColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawBox_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::NewProp_RenderColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws an unfilled box on the Canvas.\n\x09 *\n\x09 * @param ScreenPosition\x09\x09\x09Screen space position to render the text.\n\x09 * @param ScreenSize\x09\x09\x09\x09Screen space size to render the texture.\n\x09 * @param Thickness\x09\x09\x09\x09\x09How many pixels thick the box lines should be.\n\x09 */" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DisplayName", "Draw Box" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawBox" },
		{ "ToolTip", "Draws an unfilled box on the Canvas.\n\n@param ScreenPosition                        Screen space position to render the text.\n@param ScreenSize                            Screen space size to render the texture.\n@param Thickness                                     How many pixels thick the box lines should be." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::Canvas_eventK2_DrawBox_Parms), Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics
	{
		struct Canvas_eventK2_DrawLine_Parms
		{
			FVector2D ScreenPositionA;
			FVector2D ScreenPositionB;
			float Thickness;
			FLinearColor RenderColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPositionA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPositionB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionA = { "ScreenPositionA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, ScreenPositionA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionB = { "ScreenPositionB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, ScreenPositionB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawLine_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_ScreenPositionB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::NewProp_RenderColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws a line on the Canvas.\n\x09 *\n\x09 * @param ScreenPositionA\x09\x09Starting position of the line in screen space.\n\x09 * @param ScreenPositionB\x09\x09""Ending position of the line in screen space.\n\x09 * @param Thickness\x09\x09\x09\x09How many pixels thick this line should be.\n\x09 * @param RenderColor\x09\x09\x09""Color to render the line.\n\x09 */" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_ScreenPositionA", "" },
		{ "CPP_Default_ScreenPositionB", "" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DisplayName", "Draw Line" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawLine" },
		{ "ToolTip", "Draws a line on the Canvas.\n\n@param ScreenPositionA               Starting position of the line in screen space.\n@param ScreenPositionB               Ending position of the line in screen space.\n@param Thickness                             How many pixels thick this line should be.\n@param RenderColor                   Color to render the line." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::Canvas_eventK2_DrawLine_Parms), Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics
	{
		struct Canvas_eventK2_DrawMaterial_Parms
		{
			UMaterialInterface* RenderMaterial;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			float Rotation;
			FVector2D PivotPoint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinateSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_RenderMaterial = { "RenderMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, RenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinatePosition = { "CoordinatePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinateSize = { "CoordinateSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterial_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_RenderMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinatePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_CoordinateSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::NewProp_PivotPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws a material on the Canvas.\n\x09 *\n\x09 * @param RenderMaterial\x09\x09\x09Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n\x09 * @param ScreenPosition\x09\x09\x09Screen space position to render the texture.\n\x09 * @param ScreenSize\x09\x09\x09\x09Screen space size to render the texture.\n\x09 * @param CoordinatePosition\x09\x09Normalized UV starting coordinate to use when rendering the texture.\n\x09 * @param CoordinateSize\x09\x09\x09Normalized UV size coordinate to use when rendering the texture.\n\x09 * @param Rotation\x09\x09\x09\x09\x09Rotation, in degrees, to render the texture.\n\x09 * @param PivotPoint\x09\x09\x09\x09Normalized pivot point to use when rotating the texture.\n\x09 */" },
		{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "DisplayName", "Draw Material" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawMaterial" },
		{ "ToolTip", "Draws a material on the Canvas.\n\n@param RenderMaterial                        Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the texture.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::Canvas_eventK2_DrawMaterial_Parms), Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics
	{
		struct Canvas_eventK2_DrawMaterialTriangle_Parms
		{
			UMaterialInterface* RenderMaterial;
			TArray<FCanvasUVTri> Triangles;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_RenderMaterial = { "RenderMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterialTriangle_Parms, RenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) }; // 2964281737
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawMaterialTriangle_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2964281737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_RenderMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::NewProp_Triangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws a set of triangles on the Canvas.\n\x09 *\n\x09 * @param RenderMaterial\x09\x09\x09Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n\x09 * @param Triangles\x09\x09\x09\x09\x09Triangles to render.\n\x09 */" },
		{ "DisplayName", "Draw Material Triangles" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawMaterialTriangles" },
		{ "ToolTip", "Draws a set of triangles on the Canvas.\n\n@param RenderMaterial                        Material to use when rendering. Remember that only the emissive channel is able to be rendered as no lighting is performed when rendering to the Canvas.\n@param Triangles                                     Triangles to render." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawMaterialTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::Canvas_eventK2_DrawMaterialTriangle_Parms), Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics
	{
		struct Canvas_eventK2_DrawPolygon_Parms
		{
			UTexture* RenderTexture;
			FVector2D ScreenPosition;
			FVector2D Radius;
			int32 NumberOfSides;
			FLinearColor RenderColor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSides;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, Radius), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_NumberOfSides = { "NumberOfSides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, NumberOfSides), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawPolygon_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_NumberOfSides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::NewProp_RenderColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws a polygon on the Canvas.\n\x09 *\n\x09 * @param RenderTexture\x09\x09\x09\x09Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n\x09 * @param ScreenPosition\x09\x09\x09Screen space position to render the text.\n\x09 * @param Radius\x09\x09\x09\x09\x09How large in pixels this polygon should be.\n\x09 * @param NumberOfSides\x09\x09\x09\x09How many sides this polygon should have. This should be above or equal to three.\n\x09 * @param RenderColor\x09\x09\x09\x09""Color to tint the polygon.\n\x09 */" },
		{ "CPP_Default_NumberOfSides", "3" },
		{ "CPP_Default_Radius", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "DisplayName", "Draw Polygon" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawPolygon" },
		{ "ToolTip", "Draws a polygon on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n@param ScreenPosition                        Screen space position to render the text.\n@param Radius                                        How large in pixels this polygon should be.\n@param NumberOfSides                         How many sides this polygon should have. This should be above or equal to three.\n@param RenderColor                           Color to tint the polygon." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::Canvas_eventK2_DrawPolygon_Parms), Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawText_Statics
	{
		struct Canvas_eventK2_DrawText_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D ScreenPosition;
			FVector2D Scale;
			FLinearColor RenderColor;
			float Kerning;
			FLinearColor ShadowColor;
			FVector2D ShadowOffset;
			bool bCentreX;
			bool bCentreY;
			bool bOutlined;
			FLinearColor OutlineColor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderText;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Kerning;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
		static void NewProp_bCentreX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCentreX;
		static void NewProp_bCentreY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCentreY;
		static void NewProp_bOutlined_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutlined;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderFont = { "RenderFont", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText = { "RenderText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderText), METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, Kerning), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX_SetBit(void* Obj)
	{
		((Canvas_eventK2_DrawText_Parms*)Obj)->bCentreX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX = { "bCentreX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Canvas_eventK2_DrawText_Parms), &Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY_SetBit(void* Obj)
	{
		((Canvas_eventK2_DrawText_Parms*)Obj)->bCentreY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY = { "bCentreY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Canvas_eventK2_DrawText_Parms), &Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined_SetBit(void* Obj)
	{
		((Canvas_eventK2_DrawText_Parms*)Obj)->bOutlined = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined = { "bOutlined", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Canvas_eventK2_DrawText_Parms), &Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawText_Parms, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_RenderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_Kerning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bCentreY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_bOutlined,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::NewProp_OutlineColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws text on the Canvas.\n\x09 *\n\x09 * @param RenderFont\x09\x09\x09\x09""Font to use when rendering the text. If this is null, then a default engine font is used.\n\x09 * @param RenderText\x09\x09\x09\x09Text to render on the Canvas.\n\x09 * @param ScreenPosition\x09\x09\x09Screen space position to render the text.\n\x09 * @param RenderColor\x09\x09\x09\x09""Color to render the text.\n\x09 * @param Kerning\x09\x09\x09\x09\x09Horizontal spacing adjustment to modify the spacing between each letter.\n\x09 * @param ShadowColor\x09\x09\x09\x09""Color to render the shadow of the text.\n\x09 * @param ShadowOffset\x09\x09\x09\x09Pixel offset relative to the screen space position to render the shadow of the text.\n\x09 * @param bCentreX\x09\x09\x09\x09\x09If true, then interpret the screen space position X coordinate as the center of the rendered text.\n\x09 * @param bCentreY\x09\x09\x09\x09\x09If true, then interpret the screen space position Y coordinate as the center of the rendered text.\n\x09 * @param bOutlined\x09\x09\x09\x09\x09If true, then the text should be rendered with an outline.\n\x09 * @param OutlineColor\x09\x09\x09\x09""Color to render the outline for the text.\n\x09 */" },
		{ "CPP_Default_bCentreX", "false" },
		{ "CPP_Default_bCentreY", "false" },
		{ "CPP_Default_bOutlined", "false" },
		{ "CPP_Default_Kerning", "0.000000" },
		{ "CPP_Default_OutlineColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_ShadowColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_ShadowOffset", "(X=1.000,Y=1.000)" },
		{ "DisplayName", "Draw Text" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawText" },
		{ "ToolTip", "Draws text on the Canvas.\n\n@param RenderFont                            Font to use when rendering the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to render on the Canvas.\n@param ScreenPosition                        Screen space position to render the text.\n@param RenderColor                           Color to render the text.\n@param Kerning                                       Horizontal spacing adjustment to modify the spacing between each letter.\n@param ShadowColor                           Color to render the shadow of the text.\n@param ShadowOffset                          Pixel offset relative to the screen space position to render the shadow of the text.\n@param bCentreX                                      If true, then interpret the screen space position X coordinate as the center of the rendered text.\n@param bCentreY                                      If true, then interpret the screen space position Y coordinate as the center of the rendered text.\n@param bOutlined                                     If true, then the text should be rendered with an outline.\n@param OutlineColor                          Color to render the outline for the text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::Canvas_eventK2_DrawText_Parms), Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics
	{
		struct Canvas_eventK2_DrawTexture_Parms
		{
			UTexture* RenderTexture;
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			FVector2D CoordinatePosition;
			FVector2D CoordinateSize;
			FLinearColor RenderColor;
			TEnumAsByte<EBlendMode> BlendMode;
			float Rotation;
			FVector2D PivotPoint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinatePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinateSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, ScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinatePosition = { "CoordinatePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, CoordinatePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinateSize = { "CoordinateSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, CoordinateSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, RenderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) }; // 799871737
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, Rotation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTexture_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinatePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_CoordinateSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_RenderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::NewProp_PivotPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws a texture on the Canvas.\n\x09 *\n\x09 * @param RenderTexture\x09\x09\x09\x09Texture to use when rendering. If no texture is set then this will use the default white texture.\n\x09 * @param ScreenPosition\x09\x09\x09Screen space position to render the texture.\n\x09 * @param ScreenSize\x09\x09\x09\x09Screen space size to render the texture.\n\x09 * @param CoordinatePosition\x09\x09Normalized UV starting coordinate to use when rendering the texture.\n\x09 * @param CoordinateSize\x09\x09\x09Normalized UV size coordinate to use when rendering the texture.\n\x09 * @param RenderColor\x09\x09\x09\x09""Color to use when rendering the texture.\n\x09 * @param BlendMode\x09\x09\x09\x09\x09""Blending mode to use when rendering the texture.\n\x09 * @param Rotation\x09\x09\x09\x09\x09Rotation, in degrees, to render the texture.\n\x09 * @param PivotPoint\x09\x09\x09\x09Normalized pivot point to use when rotating the texture.\n\x09 */" },
		{ "CPP_Default_BlendMode", "BLEND_Translucent" },
		{ "CPP_Default_CoordinateSize", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_PivotPoint", "(X=0.500,Y=0.500)" },
		{ "CPP_Default_RenderColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Rotation", "0.000000" },
		{ "DisplayName", "Draw Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawTexture" },
		{ "ToolTip", "Draws a texture on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering. If no texture is set then this will use the default white texture.\n@param ScreenPosition                        Screen space position to render the texture.\n@param ScreenSize                            Screen space size to render the texture.\n@param CoordinatePosition            Normalized UV starting coordinate to use when rendering the texture.\n@param CoordinateSize                        Normalized UV size coordinate to use when rendering the texture.\n@param RenderColor                           Color to use when rendering the texture.\n@param BlendMode                                     Blending mode to use when rendering the texture.\n@param Rotation                                      Rotation, in degrees, to render the texture.\n@param PivotPoint                            Normalized pivot point to use when rotating the texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::Canvas_eventK2_DrawTexture_Parms), Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics
	{
		struct Canvas_eventK2_DrawTriangle_Parms
		{
			UTexture* RenderTexture;
			TArray<FCanvasUVTri> Triangles;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTriangle_Parms, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) }; // 2964281737
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_DrawTriangle_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2964281737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_RenderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::NewProp_Triangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Draws a set of triangles on the Canvas.\n\x09 *\n\x09 * @param RenderTexture\x09\x09\x09\x09Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n\x09 * @param Triangles\x09\x09\x09\x09\x09Triangles to render.\n\x09 */" },
		{ "DisplayName", "Draw Triangles" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "DrawTriangles" },
		{ "ToolTip", "Draws a set of triangles on the Canvas.\n\n@param RenderTexture                         Texture to use when rendering the triangles. If no texture is set, then the default white texture is used.\n@param Triangles                                     Triangles to render." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_DrawTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::Canvas_eventK2_DrawTriangle_Parms), Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_DrawTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_DrawTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_Project_Statics
	{
		struct Canvas_eventK2_Project_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_Project_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_Project_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_Project_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_Project_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_Project_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Performs a projection of a world space coordinates using the projection matrix set up for the Canvas.\n\x09 *\n\x09 * @param WorldLocation\x09\x09\x09\x09World space location to project onto the Canvas rendering plane.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09Returns a vector where X, Y defines a screen space position representing the world space location.\n\x09 */" },
		{ "DisplayName", "Project" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "Project" },
		{ "ToolTip", "Performs a projection of a world space coordinates using the projection matrix set up for the Canvas.\n\n@param WorldLocation                         World space location to project onto the Canvas rendering plane.\n@return                                                      Returns a vector where X, Y defines a screen space position representing the world space location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_Project_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_Project", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_Project_Statics::Canvas_eventK2_Project_Parms), Z_Construct_UFunction_UCanvas_K2_Project_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Project_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_Project_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_Project_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_Project()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_Project_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_StrLen_Statics
	{
		struct Canvas_eventK2_StrLen_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderText;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderFont = { "RenderFont", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText = { "RenderText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, RenderText), METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_StrLen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_RenderText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Returns the wrapped text size in screen space coordinates.\n\x09 *\n\x09 * @param RenderFont\x09\x09\x09\x09""Font to use when determining the size of the text. If this is null, then a default engine font is used.\n\x09 * @param RenderText\x09\x09\x09\x09Text to determine the size of.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09Returns the screen space size of the text.\n\x09 */" },
		{ "DisplayName", "Wrapped Text Size" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "WrappedTextSize" },
		{ "ToolTip", "Returns the wrapped text size in screen space coordinates.\n\n@param RenderFont                            Font to use when determining the size of the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to determine the size of.\n@return                                                      Returns the screen space size of the text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_StrLen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::Canvas_eventK2_StrLen_Parms), Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_StrLen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_StrLen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvas_K2_TextSize_Statics
	{
		struct Canvas_eventK2_TextSize_Parms
		{
			UFont* RenderFont;
			FString RenderText;
			FVector2D Scale;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderText;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderFont = { "RenderFont", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, RenderFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText = { "RenderText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, RenderText), METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Canvas_eventK2_TextSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_RenderText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Returns the clipped text size in screen space coordinates.\n\x09 *\n\x09 * @param RenderFont\x09\x09\x09\x09""Font to use when determining the size of the text. If this is null, then a default engine font is used.\n\x09 * @param RenderText\x09\x09\x09\x09Text to determine the size of.\n\x09 * @param Scale\x09\x09\x09\x09\x09\x09Scale of the font to use when determining the size of the text.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09Returns the screen space size of the text.\n\x09 */" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "DisplayName", "Clipped Text Size" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ScriptName", "ClippedTextSize" },
		{ "ToolTip", "Returns the clipped text size in screen space coordinates.\n\n@param RenderFont                            Font to use when determining the size of the text. If this is null, then a default engine font is used.\n@param RenderText                            Text to determine the size of.\n@param Scale                                         Scale of the font to use when determining the size of the text.\n@return                                                      Returns the screen space size of the text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvas, nullptr, "K2_TextSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::Canvas_eventK2_TextSize_Parms), Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvas_K2_TextSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvas_K2_TextSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanvas);
	UClass* Z_Construct_UClass_UCanvas_NoRegister()
	{
		return UCanvas::StaticClass();
	}
	struct Z_Construct_UClass_UCanvas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrgX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrgX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrgY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrgY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClipX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClipY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterX_MetaData[];
#endif
		static void NewProp_bCenterX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterY_MetaData[];
#endif
		static void NewProp_bCenterY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoSmooth_MetaData[];
#endif
		static void NewProp_bNoSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorModulate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorModulate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GradientTexture0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GradientTexture0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReporterGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReporterGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCanvas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvas_K2_Deproject, "K2_Deproject" }, // 2466215672
		{ &Z_Construct_UFunction_UCanvas_K2_DrawBorder, "K2_DrawBorder" }, // 3013998020
		{ &Z_Construct_UFunction_UCanvas_K2_DrawBox, "K2_DrawBox" }, // 2003423017
		{ &Z_Construct_UFunction_UCanvas_K2_DrawLine, "K2_DrawLine" }, // 875475923
		{ &Z_Construct_UFunction_UCanvas_K2_DrawMaterial, "K2_DrawMaterial" }, // 1435756480
		{ &Z_Construct_UFunction_UCanvas_K2_DrawMaterialTriangle, "K2_DrawMaterialTriangle" }, // 848866815
		{ &Z_Construct_UFunction_UCanvas_K2_DrawPolygon, "K2_DrawPolygon" }, // 3186220361
		{ &Z_Construct_UFunction_UCanvas_K2_DrawText, "K2_DrawText" }, // 309113979
		{ &Z_Construct_UFunction_UCanvas_K2_DrawTexture, "K2_DrawTexture" }, // 685965616
		{ &Z_Construct_UFunction_UCanvas_K2_DrawTriangle, "K2_DrawTriangle" }, // 2029822586
		{ &Z_Construct_UFunction_UCanvas_K2_Project, "K2_Project" }, // 2478643429
		{ &Z_Construct_UFunction_UCanvas_K2_StrLen, "K2_StrLen" }, // 587724551
		{ &Z_Construct_UFunction_UCanvas_K2_TextSize, "K2_TextSize" }, // 1149965357
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A drawing canvas.\n */" },
		{ "IncludePath", "Engine/Canvas.h" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "A drawing canvas." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX_MetaData[] = {
		{ "Comment", "// Modifiable properties.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Modifiable properties." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX = { "OrgX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, OrgX), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY_MetaData[] = {
		{ "Comment", "// Origin for drawing in X.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Origin for drawing in X." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY = { "OrgY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, OrgY), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX_MetaData[] = {
		{ "Comment", "// Origin for drawing in Y.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Origin for drawing in Y." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX = { "ClipX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, ClipX), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY_MetaData[] = {
		{ "Comment", "// Bottom right clipping region.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Bottom right clipping region." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY = { "ClipY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, ClipY), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor_MetaData[] = {
		{ "Comment", "// Bottom right clipping region.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Bottom right clipping region." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, DrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_MetaData[] = {
		{ "Comment", "// Color for drawing.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Color for drawing." },
	};
#endif
	void Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_SetBit(void* Obj)
	{
		((UCanvas*)Obj)->bCenterX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX = { "bCenterX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCanvas), &Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_MetaData[] = {
		{ "Comment", "// Whether to center the text horizontally (about CurX)\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Whether to center the text horizontally (about CurX)" },
	};
#endif
	void Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_SetBit(void* Obj)
	{
		((UCanvas*)Obj)->bCenterY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY = { "bCenterY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCanvas), &Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_MetaData[] = {
		{ "Comment", "// Whether to center the text vertically (about CurY)\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Whether to center the text vertically (about CurY)" },
	};
#endif
	void Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_SetBit(void* Obj)
	{
		((UCanvas*)Obj)->bNoSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth = { "bNoSmooth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCanvas), &Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX_MetaData[] = {
		{ "Comment", "// Don't bilinear filter.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Don't bilinear filter." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, SizeX), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY_MetaData[] = {
		{ "Comment", "// Zero-based actual dimensions X.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Zero-based actual dimensions X." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, SizeY), METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate_MetaData[] = {
		{ "Comment", "// Internal.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Internal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate = { "ColorModulate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, ColorModulate), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture = { "DefaultTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, DefaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0_MetaData[] = {
		{ "Comment", "//Default texture to use \n" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Default texture to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0 = { "GradientTexture0", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, GradientTexture0), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph_MetaData[] = {
		{ "Comment", "/** Helper class to render 2d graphs on canvas */" },
		{ "ModuleRelativePath", "Classes/Engine/Canvas.h" },
		{ "ToolTip", "Helper class to render 2d graphs on canvas" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph = { "ReporterGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvas, ReporterGraph), Z_Construct_UClass_UReporterGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_OrgX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_OrgY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ClipX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ClipY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_DrawColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_bCenterY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_bNoSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ColorModulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_DefaultTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_GradientTexture0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvas_Statics::NewProp_ReporterGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvas>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanvas_Statics::ClassParams = {
		&UCanvas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCanvas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCanvas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvas()
	{
		if (!Z_Registration_Info_UClass_UCanvas.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanvas.OuterSingleton, Z_Construct_UClass_UCanvas_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCanvas.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCanvas>()
	{
		return UCanvas::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvas);
	UCanvas::~UCanvas() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_Statics::ScriptStructInfo[] = {
		{ FCanvasIcon::StaticStruct, Z_Construct_UScriptStruct_FCanvasIcon_Statics::NewStructOps, TEXT("CanvasIcon"), &Z_Registration_Info_UScriptStruct_CanvasIcon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCanvasIcon), 194583537U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCanvas, UCanvas::StaticClass, TEXT("UCanvas"), &Z_Registration_Info_UClass_UCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvas), 2783594436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_3373824056(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
