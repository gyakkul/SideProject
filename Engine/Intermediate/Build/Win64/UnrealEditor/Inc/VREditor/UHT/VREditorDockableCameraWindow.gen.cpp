// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VREditorDockableCameraWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorDockableCameraWindow() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableCameraWindow();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableCameraWindow_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow();
// End Cross Module References
	void AVREditorDockableCameraWindow::StaticRegisterNativesAVREditorDockableCameraWindow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorDockableCameraWindow);
	UClass* Z_Construct_UClass_AVREditorDockableCameraWindow_NoRegister()
	{
		return AVREditorDockableCameraWindow::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorDockableCameraWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorDockableCameraWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorDockableWindow,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableCameraWindow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A specialized dockable window for camera viewfinders in VR that applies the correct material\n */" },
		{ "IncludePath", "UI/VREditorDockableCameraWindow.h" },
		{ "ModuleRelativePath", "UI/VREditorDockableCameraWindow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A specialized dockable window for camera viewfinders in VR that applies the correct material" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorDockableCameraWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorDockableCameraWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorDockableCameraWindow_Statics::ClassParams = {
		&AVREditorDockableCameraWindow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableCameraWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableCameraWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorDockableCameraWindow()
	{
		if (!Z_Registration_Info_UClass_AVREditorDockableCameraWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorDockableCameraWindow.OuterSingleton, Z_Construct_UClass_AVREditorDockableCameraWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorDockableCameraWindow.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorDockableCameraWindow>()
	{
		return AVREditorDockableCameraWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorDockableCameraWindow);
	AVREditorDockableCameraWindow::~AVREditorDockableCameraWindow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableCameraWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableCameraWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorDockableCameraWindow, AVREditorDockableCameraWindow::StaticClass, TEXT("AVREditorDockableCameraWindow"), &Z_Registration_Info_UClass_AVREditorDockableCameraWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorDockableCameraWindow), 2369062531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableCameraWindow_h_1585723116(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableCameraWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableCameraWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
