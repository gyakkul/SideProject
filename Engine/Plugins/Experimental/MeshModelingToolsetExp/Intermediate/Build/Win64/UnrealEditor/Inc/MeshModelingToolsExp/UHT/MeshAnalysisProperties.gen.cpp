// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Properties/MeshAnalysisProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshAnalysisProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAnalysisProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAnalysisProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMeshAnalysisProperties::StaticRegisterNativesUMeshAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshAnalysisProperties);
	UClass* Z_Construct_UClass_UMeshAnalysisProperties_NoRegister()
	{
		return UMeshAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshAnalysisProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SurfaceArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/MeshAnalysisProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshAnalysisProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "Category", "MeshAnalysis" },
		{ "Comment", "/** In meters squared */" },
		{ "ModuleRelativePath", "Public/Properties/MeshAnalysisProperties.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "In meters squared" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshAnalysisProperties, SurfaceArea), METADATA_PARAMS(Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_SurfaceArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "MeshAnalysis" },
		{ "Comment", "/** In cubic meters */" },
		{ "ModuleRelativePath", "Public/Properties/MeshAnalysisProperties.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "In cubic meters" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshAnalysisProperties, Volume), METADATA_PARAMS(Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_Volume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshAnalysisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_SurfaceArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshAnalysisProperties_Statics::NewProp_Volume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshAnalysisProperties_Statics::ClassParams = {
		&UMeshAnalysisProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshAnalysisProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAnalysisProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshAnalysisProperties.OuterSingleton, Z_Construct_UClass_UMeshAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshAnalysisProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshAnalysisProperties>()
	{
		return UMeshAnalysisProperties::StaticClass();
	}
	UMeshAnalysisProperties::UMeshAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshAnalysisProperties);
	UMeshAnalysisProperties::~UMeshAnalysisProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshAnalysisProperties, UMeshAnalysisProperties::StaticClass, TEXT("UMeshAnalysisProperties"), &Z_Registration_Info_UClass_UMeshAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshAnalysisProperties), 2271582724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_2817668838(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshAnalysisProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
