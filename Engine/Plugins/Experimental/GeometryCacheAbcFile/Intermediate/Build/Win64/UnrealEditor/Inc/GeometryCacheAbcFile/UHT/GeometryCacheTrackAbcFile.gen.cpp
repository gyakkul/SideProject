// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheTrackAbcFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackAbcFile() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_UGeometryCacheTrackAbcFile();
	GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_UGeometryCacheTrackAbcFile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheAbcFile();
// End Cross Module References
	void UGeometryCacheTrackAbcFile::StaticRegisterNativesUGeometryCacheTrackAbcFile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheTrackAbcFile);
	UClass* Z_Construct_UClass_UGeometryCacheTrackAbcFile_NoRegister()
	{
		return UGeometryCacheTrackAbcFile::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheAbcFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** GeometryCacheTrack for Alembic file querying */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackAbcFile.h" },
		{ "ModuleRelativePath", "Public/GeometryCacheTrackAbcFile.h" },
		{ "ToolTip", "GeometryCacheTrack for Alembic file querying" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheTrackAbcFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics::ClassParams = {
		&UGeometryCacheTrackAbcFile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheTrackAbcFile()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheTrackAbcFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheTrackAbcFile.OuterSingleton, Z_Construct_UClass_UGeometryCacheTrackAbcFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheTrackAbcFile.OuterSingleton;
	}
	template<> GEOMETRYCACHEABCFILE_API UClass* StaticClass<UGeometryCacheTrackAbcFile>()
	{
		return UGeometryCacheTrackAbcFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrackAbcFile);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheTrackAbcFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheTrackAbcFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheTrackAbcFile, UGeometryCacheTrackAbcFile::StaticClass, TEXT("UGeometryCacheTrackAbcFile"), &Z_Registration_Info_UClass_UGeometryCacheTrackAbcFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheTrackAbcFile), 381927994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheTrackAbcFile_h_915824918(TEXT("/Script/GeometryCacheAbcFile"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheTrackAbcFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheTrackAbcFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
