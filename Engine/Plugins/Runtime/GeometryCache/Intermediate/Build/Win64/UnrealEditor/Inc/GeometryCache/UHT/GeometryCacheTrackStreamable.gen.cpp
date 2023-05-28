// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheTrackStreamable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackStreamable() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	void UGeometryCacheTrackStreamable::StaticRegisterNativesUGeometryCacheTrackStreamable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheTrackStreamable);
	UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister()
	{
		return UGeometryCacheTrackStreamable::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Codec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSampleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSampleTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n\x09""Derived GeometryCacheTrack class, used for Transform animation.\n\n\x09\\note FGeometryCacheTrackStreamableRenderResource keeps a reference to the track.\n\x09""Be sure to keep the implementation of this class valid so it properly releases\n\x09the render resoruce before making any changes to this object that may affect the render thread.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackStreamable.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
		{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation.\n\n\\note FGeometryCacheTrackStreamableRenderResource keeps a reference to the track.\nBe sure to keep the implementation of this class valid so it properly releases\nthe render resoruce before making any changes to this object that may affect the render thread." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Codec for this track */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
		{ "ToolTip", "Codec for this track" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheTrackStreamable, Codec), Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackStreamable.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime = { "StartSampleTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheTrackStreamable, StartSampleTime), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_Codec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::NewProp_StartSampleTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheTrackStreamable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::ClassParams = {
		&UGeometryCacheTrackStreamable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheTrackStreamable()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton, Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton;
	}
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheTrackStreamable>()
	{
		return UGeometryCacheTrackStreamable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrackStreamable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCacheTrackStreamable)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheTrackStreamable, UGeometryCacheTrackStreamable::StaticClass, TEXT("UGeometryCacheTrackStreamable"), &Z_Registration_Info_UClass_UGeometryCacheTrackStreamable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheTrackStreamable), 643442948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_361259456(TEXT("/Script/GeometryCache"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
