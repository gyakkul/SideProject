// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleARKitCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitCamera() {}
// Cross Module References
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitCamera();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppleARKitCamera;
class UScriptStruct* FAppleARKitCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppleARKitCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppleARKitCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitCamera, (UObject*)Z_Construct_UPackage__Script_AppleARKit(), TEXT("AppleARKitCamera"));
	}
	return Z_Registration_Info_UScriptStruct_AppleARKitCamera.OuterSingleton;
}
template<> APPLEARKIT_API UScriptStruct* StaticStruct<FAppleARKitCamera>()
{
	return FAppleARKitCamera::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAppleARKitCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingQuality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingQualityReason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingQualityReason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingQualityReason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrincipalPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::Struct_MetaDataParams[] = {
		{ "Category", "AppleARKit" },
		{ "Comment", "/**\n * A model representing the camera and its properties at a single point in time.\n */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "A model representing the camera and its properties at a single point in time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleARKitCamera>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQuality_MetaData[] = {
		{ "Comment", "/**\n\x09 * The tracking quality of the camera.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "The tracking quality of the camera." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQuality = { "TrackingQuality", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, TrackingQuality), Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQuality_MetaData)) }; // 3747873437
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQualityReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQualityReason_MetaData[] = {
		{ "Comment", "/**\n\x09 * The reason for the current tracking quality of the camera.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "The reason for the current tracking quality of the camera." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQualityReason = { "TrackingQualityReason", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, TrackingQualityReason), Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQualityReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQualityReason_MetaData)) }; // 3099192326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The transformation matrix that defines the camera's rotation and translation in world coordinates.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "The transformation matrix that defines the camera's rotation and translation in world coordinates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Orientation_MetaData[] = {
		{ "Comment", "/* Raw orientation of the camera */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "Raw orientation of the camera" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Translation_MetaData[] = {
		{ "Comment", "/* Raw position of the camera */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "Raw position of the camera" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_ImageResolution_MetaData[] = {
		{ "Comment", "/**\n\x09 * Camera image resolution in pixels\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "Camera image resolution in pixels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_ImageResolution = { "ImageResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, ImageResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_ImageResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_ImageResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Comment", "/**\n\x09 * Camera focal length in pixels\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "Camera focal length in pixels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, FocalLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_PrincipalPoint_MetaData[] = {
		{ "Comment", "/**\n\x09 * Camera principal point in pixels\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitCamera.h" },
		{ "ToolTip", "Camera principal point in pixels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_PrincipalPoint = { "PrincipalPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitCamera, PrincipalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_PrincipalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_PrincipalPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQualityReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_TrackingQualityReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_ImageResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_FocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewProp_PrincipalPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
		nullptr,
		&NewStructOps,
		"AppleARKitCamera",
		sizeof(FAppleARKitCamera),
		alignof(FAppleARKitCamera),
		Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitCamera()
	{
		if (!Z_Registration_Info_UScriptStruct_AppleARKitCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppleARKitCamera.InnerSingleton, Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AppleARKitCamera.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h_Statics::ScriptStructInfo[] = {
		{ FAppleARKitCamera::StaticStruct, Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewStructOps, TEXT("AppleARKitCamera"), &Z_Registration_Info_UScriptStruct_AppleARKitCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppleARKitCamera), 2797059789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h_3581050967(TEXT("/Script/AppleARKit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
