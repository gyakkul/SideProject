// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseCharacterFXEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterFXEditorMode() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorMode();
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorMode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_BaseCharacterFXEditor();
// End Cross Module References
	void UBaseCharacterFXEditorMode::StaticRegisterNativesUBaseCharacterFXEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCharacterFXEditorMode);
	UClass* Z_Construct_UClass_UBaseCharacterFXEditorMode_NoRegister()
	{
		return UBaseCharacterFXEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BaseCharacterFXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The CharacterFX EditorMode stores much of the inter-tool state, including ToolTargets.\n*/" },
		{ "IncludePath", "BaseCharacterFXEditorMode.h" },
		{ "ModuleRelativePath", "Public/BaseCharacterFXEditorMode.h" },
		{ "ToolTip", "The CharacterFX EditorMode stores much of the inter-tool state, including ToolTargets." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_OriginalObjectsToEdit_Inner = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_OriginalObjectsToEdit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores original input objects\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseCharacterFXEditorMode.h" },
		{ "ToolTip", "Stores original input objects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_OriginalObjectsToEdit = { "OriginalObjectsToEdit", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCharacterFXEditorMode, OriginalObjectsToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_OriginalObjectsToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_OriginalObjectsToEdit_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_ToolTargets_Inner = { "ToolTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UToolTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_ToolTargets_MetaData[] = {
		{ "Comment", "/**\n\x09 * Tool targets created from OriginalObjectsToEdit (and 1:1 with that array) that provide us with dynamic meshes\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseCharacterFXEditorMode.h" },
		{ "ToolTip", "Tool targets created from OriginalObjectsToEdit (and 1:1 with that array) that provide us with dynamic meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_ToolTargets = { "ToolTargets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCharacterFXEditorMode, ToolTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_ToolTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_ToolTargets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_OriginalObjectsToEdit_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_OriginalObjectsToEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_ToolTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::NewProp_ToolTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterFXEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::ClassParams = {
		&UBaseCharacterFXEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCharacterFXEditorMode()
	{
		if (!Z_Registration_Info_UClass_UBaseCharacterFXEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterFXEditorMode.OuterSingleton, Z_Construct_UClass_UBaseCharacterFXEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCharacterFXEditorMode.OuterSingleton;
	}
	template<> BASECHARACTERFXEDITOR_API UClass* StaticClass<UBaseCharacterFXEditorMode>()
	{
		return UBaseCharacterFXEditorMode::StaticClass();
	}
	UBaseCharacterFXEditorMode::UBaseCharacterFXEditorMode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterFXEditorMode);
	UBaseCharacterFXEditorMode::~UBaseCharacterFXEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterFXEditorMode, UBaseCharacterFXEditorMode::StaticClass, TEXT("UBaseCharacterFXEditorMode"), &Z_Registration_Info_UClass_UBaseCharacterFXEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterFXEditorMode), 391789367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorMode_h_2304224497(TEXT("/Script/BaseCharacterFXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
