// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Chooser.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooser() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumn_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumnMenuContext();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumnMenuContext_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserTable();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserTable_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UObjectChooser_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FEvaluateChooser();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UChooserTable::StaticRegisterNativesUChooserTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserTable);
	UClass* Z_Construct_UClass_UChooserTable_NoRegister()
	{
		return UChooserTable::StaticClass();
	}
	struct Z_Construct_UClass_UChooserTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Columns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Columns;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultsStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultsStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultsStructs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColumnsStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnsStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColumnsStructs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ContextObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_OutputObjectType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserTable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Chooser.h" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObjectChooser_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserTable_Statics::NewProp_Results_MetaData[] = {
		{ "Comment", "// deprecated UObject Results\n" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
		{ "ToolTip", "deprecated UObject Results" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserTable, Results_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChooserTable_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::NewProp_Results_MetaData)) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UChooserColumn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserTable_Statics::NewProp_Columns_MetaData[] = {
		{ "Comment", "// deprecated UObject Columns\n" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
		{ "ToolTip", "deprecated UObject Columns" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserTable, Columns_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChooserTable_Statics::NewProp_Columns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::NewProp_Columns_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_ResultsStructs_Inner = { "ResultsStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserTable_Statics::NewProp_ResultsStructs_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ObjectChooserBase" },
		{ "Category", "Hidden" },
		{ "Comment", "// Each possible Result (Rows of chooser table)\n" },
		{ "DisplayName", "Results" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
		{ "ToolTip", "Each possible Result (Rows of chooser table)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_ResultsStructs = { "ResultsStructs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserTable, ResultsStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChooserTable_Statics::NewProp_ResultsStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::NewProp_ResultsStructs_MetaData)) }; // 3026308664
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_ColumnsStructs_Inner = { "ColumnsStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserTable_Statics::NewProp_ColumnsStructs_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ChooserColumnBase" },
		{ "Category", "Hidden" },
		{ "Comment", "// Columns which filter Results\n" },
		{ "DisplayName", "Columns" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
		{ "ToolTip", "Columns which filter Results" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_ColumnsStructs = { "ColumnsStructs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserTable, ColumnsStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChooserTable_Statics::NewProp_ColumnsStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::NewProp_ColumnsStructs_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserTable_Statics::NewProp_ContextObjectType_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_ContextObjectType = { "ContextObjectType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserTable, ContextObjectType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChooserTable_Statics::NewProp_ContextObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::NewProp_ContextObjectType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserTable_Statics::NewProp_OutputObjectType_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UChooserTable_Statics::NewProp_OutputObjectType = { "OutputObjectType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserTable, OutputObjectType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChooserTable_Statics::NewProp_OutputObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::NewProp_OutputObjectType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChooserTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_Results,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_Columns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_Columns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_ResultsStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_ResultsStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_ColumnsStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_ColumnsStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_ContextObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserTable_Statics::NewProp_OutputObjectType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooserTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserTable_Statics::ClassParams = {
		&UChooserTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChooserTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChooserTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserTable()
	{
		if (!Z_Registration_Info_UClass_UChooserTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserTable.OuterSingleton, Z_Construct_UClass_UChooserTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserTable.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserTable>()
	{
		return UChooserTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserTable);
	UChooserTable::~UChooserTable() {}

static_assert(std::is_polymorphic<FEvaluateChooser>() == std::is_polymorphic<FObjectChooserBase>(), "USTRUCT FEvaluateChooser cannot be polymorphic unless super FObjectChooserBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EvaluateChooser;
class UScriptStruct* FEvaluateChooser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EvaluateChooser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EvaluateChooser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEvaluateChooser, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EvaluateChooser"));
	}
	return Z_Registration_Info_UScriptStruct_EvaluateChooser.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FEvaluateChooser>()
{
	return FEvaluateChooser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEvaluateChooser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chooser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Chooser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEvaluateChooser_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Evaluate Chooser" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEvaluateChooser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEvaluateChooser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEvaluateChooser_Statics::NewProp_Chooser_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEvaluateChooser_Statics::NewProp_Chooser = { "Chooser", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEvaluateChooser, Chooser), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEvaluateChooser_Statics::NewProp_Chooser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEvaluateChooser_Statics::NewProp_Chooser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEvaluateChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEvaluateChooser_Statics::NewProp_Chooser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEvaluateChooser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FObjectChooserBase,
		&NewStructOps,
		"EvaluateChooser",
		sizeof(FEvaluateChooser),
		alignof(FEvaluateChooser),
		Z_Construct_UScriptStruct_FEvaluateChooser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEvaluateChooser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEvaluateChooser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEvaluateChooser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEvaluateChooser()
	{
		if (!Z_Registration_Info_UScriptStruct_EvaluateChooser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EvaluateChooser.InnerSingleton, Z_Construct_UScriptStruct_FEvaluateChooser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EvaluateChooser.InnerSingleton;
	}
	void UDEPRECATED_ObjectChooser_EvaluateChooser::StaticRegisterNativesUDEPRECATED_ObjectChooser_EvaluateChooser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ObjectChooser_EvaluateChooser);
	UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_NoRegister()
	{
		return UDEPRECATED_ObjectChooser_EvaluateChooser::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chooser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Chooser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "// Deprecated class for converting old data\n" },
		{ "IncludePath", "Chooser.h" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
		{ "ToolTip", "Deprecated class for converting old data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::NewProp_Chooser_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::NewProp_Chooser = { "Chooser", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ObjectChooser_EvaluateChooser, Chooser), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::NewProp_Chooser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::NewProp_Chooser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::NewProp_Chooser,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObjectChooser_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ObjectChooser_EvaluateChooser, IObjectChooser), false },  // 2307402721
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ObjectChooser_EvaluateChooser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::ClassParams = {
		&UDEPRECATED_ObjectChooser_EvaluateChooser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ObjectChooser_EvaluateChooser>()
	{
		return UDEPRECATED_ObjectChooser_EvaluateChooser::StaticClass();
	}
	UDEPRECATED_ObjectChooser_EvaluateChooser::UDEPRECATED_ObjectChooser_EvaluateChooser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ObjectChooser_EvaluateChooser);
	UDEPRECATED_ObjectChooser_EvaluateChooser::~UDEPRECATED_ObjectChooser_EvaluateChooser() {}
	void UChooserColumnMenuContext::StaticRegisterNativesUChooserColumnMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserColumnMenuContext);
	UClass* Z_Construct_UClass_UChooserColumnMenuContext_NoRegister()
	{
		return UChooserColumnMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UChooserColumnMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserColumnMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserColumnMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chooser.h" },
		{ "ModuleRelativePath", "Internal/Chooser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserColumnMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooserColumnMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserColumnMenuContext_Statics::ClassParams = {
		&UChooserColumnMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChooserColumnMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserColumnMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserColumnMenuContext()
	{
		if (!Z_Registration_Info_UClass_UChooserColumnMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserColumnMenuContext.OuterSingleton, Z_Construct_UClass_UChooserColumnMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserColumnMenuContext.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserColumnMenuContext>()
	{
		return UChooserColumnMenuContext::StaticClass();
	}
	UChooserColumnMenuContext::UChooserColumnMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserColumnMenuContext);
	UChooserColumnMenuContext::~UChooserColumnMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_Statics::ScriptStructInfo[] = {
		{ FEvaluateChooser::StaticStruct, Z_Construct_UScriptStruct_FEvaluateChooser_Statics::NewStructOps, TEXT("EvaluateChooser"), &Z_Registration_Info_UScriptStruct_EvaluateChooser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEvaluateChooser), 2307244182U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserTable, UChooserTable::StaticClass, TEXT("UChooserTable"), &Z_Registration_Info_UClass_UChooserTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserTable), 287436159U) },
		{ Z_Construct_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser, UDEPRECATED_ObjectChooser_EvaluateChooser::StaticClass, TEXT("UDEPRECATED_ObjectChooser_EvaluateChooser"), &Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_EvaluateChooser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ObjectChooser_EvaluateChooser), 2386274246U) },
		{ Z_Construct_UClass_UChooserColumnMenuContext, UChooserColumnMenuContext::StaticClass, TEXT("UChooserColumnMenuContext"), &Z_Registration_Info_UClass_UChooserColumnMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserColumnMenuContext), 3902209849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_1244161558(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_Chooser_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
