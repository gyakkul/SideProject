// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkCameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCameraTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode;
	static UEnum* ELiveLinkCameraProjectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkCameraProjectionMode"));
		}
		return Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkCameraProjectionMode>()
	{
		return ELiveLinkCameraProjectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enumerators[] = {
		{ "ELiveLinkCameraProjectionMode::Perspective", (int64)ELiveLinkCameraProjectionMode::Perspective },
		{ "ELiveLinkCameraProjectionMode::Orthographic", (int64)ELiveLinkCameraProjectionMode::Orthographic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "Orthographic.Name", "ELiveLinkCameraProjectionMode::Orthographic" },
		{ "Perspective.Name", "ELiveLinkCameraProjectionMode::Perspective" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		"ELiveLinkCameraProjectionMode",
		"ELiveLinkCameraProjectionMode",
		Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton, Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkCameraStaticData>() == std::is_polymorphic<FLiveLinkTransformStaticData>(), "USTRUCT FLiveLinkCameraStaticData cannot be polymorphic unless super FLiveLinkTransformStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData;
class UScriptStruct* FLiveLinkCameraStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraStaticData>()
{
	return FLiveLinkCameraStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFieldOfViewSupported_MetaData[];
#endif
		static void NewProp_bIsFieldOfViewSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFieldOfViewSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAspectRatioSupported_MetaData[];
#endif
		static void NewProp_bIsAspectRatioSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAspectRatioSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocalLengthSupported_MetaData[];
#endif
		static void NewProp_bIsFocalLengthSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocalLengthSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsProjectionModeSupported_MetaData[];
#endif
		static void NewProp_bIsProjectionModeSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProjectionModeSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmBackWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmBackWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmBackHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmBackHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsApertureSupported_MetaData[];
#endif
		static void NewProp_bIsApertureSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsApertureSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusDistanceSupported_MetaData[];
#endif
		static void NewProp_bIsFocusDistanceSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusDistanceSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDepthOfFieldSupported_MetaData[];
#endif
		static void NewProp_bIsDepthOfFieldSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDepthOfFieldSupported;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Camera data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Static data for Camera data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FieldOfView in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FieldOfView in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsFieldOfViewSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported = { "bIsFieldOfViewSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether AspectRatio in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether AspectRatio in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsAspectRatioSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported = { "bIsAspectRatioSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FocalLength in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FocalLength in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsFocalLengthSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported = { "bIsFocalLengthSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether ProjectionMode in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether ProjectionMode in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsProjectionModeSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported = { "bIsProjectionModeSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Used with CinematicCamera. Values greater than 0 will be applied\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Used with CinematicCamera. Values greater than 0 will be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth = { "FilmBackWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraStaticData, FilmBackWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Used with CinematicCamera. Values greater than 0 will be applied\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Used with CinematicCamera. Values greater than 0 will be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight = { "FilmBackHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraStaticData, FilmBackHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether Aperture in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether Aperture in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsApertureSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported = { "bIsApertureSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FocusDistance in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FocusDistance in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsFocusDistanceSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported = { "bIsFocusDistanceSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Set to false to force the camera to disable depth of field\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Set to false to force the camera to disable depth of field" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsDepthOfFieldSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported = { "bIsDepthOfFieldSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,
		&NewStructOps,
		"LiveLinkCameraStaticData",
		sizeof(FLiveLinkCameraStaticData),
		alignof(FLiveLinkCameraStaticData),
		Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkCameraFrameData>() == std::is_polymorphic<FLiveLinkTransformFrameData>(), "USTRUCT FLiveLinkCameraFrameData cannot be polymorphic unless super FLiveLinkTransformFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData;
class UScriptStruct* FLiveLinkCameraFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraFrameData>()
{
	return FLiveLinkCameraFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Aperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for camera \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Dynamic data for camera" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Field of View of the camera in degrees\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Field of View of the camera in degrees" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraFrameData, FieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Aspect Ratio of the camera (Width / Heigth)\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Aspect Ratio of the camera (Width / Heigth)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraFrameData, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Focal length of the camera\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Focal length of the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraFrameData, FocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Aperture of the camera in terms of f-stop\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Aperture of the camera in terms of f-stop" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraFrameData, Aperture), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Focus distance of the camera in cm. Works only in manual focus method\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Focus distance of the camera in cm. Works only in manual focus method" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraFrameData, FocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// ProjectionMode of the camera (Perspective, Orthographic, etc...)\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "ProjectionMode of the camera (Perspective, Orthographic, etc...)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraFrameData, ProjectionMode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_MetaData)) }; // 143195327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,
		&NewStructOps,
		"LiveLinkCameraFrameData",
		sizeof(FLiveLinkCameraFrameData),
		alignof(FLiveLinkCameraFrameData),
		Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkCameraBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkCameraBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData;
class UScriptStruct* FLiveLinkCameraBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraBlueprintData>()
{
	return FLiveLinkCameraBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle camera data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Facility structure to handle camera data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkCameraStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData_MetaData)) }; // 298728244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCameraBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkCameraFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData_MetaData)) }; // 781800353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkCameraBlueprintData",
		sizeof(FLiveLinkCameraBlueprintData),
		alignof(FLiveLinkCameraBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::EnumInfo[] = {
		{ ELiveLinkCameraProjectionMode_StaticEnum, TEXT("ELiveLinkCameraProjectionMode"), &Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 143195327U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkCameraStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewStructOps, TEXT("LiveLinkCameraStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkCameraStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCameraStaticData), 298728244U) },
		{ FLiveLinkCameraFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewStructOps, TEXT("LiveLinkCameraFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkCameraFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCameraFrameData), 781800353U) },
		{ FLiveLinkCameraBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewStructOps, TEXT("LiveLinkCameraBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkCameraBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCameraBlueprintData), 3001212355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_486481335(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
