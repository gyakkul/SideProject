// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseMediaSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UBaseMediaSource::StaticRegisterNativesUBaseMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMediaSource);
	UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister()
	{
		return UBaseMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformPlayerNames_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformPlayerNames_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformPlayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformPlayerNames;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for concrete media sources.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "BaseMediaSource.h" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Base class for concrete media sources." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_ValueProp = { "PlatformPlayerNames", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_Key_KeyProp = { "PlatformPlayerNames_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Override native media player plug-ins per platform (Empty = find one automatically). */" },
		{ "DisplayName", "Player Overrides" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Override native media player plug-ins per platform (Empty = find one automatically)." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames = { "PlatformPlayerNames", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseMediaSource, PlatformPlayerNames), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Comment", "/** Name of the desired native media player (Empty = find one automatically). */" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Name of the desired native media player (Empty = find one automatically)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseMediaSource, PlayerName), METADATA_PARAMS(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMediaSource_Statics::ClassParams = {
		&UBaseMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseMediaSource()
	{
		if (!Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton, Z_Construct_UClass_UBaseMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UBaseMediaSource>()
	{
		return UBaseMediaSource::StaticClass();
	}
	UBaseMediaSource::UBaseMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMediaSource);
	UBaseMediaSource::~UBaseMediaSource() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBaseMediaSource)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMediaSource, UBaseMediaSource::StaticClass, TEXT("UBaseMediaSource"), &Z_Registration_Info_UClass_UBaseMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMediaSource), 3581451970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_3152298736(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
