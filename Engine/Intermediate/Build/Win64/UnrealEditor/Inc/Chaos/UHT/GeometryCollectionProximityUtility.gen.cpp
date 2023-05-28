// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionProximityUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionProximityUtility() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityContactMethod();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityMethod();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProximityMethod;
	static UEnum* EProximityMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProximityMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProximityMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EProximityMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EProximityMethod"));
		}
		return Z_Registration_Info_UEnum_EProximityMethod.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EProximityMethod>()
	{
		return EProximityMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EProximityMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enumerators[] = {
		{ "EProximityMethod::Precise", (int64)EProximityMethod::Precise },
		{ "EProximityMethod::ConvexHull", (int64)EProximityMethod::ConvexHull },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enum_MetaDataParams[] = {
		{ "ConvexHull.Comment", "// Convex Hull proximity mode looks for geometry with overlapping convex hulls (with an optional offset)\n" },
		{ "ConvexHull.Name", "EProximityMethod::ConvexHull" },
		{ "ConvexHull.ToolTip", "Convex Hull proximity mode looks for geometry with overlapping convex hulls (with an optional offset)" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionProximityUtility.h" },
		{ "Precise.Comment", "// Precise proximity mode looks for geometry with touching vertices or touching, coplanar, opposite-facing triangles. This works well with geometry fractured using our fracture tools.\n" },
		{ "Precise.Name", "EProximityMethod::Precise" },
		{ "Precise.ToolTip", "Precise proximity mode looks for geometry with touching vertices or touching, coplanar, opposite-facing triangles. This works well with geometry fractured using our fracture tools." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EProximityMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EProximityMethod",
		"EProximityMethod",
		Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EProximityMethod()
	{
		if (!Z_Registration_Info_UEnum_EProximityMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProximityMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EProximityMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProximityMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProximityContactMethod;
	static UEnum* EProximityContactMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProximityContactMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProximityContactMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EProximityContactMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EProximityContactMethod"));
		}
		return Z_Registration_Info_UEnum_EProximityContactMethod.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EProximityContactMethod>()
	{
		return EProximityContactMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enumerators[] = {
		{ "EProximityContactMethod::MinOverlapInProjectionToMajorAxes", (int64)EProximityContactMethod::MinOverlapInProjectionToMajorAxes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enum_MetaDataParams[] = {
		{ "MinOverlapInProjectionToMajorAxes.Comment", "// Rejects proximity if the bounding boxes do not overlap by more than this many centimeters in any major axis direction. This can filter out corner connections of box-like shapes.\n" },
		{ "MinOverlapInProjectionToMajorAxes.Name", "EProximityContactMethod::MinOverlapInProjectionToMajorAxes" },
		{ "MinOverlapInProjectionToMajorAxes.ToolTip", "Rejects proximity if the bounding boxes do not overlap by more than this many centimeters in any major axis direction. This can filter out corner connections of box-like shapes." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionProximityUtility.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EProximityContactMethod",
		"EProximityContactMethod",
		Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EProximityContactMethod()
	{
		if (!Z_Registration_Info_UEnum_EProximityContactMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProximityContactMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProximityContactMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_Statics::EnumInfo[] = {
		{ EProximityMethod_StaticEnum, TEXT("EProximityMethod"), &Z_Registration_Info_UEnum_EProximityMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2310855953U) },
		{ EProximityContactMethod_StaticEnum, TEXT("EProximityContactMethod"), &Z_Registration_Info_UEnum_EProximityContactMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 370826576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_1521869239(TEXT("/Script/Chaos"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
