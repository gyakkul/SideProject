// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionEditorOnlyData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionEditorOnlyData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialExpressionCollection();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialFunctionEditorOnlyData::StaticRegisterNativesUMaterialFunctionEditorOnlyData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionEditorOnlyData);
	UClass* Z_Construct_UClass_UMaterialFunctionEditorOnlyData_NoRegister()
	{
		return UMaterialFunctionEditorOnlyData::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Materials/MaterialFunction.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::NewProp_ExpressionCollection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::NewProp_ExpressionCollection = { "ExpressionCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionEditorOnlyData, ExpressionCollection), Z_Construct_UScriptStruct_FMaterialExpressionCollection, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::NewProp_ExpressionCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::NewProp_ExpressionCollection_MetaData)) }; // 2934744199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::NewProp_ExpressionCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionEditorOnlyData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::ClassParams = {
		&UMaterialFunctionEditorOnlyData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionEditorOnlyData()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.OuterSingleton, Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionEditorOnlyData>()
	{
		return UMaterialFunctionEditorOnlyData::StaticClass();
	}
	UMaterialFunctionEditorOnlyData::UMaterialFunctionEditorOnlyData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionEditorOnlyData);
	UMaterialFunctionEditorOnlyData::~UMaterialFunctionEditorOnlyData() {}
	void UMaterialFunction::StaticRegisterNativesUMaterialFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunction);
	UClass* Z_Construct_UClass_UMaterialFunction_NoRegister()
	{
		return UMaterialFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentFunction;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrefixParameterNames_MetaData[];
#endif
		static void NewProp_bPrefixParameterNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefixParameterNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableExecWire_MetaData[];
#endif
		static void NewProp_bEnableExecWire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableExecWire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNewHLSLGenerator_MetaData[];
#endif
		static void NewProp_bEnableNewHLSLGenerator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNewHLSLGenerator;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_LibraryCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LibraryCategories;
		static const UECodeGen_Private::FTextPropertyParams NewProp_LibraryCategoriesText_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryCategoriesText_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LibraryCategoriesText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterial;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DependentFunctionExpressionCandidates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependentFunctionExpressionCandidates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DependentFunctionExpressionCandidates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewBlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReentrantFlag_MetaData[];
#endif
		static void NewProp_bReentrantFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReentrantFlag;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionExpressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionExpressions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionEditorComments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionEditorComments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionEditorComments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecBegin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExpressionExecBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExpressionExecEnd;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Material Function is a collection of material expressions that can be reused in different materials\n */" },
		{ "HideCategories", "object object" },
		{ "IncludePath", "Materials/MaterialFunction.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData[] = {
		{ "Comment", "/** Used in the material editor, points to the function asset being edited, which this function is just a preview for. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Used in the material editor, points to the function asset being edited, which this function is just a preview for." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction = { "ParentFunction", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, ParentFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** Description of the function which will be displayed as a tooltip wherever the function is used. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Description of the function which will be displayed as a tooltip wherever the function is used." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** Whether to list this function in the material function library, which is a window in the material editor that lists categorized functions. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Whether to list this function in the material function library, which is a window in the material editor that lists categorized functions." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bExposeToLibrary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** If true, parameters in this function will have a prefix added to their group name. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "If true, parameters in this function will have a prefix added to their group name." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bPrefixParameterNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames = { "bPrefixParameterNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableExecWire_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableExecWire_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bEnableExecWire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableExecWire = { "bEnableExecWire", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableExecWire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableExecWire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableExecWire_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableNewHLSLGenerator_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableNewHLSLGenerator_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bEnableNewHLSLGenerator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableNewHLSLGenerator = { "bEnableNewHLSLGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableNewHLSLGenerator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableNewHLSLGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableNewHLSLGenerator_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_Inner = { "LibraryCategories", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData[] = {
		{ "Comment", "/** \n\x09 * Categories that this function belongs to in the material function library.  \n\x09 * Ideally categories should be chosen carefully so that there are not too many.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories = { "LibraryCategories", nullptr, (EPropertyFlags)0x0010010820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, LibraryCategories_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_Inner = { "LibraryCategoriesText", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** \n\x09 * Categories that this function belongs to in the material function library.  \n\x09 * Ideally categories should be chosen carefully so that there are not too many.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText = { "LibraryCategoriesText", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, LibraryCategoriesText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_Inner = { "DependentFunctionExpressionCandidates", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates = { "DependentFunctionExpressionCandidates", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, DependentFunctionExpressionCandidates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewBlendMode_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Determines the blend mode when previewing a material function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Determines the blend mode when previewing a material function." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewBlendMode = { "PreviewBlendMode", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, PreviewBlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewBlendMode_MetaData)) }; // 799871737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData[] = {
		{ "Comment", "/** Transient flag used to track re-entrance in recursive functions like IsDependent. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Transient flag used to track re-entrance in recursive functions like IsDependent." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bReentrantFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag = { "bReentrantFlag", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_Inner = { "FunctionExpressions", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions = { "FunctionExpressions", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, FunctionExpressions_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_Inner = { "FunctionEditorComments", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments = { "FunctionEditorComments", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, FunctionEditorComments_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecBegin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecBegin = { "ExpressionExecBegin", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, ExpressionExecBegin_DEPRECATED), Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecEnd = { "ExpressionExecEnd", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunction, ExpressionExecEnd_DEPRECATED), Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecEnd_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunction_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableExecWire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bEnableNewHLSLGenerator,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ExpressionExecEnd,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunction_Statics::ClassParams = {
		&UMaterialFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunction()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunction.OuterSingleton, Z_Construct_UClass_UMaterialFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunction.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialFunction>()
	{
		return UMaterialFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunction);
	UMaterialFunction::~UMaterialFunction() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunction)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionEditorOnlyData, UMaterialFunctionEditorOnlyData::StaticClass, TEXT("UMaterialFunctionEditorOnlyData"), &Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionEditorOnlyData), 710924700U) },
		{ Z_Construct_UClass_UMaterialFunction, UMaterialFunction::StaticClass, TEXT("UMaterialFunction"), &Z_Registration_Info_UClass_UMaterialFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunction), 2437447690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_2796899649(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
