// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IO/LidarPointCloudFileIO_LAS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudFileIO_LAS() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_LAS();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_LAS_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	void ULidarPointCloudFileIO_LAS::StaticRegisterNativesULidarPointCloudFileIO_LAS()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudFileIO_LAS);
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO_LAS_NoRegister()
	{
		return ULidarPointCloudFileIO_LAS::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IO/LidarPointCloudFileIO_LAS.h" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_LAS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudFileIO_LAS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics::ClassParams = {
		&ULidarPointCloudFileIO_LAS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO_LAS()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudFileIO_LAS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudFileIO_LAS.OuterSingleton, Z_Construct_UClass_ULidarPointCloudFileIO_LAS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudFileIO_LAS.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloudFileIO_LAS>()
	{
		return ULidarPointCloudFileIO_LAS::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudFileIO_LAS);
	ULidarPointCloudFileIO_LAS::~ULidarPointCloudFileIO_LAS() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_LAS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_LAS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloudFileIO_LAS, ULidarPointCloudFileIO_LAS::StaticClass, TEXT("ULidarPointCloudFileIO_LAS"), &Z_Registration_Info_UClass_ULidarPointCloudFileIO_LAS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudFileIO_LAS), 1565076582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_LAS_h_2802706894(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_LAS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_LAS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
