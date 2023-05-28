// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolClustering.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolClustering() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureActionTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCluster();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCluster_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolClusterMerge();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolClusterMerge_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolFlattenAll();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolFlattenAll_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMoveUp();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMoveUp_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolUncluster();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolUncluster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureToolFlattenAll::StaticRegisterNativesUFractureToolFlattenAll()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolFlattenAll);
	UClass* Z_Construct_UClass_UFractureToolFlattenAll_NoRegister()
	{
		return UFractureToolFlattenAll::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolFlattenAll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolFlattenAll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolFlattenAll_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Flatten All" },
		{ "IncludePath", "FractureToolClustering.h" },
		{ "ModuleRelativePath", "Private/FractureToolClustering.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolFlattenAll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolFlattenAll>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolFlattenAll_Statics::ClassParams = {
		&UFractureToolFlattenAll::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolFlattenAll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolFlattenAll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolFlattenAll()
	{
		if (!Z_Registration_Info_UClass_UFractureToolFlattenAll.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolFlattenAll.OuterSingleton, Z_Construct_UClass_UFractureToolFlattenAll_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolFlattenAll.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolFlattenAll>()
	{
		return UFractureToolFlattenAll::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolFlattenAll);
	UFractureToolFlattenAll::~UFractureToolFlattenAll() {}
	void UFractureToolCluster::StaticRegisterNativesUFractureToolCluster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolCluster);
	UClass* Z_Construct_UClass_UFractureToolCluster_NoRegister()
	{
		return UFractureToolCluster::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolCluster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolCluster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolCluster_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Cluster" },
		{ "IncludePath", "FractureToolClustering.h" },
		{ "ModuleRelativePath", "Private/FractureToolClustering.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolCluster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolCluster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolCluster_Statics::ClassParams = {
		&UFractureToolCluster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolCluster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCluster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolCluster()
	{
		if (!Z_Registration_Info_UClass_UFractureToolCluster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolCluster.OuterSingleton, Z_Construct_UClass_UFractureToolCluster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolCluster.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolCluster>()
	{
		return UFractureToolCluster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolCluster);
	UFractureToolCluster::~UFractureToolCluster() {}
	void UFractureToolUncluster::StaticRegisterNativesUFractureToolUncluster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolUncluster);
	UClass* Z_Construct_UClass_UFractureToolUncluster_NoRegister()
	{
		return UFractureToolUncluster::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolUncluster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolUncluster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolUncluster_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Uncluster" },
		{ "IncludePath", "FractureToolClustering.h" },
		{ "ModuleRelativePath", "Private/FractureToolClustering.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolUncluster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolUncluster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolUncluster_Statics::ClassParams = {
		&UFractureToolUncluster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolUncluster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolUncluster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolUncluster()
	{
		if (!Z_Registration_Info_UClass_UFractureToolUncluster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolUncluster.OuterSingleton, Z_Construct_UClass_UFractureToolUncluster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolUncluster.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolUncluster>()
	{
		return UFractureToolUncluster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolUncluster);
	UFractureToolUncluster::~UFractureToolUncluster() {}
	void UFractureToolMoveUp::StaticRegisterNativesUFractureToolMoveUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolMoveUp);
	UClass* Z_Construct_UClass_UFractureToolMoveUp_NoRegister()
	{
		return UFractureToolMoveUp::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolMoveUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolMoveUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolMoveUp_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "MoveUp" },
		{ "IncludePath", "FractureToolClustering.h" },
		{ "ModuleRelativePath", "Private/FractureToolClustering.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolMoveUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolMoveUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolMoveUp_Statics::ClassParams = {
		&UFractureToolMoveUp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolMoveUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMoveUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolMoveUp()
	{
		if (!Z_Registration_Info_UClass_UFractureToolMoveUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolMoveUp.OuterSingleton, Z_Construct_UClass_UFractureToolMoveUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolMoveUp.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolMoveUp>()
	{
		return UFractureToolMoveUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolMoveUp);
	UFractureToolMoveUp::~UFractureToolMoveUp() {}
	void UFractureToolClusterMerge::StaticRegisterNativesUFractureToolClusterMerge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolClusterMerge);
	UClass* Z_Construct_UClass_UFractureToolClusterMerge_NoRegister()
	{
		return UFractureToolClusterMerge::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolClusterMerge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolClusterMerge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolClusterMerge_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "ClusterMerge" },
		{ "IncludePath", "FractureToolClustering.h" },
		{ "ModuleRelativePath", "Private/FractureToolClustering.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolClusterMerge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolClusterMerge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolClusterMerge_Statics::ClassParams = {
		&UFractureToolClusterMerge::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolClusterMerge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolClusterMerge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolClusterMerge()
	{
		if (!Z_Registration_Info_UClass_UFractureToolClusterMerge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolClusterMerge.OuterSingleton, Z_Construct_UClass_UFractureToolClusterMerge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolClusterMerge.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolClusterMerge>()
	{
		return UFractureToolClusterMerge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolClusterMerge);
	UFractureToolClusterMerge::~UFractureToolClusterMerge() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClustering_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClustering_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureToolFlattenAll, UFractureToolFlattenAll::StaticClass, TEXT("UFractureToolFlattenAll"), &Z_Registration_Info_UClass_UFractureToolFlattenAll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolFlattenAll), 1628234578U) },
		{ Z_Construct_UClass_UFractureToolCluster, UFractureToolCluster::StaticClass, TEXT("UFractureToolCluster"), &Z_Registration_Info_UClass_UFractureToolCluster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolCluster), 64050062U) },
		{ Z_Construct_UClass_UFractureToolUncluster, UFractureToolUncluster::StaticClass, TEXT("UFractureToolUncluster"), &Z_Registration_Info_UClass_UFractureToolUncluster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolUncluster), 44442815U) },
		{ Z_Construct_UClass_UFractureToolMoveUp, UFractureToolMoveUp::StaticClass, TEXT("UFractureToolMoveUp"), &Z_Registration_Info_UClass_UFractureToolMoveUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolMoveUp), 3709433856U) },
		{ Z_Construct_UClass_UFractureToolClusterMerge, UFractureToolClusterMerge::StaticClass, TEXT("UFractureToolClusterMerge"), &Z_Registration_Info_UClass_UFractureToolClusterMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolClusterMerge), 255802085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClustering_h_3240783315(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClustering_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClustering_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
