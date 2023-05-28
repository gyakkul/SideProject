// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NearestNeighborModelVizSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearestNeighborModelVizSettings() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelVizSettings();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelVizSettings();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelVizSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModel();
// End Cross Module References
	void UNearestNeighborModelVizSettings::StaticRegisterNativesUNearestNeighborModelVizSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborModelVizSettings);
	UClass* Z_Construct_UClass_UNearestNeighborModelVizSettings_NoRegister()
	{
		return UNearestNeighborModelVizSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearestNeighborActorsOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearestNeighborActorsOffset;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NearestNeighborIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearestNeighborIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NearestNeighborIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModelVizSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The vizualization settings specific to the the vertex delta model.\n */" },
		{ "IncludePath", "NearestNeighborModelVizSettings.h" },
		{ "ModuleRelativePath", "Public/NearestNeighborModelVizSettings.h" },
		{ "ToolTip", "The vizualization settings specific to the the vertex delta model." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborActorsOffset_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ModuleRelativePath", "Public/NearestNeighborModelVizSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborActorsOffset = { "NearestNeighborActorsOffset", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModelVizSettings, NearestNeighborActorsOffset), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborActorsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborActorsOffset_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborIds_Inner = { "NearestNeighborIds", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborIds_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ModuleRelativePath", "Public/NearestNeighborModelVizSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborIds = { "NearestNeighborIds", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModelVizSettings, NearestNeighborIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborActorsOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::NewProp_NearestNeighborIds,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborModelVizSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::ClassParams = {
		&UNearestNeighborModelVizSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborModelVizSettings()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborModelVizSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborModelVizSettings.OuterSingleton, Z_Construct_UClass_UNearestNeighborModelVizSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborModelVizSettings.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborModelVizSettings>()
	{
		return UNearestNeighborModelVizSettings::StaticClass();
	}
	UNearestNeighborModelVizSettings::UNearestNeighborModelVizSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborModelVizSettings);
	UNearestNeighborModelVizSettings::~UNearestNeighborModelVizSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelVizSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelVizSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearestNeighborModelVizSettings, UNearestNeighborModelVizSettings::StaticClass, TEXT("UNearestNeighborModelVizSettings"), &Z_Registration_Info_UClass_UNearestNeighborModelVizSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborModelVizSettings), 760828782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelVizSettings_h_1077388670(TEXT("/Script/NearestNeighborModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelVizSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelVizSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
