// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Selection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USelection();
	UNREALED_API UClass* Z_Construct_UClass_USelection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USelection::StaticRegisterNativesUSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelection);
	UClass* Z_Construct_UClass_USelection_NoRegister()
	{
		return USelection::StaticClass();
	}
	struct Z_Construct_UClass_USelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementSelectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ElementSelectionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages selections of objects.\n * Used in the editor for selecting objects in the various browser windows.\n */" },
		{ "IncludePath", "Selection.h" },
		{ "ModuleRelativePath", "Public/Selection.h" },
		{ "ToolTip", "Manages selections of objects.\nUsed in the editor for selecting objects in the various browser windows." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelection_Statics::NewProp_ElementSelectionSet_MetaData[] = {
		{ "Comment", "/** Underlying element selection set (if any). */" },
		{ "ModuleRelativePath", "Public/Selection.h" },
		{ "ToolTip", "Underlying element selection set (if any)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USelection_Statics::NewProp_ElementSelectionSet = { "ElementSelectionSet", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USelection, ElementSelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USelection_Statics::NewProp_ElementSelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelection_Statics::NewProp_ElementSelectionSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelection_Statics::NewProp_ElementSelectionSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelection_Statics::ClassParams = {
		&USelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USelection_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelection()
	{
		if (!Z_Registration_Info_UClass_USelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelection.OuterSingleton, Z_Construct_UClass_USelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelection.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USelection>()
	{
		return USelection::StaticClass();
	}
	USelection::USelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelection);
	USelection::~USelection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USelection)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelection, USelection::StaticClass, TEXT("USelection"), &Z_Registration_Info_UClass_USelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelection), 1863712943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_1305937636(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
