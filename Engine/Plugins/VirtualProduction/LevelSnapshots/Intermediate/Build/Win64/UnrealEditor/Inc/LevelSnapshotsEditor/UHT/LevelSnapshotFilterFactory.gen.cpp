// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/LevelSnapshotFilterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotFilterFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	void ULevelSnapshotBlueprintFilterFactory::StaticRegisterNativesULevelSnapshotBlueprintFilterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotBlueprintFilterFactory);
	UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_NoRegister()
	{
		return ULevelSnapshotBlueprintFilterFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/LevelSnapshotFilterFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/LevelSnapshotFilterFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "LevelSnapshotBlueprintFilterFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/Factories/LevelSnapshotFilterFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotBlueprintFilterFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotBlueprintFilterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::ClassParams = {
		&ULevelSnapshotBlueprintFilterFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilterFactory.OuterSingleton, Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilterFactory.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<ULevelSnapshotBlueprintFilterFactory>()
	{
		return ULevelSnapshotBlueprintFilterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotBlueprintFilterFactory);
	ULevelSnapshotBlueprintFilterFactory::~ULevelSnapshotBlueprintFilterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotFilterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotFilterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotBlueprintFilterFactory, ULevelSnapshotBlueprintFilterFactory::StaticClass, TEXT("ULevelSnapshotBlueprintFilterFactory"), &Z_Registration_Info_UClass_ULevelSnapshotBlueprintFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotBlueprintFilterFactory), 3386387718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotFilterFactory_h_1418325075(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotFilterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotFilterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
