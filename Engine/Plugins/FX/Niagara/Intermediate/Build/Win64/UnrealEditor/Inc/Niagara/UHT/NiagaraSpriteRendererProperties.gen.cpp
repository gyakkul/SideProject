// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraSpriteRendererProperties.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraRendererProperties.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSpriteRendererProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSpriteAlignment;
	static UEnum* ENiagaraSpriteAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSpriteAlignment"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSpriteAlignment>()
	{
		return ENiagaraSpriteAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::Enumerators[] = {
		{ "ENiagaraSpriteAlignment::Unaligned", (int64)ENiagaraSpriteAlignment::Unaligned },
		{ "ENiagaraSpriteAlignment::VelocityAligned", (int64)ENiagaraSpriteAlignment::VelocityAligned },
		{ "ENiagaraSpriteAlignment::CustomAlignment", (int64)ENiagaraSpriteAlignment::CustomAlignment },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** This enum decides how a sprite particle will orient its \"up\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush*/" },
		{ "CustomAlignment.Comment", "/** Imagine the particle texture having an arrow pointing up, this mode makes the arrow point towards the axis defined by the \"Particles.SpriteAlignment\" attribute. FacingMode is ignored unless CustomFacingVector is set. If the \"Particles.SpriteAlignment\" attribute is missing, this falls back to Unaligned mode.*/" },
		{ "CustomAlignment.Name", "ENiagaraSpriteAlignment::CustomAlignment" },
		{ "CustomAlignment.ToolTip", "Imagine the particle texture having an arrow pointing up, this mode makes the arrow point towards the axis defined by the \"Particles.SpriteAlignment\" attribute. FacingMode is ignored unless CustomFacingVector is set. If the \"Particles.SpriteAlignment\" attribute is missing, this falls back to Unaligned mode." },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "This enum decides how a sprite particle will orient its \"up\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush" },
		{ "Unaligned.Comment", "/** Only Particles.SpriteRotation and FacingMode impact the alignment of the particle.*/" },
		{ "Unaligned.Name", "ENiagaraSpriteAlignment::Unaligned" },
		{ "Unaligned.ToolTip", "Only Particles.SpriteRotation and FacingMode impact the alignment of the particle." },
		{ "VelocityAligned.Comment", "/** Imagine the particle texture having an arrow pointing up, this mode makes the arrow point in the direction of the Particles.Velocity attribute. FacingMode is ignored unless CustomFacingVector is set.*/" },
		{ "VelocityAligned.Name", "ENiagaraSpriteAlignment::VelocityAligned" },
		{ "VelocityAligned.ToolTip", "Imagine the particle texture having an arrow pointing up, this mode makes the arrow point in the direction of the Particles.Velocity attribute. FacingMode is ignored unless CustomFacingVector is set." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraSpriteAlignment",
		"ENiagaraSpriteAlignment",
		Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode;
	static UEnum* ENiagaraSpriteFacingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSpriteFacingMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSpriteFacingMode>()
	{
		return ENiagaraSpriteFacingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::Enumerators[] = {
		{ "ENiagaraSpriteFacingMode::FaceCamera", (int64)ENiagaraSpriteFacingMode::FaceCamera },
		{ "ENiagaraSpriteFacingMode::FaceCameraPlane", (int64)ENiagaraSpriteFacingMode::FaceCameraPlane },
		{ "ENiagaraSpriteFacingMode::CustomFacingVector", (int64)ENiagaraSpriteFacingMode::CustomFacingVector },
		{ "ENiagaraSpriteFacingMode::FaceCameraPosition", (int64)ENiagaraSpriteFacingMode::FaceCameraPosition },
		{ "ENiagaraSpriteFacingMode::FaceCameraDistanceBlend", (int64)ENiagaraSpriteFacingMode::FaceCameraDistanceBlend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** This enum decides how a sprite particle will orient its \"facing\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush*/" },
		{ "CustomFacingVector.Comment", "/** The sprite billboard faces toward the \"Particles.SpriteFacing\" vector attribute. If the \"Particles.SpriteFacing\" attribute is missing, this falls back to FaceCamera mode.*/" },
		{ "CustomFacingVector.Name", "ENiagaraSpriteFacingMode::CustomFacingVector" },
		{ "CustomFacingVector.ToolTip", "The sprite billboard faces toward the \"Particles.SpriteFacing\" vector attribute. If the \"Particles.SpriteFacing\" attribute is missing, this falls back to FaceCamera mode." },
		{ "FaceCamera.Comment", "/** The sprite billboard origin is always \"looking at\" the camera origin, trying to keep its up axis aligned to the camera's up axis. */" },
		{ "FaceCamera.Name", "ENiagaraSpriteFacingMode::FaceCamera" },
		{ "FaceCamera.ToolTip", "The sprite billboard origin is always \"looking at\" the camera origin, trying to keep its up axis aligned to the camera's up axis." },
		{ "FaceCameraDistanceBlend.Comment", "/** Blends between FaceCamera and FaceCameraPosition.*/" },
		{ "FaceCameraDistanceBlend.Name", "ENiagaraSpriteFacingMode::FaceCameraDistanceBlend" },
		{ "FaceCameraDistanceBlend.ToolTip", "Blends between FaceCamera and FaceCameraPosition." },
		{ "FaceCameraPlane.Comment", "/** The sprite billboard plane is completely parallel to the camera plane. Particle always looks \"flat\" */" },
		{ "FaceCameraPlane.Name", "ENiagaraSpriteFacingMode::FaceCameraPlane" },
		{ "FaceCameraPlane.ToolTip", "The sprite billboard plane is completely parallel to the camera plane. Particle always looks \"flat\"" },
		{ "FaceCameraPosition.Comment", "/** Faces the camera position, but is not dependent on the camera rotation.  This method produces more stable particles under camera rotation. Uses the up axis of (0,0,1).*/" },
		{ "FaceCameraPosition.Name", "ENiagaraSpriteFacingMode::FaceCameraPosition" },
		{ "FaceCameraPosition.ToolTip", "Faces the camera position, but is not dependent on the camera rotation.  This method produces more stable particles under camera rotation. Uses the up axis of (0,0,1)." },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "This enum decides how a sprite particle will orient its \"facing\" axis. Must keep these in sync with NiagaraSpriteVertexFactory.ush" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraSpriteFacingMode",
		"ENiagaraSpriteFacingMode",
		Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode;
	static UEnum* ENiagaraRendererPixelCoverageMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRendererPixelCoverageMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererPixelCoverageMode>()
	{
		return ENiagaraRendererPixelCoverageMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::Enumerators[] = {
		{ "ENiagaraRendererPixelCoverageMode::Automatic", (int64)ENiagaraRendererPixelCoverageMode::Automatic },
		{ "ENiagaraRendererPixelCoverageMode::Disabled", (int64)ENiagaraRendererPixelCoverageMode::Disabled },
		{ "ENiagaraRendererPixelCoverageMode::Enabled", (int64)ENiagaraRendererPixelCoverageMode::Enabled },
		{ "ENiagaraRendererPixelCoverageMode::Enabled_RGBA", (int64)ENiagaraRendererPixelCoverageMode::Enabled_RGBA },
		{ "ENiagaraRendererPixelCoverageMode::Enabled_RGB", (int64)ENiagaraRendererPixelCoverageMode::Enabled_RGB },
		{ "ENiagaraRendererPixelCoverageMode::Enabled_A", (int64)ENiagaraRendererPixelCoverageMode::Enabled_A },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::Enum_MetaDataParams[] = {
		{ "Automatic.Comment", "/** Automatically determine if we want pixel coverage enabled or disabled, based on project setting and the material used on the renderer. */" },
		{ "Automatic.Name", "ENiagaraRendererPixelCoverageMode::Automatic" },
		{ "Automatic.ToolTip", "Automatically determine if we want pixel coverage enabled or disabled, based on project setting and the material used on the renderer." },
		{ "Disabled.Comment", "/** Disable pixel coverage. */" },
		{ "Disabled.Name", "ENiagaraRendererPixelCoverageMode::Disabled" },
		{ "Disabled.ToolTip", "Disable pixel coverage." },
		{ "Enabled.Comment", "/** Enable pixel coverage with no color adjustment based on coverage. */" },
		{ "Enabled.DisplayName", "Enabled (No Color Adjustment)" },
		{ "Enabled.Name", "ENiagaraRendererPixelCoverageMode::Enabled" },
		{ "Enabled.ToolTip", "Enable pixel coverage with no color adjustment based on coverage." },
		{ "Enabled_A.Comment", "/** Enable pixel coverage and adjust the Alpha channel only according to coverage. */" },
		{ "Enabled_A.DisplayName", "Enabled (A)" },
		{ "Enabled_A.Name", "ENiagaraRendererPixelCoverageMode::Enabled_A" },
		{ "Enabled_A.ToolTip", "Enable pixel coverage and adjust the Alpha channel only according to coverage." },
		{ "Enabled_RGB.Comment", "/** Enable pixel coverage and adjust the RGB channels according to coverage. */" },
		{ "Enabled_RGB.DisplayName", "Enabled (RGB)" },
		{ "Enabled_RGB.Name", "ENiagaraRendererPixelCoverageMode::Enabled_RGB" },
		{ "Enabled_RGB.ToolTip", "Enable pixel coverage and adjust the RGB channels according to coverage." },
		{ "Enabled_RGBA.Comment", "/** Enable pixel coverage and adjust the RGBA channels according to coverage. */" },
		{ "Enabled_RGBA.DisplayName", "Enabled (RGBA)" },
		{ "Enabled_RGBA.Name", "ENiagaraRendererPixelCoverageMode::Enabled_RGBA" },
		{ "Enabled_RGBA.ToolTip", "Enable pixel coverage and adjust the RGBA channels according to coverage." },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraRendererPixelCoverageMode",
		"ENiagaraRendererPixelCoverageMode",
		Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.InnerSingleton;
	}
	void UNiagaraSpriteRendererProperties::StaticRegisterNativesUNiagaraSpriteRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSpriteRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister()
	{
		return UNiagaraSpriteRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MICMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MICMaterial;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialUserParamBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialUserParamBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotInUVSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotInUVSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubImageBlend_MetaData[];
#endif
		static void NewProp_bSubImageBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubImageBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRollInVR_MetaData[];
#endif
		static void NewProp_bRemoveHMDRollInVR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRollInVR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSortOnlyWhenTranslucent_MetaData[];
#endif
		static void NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortOnlyWhenTranslucent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortPrecision_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortPrecision;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GpuTranslucentLatency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuTranslucentLatency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuTranslucentLatency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelCoverageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelCoverageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelCoverageMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelCoverageBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelCoverageBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraDistanceCulling_MetaData[];
#endif
		static void NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraDistanceCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteRotationBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteRotationBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteSizeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteSizeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteFacingBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteFacingBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteAlignmentBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteAlignmentBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImageIndexBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageIndexBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterialBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial1Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial1Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial2Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial2Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial3Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial3Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffsetBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScaleBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVScaleBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffsetBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffsetBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSortingBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSortingBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialParameterBindings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevPositionBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevPositionBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevVelocityBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevVelocityBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevSpriteRotationBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevSpriteRotationBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevSpriteSizeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevSpriteSizeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevSpriteFacingBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevSpriteFacingBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevSpriteAlignmentBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevSpriteAlignmentBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevCameraOffsetBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevCameraOffsetBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevPivotOffsetBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevPivotOffsetBinding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialCutoutTexture_MetaData[];
#endif
		static void NewProp_bUseMaterialCutoutTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialCutoutTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoutTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CutoutTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Sprite Renderer" },
		{ "IncludePath", "NiagaraSpriteRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** The material used to render the particle. Note that it must have the Use with Niagara Sprites flag checked.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "The material used to render the particle. Note that it must have the Use with Niagara Sprites flag checked." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MICMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MICMaterial = { "MICMaterial", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MICMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MICMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MICMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SourceMode_MetaData)) }; // 919437016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding = { "MaterialUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaterialUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding_MetaData)) }; // 1724214256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Imagine the particle texture having an arrow pointing up, these modes define how the particle aligns that texture to other particle attributes.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Imagine the particle texture having an arrow pointing up, these modes define how the particle aligns that texture to other particle attributes." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, Alignment), Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_MetaData)) }; // 225684679
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** Determines how the particle billboard orients itself relative to the camera.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Determines how the particle billboard orients itself relative to the camera." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_MetaData)) }; // 1009801055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/**\n\x09 * Determines the location of the pivot point of this particle. It follows Unreal's UV space, which has the upper left of the image at 0,0 and bottom right at 1,1. The middle is at 0.5, 0.5.\n\x09 * NOTE: This value is ignored if \"Pivot Offset Binding\" is bound to a valid attribute\n\x09 */" },
		{ "DisplayName", "Default Pivot in UV Space" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Determines the location of the pivot point of this particle. It follows Unreal's UV space, which has the upper left of the image at 0,0 and bottom right at 1,1. The middle is at 0.5, 0.5.\nNOTE: This value is ignored if \"Pivot Offset Binding\" is bound to a valid attribute" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace = { "PivotInUVSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PivotInUVSpace), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MacroUVRadius_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** World space radius that UVs generated with the ParticleMacroUV material node will tile based on. */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MacroUVRadius = { "MacroUVRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MacroUVRadius), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MacroUVRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MacroUVRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Determines how we sort the particles prior to rendering.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Determines how we sort the particles prior to rendering." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SortMode), Z_Construct_UEnum_Niagara_ENiagaraSortMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_MetaData)) }; // 527975467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y.*/" },
		{ "DisplayAfter", "bSubImageBlend" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SubImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor.*/" },
		{ "DisplayName", "Sub UV Blending Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bSubImageBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend = { "bSubImageBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "DisplayName", "Remove HMD Roll" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bRemoveHMDRollInVR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR = { "bRemoveHMDRollInVR", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** If true, the particles are only sorted when using a translucent material. */" },
		{ "EditCondition", "SortMode != ENiagaraSortMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If true, the particles are only sorted when using a translucent material." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bSortOnlyWhenTranslucent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent = { "bSortOnlyWhenTranslucent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortPrecision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortPrecision_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Sort precision to use when sorting is active. */" },
		{ "EditCondition", "SortMode != ENiagaraSortMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Sort precision to use when sorting is active." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortPrecision = { "SortPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SortPrecision), Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortPrecision_MetaData)) }; // 2353398334
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_GpuTranslucentLatency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_GpuTranslucentLatency_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/**\n\x09Gpu simulations run at different points in the frame depending on what features are used, i.e. depth buffer, distance fields, etc.\n\x09Opaque materials will run latent when these features are used.\n\x09Translucent materials can choose if they want to use this frames or the previous frames data to match opaque draws.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Gpu simulations run at different points in the frame depending on what features are used, i.e. depth buffer, distance fields, etc.\nOpaque materials will run latent when these features are used.\nTranslucent materials can choose if they want to use this frames or the previous frames data to match opaque draws." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_GpuTranslucentLatency = { "GpuTranslucentLatency", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, GpuTranslucentLatency), Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_GpuTranslucentLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_GpuTranslucentLatency_MetaData)) }; // 1258925171
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageMode_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/**\n\x09This setting controls what happens when a sprite becomes less than a pixel in size.\n\x09""Disabling will apply nothing and can result in flickering issues, especially with Temporal Super Resolution.\n\x09""Automatic will enable the appropriate settings when the material blend mode is some form of translucency, project setting must also be enabled.\n\x09When coverage is less than a pixel, we also calculate a percentage of coverage, and then darken or reduce opacity\n\x09to visually compensate.\x09The different enabled settings allow you to control how the coverage amount is applied to\n\x09your particle color.  If particle color is not connected to your material the compensation will not be applied.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "This setting controls what happens when a sprite becomes less than a pixel in size.\nDisabling will apply nothing and can result in flickering issues, especially with Temporal Super Resolution.\nAutomatic will enable the appropriate settings when the material blend mode is some form of translucency, project setting must also be enabled.\nWhen coverage is less than a pixel, we also calculate a percentage of coverage, and then darken or reduce opacity\nto visually compensate. The different enabled settings allow you to control how the coverage amount is applied to\nyour particle color.  If particle color is not connected to your material the compensation will not be applied." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageMode = { "PixelCoverageMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PixelCoverageMode), Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageMode_MetaData)) }; // 3324463156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageBlend_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/**\n\x09When pixel coverage is enabled this allows you to control the blend of the pixel coverage color adjustment.\n\x09i.e. 1.0 = full, 0.5 = 50/50 blend, 0.0 = none\n\x09*/" },
		{ "EditCondition", "PixelCoverageMode != ENiagaraRendererPixelCoverageMode::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "When pixel coverage is enabled this allows you to control the blend of the pixel coverage color adjustment.\ni.e. 1.0 = full, 0.5 = 50/50 blend, 0.0 = none" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageBlend = { "PixelCoverageBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PixelCoverageBlend), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera plane. */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera plane." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Sprite Rendering" },
		{ "Comment", "/** When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera position */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera position" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** Enables frustum culling of individual sprites */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Enables frustum culling of individual sprites" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bEnableCameraDistanceCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling = { "bEnableCameraDistanceCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MinCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinCameraDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaxCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, RendererVisibility), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite rotation (in degrees) when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite rotation (in degrees) when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding = { "SpriteRotationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteRotationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite size when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite size when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding = { "SpriteSizeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteSizeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite facing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite facing when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding = { "SpriteFacingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteFacingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite alignment when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite alignment when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding = { "SpriteAlignmentBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite sub-image indexing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite sub-image indexing when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding = { "SubImageIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, SubImageIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for camera offset when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for camera offset when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding = { "CameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, CameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for UV scale when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for UV scale when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding = { "UVScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, UVScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotOffsetBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for pivot offset? (NOTE: Values are expected to be in UV space). */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for pivot offset? (NOTE: Values are expected to be in UV space)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotOffsetBinding = { "PivotOffsetBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PivotOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotOffsetBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for material randoms when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for material randoms when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for custom sorting? Defaults to Particles.NormalizedAge. */" },
		{ "EditCondition", "SourceMode != ENiagaraRendererSourceDataMode::Emitter" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for custom sorting? Defaults to Particles.NormalizedAge." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding = { "CustomSortingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, CustomSortingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for Normalized Age? */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for Normalized Age?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for RendererVisibilityTag? */" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for RendererVisibilityTag?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameters_MetaData)) }; // 2971467554
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, METADATA_PARAMS(nullptr, 0) }; // 3175080182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameterBindings = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, MaterialParameterBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData)) }; // 3175080182
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData[] = {
		{ "Comment", "// The following bindings are only needed for accurate motion vectors\n" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "The following bindings are only needed for accurate motion vectors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPositionBinding = { "PrevPositionBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevPositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevVelocityBinding = { "PrevVelocityBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevVelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteRotationBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteRotationBinding = { "PrevSpriteRotationBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevSpriteRotationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteRotationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteRotationBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteSizeBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteSizeBinding = { "PrevSpriteSizeBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevSpriteSizeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteSizeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteSizeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteFacingBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteFacingBinding = { "PrevSpriteFacingBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevSpriteFacingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteFacingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteFacingBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteAlignmentBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteAlignmentBinding = { "PrevSpriteAlignmentBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevSpriteAlignmentBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteAlignmentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteAlignmentBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevCameraOffsetBinding = { "PrevCameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevCameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPivotOffsetBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPivotOffsetBinding = { "PrevPivotOffsetBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, PrevPivotOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPivotOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPivotOffsetBinding_MetaData)) }; // 2514448469
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/** Use the cutout texture from the material opacity mask, or if none exist, from the material opacity.\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Use the cutout texture from the material opacity mask, or if none exist, from the material opacity." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_SetBit(void* Obj)
	{
		((UNiagaraSpriteRendererProperties*)Obj)->bUseMaterialCutoutTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture = { "bUseMaterialCutoutTexture", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSpriteRendererProperties), &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/** Texture to generate bounding geometry from.\x09*/" },
		{ "EditCondition", "!bUseMaterialCutoutTexture" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Texture to generate bounding geometry from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture = { "CutoutTexture", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, CutoutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/**\n\x09* More bounding vertices results in reduced overdraw, but adds more triangle overhead.\n\x09* The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\n\x09* and when the particles using the texture will be few and large.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode = { "BoundingMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode_MetaData)) }; // 1272199695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode_MetaData[] = {
		{ "Category", "Cutout" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode = { "OpacitySourceMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode_MetaData)) }; // 4187087167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "Cutout" },
		{ "Comment", "/**\n\x09* Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\n\x09* Raising this threshold slightly can reduce overdraw in particles using this animation asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSpriteRendererProperties.h" },
		{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSpriteRendererProperties, AlphaThreshold), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Material,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MICMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialUserParamBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_Alignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_FacingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotInUVSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MacroUVRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortPrecision_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SortPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_GpuTranslucentLatency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_GpuTranslucentLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PixelCoverageBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxFacingCameraBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MinCameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaxCameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PositionBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_ColorBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_VelocityBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteRotationBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteSizeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteFacingBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SpriteAlignmentBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_SubImageIndexBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterialBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CameraOffsetBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_UVScaleBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PivotOffsetBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialRandomBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CustomSortingBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_NormalizedAgeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_MaterialParameterBindings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPositionBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevVelocityBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteRotationBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteSizeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteFacingBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevSpriteAlignmentBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevCameraOffsetBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_PrevPivotOffsetBinding,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bUseMaterialCutoutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_CutoutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_BoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_OpacitySourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_AlphaThreshold,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSpriteRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::ClassParams = {
		&UNiagaraSpriteRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSpriteRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSpriteRendererProperties>()
	{
		return UNiagaraSpriteRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSpriteRendererProperties);
	UNiagaraSpriteRendererProperties::~UNiagaraSpriteRendererProperties() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UNiagaraSpriteRendererProperties)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_Statics::EnumInfo[] = {
		{ ENiagaraSpriteAlignment_StaticEnum, TEXT("ENiagaraSpriteAlignment"), &Z_Registration_Info_UEnum_ENiagaraSpriteAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 225684679U) },
		{ ENiagaraSpriteFacingMode_StaticEnum, TEXT("ENiagaraSpriteFacingMode"), &Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1009801055U) },
		{ ENiagaraRendererPixelCoverageMode_StaticEnum, TEXT("ENiagaraRendererPixelCoverageMode"), &Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3324463156U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSpriteRendererProperties, UNiagaraSpriteRendererProperties::StaticClass, TEXT("UNiagaraSpriteRendererProperties"), &Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSpriteRendererProperties), 322316783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_3654899442(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
