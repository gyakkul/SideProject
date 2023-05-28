// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IO/LidarPointCloudFileIO_E57.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudFileIO_E57() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_E57();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_E57_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	void ULidarPointCloudFileIO_E57::StaticRegisterNativesULidarPointCloudFileIO_E57()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudFileIO_E57);
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO_E57_NoRegister()
	{
		return ULidarPointCloudFileIO_E57::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IO/LidarPointCloudFileIO_E57.h" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_E57.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudFileIO_E57>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics::ClassParams = {
		&ULidarPointCloudFileIO_E57::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO_E57()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudFileIO_E57.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudFileIO_E57.OuterSingleton, Z_Construct_UClass_ULidarPointCloudFileIO_E57_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudFileIO_E57.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloudFileIO_E57>()
	{
		return ULidarPointCloudFileIO_E57::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudFileIO_E57);
	ULidarPointCloudFileIO_E57::~ULidarPointCloudFileIO_E57() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_E57_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_E57_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloudFileIO_E57, ULidarPointCloudFileIO_E57::StaticClass, TEXT("ULidarPointCloudFileIO_E57"), &Z_Registration_Info_UClass_ULidarPointCloudFileIO_E57, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudFileIO_E57), 3381831849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_E57_h_3520695267(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_E57_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_E57_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
