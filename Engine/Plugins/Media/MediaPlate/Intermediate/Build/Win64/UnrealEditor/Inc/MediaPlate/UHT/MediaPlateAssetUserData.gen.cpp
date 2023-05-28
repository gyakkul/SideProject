// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlateAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlateAssetUserData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateAssetUserData();
	MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateAssetUserData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaPlate();
// End Cross Module References
	void UMediaPlateAssetUserData::StaticRegisterNativesUMediaPlateAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlateAssetUserData);
	UClass* Z_Construct_UClass_UMediaPlateAssetUserData_NoRegister()
	{
		return UMediaPlateAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlateAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlateAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AssetUserData for media plate.\n */" },
		{ "IncludePath", "MediaPlateAssetUserData.h" },
		{ "ModuleRelativePath", "Public/MediaPlateAssetUserData.h" },
		{ "ToolTip", "AssetUserData for media plate." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlateAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlateAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlateAssetUserData_Statics::ClassParams = {
		&UMediaPlateAssetUserData::StaticClass,
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
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlateAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlateAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UMediaPlateAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlateAssetUserData.OuterSingleton, Z_Construct_UClass_UMediaPlateAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlateAssetUserData.OuterSingleton;
	}
	template<> MEDIAPLATE_API UClass* StaticClass<UMediaPlateAssetUserData>()
	{
		return UMediaPlateAssetUserData::StaticClass();
	}
	UMediaPlateAssetUserData::UMediaPlateAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlateAssetUserData);
	UMediaPlateAssetUserData::~UMediaPlateAssetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlateAssetUserData, UMediaPlateAssetUserData::StaticClass, TEXT("UMediaPlateAssetUserData"), &Z_Registration_Info_UClass_UMediaPlateAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlateAssetUserData), 789974657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_1306143678(TEXT("/Script/MediaPlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
