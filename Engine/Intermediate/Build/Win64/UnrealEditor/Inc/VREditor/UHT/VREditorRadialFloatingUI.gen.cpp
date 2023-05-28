// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VREditorRadialFloatingUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorRadialFloatingUI() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorRadialFloatingUI();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
// End Cross Module References
	void AVREditorRadialFloatingUI::StaticRegisterNativesAVREditorRadialFloatingUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorRadialFloatingUI);
	UClass* Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister()
	{
		return AVREditorRadialFloatingUI::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorRadialFloatingUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WindowMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CentralWidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CentralWidgetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an interactive floating UI panel in the VR Editor\n */" },
		{ "IncludePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "Represents an interactive floating UI panel in the VR Editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_Inner = { "WidgetComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_MetaData[] = {
		{ "Comment", "/** When in a spawned state, this is the widget component to represent the widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "When in a spawned state, this is the widget component to represent the widget" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents = { "WidgetComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorRadialFloatingUI, WidgetComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData[] = {
		{ "Comment", "/** The floating window mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "The floating window mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent = { "WindowMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorRadialFloatingUI, WindowMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent_MetaData[] = {
		{ "Comment", "/** The arrow indicator mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "The arrow indicator mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent = { "ArrowMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorRadialFloatingUI, ArrowMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent_MetaData[] = {
		{ "Comment", "/** The central helper widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorRadialFloatingUI.h" },
		{ "ToolTip", "The central helper widget" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent = { "CentralWidgetComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorRadialFloatingUI, CentralWidgetComponent), Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WidgetComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_WindowMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_ArrowMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::NewProp_CentralWidgetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorRadialFloatingUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::ClassParams = {
		&AVREditorRadialFloatingUI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorRadialFloatingUI()
	{
		if (!Z_Registration_Info_UClass_AVREditorRadialFloatingUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorRadialFloatingUI.OuterSingleton, Z_Construct_UClass_AVREditorRadialFloatingUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorRadialFloatingUI.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorRadialFloatingUI>()
	{
		return AVREditorRadialFloatingUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorRadialFloatingUI);
	AVREditorRadialFloatingUI::~AVREditorRadialFloatingUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorRadialFloatingUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorRadialFloatingUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorRadialFloatingUI, AVREditorRadialFloatingUI::StaticClass, TEXT("AVREditorRadialFloatingUI"), &Z_Registration_Info_UClass_AVREditorRadialFloatingUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorRadialFloatingUI), 2737223009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorRadialFloatingUI_h_3696049914(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorRadialFloatingUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorRadialFloatingUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
