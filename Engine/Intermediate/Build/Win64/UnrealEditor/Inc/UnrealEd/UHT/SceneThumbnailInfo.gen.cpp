// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/SceneThumbnailInfo.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneThumbnailInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USceneThumbnailInfo::StaticRegisterNativesUSceneThumbnailInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneThumbnailInfo);
	UClass* Z_Construct_UClass_USceneThumbnailInfo_NoRegister()
	{
		return USceneThumbnailInfo::StaticClass();
	}
	struct Z_Construct_UClass_USceneThumbnailInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrbitPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrbitYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrbitZoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneThumbnailInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The pitch of the orbit camera around the asset */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ToolTip", "The pitch of the orbit camera around the asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch = { "OrbitPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneThumbnailInfo, OrbitPitch), METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The yaw of the orbit camera around the asset */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ToolTip", "The yaw of the orbit camera around the asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw = { "OrbitYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneThumbnailInfo, OrbitYaw), METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The offset from the bounds sphere distance from the asset */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfo.h" },
		{ "ToolTip", "The offset from the bounds sphere distance from the asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom = { "OrbitZoom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneThumbnailInfo, OrbitZoom), METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneThumbnailInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfo_Statics::NewProp_OrbitZoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneThumbnailInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneThumbnailInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneThumbnailInfo_Statics::ClassParams = {
		&USceneThumbnailInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneThumbnailInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneThumbnailInfo()
	{
		if (!Z_Registration_Info_UClass_USceneThumbnailInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneThumbnailInfo.OuterSingleton, Z_Construct_UClass_USceneThumbnailInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneThumbnailInfo.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USceneThumbnailInfo>()
	{
		return USceneThumbnailInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneThumbnailInfo);
	USceneThumbnailInfo::~USceneThumbnailInfo() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneThumbnailInfo)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneThumbnailInfo, USceneThumbnailInfo::StaticClass, TEXT("USceneThumbnailInfo"), &Z_Registration_Info_UClass_USceneThumbnailInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneThumbnailInfo), 2212771917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_3580825540(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
