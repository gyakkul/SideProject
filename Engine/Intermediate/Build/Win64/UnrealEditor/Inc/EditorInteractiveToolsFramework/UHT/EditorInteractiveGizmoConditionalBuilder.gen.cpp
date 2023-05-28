// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorInteractiveGizmoConditionalBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorInteractiveGizmoConditionalBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorInteractiveGizmoConditionalBuilder::StaticRegisterNativesUEditorInteractiveGizmoConditionalBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorInteractiveGizmoConditionalBuilder);
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_NoRegister()
	{
		return UEditorInteractiveGizmoConditionalBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoConditionalBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEditorInteractiveGizmoConditionalBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics::ClassParams = {
		&UEditorInteractiveGizmoConditionalBuilder::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditorInteractiveGizmoConditionalBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorInteractiveGizmoConditionalBuilder.OuterSingleton, Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorInteractiveGizmoConditionalBuilder.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorInteractiveGizmoConditionalBuilder>()
	{
		return UEditorInteractiveGizmoConditionalBuilder::StaticClass();
	}
	UEditorInteractiveGizmoConditionalBuilder::UEditorInteractiveGizmoConditionalBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorInteractiveGizmoConditionalBuilder);
	UEditorInteractiveGizmoConditionalBuilder::~UEditorInteractiveGizmoConditionalBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoConditionalBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoConditionalBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorInteractiveGizmoConditionalBuilder, UEditorInteractiveGizmoConditionalBuilder::StaticClass, TEXT("UEditorInteractiveGizmoConditionalBuilder"), &Z_Registration_Info_UClass_UEditorInteractiveGizmoConditionalBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorInteractiveGizmoConditionalBuilder), 1497271824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoConditionalBuilder_h_1705539596(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoConditionalBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoConditionalBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
