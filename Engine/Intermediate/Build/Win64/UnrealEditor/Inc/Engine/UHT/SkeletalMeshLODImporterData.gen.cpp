// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Rendering/SkeletalMeshLODImporterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshLODImporterData() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions;
	static UEnum* ESkeletalMeshGeoImportVersions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkeletalMeshGeoImportVersions"));
		}
		return Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshGeoImportVersions>()
	{
		return ESkeletalMeshGeoImportVersions_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::Enumerators[] = {
		{ "ESkeletalMeshGeoImportVersions::Before_Versionning", (int64)ESkeletalMeshGeoImportVersions::Before_Versionning },
		{ "ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor", (int64)ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor },
		{ "ESkeletalMeshGeoImportVersions::VersionPlusOne", (int64)ESkeletalMeshGeoImportVersions::VersionPlusOne },
		{ "ESkeletalMeshGeoImportVersions::LatestVersion", (int64)ESkeletalMeshGeoImportVersions::LatestVersion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::Enum_MetaDataParams[] = {
		{ "Before_Versionning.Name", "ESkeletalMeshGeoImportVersions::Before_Versionning" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n//uenum class cannot be inside a preprocessor like #if WITH_EDITOR\n" },
		{ "LatestVersion.Name", "ESkeletalMeshGeoImportVersions::LatestVersion" },
		{ "ModuleRelativePath", "Public/Rendering/SkeletalMeshLODImporterData.h" },
		{ "SkeletalMeshBuildRefactor.Name", "ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor" },
		{ "ToolTip", "uenum class cannot be inside a preprocessor like #if WITH_EDITOR" },
		{ "VersionPlusOne.Comment", "// -----<new versions can be added above this line>-------------------------------------------------\n" },
		{ "VersionPlusOne.Name", "ESkeletalMeshGeoImportVersions::VersionPlusOne" },
		{ "VersionPlusOne.ToolTip", "-----<new versions can be added above this line>-------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESkeletalMeshGeoImportVersions",
		"ESkeletalMeshGeoImportVersions",
		Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions.InnerSingleton, Z_Construct_UEnum_Engine_ESkeletalMeshGeoImportVersions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions;
	static UEnum* ESkeletalMeshSkinningImportVersions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkeletalMeshSkinningImportVersions"));
		}
		return Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshSkinningImportVersions>()
	{
		return ESkeletalMeshSkinningImportVersions_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::Enumerators[] = {
		{ "ESkeletalMeshSkinningImportVersions::Before_Versionning", (int64)ESkeletalMeshSkinningImportVersions::Before_Versionning },
		{ "ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor", (int64)ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor },
		{ "ESkeletalMeshSkinningImportVersions::VersionPlusOne", (int64)ESkeletalMeshSkinningImportVersions::VersionPlusOne },
		{ "ESkeletalMeshSkinningImportVersions::LatestVersion", (int64)ESkeletalMeshSkinningImportVersions::LatestVersion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::Enum_MetaDataParams[] = {
		{ "Before_Versionning.Name", "ESkeletalMeshSkinningImportVersions::Before_Versionning" },
		{ "LatestVersion.Name", "ESkeletalMeshSkinningImportVersions::LatestVersion" },
		{ "ModuleRelativePath", "Public/Rendering/SkeletalMeshLODImporterData.h" },
		{ "SkeletalMeshBuildRefactor.Name", "ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor" },
		{ "VersionPlusOne.Comment", "// -----<new versions can be added above this line>-------------------------------------------------\n" },
		{ "VersionPlusOne.Name", "ESkeletalMeshSkinningImportVersions::VersionPlusOne" },
		{ "VersionPlusOne.ToolTip", "-----<new versions can be added above this line>-------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESkeletalMeshSkinningImportVersions",
		"ESkeletalMeshSkinningImportVersions",
		Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions.InnerSingleton, Z_Construct_UEnum_Engine_ESkeletalMeshSkinningImportVersions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshLODImporterData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshLODImporterData_h_Statics::EnumInfo[] = {
		{ ESkeletalMeshGeoImportVersions_StaticEnum, TEXT("ESkeletalMeshGeoImportVersions"), &Z_Registration_Info_UEnum_ESkeletalMeshGeoImportVersions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 245825887U) },
		{ ESkeletalMeshSkinningImportVersions_StaticEnum, TEXT("ESkeletalMeshSkinningImportVersions"), &Z_Registration_Info_UEnum_ESkeletalMeshSkinningImportVersions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1000636158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshLODImporterData_h_1459403748(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshLODImporterData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshLODImporterData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
