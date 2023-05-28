// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StageAppRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageAppRequest() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EPICSTAGEAPP_API UEnum* Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType();
	EPICSTAGEAPP_API UEnum* Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings();
	UPackage* Z_Construct_UPackage__Script_EpicStageApp();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCRequest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType;
	static UEnum* ERCWebSocketNDisplayPreviewRenderType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("ERCWebSocketNDisplayPreviewRenderType"));
		}
		return Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType.OuterSingleton;
	}
	template<> EPICSTAGEAPP_API UEnum* StaticEnum<ERCWebSocketNDisplayPreviewRenderType>()
	{
		return ERCWebSocketNDisplayPreviewRenderType_StaticEnum();
	}
	struct Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::Enumerators[] = {
		{ "ERCWebSocketNDisplayPreviewRenderType::Color", (int64)ERCWebSocketNDisplayPreviewRenderType::Color },
		{ "ERCWebSocketNDisplayPreviewRenderType::Normals", (int64)ERCWebSocketNDisplayPreviewRenderType::Normals },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::Enum_MetaDataParams[] = {
		{ "Color.Name", "ERCWebSocketNDisplayPreviewRenderType::Color" },
		{ "Comment", "/** Type of preview render to perform, exposed as a UENUM. Corresponds to EDisplayClusterMeshProjectionOutput. */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "Normals.Name", "ERCWebSocketNDisplayPreviewRenderType::Normals" },
		{ "ToolTip", "Type of preview render to perform, exposed as a UENUM. Corresponds to EDisplayClusterMeshProjectionOutput." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		"ERCWebSocketNDisplayPreviewRenderType",
		"ERCWebSocketNDisplayPreviewRenderType",
		Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType()
	{
		if (!Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType.InnerSingleton, Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType;
	static UEnum* ERCWebSocketNDisplayPreviewRenderProjectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("ERCWebSocketNDisplayPreviewRenderProjectionType"));
		}
		return Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType.OuterSingleton;
	}
	template<> EPICSTAGEAPP_API UEnum* StaticEnum<ERCWebSocketNDisplayPreviewRenderProjectionType>()
	{
		return ERCWebSocketNDisplayPreviewRenderProjectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::Enumerators[] = {
		{ "ERCWebSocketNDisplayPreviewRenderProjectionType::Perspective", (int64)ERCWebSocketNDisplayPreviewRenderProjectionType::Perspective },
		{ "ERCWebSocketNDisplayPreviewRenderProjectionType::Azimuthal", (int64)ERCWebSocketNDisplayPreviewRenderProjectionType::Azimuthal },
		{ "ERCWebSocketNDisplayPreviewRenderProjectionType::Orthographic", (int64)ERCWebSocketNDisplayPreviewRenderProjectionType::Orthographic },
		{ "ERCWebSocketNDisplayPreviewRenderProjectionType::UV", (int64)ERCWebSocketNDisplayPreviewRenderProjectionType::UV },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::Enum_MetaDataParams[] = {
		{ "Azimuthal.Name", "ERCWebSocketNDisplayPreviewRenderProjectionType::Azimuthal" },
		{ "Comment", "/** Type of projection to use for a preview render, exposed as a UENUM. Corresponds to EDisplayClusterMeshProjectionType. */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "Orthographic.Name", "ERCWebSocketNDisplayPreviewRenderProjectionType::Orthographic" },
		{ "Perspective.Name", "ERCWebSocketNDisplayPreviewRenderProjectionType::Perspective" },
		{ "ToolTip", "Type of projection to use for a preview render, exposed as a UENUM. Corresponds to EDisplayClusterMeshProjectionType." },
		{ "UV.Name", "ERCWebSocketNDisplayPreviewRenderProjectionType::UV" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		"ERCWebSocketNDisplayPreviewRenderProjectionType",
		"ERCWebSocketNDisplayPreviewRenderProjectionType",
		Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType()
	{
		if (!Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType.InnerSingleton, Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings;
class UScriptStruct* FRCWebSocketNDisplayPreviewRendererSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewRendererSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewRendererSettings>()
{
	return FRCWebSocketNDisplayPreviewRendererSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JpegQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JpegQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeActorPositions_MetaData[];
#endif
		static void NewProp_IncludeActorPositions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeActorPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Preview renderer settings exposed to WebSocket clients. */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Preview renderer settings exposed to WebSocket clients." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewRendererSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_RenderType_MetaData[] = {
		{ "Comment", "/**\n\x09 * The type of render to perform.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The type of render to perform." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSettings, RenderType), Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_RenderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_RenderType_MetaData)) }; // 3401112850
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_ProjectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_ProjectionType_MetaData[] = {
		{ "Comment", "/**\n\x09 * The type of projection to use.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The type of projection to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSettings, ProjectionType), Z_Construct_UEnum_EpicStageApp_ERCWebSocketNDisplayPreviewRenderProjectionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_ProjectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_ProjectionType_MetaData)) }; // 2268677309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "Comment", "/**\n\x09 * The resolution of the image to render.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The resolution of the image to render." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSettings, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_FOV_MetaData[] = {
		{ "Comment", "/**\n\x09 * The preview camera's field of view (both horizontal and vertical) in degrees.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The preview camera's field of view (both horizontal and vertical) in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSettings, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/**\n\x09 * The preview camera's Euler rotation relative to the camera's actual rotation in the scene.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The preview camera's Euler rotation relative to the camera's actual rotation in the scene." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_JpegQuality_MetaData[] = {
		{ "Comment", "/**\n\x09 * The quality of the JPEG to send back to the requesting client, in range 50-100.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The quality of the JPEG to send back to the requesting client, in range 50-100." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_JpegQuality = { "JpegQuality", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSettings, JpegQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_JpegQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_JpegQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_IncludeActorPositions_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, include a list of projected positions within the preview render for each rendered actor when responding to a render request.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "If true, include a list of projected positions within the preview render for each rendered actor when responding to a render request." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_IncludeActorPositions_SetBit(void* Obj)
	{
		((FRCWebSocketNDisplayPreviewRendererSettings*)Obj)->IncludeActorPositions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_IncludeActorPositions = { "IncludeActorPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCWebSocketNDisplayPreviewRendererSettings), &Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_IncludeActorPositions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_IncludeActorPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_IncludeActorPositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_RenderType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_RenderType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_ProjectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_ProjectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_JpegQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewProp_IncludeActorPositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewRendererSettings",
		sizeof(FRCWebSocketNDisplayPreviewRendererSettings),
		alignof(FRCWebSocketNDisplayPreviewRendererSettings),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewRendererCreateBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewRendererCreateBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewRendererCreateBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewRendererCreateBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewRendererCreateBody>()
{
	return FRCWebSocketNDisplayPreviewRendererCreateBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActorPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootActorPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to create an nDisplay preview renderer.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to create an nDisplay preview renderer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewRendererCreateBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_RootActorPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path of the root DisplayCluster actor to preview. This may be empty, in which case you can set the root actor later.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The path of the root DisplayCluster actor to preview. This may be empty, in which case you can set the root actor later." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_RootActorPath = { "RootActorPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererCreateBody, RootActorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_RootActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_RootActorPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/**\n\x09 * Initial settings for the renderer.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Initial settings for the renderer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererCreateBody, Settings), Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_Settings_MetaData)) }; // 1441830137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_RootActorPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewRendererCreateBody",
		sizeof(FRCWebSocketNDisplayPreviewRendererCreateBody),
		alignof(FRCWebSocketNDisplayPreviewRendererCreateBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewRendererSetRootBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewRendererSetRootBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewRendererSetRootBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewRendererSetRootBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewRendererSetRootBody>()
{
	return FRCWebSocketNDisplayPreviewRendererSetRootBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActorPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootActorPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to change the root DisplayCluster actor of an nDisplay preview renderer.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to change the root DisplayCluster actor of an nDisplay preview renderer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewRendererSetRootBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the renderer returned when it was created.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the renderer returned when it was created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSetRootBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RendererId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RootActorPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path of the root DisplayCluster actor to preview.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The path of the root DisplayCluster actor to preview." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RootActorPath = { "RootActorPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererSetRootBody, RootActorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RootActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RootActorPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RendererId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewProp_RootActorPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewRendererSetRootBody",
		sizeof(FRCWebSocketNDisplayPreviewRendererSetRootBody),
		alignof(FRCWebSocketNDisplayPreviewRendererSetRootBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewRendererDestroyBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewRendererDestroyBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewRendererDestroyBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewRendererDestroyBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewRendererDestroyBody>()
{
	return FRCWebSocketNDisplayPreviewRendererDestroyBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to destroy an nDisplay preview renderer.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to destroy an nDisplay preview renderer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewRendererDestroyBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the renderer returned when it was created.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the renderer returned when it was created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererDestroyBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::NewProp_RendererId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::NewProp_RendererId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewRendererDestroyBody",
		sizeof(FRCWebSocketNDisplayPreviewRendererDestroyBody),
		alignof(FRCWebSocketNDisplayPreviewRendererDestroyBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewRendererConfigureBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewRendererConfigureBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewRendererConfigureBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewRendererConfigureBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewRendererConfigureBody>()
{
	return FRCWebSocketNDisplayPreviewRendererConfigureBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Change a preview renderer's settings for future renders.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Change a preview renderer's settings for future renders." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewRendererConfigureBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the renderer returned when it was created.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the renderer returned when it was created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererConfigureBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_RendererId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/**\n\x09 * Settings to use for future renders.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Settings to use for future renders." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRendererConfigureBody, Settings), Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_Settings_MetaData)) }; // 1441830137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_RendererId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewRendererConfigureBody",
		sizeof(FRCWebSocketNDisplayPreviewRendererConfigureBody),
		alignof(FRCWebSocketNDisplayPreviewRendererConfigureBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewRenderBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewRenderBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewRenderBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewRenderBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewRenderBody>()
{
	return FRCWebSocketNDisplayPreviewRenderBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to render a preview of a display cluster.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to render a preview of a display cluster." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewRenderBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the renderer returned when it was created.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the renderer returned when it was created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewRenderBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::NewProp_RendererId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::NewProp_RendererId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewRenderBody",
		sizeof(FRCWebSocketNDisplayPreviewRenderBody),
		alignof(FRCWebSocketNDisplayPreviewRenderBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewActorDragBeginBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewActorDragBeginBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewActorDragBeginBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewActorDragBeginBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewActorDragBeginBody>()
{
	return FRCWebSocketNDisplayPreviewActorDragBeginBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryActor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimaryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to start dragging one or more actors.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to start dragging one or more actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewActorDragBeginBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the preview renderer returned when it was created.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the preview renderer returned when it was created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragBeginBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_RendererId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_Actors_MetaData[] = {
		{ "Comment", "/**\n\x09 * Paths of the actors that will be included in this drag action.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Paths of the actors that will be included in this drag action." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragBeginBody, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_PrimaryActor_MetaData[] = {
		{ "Comment", "/**\n\x09 * The actor to use as the origin point for the drag.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The actor to use as the origin point for the drag." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_PrimaryActor = { "PrimaryActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragBeginBody, PrimaryActor), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_PrimaryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_PrimaryActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_SequenceNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The sequence number of this change. The highest sequence number received from this client will be\n\x09 * sent back to the client in future position updates.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The sequence number of this change. The highest sequence number received from this client will be\nsent back to the client in future position updates." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragBeginBody, SequenceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_SequenceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_SequenceNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_RendererId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_PrimaryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewProp_SequenceNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewActorDragBeginBody",
		sizeof(FRCWebSocketNDisplayPreviewActorDragBeginBody),
		alignof(FRCWebSocketNDisplayPreviewActorDragBeginBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewActorDragMoveBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewActorDragMoveBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewActorDragMoveBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewActorDragMoveBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewActorDragMoveBody>()
{
	return FRCWebSocketNDisplayPreviewActorDragMoveBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to move the actors that are currently being dragged for a preview renderer.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to move the actors that are currently being dragged for a preview renderer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewActorDragMoveBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the preview renderer returned when it was created.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the preview renderer returned when it was created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragMoveBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_RendererId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_DragPosition_MetaData[] = {
		{ "Comment", "/**\n\x09 * The position of the drag cursor in coordinates normalized to the size of the preview image.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The position of the drag cursor in coordinates normalized to the size of the preview image." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_DragPosition = { "DragPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragMoveBody, DragPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_DragPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_DragPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_SequenceNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The sequence number of this change. The highest sequence number received from this client will be\n\x09 * sent back to the client in future position updates.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The sequence number of this change. The highest sequence number received from this client will be\nsent back to the client in future position updates." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragMoveBody, SequenceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_SequenceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_SequenceNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_RendererId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_DragPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewProp_SequenceNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewActorDragMoveBody",
		sizeof(FRCWebSocketNDisplayPreviewActorDragMoveBody),
		alignof(FRCWebSocketNDisplayPreviewActorDragMoveBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewActorDragEndBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewActorDragEndBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewActorDragEndBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewActorDragEndBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewActorDragEndBody>()
{
	return FRCWebSocketNDisplayPreviewActorDragEndBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to stop dragging actors for a preview renderer.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to stop dragging actors for a preview renderer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewActorDragEndBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the preview renderer returned when it was created.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the preview renderer returned when it was created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragEndBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_RendererId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_DragPosition_MetaData[] = {
		{ "Comment", "/**\n\x09 * The final position of the drag cursor in coordinates normalized to the size of the preview image.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The final position of the drag cursor in coordinates normalized to the size of the preview image." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_DragPosition = { "DragPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragEndBody, DragPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_DragPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_DragPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_SequenceNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The sequence number of this change. The highest sequence number received from this client will be\n\x09 * sent back to the client in future position updates.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The sequence number of this change. The highest sequence number received from this client will be\nsent back to the client in future position updates." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorDragEndBody, SequenceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_SequenceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_SequenceNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_RendererId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_DragPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewProp_SequenceNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewActorDragEndBody",
		sizeof(FRCWebSocketNDisplayPreviewActorDragEndBody),
		alignof(FRCWebSocketNDisplayPreviewActorDragEndBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayPreviewActorCreateBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayPreviewActorCreateBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody;
class UScriptStruct* FRCWebSocketNDisplayPreviewActorCreateBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayPreviewActorCreateBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayPreviewActorCreateBody>()
{
	return FRCWebSocketNDisplayPreviewActorCreateBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplatePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TemplatePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridePosition_MetaData[];
#endif
		static void NewProp_OverridePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverridePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideColor_MetaData[];
#endif
		static void NewProp_OverrideColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightCardFlag_MetaData[];
#endif
		static void NewProp_bIsLightCardFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightCardFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to create an actor, optionally positioned relative to the previewed area.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to create an actor, optionally positioned relative to the previewed area." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayPreviewActorCreateBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the preview renderer to use when positioning this light card.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The ID of the preview renderer to use when positioning this light card." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorCreateBody, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RendererId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the actor to spawn. A number will be appended if this conflicts with another name.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The name of the actor to spawn. A number will be appended if this conflicts with another name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorCreateBody, ActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the class of the actor to spawn.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The name of the class of the actor to spawn." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorCreateBody, ActorClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_TemplatePath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path of the template to use for the lightcard.\n\x09 * If empty, a lightcard will be created using the default template.\n\x09 * If \"None\", a lightcard will be created with default settings regardless of whether there's a default template.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The path of the template to use for the lightcard.\nIf empty, a lightcard will be created using the default template.\nIf \"None\", a lightcard will be created with default settings regardless of whether there's a default template." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_TemplatePath = { "TemplatePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorCreateBody, TemplatePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_TemplatePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_TemplatePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverridePosition_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, override the default/template position for the lightcard with the provided Position.\n\x09 * Otherwise, use the template's position, or if no template, create at viewport center (0.5, 0.5).\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "If true, override the default/template position for the lightcard with the provided Position.\nOtherwise, use the template's position, or if no template, create at viewport center (0.5, 0.5)." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverridePosition_SetBit(void* Obj)
	{
		((FRCWebSocketNDisplayPreviewActorCreateBody*)Obj)->OverridePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverridePosition = { "OverridePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCWebSocketNDisplayPreviewActorCreateBody), &Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverridePosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverridePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverridePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/**\n\x09 * If OverridePosition is true and PreviewRendererId points to a valid preview renderer, place the\n\x09 * lightcard at this normalized viewport coordinate (in range [0, 1]).\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "If OverridePosition is true and PreviewRendererId points to a valid preview renderer, place the\nlightcard at this normalized viewport coordinate (in range [0, 1])." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorCreateBody, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverrideColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, override the default/template color for the actor if it's a lightcard.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "If true, override the default/template color for the actor if it's a lightcard." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverrideColor_SetBit(void* Obj)
	{
		((FRCWebSocketNDisplayPreviewActorCreateBody*)Obj)->OverrideColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverrideColor = { "OverrideColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCWebSocketNDisplayPreviewActorCreateBody), &Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverrideColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverrideColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Color_MetaData[] = {
		{ "Comment", "/**\n\x09 * If OverrideColor is true and PreviewRendererId points to a valid preview renderer, use this color when creating\n\x09 * a lightcard.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "If OverrideColor is true and PreviewRendererId points to a valid preview renderer, use this color when creating\na lightcard." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorCreateBody, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_bIsLightCardFlag_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether this actor should be created as a flag if it's a lightcard.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Whether this actor should be created as a flag if it's a lightcard." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_bIsLightCardFlag_SetBit(void* Obj)
	{
		((FRCWebSocketNDisplayPreviewActorCreateBody*)Obj)->bIsLightCardFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_bIsLightCardFlag = { "bIsLightCardFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCWebSocketNDisplayPreviewActorCreateBody), &Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_bIsLightCardFlag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_bIsLightCardFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_bIsLightCardFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RequestId_MetaData[] = {
		{ "Comment", "/**\n\x09 * An optional number that will be passed back in the RequestedActorsCreated response to tell apart\n\x09 * the results of multiple requests.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "An optional number that will be passed back in the RequestedActorsCreated response to tell apart\nthe results of multiple requests." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayPreviewActorCreateBody, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RequestId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RendererId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_TemplatePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverridePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_OverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_bIsLightCardFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewProp_RequestId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayPreviewActorCreateBody",
		sizeof(FRCWebSocketNDisplayPreviewActorCreateBody),
		alignof(FRCWebSocketNDisplayPreviewActorCreateBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketNDisplayActorDuplicateBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketNDisplayActorDuplicateBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody;
class UScriptStruct* FRCWebSocketNDisplayActorDuplicateBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCWebSocketNDisplayActorDuplicateBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCWebSocketNDisplayActorDuplicateBody>()
{
	return FRCWebSocketNDisplayActorDuplicateBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to duplicate one or more actors.\n */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to duplicate one or more actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketNDisplayActorDuplicateBody>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_Actors_MetaData[] = {
		{ "Comment", "/**\n\x09 * The list of paths of actors to duplicate.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "The list of paths of actors to duplicate." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayActorDuplicateBody, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_RequestId_MetaData[] = {
		{ "Comment", "/**\n\x09 * An optional number that will be passed back in the RequestedActorsCreated response to tell apart\n\x09 * the results of multiple requests.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppRequest.h" },
		{ "ToolTip", "An optional number that will be passed back in the RequestedActorsCreated response to tell apart\nthe results of multiple requests." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketNDisplayActorDuplicateBody, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_RequestId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewProp_RequestId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketNDisplayActorDuplicateBody",
		sizeof(FRCWebSocketNDisplayActorDuplicateBody),
		alignof(FRCWebSocketNDisplayActorDuplicateBody),
		Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_Statics::EnumInfo[] = {
		{ ERCWebSocketNDisplayPreviewRenderType_StaticEnum, TEXT("ERCWebSocketNDisplayPreviewRenderType"), &Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3401112850U) },
		{ ERCWebSocketNDisplayPreviewRenderProjectionType_StaticEnum, TEXT("ERCWebSocketNDisplayPreviewRenderProjectionType"), &Z_Registration_Info_UEnum_ERCWebSocketNDisplayPreviewRenderProjectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2268677309U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_Statics::ScriptStructInfo[] = {
		{ FRCWebSocketNDisplayPreviewRendererSettings::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewRendererSettings"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewRendererSettings), 1441830137U) },
		{ FRCWebSocketNDisplayPreviewRendererCreateBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewRendererCreateBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererCreateBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewRendererCreateBody), 169811173U) },
		{ FRCWebSocketNDisplayPreviewRendererSetRootBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewRendererSetRootBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererSetRootBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewRendererSetRootBody), 1488621296U) },
		{ FRCWebSocketNDisplayPreviewRendererDestroyBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewRendererDestroyBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererDestroyBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewRendererDestroyBody), 2150187814U) },
		{ FRCWebSocketNDisplayPreviewRendererConfigureBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewRendererConfigureBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRendererConfigureBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewRendererConfigureBody), 794334077U) },
		{ FRCWebSocketNDisplayPreviewRenderBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewRenderBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewRenderBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewRenderBody), 508778164U) },
		{ FRCWebSocketNDisplayPreviewActorDragBeginBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewActorDragBeginBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragBeginBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewActorDragBeginBody), 1334539520U) },
		{ FRCWebSocketNDisplayPreviewActorDragMoveBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewActorDragMoveBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragMoveBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewActorDragMoveBody), 1906680941U) },
		{ FRCWebSocketNDisplayPreviewActorDragEndBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewActorDragEndBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorDragEndBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewActorDragEndBody), 2709934771U) },
		{ FRCWebSocketNDisplayPreviewActorCreateBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayPreviewActorCreateBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayPreviewActorCreateBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayPreviewActorCreateBody), 3968761331U) },
		{ FRCWebSocketNDisplayActorDuplicateBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics::NewStructOps, TEXT("RCWebSocketNDisplayActorDuplicateBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketNDisplayActorDuplicateBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketNDisplayActorDuplicateBody), 2062403787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_3437168806(TEXT("/Script/EpicStageApp"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
