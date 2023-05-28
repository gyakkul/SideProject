// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheTrack.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	void UGeometryCacheTrack::StaticRegisterNativesUGeometryCacheTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheTrack);
	UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister()
	{
		return UGeometryCacheTrack::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for GeometryCache tracks, stores matrix animation data and implements functionality for it */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GeometryCacheTrack.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrack.h" },
		{ "ToolTip", "Base class for GeometryCache tracks, stores matrix animation data and implements functionality for it" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The duration of this track's animation. This is an open ended interval [0..Duration[.\n\x09 * If the animation is looping this is also the length of the loop.\n\x09 *\n\x09 * Note: This is set by the importer possibly based on user preferences. There may be less actual frames available.\n\x09 * E.g. the animation has data for the first 2 seconds, but duration is set to 5, so it will loop every 5 seconds\n\x09 * with the last three seconds showing a static scene.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrack.h" },
		{ "ToolTip", "The duration of this track's animation. This is an open ended interval [0..Duration[.\nIf the animation is looping this is also the length of the loop.\n\nNote: This is set by the importer possibly based on user preferences. There may be less actual frames available.\nE.g. the animation has data for the first 2 seconds, but duration is set to 5, so it will loop every 5 seconds\nwith the last three seconds showing a static scene." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheTrack, Duration), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrack_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheTrack_Statics::ClassParams = {
		&UGeometryCacheTrack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCacheTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrack_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheTrack()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheTrack.OuterSingleton, Z_Construct_UClass_UGeometryCacheTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheTrack.OuterSingleton;
	}
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheTrack>()
	{
		return UGeometryCacheTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrack);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCacheTrack)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheTrack, UGeometryCacheTrack::StaticClass, TEXT("UGeometryCacheTrack"), &Z_Registration_Info_UClass_UGeometryCacheTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheTrack), 4056921395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_3244551781(TEXT("/Script/GeometryCache"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
