// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSnapshotsFilteringLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsFilteringLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsFilteringLibrary();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	void ULevelSnapshotsFilteringLibrary::StaticRegisterNativesULevelSnapshotsFilteringLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsFilteringLibrary);
	UClass* Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_NoRegister()
	{
		return ULevelSnapshotsFilteringLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LevelSnapshotsFilteringLibrary.h" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsFilteringLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsFilteringLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics::ClassParams = {
		&ULevelSnapshotsFilteringLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotsFilteringLibrary()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsFilteringLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsFilteringLibrary.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsFilteringLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsFilteringLibrary.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshotsFilteringLibrary>()
	{
		return ULevelSnapshotsFilteringLibrary::StaticClass();
	}
	ULevelSnapshotsFilteringLibrary::ULevelSnapshotsFilteringLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsFilteringLibrary);
	ULevelSnapshotsFilteringLibrary::~ULevelSnapshotsFilteringLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFilteringLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFilteringLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsFilteringLibrary, ULevelSnapshotsFilteringLibrary::StaticClass, TEXT("ULevelSnapshotsFilteringLibrary"), &Z_Registration_Info_UClass_ULevelSnapshotsFilteringLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsFilteringLibrary), 1801266611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFilteringLibrary_h_2597809529(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFilteringLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFilteringLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
