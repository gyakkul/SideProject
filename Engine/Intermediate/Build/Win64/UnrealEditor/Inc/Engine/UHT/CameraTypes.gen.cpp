// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraProjectionMode;
	static UEnum* ECameraProjectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraProjectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraProjectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraProjectionMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraProjectionMode"));
		}
		return Z_Registration_Info_UEnum_ECameraProjectionMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraProjectionMode::Type>()
	{
		return ECameraProjectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enumerators[] = {
		{ "ECameraProjectionMode::Perspective", (int64)ECameraProjectionMode::Perspective },
		{ "ECameraProjectionMode::Orthographic", (int64)ECameraProjectionMode::Orthographic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//@TODO: Document\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "Orthographic.Name", "ECameraProjectionMode::Orthographic" },
		{ "Perspective.Name", "ECameraProjectionMode::Perspective" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECameraProjectionMode",
		"ECameraProjectionMode::Type",
		Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode()
	{
		if (!Z_Registration_Info_UEnum_ECameraProjectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraProjectionMode.InnerSingleton, Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraProjectionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakePlaySpace;
	static UEnum* ECameraShakePlaySpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakePlaySpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraShakePlaySpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakePlaySpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakePlaySpace"));
		}
		return Z_Registration_Info_UEnum_ECameraShakePlaySpace.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakePlaySpace>()
	{
		return ECameraShakePlaySpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enumerators[] = {
		{ "ECameraShakePlaySpace::CameraLocal", (int64)ECameraShakePlaySpace::CameraLocal },
		{ "ECameraShakePlaySpace::World", (int64)ECameraShakePlaySpace::World },
		{ "ECameraShakePlaySpace::UserDefined", (int64)ECameraShakePlaySpace::UserDefined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enum_MetaDataParams[] = {
		{ "CameraLocal.Comment", "/** This anim is applied in camera space. */" },
		{ "CameraLocal.Name", "ECameraShakePlaySpace::CameraLocal" },
		{ "CameraLocal.ToolTip", "This anim is applied in camera space." },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "UserDefined.Comment", "/** This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix). */" },
		{ "UserDefined.Name", "ECameraShakePlaySpace::UserDefined" },
		{ "UserDefined.ToolTip", "This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix)." },
		{ "World.Comment", "/** This anim is applied in world space. */" },
		{ "World.Name", "ECameraShakePlaySpace::World" },
		{ "World.ToolTip", "This anim is applied in world space." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECameraShakePlaySpace",
		"ECameraShakePlaySpace",
		Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakePlaySpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakePlaySpace.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraShakePlaySpace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalViewInfo;
class UScriptStruct* FMinimalViewInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalViewInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalViewInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalViewInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MinimalViewInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalViewInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMinimalViewInfo>()
{
	return FMinimalViewInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMinimalViewInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerspectiveNearClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerspectiveNearClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[];
#endif
		static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[];
#endif
		static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffCenterProjectionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffCenterProjectionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalViewInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Location */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Rotation */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The horizontal field of view (in degrees) in perspective mode (ignored in orthographic mode). */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The horizontal field of view (in degrees) in perspective mode (ignored in orthographic mode)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV_MetaData[] = {
		{ "Comment", "/** The originally desired horizontal field of view before any adjustments to account for different aspect ratios */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The originally desired horizontal field of view before any adjustments to account for different aspect ratios" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV = { "DesiredFOV", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, DesiredFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OrthoWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The near plane distance of the orthographic view (in world units) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OrthoNearClipPlane), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The far plane distance of the orthographic view (in world units) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OrthoFarClipPlane), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PerspectiveNearClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The near plane distance of the perspective view (in world units). Set to a negative value to use the default global value of GNearClippingPlane */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The near plane distance of the perspective view (in world units). Set to a negative value to use the default global value of GNearClippingPlane" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PerspectiveNearClipPlane = { "PerspectiveNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, PerspectiveNearClipPlane), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PerspectiveNearClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PerspectiveNearClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Aspect Ratio (Width/Height)\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Aspect Ratio (Width/Height)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
	{
		((FMinimalViewInfo*)Obj)->bConstrainAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "// If true, account for the field of view angle when computing which level of detail to use for meshes.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
	{
		((FMinimalViewInfo*)Obj)->bUseFieldOfViewForLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The type of camera\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The type of camera" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode_MetaData)) }; // 2603946863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Indicates if PostProcessSettings should be applied. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Indicates if PostProcessSettings should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Post-process settings to use if PostProcessBlendWeight is non-zero. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Post-process settings to use if PostProcessBlendWeight is non-zero." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Off-axis / off-center projection offset as proportion of screen dimensions */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Off-axis / off-center projection offset as proportion of screen dimensions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000000022805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PerspectiveNearClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MinimalViewInfo",
		sizeof(FMinimalViewInfo),
		alignof(FMinimalViewInfo),
		Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MinimalViewInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalViewInfo.InnerSingleton, Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MinimalViewInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::EnumInfo[] = {
		{ ECameraProjectionMode_StaticEnum, TEXT("ECameraProjectionMode"), &Z_Registration_Info_UEnum_ECameraProjectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2603946863U) },
		{ ECameraShakePlaySpace_StaticEnum, TEXT("ECameraShakePlaySpace"), &Z_Registration_Info_UEnum_ECameraShakePlaySpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1413967709U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::ScriptStructInfo[] = {
		{ FMinimalViewInfo::StaticStruct, Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewStructOps, TEXT("MinimalViewInfo"), &Z_Registration_Info_UScriptStruct_MinimalViewInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalViewInfo), 1056960465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_639198933(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
