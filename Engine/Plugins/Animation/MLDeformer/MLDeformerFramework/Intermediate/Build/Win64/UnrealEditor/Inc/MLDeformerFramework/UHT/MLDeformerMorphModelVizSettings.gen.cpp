// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerMorphModelVizSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerMorphModelVizSettings() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheVizSettings();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelVizSettings();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelVizSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerMorphModelVizSettings::StaticRegisterNativesUMLDeformerMorphModelVizSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerMorphModelVizSettings);
	UClass* Z_Construct_UClass_UMLDeformerMorphModelVizSettings_NoRegister()
	{
		return UMLDeformerMorphModelVizSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetDeltaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphTargetDeltaThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphTargetNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMorphTargets_MetaData[];
#endif
		static void NewProp_bDrawMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMorphTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerGeomCacheVizSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The vizualization settings specific to the UMLDeformerMorphModel class, or inherited classes.\n */" },
		{ "IncludePath", "MLDeformerMorphModelVizSettings.h" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModelVizSettings.h" },
		{ "ToolTip", "The vizualization settings specific to the UMLDeformerMorphModel class, or inherited classes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetDeltaThreshold_MetaData[] = {
		{ "Comment", "/**\n\x09 * The morph target delta threshold. This is a preview of what deltas would be included in the selected morph target\n\x09 * when using a delta threshold during training that is equal to this value.\n\x09 * This only can be used after you trained, in the same editor session directly after training.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModelVizSettings.h" },
		{ "ToolTip", "The morph target delta threshold. This is a preview of what deltas would be included in the selected morph target\nwhen using a delta threshold during training that is equal to this value.\nThis only can be used after you trained, in the same editor session directly after training." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetDeltaThreshold = { "MorphTargetDeltaThreshold", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModelVizSettings, MorphTargetDeltaThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetDeltaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetDeltaThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetNumber_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The morph target to visualize. The first one always being the means, so not a sparse target.\n\x09 * This only can be used after you trained, in the same editor session directly after training.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModelVizSettings.h" },
		{ "ToolTip", "The morph target to visualize. The first one always being the means, so not a sparse target.\nThis only can be used after you trained, in the same editor session directly after training." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetNumber = { "MorphTargetNumber", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModelVizSettings, MorphTargetNumber), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_bDrawMorphTargets_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "Comment", "/**\n\x09 * Specify whether we want to debug draw the morph targets.\n\x09 * Enabling this can help you see what the sparsity of the generated morph targets is.\n\x09 * It also takes the morph target delta threshold into account, so you can preview how that effects the sparsity of the morphs.\n\x09 * This only can be used after you trained, in the same editor session directly after training.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModelVizSettings.h" },
		{ "ToolTip", "Specify whether we want to debug draw the morph targets.\nEnabling this can help you see what the sparsity of the generated morph targets is.\nIt also takes the morph target delta threshold into account, so you can preview how that effects the sparsity of the morphs.\nThis only can be used after you trained, in the same editor session directly after training." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_bDrawMorphTargets_SetBit(void* Obj)
	{
		((UMLDeformerMorphModelVizSettings*)Obj)->bDrawMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_bDrawMorphTargets = { "bDrawMorphTargets", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerMorphModelVizSettings), &Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_bDrawMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_bDrawMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_bDrawMorphTargets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetDeltaThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_MorphTargetNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::NewProp_bDrawMorphTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerMorphModelVizSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::ClassParams = {
		&UMLDeformerMorphModelVizSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerMorphModelVizSettings()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerMorphModelVizSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerMorphModelVizSettings.OuterSingleton, Z_Construct_UClass_UMLDeformerMorphModelVizSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerMorphModelVizSettings.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerMorphModelVizSettings>()
	{
		return UMLDeformerMorphModelVizSettings::StaticClass();
	}
	UMLDeformerMorphModelVizSettings::UMLDeformerMorphModelVizSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerMorphModelVizSettings);
	UMLDeformerMorphModelVizSettings::~UMLDeformerMorphModelVizSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelVizSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelVizSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerMorphModelVizSettings, UMLDeformerMorphModelVizSettings::StaticClass, TEXT("UMLDeformerMorphModelVizSettings"), &Z_Registration_Info_UClass_UMLDeformerMorphModelVizSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerMorphModelVizSettings), 293120920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelVizSettings_h_2553074291(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelVizSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelVizSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
