// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineSplineMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineSplineMetadata() {}
// Cross Module References
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineMetadata();
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineMetadata_NoRegister();
	CINECAMERARIGS_API UScriptStruct* Z_Construct_UScriptStruct_FCineSplineCurveDefaults();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USplineMetadata();
	UPackage* Z_Construct_UPackage__Script_CineCameraRigs();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults;
class UScriptStruct* FCineSplineCurveDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCineSplineCurveDefaults, (UObject*)Z_Construct_UPackage__Script_CineCameraRigs(), TEXT("CineSplineCurveDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults.OuterSingleton;
}
template<> CINECAMERARIGS_API UScriptStruct* StaticStruct<FCineSplineCurveDefaults>()
{
	return FCineSplineCurveDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbsolutePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAbsolutePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPointRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPointRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCineSplineCurveDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAbsolutePosition_MetaData[] = {
		{ "Category", "CineSplineCurveDefaults" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAbsolutePosition = { "DefaultAbsolutePosition", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplineCurveDefaults, DefaultAbsolutePosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAbsolutePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAbsolutePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocalLength_MetaData[] = {
		{ "Category", "CineSplineCurveDefaults" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocalLength = { "DefaultFocalLength", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplineCurveDefaults, DefaultFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAperture_MetaData[] = {
		{ "Category", "CineSplineCurveDefaults" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAperture = { "DefaultAperture", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplineCurveDefaults, DefaultAperture), METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocusDistance_MetaData[] = {
		{ "Category", "CineSplineCurveDefaults" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocusDistance = { "DefaultFocusDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplineCurveDefaults, DefaultFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultPointRotation_MetaData[] = {
		{ "Category", "CineSplineCurveDefaults" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultPointRotation = { "DefaultPointRotation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCineSplineCurveDefaults, DefaultPointRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultPointRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultPointRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAbsolutePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewProp_DefaultPointRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
		nullptr,
		&NewStructOps,
		"CineSplineCurveDefaults",
		sizeof(FCineSplineCurveDefaults),
		alignof(FCineSplineCurveDefaults),
		Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCineSplineCurveDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults.InnerSingleton, Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults.InnerSingleton;
	}
	void UCineSplineMetadata::StaticRegisterNativesUCineSplineMetadata()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineSplineMetadata);
	UClass* Z_Construct_UClass_UCineSplineMetadata_NoRegister()
	{
		return UCineSplineMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UCineSplineMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsolutePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineSplineMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMetadata,
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineMetadata_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CineSplineMetadata.h" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_AbsolutePosition_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_AbsolutePosition = { "AbsolutePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineSplineMetadata, AbsolutePosition), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_AbsolutePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_AbsolutePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineSplineMetadata, FocalLength), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineSplineMetadata, Aperture), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_Aperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocusDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineSplineMetadata, FocusDistance), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_PointRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CineSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_PointRotation = { "PointRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineSplineMetadata, PointRotation), Z_Construct_UScriptStruct_FInterpCurveQuat, METADATA_PARAMS(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_PointRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_PointRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineSplineMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_AbsolutePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_Aperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_FocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineSplineMetadata_Statics::NewProp_PointRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineSplineMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineSplineMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineSplineMetadata_Statics::ClassParams = {
		&UCineSplineMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCineSplineMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadata_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCineSplineMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCineSplineMetadata()
	{
		if (!Z_Registration_Info_UClass_UCineSplineMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineSplineMetadata.OuterSingleton, Z_Construct_UClass_UCineSplineMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineSplineMetadata.OuterSingleton;
	}
	template<> CINECAMERARIGS_API UClass* StaticClass<UCineSplineMetadata>()
	{
		return UCineSplineMetadata::StaticClass();
	}
	UCineSplineMetadata::UCineSplineMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineSplineMetadata);
	UCineSplineMetadata::~UCineSplineMetadata() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_Statics::ScriptStructInfo[] = {
		{ FCineSplineCurveDefaults::StaticStruct, Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics::NewStructOps, TEXT("CineSplineCurveDefaults"), &Z_Registration_Info_UScriptStruct_CineSplineCurveDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCineSplineCurveDefaults), 1560331997U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineSplineMetadata, UCineSplineMetadata::StaticClass, TEXT("UCineSplineMetadata"), &Z_Registration_Info_UClass_UCineSplineMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineSplineMetadata), 1684848677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_2651401982(TEXT("/Script/CineCameraRigs"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
