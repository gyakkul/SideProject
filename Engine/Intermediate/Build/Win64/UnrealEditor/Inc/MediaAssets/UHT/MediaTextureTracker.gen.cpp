// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaTextureTracker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTextureTracker() {}
// Cross Module References
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles;
	static UEnum* EMediaTextureVisibleMipsTiles_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaTextureVisibleMipsTiles"));
		}
		return Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaTextureVisibleMipsTiles>()
	{
		return EMediaTextureVisibleMipsTiles_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enumerators[] = {
		{ "EMediaTextureVisibleMipsTiles::None", (int64)EMediaTextureVisibleMipsTiles::None },
		{ "EMediaTextureVisibleMipsTiles::Plane", (int64)EMediaTextureVisibleMipsTiles::Plane },
		{ "EMediaTextureVisibleMipsTiles::Sphere", (int64)EMediaTextureVisibleMipsTiles::Sphere },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaTextureTracker.h" },
		{ "None.Name", "EMediaTextureVisibleMipsTiles::None" },
		{ "Plane.Name", "EMediaTextureVisibleMipsTiles::Plane" },
		{ "Sphere.Name", "EMediaTextureVisibleMipsTiles::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
		nullptr,
		"EMediaTextureVisibleMipsTiles",
		"EMediaTextureVisibleMipsTiles",
		Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles()
	{
		if (!Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_Statics::EnumInfo[] = {
		{ EMediaTextureVisibleMipsTiles_StaticEnum, TEXT("EMediaTextureVisibleMipsTiles"), &Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1505052229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_848784940(TEXT("/Script/MediaAssets"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
