// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IO/LidarPointCloudFileIO.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudFileIO() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	void ULidarPointCloudFileIO::StaticRegisterNativesULidarPointCloudFileIO()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudFileIO);
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO_NoRegister()
	{
		return ULidarPointCloudFileIO::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudFileIO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudFileIO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudFileIO_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds information about all registered file handlers\n */" },
		{ "IncludePath", "IO/LidarPointCloudFileIO.h" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO.h" },
		{ "ToolTip", "Holds information about all registered file handlers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudFileIO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudFileIO>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudFileIO_Statics::ClassParams = {
		&ULidarPointCloudFileIO::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudFileIO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudFileIO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudFileIO.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudFileIO.OuterSingleton, Z_Construct_UClass_ULidarPointCloudFileIO_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudFileIO.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloudFileIO>()
	{
		return ULidarPointCloudFileIO::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudFileIO);
	ULidarPointCloudFileIO::~ULidarPointCloudFileIO() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloudFileIO, ULidarPointCloudFileIO::StaticClass, TEXT("ULidarPointCloudFileIO"), &Z_Registration_Info_UClass_ULidarPointCloudFileIO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudFileIO), 208032628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_2379773462(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
