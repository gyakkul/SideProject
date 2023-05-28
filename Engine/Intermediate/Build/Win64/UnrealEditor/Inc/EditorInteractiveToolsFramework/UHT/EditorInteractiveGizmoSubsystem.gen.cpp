// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorInteractiveGizmoSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorInteractiveGizmoSubsystem() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoRegistry_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoSubsystem();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorInteractiveGizmoSubsystem::StaticRegisterNativesUEditorInteractiveGizmoSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorInteractiveGizmoSubsystem);
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_NoRegister()
	{
		return UEditorInteractiveGizmoSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmoBuilder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmoBuilder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Registry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The InteractiveGizmoSubsystem provides methods for registering and unregistering \n * selection-based gizmo builders. This subsystem will be queried for qualified \n * builders based on the current selection.\n *\n * This subsystem should be used to register gizmo selection-based builders which are not specific\n * to an ed mode or asset editor. \n * For gizmo selection-based builders which are specific to an ed mode or asset editor,\n * register with the UEditorinteractiveGizmoManager instead, when the ed mode or asset editor\n * starts up (and deregister when the mode or asset editor shuts down).\n * \n * Plugins registering gizmo types should bind to the delegates returned by:\n * - OnEditorGizmoSubsystemRegisterEditorGizmoTypes()\n * - OnEditorGizmoSubsystemDeregisterEditorGizmoTypes()\n * to register and dergister their gizmo builders.\n */" },
		{ "IncludePath", "EditorInteractiveGizmoSubsystem.h" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoSubsystem.h" },
		{ "ToolTip", "The InteractiveGizmoSubsystem provides methods for registering and unregistering\nselection-based gizmo builders. This subsystem will be queried for qualified\nbuilders based on the current selection.\n\nThis subsystem should be used to register gizmo selection-based builders which are not specific\nto an ed mode or asset editor.\nFor gizmo selection-based builders which are specific to an ed mode or asset editor,\nregister with the UEditorinteractiveGizmoManager instead, when the ed mode or asset editor\nstarts up (and deregister when the mode or asset editor shuts down).\n\nPlugins registering gizmo types should bind to the delegates returned by:\n- OnEditorGizmoSubsystemRegisterEditorGizmoTypes()\n- OnEditorGizmoSubsystemDeregisterEditorGizmoTypes()\nto register and dergister their gizmo builders." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_TransformGizmoBuilder_MetaData[] = {
		{ "Comment", "/** TRS gizmo builder */" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoSubsystem.h" },
		{ "ToolTip", "TRS gizmo builder" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_TransformGizmoBuilder = { "TransformGizmoBuilder", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorInteractiveGizmoSubsystem, TransformGizmoBuilder), Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_TransformGizmoBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_TransformGizmoBuilder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_Registry_MetaData[] = {
		{ "Comment", "/** Actual registry */" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoSubsystem.h" },
		{ "ToolTip", "Actual registry" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorInteractiveGizmoSubsystem, Registry), Z_Construct_UClass_UEditorInteractiveGizmoRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_Registry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_Registry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_TransformGizmoBuilder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::NewProp_Registry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorInteractiveGizmoSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::ClassParams = {
		&UEditorInteractiveGizmoSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorInteractiveGizmoSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorInteractiveGizmoSubsystem.OuterSingleton, Z_Construct_UClass_UEditorInteractiveGizmoSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorInteractiveGizmoSubsystem.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorInteractiveGizmoSubsystem>()
	{
		return UEditorInteractiveGizmoSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorInteractiveGizmoSubsystem);
	UEditorInteractiveGizmoSubsystem::~UEditorInteractiveGizmoSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorInteractiveGizmoSubsystem, UEditorInteractiveGizmoSubsystem::StaticClass, TEXT("UEditorInteractiveGizmoSubsystem"), &Z_Registration_Info_UClass_UEditorInteractiveGizmoSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorInteractiveGizmoSubsystem), 301475736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSubsystem_h_2871669515(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
