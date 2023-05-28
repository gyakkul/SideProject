// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/LODGenerationSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODGenerationSettingsFactory() {}
// Cross Module References
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MeshLODToolset();
// End Cross Module References
	void UStaticMeshLODGenerationSettingsFactory::StaticRegisterNativesUStaticMeshLODGenerationSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshLODGenerationSettingsFactory);
	UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_NoRegister()
	{
		return UStaticMeshLODGenerationSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Asset Factory for UStaticMeshLODGenerationSettings, which is used to save settings for\n * the AutoLOD Tool/Process as an Asset in the Editor\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Tools/LODGenerationSettingsFactory.h" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsFactory.h" },
		{ "ToolTip", "Asset Factory for UStaticMeshLODGenerationSettings, which is used to save settings for\nthe AutoLOD Tool/Process as an Asset in the Editor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshLODGenerationSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics::ClassParams = {
		&UStaticMeshLODGenerationSettingsFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshLODGenerationSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshLODGenerationSettingsFactory.OuterSingleton, Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshLODGenerationSettingsFactory.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UStaticMeshLODGenerationSettingsFactory>()
	{
		return UStaticMeshLODGenerationSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshLODGenerationSettingsFactory);
	UStaticMeshLODGenerationSettingsFactory::~UStaticMeshLODGenerationSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory, UStaticMeshLODGenerationSettingsFactory::StaticClass, TEXT("UStaticMeshLODGenerationSettingsFactory"), &Z_Registration_Info_UClass_UStaticMeshLODGenerationSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshLODGenerationSettingsFactory), 3329354654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_3860747222(TEXT("/Script/MeshLODToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
