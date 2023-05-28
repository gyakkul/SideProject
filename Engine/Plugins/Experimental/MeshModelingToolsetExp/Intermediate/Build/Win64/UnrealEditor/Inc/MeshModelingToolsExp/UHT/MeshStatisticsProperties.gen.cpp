// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Properties/MeshStatisticsProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshStatisticsProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMeshStatisticsProperties::StaticRegisterNativesUMeshStatisticsProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshStatisticsProperties);
	UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister()
	{
		return UMeshStatisticsProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshStatisticsProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshStatisticsProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshStatisticsProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/MeshStatisticsProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "MeshStatistics" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshStatisticsProperties, Mesh), METADATA_PARAMS(Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_UV_MetaData[] = {
		{ "Category", "MeshStatistics" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshStatisticsProperties, UV), METADATA_PARAMS(Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_UV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "MeshStatistics" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshStatisticsProperties, Attributes), METADATA_PARAMS(Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Attributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshStatisticsProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Attributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshStatisticsProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshStatisticsProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::ClassParams = {
		&UMeshStatisticsProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshStatisticsProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshStatisticsProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshStatisticsProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshStatisticsProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshStatisticsProperties.OuterSingleton, Z_Construct_UClass_UMeshStatisticsProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshStatisticsProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshStatisticsProperties>()
	{
		return UMeshStatisticsProperties::StaticClass();
	}
	UMeshStatisticsProperties::UMeshStatisticsProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshStatisticsProperties);
	UMeshStatisticsProperties::~UMeshStatisticsProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshStatisticsProperties, UMeshStatisticsProperties::StaticClass, TEXT("UMeshStatisticsProperties"), &Z_Registration_Info_UClass_UMeshStatisticsProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshStatisticsProperties), 1658689470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_1139208386(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
