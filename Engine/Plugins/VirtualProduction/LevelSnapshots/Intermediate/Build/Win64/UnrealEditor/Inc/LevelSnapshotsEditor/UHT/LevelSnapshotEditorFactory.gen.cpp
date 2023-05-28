// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/LevelSnapshotEditorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotEditorFactory() {}
// Cross Module References
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotEditorFactory();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotEditorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	void ULevelSnapshotEditorFactory::StaticRegisterNativesULevelSnapshotEditorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotEditorFactory);
	UClass* Z_Construct_UClass_ULevelSnapshotEditorFactory_NoRegister()
	{
		return ULevelSnapshotEditorFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/LevelSnapshotEditorFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/LevelSnapshotEditorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotEditorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics::ClassParams = {
		&ULevelSnapshotEditorFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotEditorFactory()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotEditorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotEditorFactory.OuterSingleton, Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotEditorFactory.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<ULevelSnapshotEditorFactory>()
	{
		return ULevelSnapshotEditorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotEditorFactory);
	ULevelSnapshotEditorFactory::~ULevelSnapshotEditorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotEditorFactory, ULevelSnapshotEditorFactory::StaticClass, TEXT("ULevelSnapshotEditorFactory"), &Z_Registration_Info_UClass_ULevelSnapshotEditorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotEditorFactory), 3229909430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_1249019297(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
