// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CompositeDataTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeDataTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCompositeDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UCompositeDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UCompositeDataTable::StaticRegisterNativesUCompositeDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeDataTable);
	UClass* Z_Construct_UClass_UCompositeDataTable_NoRegister()
	{
		return UCompositeDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentTables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentTables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentTables;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OldParentTables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldParentTables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldParentTables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data table composed of a stack of other data tables.\n */" },
		{ "HideCategories", "ImportOptions ImportSource" },
		{ "IncludePath", "Engine/CompositeDataTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "Data table composed of a stack of other data tables." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_Inner = { "ParentTables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_MetaData[] = {
		{ "Category", "Tables" },
		{ "Comment", "// Parent tables\n// Tables with higher indices override data in tables with lower indices\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "Parent tables\nTables with higher indices override data in tables with lower indices" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables = { "ParentTables", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositeDataTable, ParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_Inner = { "OldParentTables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_MetaData[] = {
		{ "Comment", "// temporary copy used to detect changes so we can update delegates correctly on removal\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "temporary copy used to detect changes so we can update delegates correctly on removal" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables = { "OldParentTables", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositeDataTable, OldParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeDataTable_Statics::ClassParams = {
		&UCompositeDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeDataTable()
	{
		if (!Z_Registration_Info_UClass_UCompositeDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeDataTable.OuterSingleton, Z_Construct_UClass_UCompositeDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositeDataTable.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCompositeDataTable>()
	{
		return UCompositeDataTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeDataTable);
	UCompositeDataTable::~UCompositeDataTable() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeDataTable)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeDataTable, UCompositeDataTable::StaticClass, TEXT("UCompositeDataTable"), &Z_Registration_Info_UClass_UCompositeDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeDataTable), 400862305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_2040985229(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
