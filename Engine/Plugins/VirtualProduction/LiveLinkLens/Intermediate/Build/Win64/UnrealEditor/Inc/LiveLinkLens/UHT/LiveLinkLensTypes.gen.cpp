// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkLensTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLensTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData();
	LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData();
	LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensFrameData();
	LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensStaticData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkLens();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkLensStaticData>() == std::is_polymorphic<FLiveLinkCameraStaticData>(), "USTRUCT FLiveLinkLensStaticData cannot be polymorphic unless super FLiveLinkCameraStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData;
class UScriptStruct* FLiveLinkLensStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLensStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkLens(), TEXT("LiveLinkLensStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData.OuterSingleton;
}
template<> LIVELINKLENS_API UScriptStruct* StaticStruct<FLiveLinkLensStaticData>()
{
	return FLiveLinkLensStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LensModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for static lens data\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Struct for static lens data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLensStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::NewProp_LensModel_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Specifies the type/character of the lens (spherical, anamorphic, etc.) */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Specifies the type/character of the lens (spherical, anamorphic, etc.)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::NewProp_LensModel = { "LensModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLensStaticData, LensModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::NewProp_LensModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::NewProp_LensModel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::NewProp_LensModel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkLens,
		Z_Construct_UScriptStruct_FLiveLinkCameraStaticData,
		&NewStructOps,
		"LiveLinkLensStaticData",
		sizeof(FLiveLinkLensStaticData),
		alignof(FLiveLinkLensStaticData),
		Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkLensFrameData>() == std::is_polymorphic<FLiveLinkCameraFrameData>(), "USTRUCT FLiveLinkLensFrameData cannot be polymorphic unless super FLiveLinkCameraFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData;
class UScriptStruct* FLiveLinkLensFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLensFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkLens(), TEXT("LiveLinkLensFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData.OuterSingleton;
}
template<> LIVELINKLENS_API UScriptStruct* StaticStruct<FLiveLinkLensFrameData>()
{
	return FLiveLinkLensFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortionParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DistortionParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FxFy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FxFy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrincipalPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for dynamic (per-frame) lens data\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Struct for dynamic (per-frame) lens data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLensFrameData>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_DistortionParameters_Inner = { "DistortionParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_DistortionParameters_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Parameters used by the distortion model */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Parameters used by the distortion model" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_DistortionParameters = { "DistortionParameters", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLensFrameData, DistortionParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_DistortionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_DistortionParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_FxFy_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Normalized focal length used by the distortion model */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Normalized focal length used by the distortion model" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_FxFy = { "FxFy", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLensFrameData, FxFy), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_FxFy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_FxFy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_PrincipalPoint_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Normalized center of the image, in the range [0.0f, 1.0f] */" },
		{ "DisplayName", "Image Center" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Normalized center of the image, in the range [0.0f, 1.0f]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_PrincipalPoint = { "PrincipalPoint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLensFrameData, PrincipalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_PrincipalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_PrincipalPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_DistortionParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_DistortionParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_FxFy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewProp_PrincipalPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkLens,
		Z_Construct_UScriptStruct_FLiveLinkCameraFrameData,
		&NewStructOps,
		"LiveLinkLensFrameData",
		sizeof(FLiveLinkLensFrameData),
		alignof(FLiveLinkLensFrameData),
		Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkLensBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkLensBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData;
class UScriptStruct* FLiveLinkLensBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkLens(), TEXT("LiveLinkLensBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData.OuterSingleton;
}
template<> LIVELINKLENS_API UScriptStruct* StaticStruct<FLiveLinkLensBlueprintData>()
{
	return FLiveLinkLensBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle lens data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Facility structure to handle lens data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLensBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Static data that should not change every frame */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLensBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkLensStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_StaticData_MetaData)) }; // 1034723151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Dynamic data that can change every frame  */" },
		{ "ModuleRelativePath", "Public/LiveLinkLensTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLensBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkLensFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_FrameData_MetaData)) }; // 1815031050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_StaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewProp_FrameData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkLens,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkLensBlueprintData",
		sizeof(FLiveLinkLensBlueprintData),
		alignof(FLiveLinkLensBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkLensStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLensStaticData_Statics::NewStructOps, TEXT("LiveLinkLensStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkLensStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLensStaticData), 1034723151U) },
		{ FLiveLinkLensFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLensFrameData_Statics::NewStructOps, TEXT("LiveLinkLensFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkLensFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLensFrameData), 1815031050U) },
		{ FLiveLinkLensBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData_Statics::NewStructOps, TEXT("LiveLinkLensBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkLensBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLensBlueprintData), 3418479541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensTypes_h_3254908738(TEXT("/Script/LiveLinkLens"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
