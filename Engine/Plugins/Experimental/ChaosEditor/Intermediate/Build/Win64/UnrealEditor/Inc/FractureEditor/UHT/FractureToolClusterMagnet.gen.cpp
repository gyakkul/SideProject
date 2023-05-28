// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolClusterMagnet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolClusterMagnet() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureClusterMagnetSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureClusterMagnetSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolClusterMagnet();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolClusterMagnet_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureClusterMagnetSettings::StaticRegisterNativesUFractureClusterMagnetSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureClusterMagnetSettings);
	UClass* Z_Construct_UClass_UFractureClusterMagnetSettings_NoRegister()
	{
		return UFractureClusterMagnetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureClusterMagnetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Iterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Cluster Magnet" },
		{ "IncludePath", "FractureToolClusterMagnet.h" },
		{ "ModuleRelativePath", "Private/FractureToolClusterMagnet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "ClusterMagnet" },
		{ "ClampMax", "500" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How widely to search for neighboring bones to add to the new clusters: When Iterations is 1, only direct neighbors of the selected bones can be added to the new clusters; increasing Iterations allows additional layers of neighbors-of-neighbors to be added */" },
		{ "DisplayName", "Iterations" },
		{ "ModuleRelativePath", "Private/FractureToolClusterMagnet.h" },
		{ "ToolTip", "How widely to search for neighboring bones to add to the new clusters: When Iterations is 1, only direct neighbors of the selected bones can be added to the new clusters; increasing Iterations allows additional layers of neighbors-of-neighbors to be added" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterMagnetSettings, Iterations), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::NewProp_Iterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::NewProp_Iterations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureClusterMagnetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::ClassParams = {
		&UFractureClusterMagnetSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureClusterMagnetSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureClusterMagnetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureClusterMagnetSettings.OuterSingleton, Z_Construct_UClass_UFractureClusterMagnetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureClusterMagnetSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureClusterMagnetSettings>()
	{
		return UFractureClusterMagnetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureClusterMagnetSettings);
	UFractureClusterMagnetSettings::~UFractureClusterMagnetSettings() {}
	void UFractureToolClusterMagnet::StaticRegisterNativesUFractureToolClusterMagnet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolClusterMagnet);
	UClass* Z_Construct_UClass_UFractureToolClusterMagnet_NoRegister()
	{
		return UFractureToolClusterMagnet::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolClusterMagnet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterMagnetSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClusterMagnetSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolClusterMagnet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolClusterMagnet_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "ClusterMagnet" },
		{ "IncludePath", "FractureToolClusterMagnet.h" },
		{ "ModuleRelativePath", "Private/FractureToolClusterMagnet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolClusterMagnet_Statics::NewProp_ClusterMagnetSettings_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "ModuleRelativePath", "Private/FractureToolClusterMagnet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolClusterMagnet_Statics::NewProp_ClusterMagnetSettings = { "ClusterMagnetSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolClusterMagnet, ClusterMagnetSettings), Z_Construct_UClass_UFractureClusterMagnetSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolClusterMagnet_Statics::NewProp_ClusterMagnetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolClusterMagnet_Statics::NewProp_ClusterMagnetSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolClusterMagnet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolClusterMagnet_Statics::NewProp_ClusterMagnetSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolClusterMagnet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolClusterMagnet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolClusterMagnet_Statics::ClassParams = {
		&UFractureToolClusterMagnet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolClusterMagnet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolClusterMagnet_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolClusterMagnet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolClusterMagnet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolClusterMagnet()
	{
		if (!Z_Registration_Info_UClass_UFractureToolClusterMagnet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolClusterMagnet.OuterSingleton, Z_Construct_UClass_UFractureToolClusterMagnet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolClusterMagnet.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolClusterMagnet>()
	{
		return UFractureToolClusterMagnet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolClusterMagnet);
	UFractureToolClusterMagnet::~UFractureToolClusterMagnet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterMagnet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterMagnet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureClusterMagnetSettings, UFractureClusterMagnetSettings::StaticClass, TEXT("UFractureClusterMagnetSettings"), &Z_Registration_Info_UClass_UFractureClusterMagnetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureClusterMagnetSettings), 495927511U) },
		{ Z_Construct_UClass_UFractureToolClusterMagnet, UFractureToolClusterMagnet::StaticClass, TEXT("UFractureToolClusterMagnet"), &Z_Registration_Info_UClass_UFractureToolClusterMagnet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolClusterMagnet), 1994376413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterMagnet_h_2906407269(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterMagnet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterMagnet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
