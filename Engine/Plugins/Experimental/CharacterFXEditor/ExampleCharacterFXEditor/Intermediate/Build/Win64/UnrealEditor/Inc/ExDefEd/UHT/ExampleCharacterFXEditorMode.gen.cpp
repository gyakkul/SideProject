// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExampleCharacterFXEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleCharacterFXEditorMode() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorMode();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditorMode();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditorMode_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ExampleCharacterFXEditor();
// End Cross Module References
	void UExampleCharacterFXEditorMode::StaticRegisterNativesUExampleCharacterFXEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleCharacterFXEditorMode);
	UClass* Z_Construct_UClass_UExampleCharacterFXEditorMode_NoRegister()
	{
		return UExampleCharacterFXEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicMeshComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterFXEditorMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ExampleCharacterFXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExampleCharacterFXEditorMode.h" },
		{ "ModuleRelativePath", "Public/ExampleCharacterFXEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::NewProp_DynamicMeshComponents_Inner = { "DynamicMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::NewProp_DynamicMeshComponents_MetaData[] = {
		{ "Comment", "// NOTE: Since the Example CharacterFX Editor is not the \"default\" editor for a particular asset type and we still want to have something to render,\n// we instead store a set of temporary DynamicMeshComponents here. This should not be necessary if your editor is the default for an asset type\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExampleCharacterFXEditorMode.h" },
		{ "ToolTip", "NOTE: Since the Example CharacterFX Editor is not the \"default\" editor for a particular asset type and we still want to have something to render,\nwe instead store a set of temporary DynamicMeshComponents here. This should not be necessary if your editor is the default for an asset type" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::NewProp_DynamicMeshComponents = { "DynamicMeshComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExampleCharacterFXEditorMode, DynamicMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::NewProp_DynamicMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::NewProp_DynamicMeshComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::NewProp_DynamicMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::NewProp_DynamicMeshComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleCharacterFXEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::ClassParams = {
		&UExampleCharacterFXEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleCharacterFXEditorMode()
	{
		if (!Z_Registration_Info_UClass_UExampleCharacterFXEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleCharacterFXEditorMode.OuterSingleton, Z_Construct_UClass_UExampleCharacterFXEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExampleCharacterFXEditorMode.OuterSingleton;
	}
	template<> EXAMPLECHARACTERFXEDITOR_API UClass* StaticClass<UExampleCharacterFXEditorMode>()
	{
		return UExampleCharacterFXEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleCharacterFXEditorMode);
	UExampleCharacterFXEditorMode::~UExampleCharacterFXEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExampleCharacterFXEditorMode, UExampleCharacterFXEditorMode::StaticClass, TEXT("UExampleCharacterFXEditorMode"), &Z_Registration_Info_UClass_UExampleCharacterFXEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleCharacterFXEditorMode), 1627483781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorMode_h_2814384351(TEXT("/Script/ExampleCharacterFXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
