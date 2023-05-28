// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/VolumeCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	NIAGARA_API UClass* Z_Construct_UClass_UVolumeCache();
	NIAGARA_API UClass* Z_Construct_UClass_UVolumeCache_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EVolumeCacheType();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumeCacheType;
	static UEnum* EVolumeCacheType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EVolumeCacheType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("EVolumeCacheType"));
		}
		return Z_Registration_Info_UEnum_EVolumeCacheType.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<EVolumeCacheType>()
	{
		return EVolumeCacheType_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enumerators[] = {
		{ "EVolumeCacheType::OpenVDB", (int64)EVolumeCacheType::OpenVDB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
		{ "OpenVDB.Name", "EVolumeCacheType::OpenVDB" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"EVolumeCacheType",
		"EVolumeCacheType",
		Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_EVolumeCacheType()
	{
		if (!Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton, Z_Construct_UEnum_Niagara_EVolumeCacheType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolumeCacheType.InnerSingleton;
	}
	void UVolumeCache::StaticRegisterNativesUVolumeCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeCache);
	UClass* Z_Construct_UClass_UVolumeCache_NoRegister()
	{
		return UVolumeCache::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRangeStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRangeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRangeEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRangeEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeCache_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "VolumeCache.h" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeCache_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** File path to load */" },
		{ "DisplayName", "File Path" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
		{ "ToolTip", "File path to load" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeCache, FilePath), METADATA_PARAMS(Z_Construct_UClass_UVolumeCache_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Cache Type" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType = { "CacheType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeCache, CacheType), Z_Construct_UEnum_Niagara_EVolumeCacheType, METADATA_PARAMS(Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType_MetaData)) }; // 1936522791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeCache_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Resolution" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeCache, Resolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVolumeCache_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeStart_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Frame Range Start" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeStart = { "FrameRangeStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeCache, FrameRangeStart), METADATA_PARAMS(Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeEnd_MetaData[] = {
		{ "Category", "File" },
		{ "DisplayName", "Frame Range End" },
		{ "ModuleRelativePath", "Classes/VolumeCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeEnd = { "FrameRangeEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeCache, FrameRangeEnd), METADATA_PARAMS(Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_CacheType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeCache_Statics::NewProp_FrameRangeEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeCache_Statics::ClassParams = {
		&UVolumeCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVolumeCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumeCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeCache()
	{
		if (!Z_Registration_Info_UClass_UVolumeCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeCache.OuterSingleton, Z_Construct_UClass_UVolumeCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeCache.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UVolumeCache>()
	{
		return UVolumeCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeCache);
	UVolumeCache::~UVolumeCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::EnumInfo[] = {
		{ EVolumeCacheType_StaticEnum, TEXT("EVolumeCacheType"), &Z_Registration_Info_UEnum_EVolumeCacheType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1936522791U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeCache, UVolumeCache::StaticClass, TEXT("UVolumeCache"), &Z_Registration_Info_UClass_UVolumeCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeCache), 288315468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_2812388958(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
