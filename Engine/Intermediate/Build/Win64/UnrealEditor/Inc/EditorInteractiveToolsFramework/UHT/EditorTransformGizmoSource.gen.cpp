// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorGizmos/EditorTransformGizmoSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTransformGizmoSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmoSource();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorTransformGizmoSource_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmoSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UEditorTransformGizmoSource::StaticRegisterNativesUEditorTransformGizmoSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTransformGizmoSource);
	UClass* Z_Construct_UClass_UEditorTransformGizmoSource_NoRegister()
	{
		return UEditorTransformGizmoSource::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTransformGizmoSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTransformGizmoSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTransformGizmoSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorTransformGizmoSource is an ITransformGizmoSource implementation that provides\n * current state information used to configure the Editor transform gizmo.\n */" },
		{ "IncludePath", "EditorGizmos/EditorTransformGizmoSource.h" },
		{ "ModuleRelativePath", "Public/EditorGizmos/EditorTransformGizmoSource.h" },
		{ "ToolTip", "UEditorTransformGizmoSource is an ITransformGizmoSource implementation that provides\ncurrent state information used to configure the Editor transform gizmo." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEditorTransformGizmoSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTransformGizmoSource_NoRegister, (int32)VTABLE_OFFSET(UEditorTransformGizmoSource, ITransformGizmoSource), false },  // 1284711616
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTransformGizmoSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTransformGizmoSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTransformGizmoSource_Statics::ClassParams = {
		&UEditorTransformGizmoSource::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTransformGizmoSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTransformGizmoSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTransformGizmoSource()
	{
		if (!Z_Registration_Info_UClass_UEditorTransformGizmoSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTransformGizmoSource.OuterSingleton, Z_Construct_UClass_UEditorTransformGizmoSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTransformGizmoSource.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorTransformGizmoSource>()
	{
		return UEditorTransformGizmoSource::StaticClass();
	}
	UEditorTransformGizmoSource::UEditorTransformGizmoSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTransformGizmoSource);
	UEditorTransformGizmoSource::~UEditorTransformGizmoSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTransformGizmoSource, UEditorTransformGizmoSource::StaticClass, TEXT("UEditorTransformGizmoSource"), &Z_Registration_Info_UClass_UEditorTransformGizmoSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTransformGizmoSource), 443394399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_776875348(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
