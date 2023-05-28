// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ActorFactoryLidarPointCloud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryLidarPointCloud() {}
// Cross Module References
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UActorFactoryLidarPointCloud();
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UActorFactoryLidarPointCloud_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudEditor();
// End Cross Module References
	void UActorFactoryLidarPointCloud::StaticRegisterNativesUActorFactoryLidarPointCloud()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryLidarPointCloud);
	UClass* Z_Construct_UClass_UActorFactoryLidarPointCloud_NoRegister()
	{
		return UActorFactoryLidarPointCloud::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryLidarPointCloud.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryLidarPointCloud.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryLidarPointCloud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics::ClassParams = {
		&UActorFactoryLidarPointCloud::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryLidarPointCloud()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryLidarPointCloud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryLidarPointCloud.OuterSingleton, Z_Construct_UClass_UActorFactoryLidarPointCloud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryLidarPointCloud.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<UActorFactoryLidarPointCloud>()
	{
		return UActorFactoryLidarPointCloud::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryLidarPointCloud);
	UActorFactoryLidarPointCloud::~UActorFactoryLidarPointCloud() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryLidarPointCloud, UActorFactoryLidarPointCloud::StaticClass, TEXT("UActorFactoryLidarPointCloud"), &Z_Registration_Info_UClass_UActorFactoryLidarPointCloud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryLidarPointCloud), 1961792625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_507140279(TEXT("/Script/LidarPointCloudEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_ActorFactoryLidarPointCloud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
