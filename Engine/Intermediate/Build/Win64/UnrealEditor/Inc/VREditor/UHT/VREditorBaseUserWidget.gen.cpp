// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VREditorBaseUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorBaseUserWidget() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorBaseUserWidget();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorBaseUserWidget_NoRegister();
// End Cross Module References
	void UVREditorBaseUserWidget::StaticRegisterNativesUVREditorBaseUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorBaseUserWidget);
	UClass* Z_Construct_UClass_UVREditorBaseUserWidget_NoRegister()
	{
		return UVREditorBaseUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorBaseUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorBaseUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorBaseUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all of the VR widgets\n */" },
		{ "IncludePath", "UI/VREditorBaseUserWidget.h" },
		{ "ModuleRelativePath", "UI/VREditorBaseUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for all of the VR widgets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** The UI system that owns this widget */" },
		{ "ModuleRelativePath", "UI/VREditorBaseUserWidget.h" },
		{ "ToolTip", "The UI system that owns this widget" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorBaseUserWidget, Owner), Z_Construct_UClass_AVREditorFloatingUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorBaseUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorBaseUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorBaseUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorBaseUserWidget_Statics::ClassParams = {
		&UVREditorBaseUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorBaseUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorBaseUserWidget()
	{
		if (!Z_Registration_Info_UClass_UVREditorBaseUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorBaseUserWidget.OuterSingleton, Z_Construct_UClass_UVREditorBaseUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorBaseUserWidget.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorBaseUserWidget>()
	{
		return UVREditorBaseUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorBaseUserWidget);
	UVREditorBaseUserWidget::~UVREditorBaseUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorBaseUserWidget, UVREditorBaseUserWidget::StaticClass, TEXT("UVREditorBaseUserWidget"), &Z_Registration_Info_UClass_UVREditorBaseUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorBaseUserWidget), 2672061821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_848897951(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorBaseUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
