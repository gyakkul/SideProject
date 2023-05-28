// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorGizmos/EditorTransformProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTransformProxy() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformProxy();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformProxy_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorTransformProxy::StaticRegisterNativesUEditorTransformProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTransformProxy);
	UClass* Z_Construct_UClass_UEditorTransformProxy_NoRegister()
	{
		return UEditorTransformProxy::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTransformProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTransformProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTransformProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTransformProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorTransformProxy is a derivation of UTransformProxy that\n * returns the transform that defines the current space of the default\n * Editor transform gizmo for a given mode manager / viewport.\n * \n * @todo Currently this defaults internally to GLevelEditorModeManager()\n * but eventually it should be possible to set and use a different mode\n * manager.\n */" },
		{ "IncludePath", "EditorGizmos/EditorTransformProxy.h" },
		{ "ModuleRelativePath", "Public/EditorGizmos/EditorTransformProxy.h" },
		{ "ToolTip", "UEditorTransformProxy is a derivation of UTransformProxy that\nreturns the transform that defines the current space of the default\nEditor transform gizmo for a given mode manager / viewport.\n\n@todo Currently this defaults internally to GLevelEditorModeManager()\nbut eventually it should be possible to set and use a different mode\nmanager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTransformProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTransformProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTransformProxy_Statics::ClassParams = {
		&UEditorTransformProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorTransformProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTransformProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTransformProxy()
	{
		if (!Z_Registration_Info_UClass_UEditorTransformProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTransformProxy.OuterSingleton, Z_Construct_UClass_UEditorTransformProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTransformProxy.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorTransformProxy>()
	{
		return UEditorTransformProxy::StaticClass();
	}
	UEditorTransformProxy::UEditorTransformProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTransformProxy);
	UEditorTransformProxy::~UEditorTransformProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTransformProxy, UEditorTransformProxy::StaticClass, TEXT("UEditorTransformProxy"), &Z_Registration_Info_UClass_UEditorTransformProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTransformProxy), 2348846478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformProxy_h_1139868418(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
