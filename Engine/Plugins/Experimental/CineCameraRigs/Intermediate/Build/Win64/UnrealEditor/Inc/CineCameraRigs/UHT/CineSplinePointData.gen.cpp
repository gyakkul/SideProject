// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineSplinePointData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineSplinePointData() {}
// Cross Module References
	CINECAMERARIGS_API UScriptStruct* Z_Construct_UScriptStruct_FCineSplinePointData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_CineCameraRigs();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CineSplinePointData;
class UScriptStruct* FCineSplinePointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CineSplinePointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CineSplinePointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCineSplinePointData, (UObject*)Z_Construct_UPackage__Script_CineCameraRigs(), TEXT("CineSplinePointData"));
	}
	return Z_Registration_Info_UScriptStruct_CineSplinePointData.OuterSingleton;
}
template<> CINECAMERARIGS_API UScriptStruct* StaticStruct<FCineSplinePointData>()
{
	return FCineSplinePointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCineSplinePointData_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplinePointData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Simple struct to hold spline point data*/" },
		{ "ModuleRelativePath", "Public/CineSplinePointData.h" },
		{ "ToolTip", "Simple struct to hold spline point data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCineSplinePointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "CineSpline" },
		{ "ModuleRelativePath", "Public/CineSplinePointData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplinePointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "CineSpline" },
		{ "ModuleRelativePath", "Public/CineSplinePointData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplinePointData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Category", "CineSpline" },
		{ "ModuleRelativePath", "Public/CineSplinePointData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplinePointData, FocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "CineSpline" },
		{ "ModuleRelativePath", "Public/CineSplinePointData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplinePointData, Aperture), METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Aperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocusDistance_MetaData[] = {
		{ "Category", "CineSpline" },
		{ "ModuleRelativePath", "Public/CineSplinePointData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplinePointData, FocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocusDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCineSplinePointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_Aperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewProp_FocusDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCineSplinePointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
		nullptr,
		&NewStructOps,
		"CineSplinePointData",
		sizeof(FCineSplinePointData),
		alignof(FCineSplinePointData),
		Z_Construct_UScriptStruct_FCineSplinePointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplinePointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCineSplinePointData()
	{
		if (!Z_Registration_Info_UScriptStruct_CineSplinePointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CineSplinePointData.InnerSingleton, Z_Construct_UScriptStruct_FCineSplinePointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CineSplinePointData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplinePointData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplinePointData_h_Statics::ScriptStructInfo[] = {
		{ FCineSplinePointData::StaticStruct, Z_Construct_UScriptStruct_FCineSplinePointData_Statics::NewStructOps, TEXT("CineSplinePointData"), &Z_Registration_Info_UScriptStruct_CineSplinePointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCineSplinePointData), 2297791155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplinePointData_h_456370962(TEXT("/Script/CineCameraRigs"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplinePointData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplinePointData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
