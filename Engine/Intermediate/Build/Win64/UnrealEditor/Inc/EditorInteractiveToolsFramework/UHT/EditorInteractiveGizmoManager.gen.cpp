// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorInteractiveGizmoManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorInteractiveGizmoManager() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoManager();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoManager_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoRegistry_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActiveEditorGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveEditorGizmo;
class UScriptStruct* FActiveEditorGizmo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveEditorGizmo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveEditorGizmo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveEditorGizmo, (UObject*)Z_Construct_UPackage__Script_EditorInteractiveToolsFramework(), TEXT("ActiveEditorGizmo"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveEditorGizmo.OuterSingleton;
}
template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FActiveEditorGizmo>()
{
	return FActiveEditorGizmo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Gizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveEditorGizmo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::NewProp_Gizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::NewProp_Gizmo = { "Gizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveEditorGizmo, Gizmo), Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::NewProp_Gizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::NewProp_Gizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::NewProp_Gizmo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"ActiveEditorGizmo",
		sizeof(FActiveEditorGizmo),
		alignof(FActiveEditorGizmo),
		Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveEditorGizmo()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveEditorGizmo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveEditorGizmo.InnerSingleton, Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveEditorGizmo.InnerSingleton;
	}
	void UEditorInteractiveGizmoManager::StaticRegisterNativesUEditorInteractiveGizmoManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorInteractiveGizmoManager);
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoManager_NoRegister()
	{
		return UEditorInteractiveGizmoManager::StaticClass();
	}
	struct Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Registry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEditorGizmos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEditorGizmos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEditorGizmos;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedGizmoMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedGizmoMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedGizmoMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedGizmoMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoManager,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorInteractiveGizmoManager allows users of the Tools framework to register and create selection-based Gizmo instances.\n * For each selection-based Gizmo, a builder derived from UInteractiveGizmoSelectionBuilder is registered with the GizmoManager.\n * When the section changes, the highest priority builders for which SatisfiesCondition() return true, will be used to\n * build gizmos.\n */" },
		{ "IncludePath", "EditorInteractiveGizmoManager.h" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoManager.h" },
		{ "ToolTip", "UEditorInteractiveGizmoManager allows users of the Tools framework to register and create selection-based Gizmo instances.\nFor each selection-based Gizmo, a builder derived from UInteractiveGizmoSelectionBuilder is registered with the GizmoManager.\nWhen the section changes, the highest priority builders for which SatisfiesCondition() return true, will be used to\nbuild gizmos." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_Registry_MetaData[] = {
		{ "Comment", "/** Actual registry */" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoManager.h" },
		{ "ToolTip", "Actual registry" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorInteractiveGizmoManager, Registry), Z_Construct_UClass_UEditorInteractiveGizmoRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_Registry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_Registry_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_ActiveEditorGizmos_Inner = { "ActiveEditorGizmos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveEditorGizmo, METADATA_PARAMS(nullptr, 0) }; // 1479973880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_ActiveEditorGizmos_MetaData[] = {
		{ "Comment", "/** set of Currently-active Gizmos */" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoManager.h" },
		{ "ToolTip", "set of Currently-active Gizmos" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_ActiveEditorGizmos = { "ActiveEditorGizmos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorInteractiveGizmoManager, ActiveEditorGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_ActiveEditorGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_ActiveEditorGizmos_MetaData)) }; // 1479973880
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap_ValueProp = { "CachedGizmoMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap_Key_KeyProp = { "CachedGizmoMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap_MetaData[] = {
		{ "Comment", "/** Cache for already built gizmos, currently this only caches the transform */" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoManager.h" },
		{ "ToolTip", "Cache for already built gizmos, currently this only caches the transform" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap = { "CachedGizmoMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorInteractiveGizmoManager, CachedGizmoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_Registry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_ActiveEditorGizmos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_ActiveEditorGizmos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::NewProp_CachedGizmoMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorInteractiveGizmoManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::ClassParams = {
		&UEditorInteractiveGizmoManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoManager()
	{
		if (!Z_Registration_Info_UClass_UEditorInteractiveGizmoManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorInteractiveGizmoManager.OuterSingleton, Z_Construct_UClass_UEditorInteractiveGizmoManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorInteractiveGizmoManager.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorInteractiveGizmoManager>()
	{
		return UEditorInteractiveGizmoManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorInteractiveGizmoManager);
	UEditorInteractiveGizmoManager::~UEditorInteractiveGizmoManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_Statics::ScriptStructInfo[] = {
		{ FActiveEditorGizmo::StaticStruct, Z_Construct_UScriptStruct_FActiveEditorGizmo_Statics::NewStructOps, TEXT("ActiveEditorGizmo"), &Z_Registration_Info_UScriptStruct_ActiveEditorGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveEditorGizmo), 1479973880U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorInteractiveGizmoManager, UEditorInteractiveGizmoManager::StaticClass, TEXT("UEditorInteractiveGizmoManager"), &Z_Registration_Info_UClass_UEditorInteractiveGizmoManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorInteractiveGizmoManager), 2337654852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_1083295343(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
