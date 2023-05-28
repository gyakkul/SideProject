// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IconsTracker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIconsTracker() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UIconsTracker();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UIconsTracker_NoRegister();
	USERTOOLBOXCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIconFolderInfo();
	USERTOOLBOXCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIconInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IconInfo;
class UScriptStruct* FIconInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IconInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IconInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIconInfo, (UObject*)Z_Construct_UPackage__Script_UserToolBoxCore(), TEXT("IconInfo"));
	}
	return Z_Registration_Info_UScriptStruct_IconInfo.OuterSingleton;
}
template<> USERTOOLBOXCORE_API UScriptStruct* StaticStruct<FIconInfo>()
{
	return FIconInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIconInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIconInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIconInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIconInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIconInfo, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIconInfo, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_IconSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIconInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIconInfo_Statics::NewProp_IconSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIconInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
		nullptr,
		&NewStructOps,
		"IconInfo",
		sizeof(FIconInfo),
		alignof(FIconInfo),
		Z_Construct_UScriptStruct_FIconInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIconInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIconInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_IconInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IconInfo.InnerSingleton, Z_Construct_UScriptStruct_FIconInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IconInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FIconFolderInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FIconFolderInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IconFolderInfo;
class UScriptStruct* FIconFolderInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IconFolderInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IconFolderInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIconFolderInfo, (UObject*)Z_Construct_UPackage__Script_UserToolBoxCore(), TEXT("IconFolderInfo"));
	}
	return Z_Registration_Info_UScriptStruct_IconFolderInfo.OuterSingleton;
}
template<> USERTOOLBOXCORE_API UScriptStruct* StaticStruct<FIconFolderInfo>()
{
	return FIconFolderInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIconFolderInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefixId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrefixId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconFolderInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIconFolderInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIconFolderInfo, FolderPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_FolderPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_PrefixId_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_PrefixId = { "PrefixId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIconFolderInfo, PrefixId), METADATA_PARAMS(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_PrefixId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_PrefixId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIconFolderInfo, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_IconSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIconFolderInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_PrefixId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewProp_IconSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIconFolderInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"IconFolderInfo",
		sizeof(FIconFolderInfo),
		alignof(FIconFolderInfo),
		Z_Construct_UScriptStruct_FIconFolderInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIconFolderInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIconFolderInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_IconFolderInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IconFolderInfo.InnerSingleton, Z_Construct_UScriptStruct_FIconFolderInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IconFolderInfo.InnerSingleton;
	}
	void UIconsTracker::StaticRegisterNativesUIconsTracker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIconsTracker);
	UClass* Z_Construct_UClass_UIconsTracker_NoRegister()
	{
		return UIconsTracker::StaticClass();
	}
	struct Z_Construct_UClass_UIconsTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconFolderInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconFolderInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IconFolderInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefixId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrefixId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIconsTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIconsTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IconsTracker.h" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIconsTracker_Statics::NewProp_IconFolderInfos_Inner = { "IconFolderInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIconFolderInfo, METADATA_PARAMS(nullptr, 0) }; // 4079607023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIconsTracker_Statics::NewProp_IconFolderInfos_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIconsTracker_Statics::NewProp_IconFolderInfos = { "IconFolderInfos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIconsTracker, IconFolderInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIconsTracker_Statics::NewProp_IconFolderInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIconsTracker_Statics::NewProp_IconFolderInfos_MetaData)) }; // 4079607023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIconsTracker_Statics::NewProp_PrefixId_MetaData[] = {
		{ "Category", "Icon Tracker" },
		{ "ModuleRelativePath", "Public/IconsTracker.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIconsTracker_Statics::NewProp_PrefixId = { "PrefixId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIconsTracker, PrefixId), METADATA_PARAMS(Z_Construct_UClass_UIconsTracker_Statics::NewProp_PrefixId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIconsTracker_Statics::NewProp_PrefixId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIconsTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIconsTracker_Statics::NewProp_IconFolderInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIconsTracker_Statics::NewProp_IconFolderInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIconsTracker_Statics::NewProp_PrefixId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIconsTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIconsTracker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIconsTracker_Statics::ClassParams = {
		&UIconsTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIconsTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIconsTracker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIconsTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIconsTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIconsTracker()
	{
		if (!Z_Registration_Info_UClass_UIconsTracker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIconsTracker.OuterSingleton, Z_Construct_UClass_UIconsTracker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIconsTracker.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UIconsTracker>()
	{
		return UIconsTracker::StaticClass();
	}
	UIconsTracker::UIconsTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIconsTracker);
	UIconsTracker::~UIconsTracker() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_Statics::ScriptStructInfo[] = {
		{ FIconInfo::StaticStruct, Z_Construct_UScriptStruct_FIconInfo_Statics::NewStructOps, TEXT("IconInfo"), &Z_Registration_Info_UScriptStruct_IconInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIconInfo), 891199130U) },
		{ FIconFolderInfo::StaticStruct, Z_Construct_UScriptStruct_FIconFolderInfo_Statics::NewStructOps, TEXT("IconFolderInfo"), &Z_Registration_Info_UScriptStruct_IconFolderInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIconFolderInfo), 4079607023U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIconsTracker, UIconsTracker::StaticClass, TEXT("UIconsTracker"), &Z_Registration_Info_UClass_UIconsTracker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIconsTracker), 2130169786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_347675545(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
