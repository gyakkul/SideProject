// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphModelVizSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphModelVizSettings() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelVizSettings();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	void UNeuralMorphModelVizSettings::StaticRegisterNativesUNeuralMorphModelVizSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphModelVizSettings);
	UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings_NoRegister()
	{
		return UNeuralMorphModelVizSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModelVizSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The vizualization settings specific to this model.\n * Even if we have no new properties compared to the morph model, we still need to\n * create this class in order to propertly register a detail customization for it in our editor module.\n */" },
		{ "IncludePath", "NeuralMorphModelVizSettings.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphModelVizSettings.h" },
		{ "ToolTip", "The vizualization settings specific to this model.\nEven if we have no new properties compared to the morph model, we still need to\ncreate this class in order to propertly register a detail customization for it in our editor module." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphModelVizSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::ClassParams = {
		&UNeuralMorphModelVizSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphModelVizSettings()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphModelVizSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphModelVizSettings.OuterSingleton, Z_Construct_UClass_UNeuralMorphModelVizSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphModelVizSettings.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphModelVizSettings>()
	{
		return UNeuralMorphModelVizSettings::StaticClass();
	}
	UNeuralMorphModelVizSettings::UNeuralMorphModelVizSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphModelVizSettings);
	UNeuralMorphModelVizSettings::~UNeuralMorphModelVizSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMorphModelVizSettings, UNeuralMorphModelVizSettings::StaticClass, TEXT("UNeuralMorphModelVizSettings"), &Z_Registration_Info_UClass_UNeuralMorphModelVizSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphModelVizSettings), 276959618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_3698793432(TEXT("/Script/NeuralMorphModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelVizSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
