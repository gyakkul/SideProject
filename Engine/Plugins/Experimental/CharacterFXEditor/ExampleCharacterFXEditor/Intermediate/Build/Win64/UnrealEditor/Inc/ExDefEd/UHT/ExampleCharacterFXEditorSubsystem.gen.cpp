// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExampleCharacterFXEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleCharacterFXEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditorSubsystem();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ExampleCharacterFXEditor();
// End Cross Module References
	void UExampleCharacterFXEditorSubsystem::StaticRegisterNativesUExampleCharacterFXEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleCharacterFXEditorSubsystem);
	UClass* Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_NoRegister()
	{
		return UExampleCharacterFXEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTargetManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolTargetManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ExampleCharacterFXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n *  Typically an Editor's Subsystem would be where the actual Asset editing happens -- when the user presses a button in\n *  the Editor, the Subsystem would apply the change to the Asset. In this example editor, however, we are using\n *  the InteractiveToolsFramework for much of this machinery.\n * \n *  This class still is useful if the Editor is not the default editor for a particular asset type. In this case,\n *  having an EditorSubsystem enables spawning the Editor for prescribed asset types (e.g. StaticMesh, SkeletalMesh).\n * \n *  It's included here as an example, but if the concrete AssetEditor is associated with an asset type this class may not\n *  be necessary.\n */" },
		{ "IncludePath", "ExampleCharacterFXEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/ExampleCharacterFXEditorSubsystem.h" },
		{ "ToolTip", "*  Typically an Editor's Subsystem would be where the actual Asset editing happens -- when the user presses a button in\n*  the Editor, the Subsystem would apply the change to the Asset. In this example editor, however, we are using\n*  the InteractiveToolsFramework for much of this machinery.\n*\n*  This class still is useful if the Editor is not the default editor for a particular asset type. In this case,\n*  having an EditorSubsystem enables spawning the Editor for prescribed asset types (e.g. StaticMesh, SkeletalMesh).\n*\n*  It's included here as an example, but if the concrete AssetEditor is associated with an asset type this class may not\n*  be necessary." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::NewProp_ToolTargetManager_MetaData[] = {
		{ "Comment", "/**\n\x09* Used to let the subsystem figure out whether targets are valid. New factories should be\n\x09* added here in Initialize()/GetToolTargetRequirements() as they are developed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExampleCharacterFXEditorSubsystem.h" },
		{ "ToolTip", "Used to let the subsystem figure out whether targets are valid. New factories should be\nadded here in Initialize()/GetToolTargetRequirements() as they are developed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::NewProp_ToolTargetManager = { "ToolTargetManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExampleCharacterFXEditorSubsystem, ToolTargetManager), Z_Construct_UClass_UToolTargetManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::NewProp_ToolTargetManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::NewProp_ToolTargetManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::NewProp_ToolTargetManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleCharacterFXEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::ClassParams = {
		&UExampleCharacterFXEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleCharacterFXEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UExampleCharacterFXEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleCharacterFXEditorSubsystem.OuterSingleton, Z_Construct_UClass_UExampleCharacterFXEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExampleCharacterFXEditorSubsystem.OuterSingleton;
	}
	template<> EXAMPLECHARACTERFXEDITOR_API UClass* StaticClass<UExampleCharacterFXEditorSubsystem>()
	{
		return UExampleCharacterFXEditorSubsystem::StaticClass();
	}
	UExampleCharacterFXEditorSubsystem::UExampleCharacterFXEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleCharacterFXEditorSubsystem);
	UExampleCharacterFXEditorSubsystem::~UExampleCharacterFXEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExampleCharacterFXEditorSubsystem, UExampleCharacterFXEditorSubsystem::StaticClass, TEXT("UExampleCharacterFXEditorSubsystem"), &Z_Registration_Info_UClass_UExampleCharacterFXEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleCharacterFXEditorSubsystem), 4264922746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorSubsystem_h_3241714960(TEXT("/Script/ExampleCharacterFXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
