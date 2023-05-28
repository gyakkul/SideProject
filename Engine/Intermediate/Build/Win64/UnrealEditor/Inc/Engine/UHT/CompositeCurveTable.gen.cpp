// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CompositeCurveTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCurveTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable();
	ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UCompositeCurveTable::StaticRegisterNativesUCompositeCurveTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeCurveTable);
	UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister()
	{
		return UCompositeCurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCurveTable_Statics
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
	UObject* (*const Z_Construct_UClass_UCompositeCurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveTable,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Curve table composed of a stack of other curve tables.\n */" },
		{ "IncludePath", "Engine/CompositeCurveTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Curve table composed of a stack of other curve tables." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner = { "ParentTables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData[] = {
		{ "Category", "Tables" },
		{ "Comment", "// Parent tables\n// Tables with higher indices override data in tables with lower indices\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Parent tables\nTables with higher indices override data in tables with lower indices" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables = { "ParentTables", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositeCurveTable, ParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner = { "OldParentTables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData[] = {
		{ "Comment", "// temporary copy used to detect changes so we can update delegates correctly on removal\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "temporary copy used to detect changes so we can update delegates correctly on removal" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables = { "OldParentTables", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositeCurveTable, OldParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCurveTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams = {
		&UCompositeCurveTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCurveTable()
	{
		if (!Z_Registration_Info_UClass_UCompositeCurveTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeCurveTable.OuterSingleton, Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositeCurveTable.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCompositeCurveTable>()
	{
		return UCompositeCurveTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCurveTable);
	UCompositeCurveTable::~UCompositeCurveTable() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeCurveTable)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeCurveTable, UCompositeCurveTable::StaticClass, TEXT("UCompositeCurveTable"), &Z_Registration_Info_UClass_UCompositeCurveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeCurveTable), 2041166873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_3858782289(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
