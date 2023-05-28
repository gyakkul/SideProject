// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolGenerators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolGenerators() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureActionTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolGenerateAsset();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolGenerateAsset_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolResetAsset();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolResetAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureToolGenerateAsset::StaticRegisterNativesUFractureToolGenerateAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolGenerateAsset);
	UClass* Z_Construct_UClass_UFractureToolGenerateAsset_NoRegister()
	{
		return UFractureToolGenerateAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolGenerateAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolGenerateAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolGenerateAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolGenerators.h" },
		{ "ModuleRelativePath", "Private/FractureToolGenerators.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolGenerateAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolGenerators.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureToolGenerateAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolGenerateAsset, AssetPath), METADATA_PARAMS(Z_Construct_UClass_UFractureToolGenerateAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolGenerateAsset_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolGenerateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolGenerateAsset_Statics::NewProp_AssetPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolGenerateAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolGenerateAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolGenerateAsset_Statics::ClassParams = {
		&UFractureToolGenerateAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolGenerateAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolGenerateAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolGenerateAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolGenerateAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolGenerateAsset()
	{
		if (!Z_Registration_Info_UClass_UFractureToolGenerateAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolGenerateAsset.OuterSingleton, Z_Construct_UClass_UFractureToolGenerateAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolGenerateAsset.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolGenerateAsset>()
	{
		return UFractureToolGenerateAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolGenerateAsset);
	UFractureToolGenerateAsset::~UFractureToolGenerateAsset() {}
	void UFractureToolResetAsset::StaticRegisterNativesUFractureToolResetAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolResetAsset);
	UClass* Z_Construct_UClass_UFractureToolResetAsset_NoRegister()
	{
		return UFractureToolResetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolResetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolResetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolGenerateAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolResetAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolGenerators.h" },
		{ "ModuleRelativePath", "Private/FractureToolGenerators.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolResetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolResetAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolResetAsset_Statics::ClassParams = {
		&UFractureToolResetAsset::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolResetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolResetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolResetAsset()
	{
		if (!Z_Registration_Info_UClass_UFractureToolResetAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolResetAsset.OuterSingleton, Z_Construct_UClass_UFractureToolResetAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolResetAsset.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolResetAsset>()
	{
		return UFractureToolResetAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolResetAsset);
	UFractureToolResetAsset::~UFractureToolResetAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolGenerators_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolGenerators_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureToolGenerateAsset, UFractureToolGenerateAsset::StaticClass, TEXT("UFractureToolGenerateAsset"), &Z_Registration_Info_UClass_UFractureToolGenerateAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolGenerateAsset), 126054146U) },
		{ Z_Construct_UClass_UFractureToolResetAsset, UFractureToolResetAsset::StaticClass, TEXT("UFractureToolResetAsset"), &Z_Registration_Info_UClass_UFractureToolResetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolResetAsset), 68636475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolGenerators_h_3091531928(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolGenerators_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolGenerators_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
