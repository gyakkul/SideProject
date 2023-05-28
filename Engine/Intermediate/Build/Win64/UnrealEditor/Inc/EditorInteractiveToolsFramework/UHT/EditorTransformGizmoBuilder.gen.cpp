// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorGizmos/EditorTransformGizmoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTransformGizmoBuilder() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmoBuilder();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorTransformGizmoBuilder::StaticRegisterNativesUEditorTransformGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTransformGizmoBuilder);
	UClass* Z_Construct_UClass_UEditorTransformGizmoBuilder_NoRegister()
	{
		return UEditorTransformGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorGizmos/EditorTransformGizmoBuilder.h" },
		{ "ModuleRelativePath", "Public/EditorGizmos/EditorTransformGizmoBuilder.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEditorInteractiveGizmoSelectionBuilder_NoRegister, (int32)VTABLE_OFFSET(UEditorTransformGizmoBuilder, IEditorInteractiveGizmoSelectionBuilder), false },  // 3309220102
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTransformGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::ClassParams = {
		&UEditorTransformGizmoBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTransformGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditorTransformGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTransformGizmoBuilder.OuterSingleton, Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTransformGizmoBuilder.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorTransformGizmoBuilder>()
	{
		return UEditorTransformGizmoBuilder::StaticClass();
	}
	UEditorTransformGizmoBuilder::UEditorTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTransformGizmoBuilder);
	UEditorTransformGizmoBuilder::~UEditorTransformGizmoBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTransformGizmoBuilder, UEditorTransformGizmoBuilder::StaticClass, TEXT("UEditorTransformGizmoBuilder"), &Z_Registration_Info_UClass_UEditorTransformGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTransformGizmoBuilder), 2094969179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_1060454041(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
