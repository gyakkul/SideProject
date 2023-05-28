// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectAssetEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectAssetEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectAssetEditor();
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectAssetEditor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditor();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsEditorModule();
// End Cross Module References
	void USmartObjectAssetEditor::StaticRegisterNativesUSmartObjectAssetEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectAssetEditor);
	UClass* Z_Construct_UClass_USmartObjectAssetEditor_NoRegister()
	{
		return USmartObjectAssetEditor::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectAssetEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToEdit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectToEdit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectAssetEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditor,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectAssetEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartObjectAssetEditor.h" },
		{ "ModuleRelativePath", "Public/SmartObjectAssetEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectAssetEditor_Statics::NewProp_ObjectToEdit_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectAssetEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectAssetEditor_Statics::NewProp_ObjectToEdit = { "ObjectToEdit", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectAssetEditor, ObjectToEdit), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectAssetEditor_Statics::NewProp_ObjectToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectAssetEditor_Statics::NewProp_ObjectToEdit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectAssetEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectAssetEditor_Statics::NewProp_ObjectToEdit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectAssetEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectAssetEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectAssetEditor_Statics::ClassParams = {
		&USmartObjectAssetEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectAssetEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectAssetEditor_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectAssetEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectAssetEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectAssetEditor()
	{
		if (!Z_Registration_Info_UClass_USmartObjectAssetEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectAssetEditor.OuterSingleton, Z_Construct_UClass_USmartObjectAssetEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectAssetEditor.OuterSingleton;
	}
	template<> SMARTOBJECTSEDITORMODULE_API UClass* StaticClass<USmartObjectAssetEditor>()
	{
		return USmartObjectAssetEditor::StaticClass();
	}
	USmartObjectAssetEditor::USmartObjectAssetEditor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectAssetEditor);
	USmartObjectAssetEditor::~USmartObjectAssetEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectAssetEditor, USmartObjectAssetEditor::StaticClass, TEXT("USmartObjectAssetEditor"), &Z_Registration_Info_UClass_USmartObjectAssetEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectAssetEditor), 3570653122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_1704580072(TEXT("/Script/SmartObjectsEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_SmartObjectAssetEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
