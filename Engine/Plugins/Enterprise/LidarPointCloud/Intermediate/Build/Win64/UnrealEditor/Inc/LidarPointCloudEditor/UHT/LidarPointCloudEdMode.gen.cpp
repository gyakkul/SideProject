// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LidarPointCloudEdMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudEdMode() {}
// Cross Module References
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_ULidarEditorMode();
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_ULidarEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudEditor();
// End Cross Module References
	void ULidarEditorMode::StaticRegisterNativesULidarEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarEditorMode);
	UClass* Z_Construct_UClass_ULidarEditorMode_NoRegister()
	{
		return ULidarEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_ULidarEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Lidar editor mode\n*/" },
		{ "IncludePath", "LidarPointCloudEdMode.h" },
		{ "ModuleRelativePath", "Private/LidarPointCloudEdMode.h" },
		{ "ToolTip", "Lidar editor mode" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarEditorMode_Statics::ClassParams = {
		&ULidarEditorMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULidarEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarEditorMode()
	{
		if (!Z_Registration_Info_UClass_ULidarEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarEditorMode.OuterSingleton, Z_Construct_UClass_ULidarEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarEditorMode.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<ULidarEditorMode>()
	{
		return ULidarEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarEditorMode);
	ULidarEditorMode::~ULidarEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEdMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEdMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarEditorMode, ULidarEditorMode::StaticClass, TEXT("ULidarEditorMode"), &Z_Registration_Info_UClass_ULidarEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarEditorMode), 4153873960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEdMode_h_726746997(TEXT("/Script/LidarPointCloudEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEdMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_LidarPointCloudEdMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
