// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Data/FilteredResults.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilteredResults() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFilteredResults();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFilteredResults_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	void UFilteredResults::StaticRegisterNativesUFilteredResults()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilteredResults);
	UClass* Z_Construct_UClass_UFilteredResults_NoRegister()
	{
		return UFilteredResults::StaticClass();
	}
	struct Z_Construct_UClass_UFilteredResults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilteredResults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilteredResults_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Processes user defined filters into a selection set, which the user inspect in the results tab. */" },
		{ "IncludePath", "Data/FilteredResults.h" },
		{ "ModuleRelativePath", "Private/Data/FilteredResults.h" },
		{ "ToolTip", "Processes user defined filters into a selection set, which the user inspect in the results tab." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilteredResults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilteredResults>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilteredResults_Statics::ClassParams = {
		&UFilteredResults::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFilteredResults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilteredResults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilteredResults()
	{
		if (!Z_Registration_Info_UClass_UFilteredResults.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilteredResults.OuterSingleton, Z_Construct_UClass_UFilteredResults_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilteredResults.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<UFilteredResults>()
	{
		return UFilteredResults::StaticClass();
	}
	UFilteredResults::UFilteredResults(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilteredResults);
	UFilteredResults::~UFilteredResults() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilteredResults, UFilteredResults::StaticClass, TEXT("UFilteredResults"), &Z_Registration_Info_UClass_UFilteredResults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilteredResults), 3828605964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_3041953579(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilteredResults_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
