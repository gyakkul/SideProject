// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceBasePropertyOverrides() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides;
class UScriptStruct* FMaterialInstanceBasePropertyOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialInstanceBasePropertyOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialInstanceBasePropertyOverrides>()
{
	return FMaterialInstanceBasePropertyOverrides::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OpacityMaskClipValue_MetaData[];
#endif
		static void NewProp_bOverride_OpacityMaskClipValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OpacityMaskClipValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlendMode_MetaData[];
#endif
		static void NewProp_bOverride_BlendMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadingModel_MetaData[];
#endif
		static void NewProp_bOverride_ShadingModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadingModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DitheredLODTransition_MetaData[];
#endif
		static void NewProp_bOverride_DitheredLODTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DitheredLODTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CastDynamicShadowAsMasked_MetaData[];
#endif
		static void NewProp_bOverride_CastDynamicShadowAsMasked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CastDynamicShadowAsMasked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TwoSided_MetaData[];
#endif
		static void NewProp_bOverride_TwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bIsThinSurface_MetaData[];
#endif
		static void NewProp_bOverride_bIsThinSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bIsThinSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OutputTranslucentVelocity_MetaData[];
#endif
		static void NewProp_bOverride_OutputTranslucentVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OutputTranslucentVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxWorldPositionOffsetDisplacement_MetaData[];
#endif
		static void NewProp_bOverride_MaxWorldPositionOffsetDisplacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxWorldPositionOffsetDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[];
#endif
		static void NewProp_TwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsThinSurface_MetaData[];
#endif
		static void NewProp_bIsThinSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThinSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DitheredLODTransition_MetaData[];
#endif
		static void NewProp_DitheredLODTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadowAsMasked_MetaData[];
#endif
		static void NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadowAsMasked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTranslucentVelocity_MetaData[];
#endif
		static void NewProp_bOutputTranslucentVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTranslucentVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskClipValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskClipValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWorldPositionOffsetDisplacement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWorldPositionOffsetDisplacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Properties from the base material that can be overridden in material instances. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Properties from the base material that can be overridden in material instances." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceBasePropertyOverrides>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the opacity mask clip value. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the opacity mask clip value." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_OpacityMaskClipValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue = { "bOverride_OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the blend mode. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the blend mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_BlendMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode = { "bOverride_BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the shading model. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the shading model." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_ShadingModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel = { "bOverride_ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the dithered LOD transition property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the dithered LOD transition property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_DitheredLODTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition = { "bOverride_DitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of whether to shadow using masked opacity on translucent materials. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of whether to shadow using masked opacity on translucent materials." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_CastDynamicShadowAsMasked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked = { "bOverride_CastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the two sided property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the two sided property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_TwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided = { "bOverride_TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the IsThinSurface property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the IsThinSurface property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_bIsThinSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface = { "bOverride_bIsThinSurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the output velocity property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the output velocity property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_OutputTranslucentVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity = { "bOverride_OutputTranslucentVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables override of the max world position offset property. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the max world position offset property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_MaxWorldPositionOffsetDisplacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement = { "bOverride_MaxWorldPositionOffsetDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces. */" },
		{ "editcondition", "bOverride_TwoSided" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->TwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Indicates that the material should be rendered as. */" },
		{ "editcondition", "bOverride_bThinSurface" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Indicates that the material should be rendered as." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bIsThinSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface = { "bIsThinSurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should support a dithered LOD transition when used with the foliage system. */" },
		{ "editcondition", "bOverride_DitheredLODTransition" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Whether the material should support a dithered LOD transition when used with the foliage system." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->DitheredLODTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition = { "DitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should cast shadows as masked even though it has a translucent blend mode. */" },
		{ "editcondition", "bOverride_CastShadowAsMasked" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Whether the material should cast shadows as masked even though it has a translucent blend mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bCastDynamicShadowAsMasked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked = { "bCastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should output velocity even though it has a translucent blend mode. */" },
		{ "editcondition", "bOverride_OutputTranslucentVelocity" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Whether the material should output velocity even though it has a translucent blend mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOutputTranslucentVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity = { "bOutputTranslucentVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** The blend mode */" },
		{ "editcondition", "bOverride_BlendMode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "The blend mode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode_MetaData)) }; // 799871737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** The shading model */" },
		{ "editcondition", "bOverride_ShadingModel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "The shading model" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel_MetaData)) }; // 3734556393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue. */" },
		{ "editcondition", "bOverride_OpacityMaskClipValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue = { "OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, OpacityMaskClipValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_MaxWorldPositionOffsetDisplacement_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The maximum World Position Offset distance. Zero means no maximum. */" },
		{ "editcondition", "bOverride_MaxWorldPositionOffsetDisplacement" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The maximum World Position Offset distance. Zero means no maximum." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_MaxWorldPositionOffsetDisplacement = { "MaxWorldPositionOffsetDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, MaxWorldPositionOffsetDisplacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_MaxWorldPositionOffsetDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_MaxWorldPositionOffsetDisplacement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_bIsThinSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OutputTranslucentVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_MaxWorldPositionOffsetDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bIsThinSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOutputTranslucentVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_MaxWorldPositionOffsetDisplacement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialInstanceBasePropertyOverrides",
		sizeof(FMaterialInstanceBasePropertyOverrides),
		alignof(FMaterialInstanceBasePropertyOverrides),
		Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_Statics::ScriptStructInfo[] = {
		{ FMaterialInstanceBasePropertyOverrides::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewStructOps, TEXT("MaterialInstanceBasePropertyOverrides"), &Z_Registration_Info_UScriptStruct_MaterialInstanceBasePropertyOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceBasePropertyOverrides), 2952432778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_731786564(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceBasePropertyOverrides_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
