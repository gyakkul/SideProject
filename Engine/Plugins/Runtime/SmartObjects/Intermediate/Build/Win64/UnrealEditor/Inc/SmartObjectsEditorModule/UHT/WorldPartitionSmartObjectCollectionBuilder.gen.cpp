// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldPartitionSmartObjectCollectionBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionSmartObjectCollectionBuilder() {}
// Cross Module References
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder();
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsEditorModule();
// End Cross Module References
	void UWorldPartitionSmartObjectCollectionBuilder::StaticRegisterNativesUWorldPartitionSmartObjectCollectionBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionSmartObjectCollectionBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_NoRegister()
	{
		return UWorldPartitionSmartObjectCollectionBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * WorldPartitionBuilder dedicated to collect all smart object components from a world and store them in the collection.\n */" },
		{ "IncludePath", "WorldPartitionSmartObjectCollectionBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartitionSmartObjectCollectionBuilder.h" },
		{ "ToolTip", "WorldPartitionBuilder dedicated to collect all smart object components from a world and store them in the collection." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionSmartObjectCollectionBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics::ClassParams = {
		&UWorldPartitionSmartObjectCollectionBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionSmartObjectCollectionBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionSmartObjectCollectionBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionSmartObjectCollectionBuilder.OuterSingleton;
	}
	template<> SMARTOBJECTSEDITORMODULE_API UClass* StaticClass<UWorldPartitionSmartObjectCollectionBuilder>()
	{
		return UWorldPartitionSmartObjectCollectionBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionSmartObjectCollectionBuilder);
	UWorldPartitionSmartObjectCollectionBuilder::~UWorldPartitionSmartObjectCollectionBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder, UWorldPartitionSmartObjectCollectionBuilder::StaticClass, TEXT("UWorldPartitionSmartObjectCollectionBuilder"), &Z_Registration_Info_UClass_UWorldPartitionSmartObjectCollectionBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionSmartObjectCollectionBuilder), 3897051914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_2711102675(TEXT("/Script/SmartObjectsEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
