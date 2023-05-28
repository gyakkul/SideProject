// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LidarPointCloudFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudFactory() {}
// Cross Module References
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_ULidarPointCloudFactory();
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_ULidarPointCloudFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudEditor();
// End Cross Module References
	void ULidarPointCloudFactory::StaticRegisterNativesULidarPointCloudFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudFactory);
	UClass* Z_Construct_UClass_ULidarPointCloudFactory_NoRegister()
	{
		return ULidarPointCloudFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LidarPointCloudFactory.h" },
		{ "ModuleRelativePath", "Private/LidarPointCloudFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudFactory_Statics::ClassParams = {
		&ULidarPointCloudFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudFactory()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudFactory.OuterSingleton, Z_Construct_UClass_ULidarPointCloudFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudFactory.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<ULidarPointCloudFactory>()
	{
		return ULidarPointCloudFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudFactory);
	ULidarPointCloudFactory::~ULidarPointCloudFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloudFactory, ULidarPointCloudFactory::StaticClass, TEXT("ULidarPointCloudFactory"), &Z_Registration_Info_UClass_ULidarPointCloudFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudFactory), 888978770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudFactory_h_2278354471(TEXT("/Script/LidarPointCloudEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
