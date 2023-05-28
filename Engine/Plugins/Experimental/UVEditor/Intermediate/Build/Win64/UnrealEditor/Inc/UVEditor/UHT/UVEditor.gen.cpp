// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditor();
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditor_NoRegister();
// End Cross Module References
	void UUVEditor::StaticRegisterNativesUUVEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditor);
	UClass* Z_Construct_UClass_UUVEditor_NoRegister()
	{
		return UUVEditor::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditor_Statics
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
	UObject* (*const Z_Construct_UClass_UUVEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditor,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The actual asset editor class doesn't have that much in it, intentionally. \n * \n * Our current asset editor guidelines ask us to place as little business logic as possible\n * into the class, instead putting as much of the non-UI code into the subsystem as possible,\n * and the UI code into the toolkit (which this class owns).\n *\n * However, since we're using a mode and the Interactive Tools Framework, a lot of our business logic\n * ends up inside the mode and the tools, not the subsystem. The front-facing code is mostly in\n * the asset editor toolkit, though the mode toolkit has most of the things that deal with the toolbar\n * on the left.\n */" },
		{ "IncludePath", "UVEditor.h" },
		{ "ModuleRelativePath", "Public/UVEditor.h" },
		{ "ToolTip", "The actual asset editor class doesn't have that much in it, intentionally.\n\nOur current asset editor guidelines ask us to place as little business logic as possible\ninto the class, instead putting as much of the non-UI code into the subsystem as possible,\nand the UI code into the toolkit (which this class owns).\n\nHowever, since we're using a mode and the Interactive Tools Framework, a lot of our business logic\nends up inside the mode and the tools, not the subsystem. The front-facing code is mostly in\nthe asset editor toolkit, though the mode toolkit has most of the things that deal with the toolbar\non the left." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditor_Statics::NewProp_OriginalObjectsToEdit_Inner = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditor_Statics::NewProp_OriginalObjectsToEdit_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditor_Statics::NewProp_OriginalObjectsToEdit = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditor, OriginalObjectsToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditor_Statics::NewProp_OriginalObjectsToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditor_Statics::NewProp_OriginalObjectsToEdit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditor_Statics::NewProp_OriginalObjectsToEdit_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditor_Statics::NewProp_OriginalObjectsToEdit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditor_Statics::ClassParams = {
		&UUVEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditor()
	{
		if (!Z_Registration_Info_UClass_UUVEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditor.OuterSingleton, Z_Construct_UClass_UUVEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditor.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditor>()
	{
		return UUVEditor::StaticClass();
	}
	UUVEditor::UUVEditor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditor);
	UUVEditor::~UUVEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditor, UUVEditor::StaticClass, TEXT("UUVEditor"), &Z_Registration_Info_UClass_UUVEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditor), 589350076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditor_h_1280338706(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
