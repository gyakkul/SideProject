// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorInteractiveGizmoSelectionBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorInteractiveGizmoSelectionBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorInteractiveGizmoSelectionBuilder::StaticRegisterNativesUEditorInteractiveGizmoSelectionBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorInteractiveGizmoSelectionBuilder);
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_NoRegister()
	{
		return UEditorInteractiveGizmoSelectionBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoSelectionBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEditorInteractiveGizmoSelectionBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics::ClassParams = {
		&UEditorInteractiveGizmoSelectionBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditorInteractiveGizmoSelectionBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorInteractiveGizmoSelectionBuilder.OuterSingleton, Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorInteractiveGizmoSelectionBuilder.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorInteractiveGizmoSelectionBuilder>()
	{
		return UEditorInteractiveGizmoSelectionBuilder::StaticClass();
	}
	UEditorInteractiveGizmoSelectionBuilder::UEditorInteractiveGizmoSelectionBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorInteractiveGizmoSelectionBuilder);
	UEditorInteractiveGizmoSelectionBuilder::~UEditorInteractiveGizmoSelectionBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder, UEditorInteractiveGizmoSelectionBuilder::StaticClass, TEXT("UEditorInteractiveGizmoSelectionBuilder"), &Z_Registration_Info_UClass_UEditorInteractiveGizmoSelectionBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorInteractiveGizmoSelectionBuilder), 3309220102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_3374329619(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSelectionBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
