// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseCharacterFXEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterFXEditor() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditor();
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditor();
	UPackage* Z_Construct_UPackage__Script_BaseCharacterFXEditor();
// End Cross Module References
	void UBaseCharacterFXEditor::StaticRegisterNativesUBaseCharacterFXEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCharacterFXEditor);
	UClass* Z_Construct_UClass_UBaseCharacterFXEditor_NoRegister()
	{
		return UBaseCharacterFXEditor::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCharacterFXEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalObjectsToEdit_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObjectsToEdit_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalObjectsToEdit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCharacterFXEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditor,
		(UObject* (*)())Z_Construct_UPackage__Script_BaseCharacterFXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterFXEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base UAssetEditor class for character simulation asset editors (e.g. cloth, hair, flesh).\n * \n * Our current asset editor guidelines ask us to place as little business logic as possible\n * into the class, instead putting as much of the non-UI code into the subsystem as possible,\n * and the UI code into the toolkit (which this class owns).\n *\n * However, since we're using a mode and the Interactive Tools Framework, a lot of our business logic\n * ends up inside the mode and the tools, not the subsystem. The front-facing code is mostly in\n * the asset editor toolkit, though the mode toolkit has most of the things that deal with the toolbar\n * on the left. \n * \n */" },
		{ "IncludePath", "BaseCharacterFXEditor.h" },
		{ "ModuleRelativePath", "Public/BaseCharacterFXEditor.h" },
		{ "ToolTip", "Base UAssetEditor class for character simulation asset editors (e.g. cloth, hair, flesh).\n\nOur current asset editor guidelines ask us to place as little business logic as possible\ninto the class, instead putting as much of the non-UI code into the subsystem as possible,\nand the UI code into the toolkit (which this class owns).\n\nHowever, since we're using a mode and the Interactive Tools Framework, a lot of our business logic\nends up inside the mode and the tools, not the subsystem. The front-facing code is mostly in\nthe asset editor toolkit, though the mode toolkit has most of the things that deal with the toolbar\non the left." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCharacterFXEditor_Statics::NewProp_OriginalObjectsToEdit_Inner = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterFXEditor_Statics::NewProp_OriginalObjectsToEdit_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseCharacterFXEditor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCharacterFXEditor_Statics::NewProp_OriginalObjectsToEdit = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCharacterFXEditor, OriginalObjectsToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterFXEditor_Statics::NewProp_OriginalObjectsToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditor_Statics::NewProp_OriginalObjectsToEdit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterFXEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterFXEditor_Statics::NewProp_OriginalObjectsToEdit_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterFXEditor_Statics::NewProp_OriginalObjectsToEdit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCharacterFXEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterFXEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterFXEditor_Statics::ClassParams = {
		&UBaseCharacterFXEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCharacterFXEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterFXEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCharacterFXEditor()
	{
		if (!Z_Registration_Info_UClass_UBaseCharacterFXEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterFXEditor.OuterSingleton, Z_Construct_UClass_UBaseCharacterFXEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCharacterFXEditor.OuterSingleton;
	}
	template<> BASECHARACTERFXEDITOR_API UClass* StaticClass<UBaseCharacterFXEditor>()
	{
		return UBaseCharacterFXEditor::StaticClass();
	}
	UBaseCharacterFXEditor::UBaseCharacterFXEditor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterFXEditor);
	UBaseCharacterFXEditor::~UBaseCharacterFXEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterFXEditor, UBaseCharacterFXEditor::StaticClass, TEXT("UBaseCharacterFXEditor"), &Z_Registration_Info_UClass_UBaseCharacterFXEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterFXEditor), 3200788127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_1637075960(TEXT("/Script/BaseCharacterFXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
