// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorGizmos/EditorTransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTransformGizmo() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmo();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmo_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmo();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorTransformGizmo::StaticRegisterNativesUEditorTransformGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTransformGizmo);
	UClass* Z_Construct_UClass_UEditorTransformGizmo_NoRegister()
	{
		return UEditorTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTransformGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorTransformGizmo handles Editor-specific functionality for the TransformGizmo,\n * applied to a UEditorTransformProxy target object.\n */" },
		{ "IncludePath", "EditorGizmos/EditorTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/EditorGizmos/EditorTransformGizmo.h" },
		{ "ToolTip", "UEditorTransformGizmo handles Editor-specific functionality for the TransformGizmo,\napplied to a UEditorTransformProxy target object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTransformGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTransformGizmo_Statics::ClassParams = {
		&UEditorTransformGizmo::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTransformGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTransformGizmo()
	{
		if (!Z_Registration_Info_UClass_UEditorTransformGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTransformGizmo.OuterSingleton, Z_Construct_UClass_UEditorTransformGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTransformGizmo.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorTransformGizmo>()
	{
		return UEditorTransformGizmo::StaticClass();
	}
	UEditorTransformGizmo::UEditorTransformGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTransformGizmo);
	UEditorTransformGizmo::~UEditorTransformGizmo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTransformGizmo, UEditorTransformGizmo::StaticClass, TEXT("UEditorTransformGizmo"), &Z_Registration_Info_UClass_UEditorTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTransformGizmo), 2356209178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_2583517157(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
