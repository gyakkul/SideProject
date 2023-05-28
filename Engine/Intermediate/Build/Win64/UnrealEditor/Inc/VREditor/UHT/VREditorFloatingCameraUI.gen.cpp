// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VREditorFloatingCameraUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorFloatingCameraUI() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingCameraUI();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingCameraUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI();
// End Cross Module References
	void AVREditorFloatingCameraUI::StaticRegisterNativesAVREditorFloatingCameraUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorFloatingCameraUI);
	UClass* Z_Construct_UClass_AVREditorFloatingCameraUI_NoRegister()
	{
		return AVREditorFloatingCameraUI::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorFloatingCameraUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetFromCamera_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetFromCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorFloatingUI,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an interactive floating UI camera preview panel in the VR Editor\n */" },
		{ "IncludePath", "UI/VREditorFloatingCameraUI.h" },
		{ "ModuleRelativePath", "UI/VREditorFloatingCameraUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents an interactive floating UI camera preview panel in the VR Editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_OffsetFromCamera_MetaData[] = {
		{ "Category", "FloatingCameraUI" },
		{ "Comment", "/** The offset of this UI from its camera */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingCameraUI.h" },
		{ "ToolTip", "The offset of this UI from its camera" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_OffsetFromCamera = { "OffsetFromCamera", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorFloatingCameraUI, OffsetFromCamera), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_OffsetFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_OffsetFromCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorFloatingCameraUI.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor = { "LinkedActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorFloatingCameraUI, LinkedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_OffsetFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorFloatingCameraUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::ClassParams = {
		&AVREditorFloatingCameraUI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::PropPointers),
		0,
		0x008000ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorFloatingCameraUI()
	{
		if (!Z_Registration_Info_UClass_AVREditorFloatingCameraUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorFloatingCameraUI.OuterSingleton, Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorFloatingCameraUI.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorFloatingCameraUI>()
	{
		return AVREditorFloatingCameraUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorFloatingCameraUI);
	AVREditorFloatingCameraUI::~AVREditorFloatingCameraUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingCameraUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingCameraUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorFloatingCameraUI, AVREditorFloatingCameraUI::StaticClass, TEXT("AVREditorFloatingCameraUI"), &Z_Registration_Info_UClass_AVREditorFloatingCameraUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorFloatingCameraUI), 76888720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingCameraUI_h_4253859873(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingCameraUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingCameraUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
