// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexDeltaModelVizSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexDeltaModelVizSettings() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheVizSettings();
	UPackage* Z_Construct_UPackage__Script_VertexDeltaModel();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaModelVizSettings();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaModelVizSettings_NoRegister();
// End Cross Module References
	void UVertexDeltaModelVizSettings::StaticRegisterNativesUVertexDeltaModelVizSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexDeltaModelVizSettings);
	UClass* Z_Construct_UClass_UVertexDeltaModelVizSettings_NoRegister()
	{
		return UVertexDeltaModelVizSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerGeomCacheVizSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The vizualization settings specific to the the vertex delta model.\n * This is inherited from the UMLDeformerGeomCacheVizSettings.\n * We cannot directly use that as we have to register the detail customization using a unique class for our model.\n * This is the reason why we just inherit a new class from it.\n */" },
		{ "IncludePath", "VertexDeltaModelVizSettings.h" },
		{ "ModuleRelativePath", "Public/VertexDeltaModelVizSettings.h" },
		{ "ToolTip", "The vizualization settings specific to the the vertex delta model.\nThis is inherited from the UMLDeformerGeomCacheVizSettings.\nWe cannot directly use that as we have to register the detail customization using a unique class for our model.\nThis is the reason why we just inherit a new class from it." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexDeltaModelVizSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics::ClassParams = {
		&UVertexDeltaModelVizSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexDeltaModelVizSettings()
	{
		if (!Z_Registration_Info_UClass_UVertexDeltaModelVizSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexDeltaModelVizSettings.OuterSingleton, Z_Construct_UClass_UVertexDeltaModelVizSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexDeltaModelVizSettings.OuterSingleton;
	}
	template<> VERTEXDELTAMODEL_API UClass* StaticClass<UVertexDeltaModelVizSettings>()
	{
		return UVertexDeltaModelVizSettings::StaticClass();
	}
	UVertexDeltaModelVizSettings::UVertexDeltaModelVizSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexDeltaModelVizSettings);
	UVertexDeltaModelVizSettings::~UVertexDeltaModelVizSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelVizSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelVizSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexDeltaModelVizSettings, UVertexDeltaModelVizSettings::StaticClass, TEXT("UVertexDeltaModelVizSettings"), &Z_Registration_Info_UClass_UVertexDeltaModelVizSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexDeltaModelVizSettings), 3357906719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelVizSettings_h_544359476(TEXT("/Script/VertexDeltaModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelVizSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelVizSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
