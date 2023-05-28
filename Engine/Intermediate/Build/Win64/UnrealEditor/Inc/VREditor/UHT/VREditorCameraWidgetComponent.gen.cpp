// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditorCameraWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorCameraWidgetComponent() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorCameraWidgetComponent();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorCameraWidgetComponent_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent();
// End Cross Module References
	void UVREditorCameraWidgetComponent::StaticRegisterNativesUVREditorCameraWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorCameraWidgetComponent);
	UClass* Z_Construct_UClass_UVREditorCameraWidgetComponent_NoRegister()
	{
		return UVREditorCameraWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVREditorWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A specialized WidgetComponent that color-corrects cameras previews (viewfinders) in VR\n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "VREditorCameraWidgetComponent.h" },
		{ "ModuleRelativePath", "VREditorCameraWidgetComponent.h" },
		{ "ToolTip", "A specialized WidgetComponent that color-corrects cameras previews (viewfinders) in VR" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorCameraWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics::ClassParams = {
		&UVREditorCameraWidgetComponent::StaticClass,
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
		0x04A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorCameraWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UVREditorCameraWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorCameraWidgetComponent.OuterSingleton, Z_Construct_UClass_UVREditorCameraWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorCameraWidgetComponent.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorCameraWidgetComponent>()
	{
		return UVREditorCameraWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorCameraWidgetComponent);
	UVREditorCameraWidgetComponent::~UVREditorCameraWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorCameraWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorCameraWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorCameraWidgetComponent, UVREditorCameraWidgetComponent::StaticClass, TEXT("UVREditorCameraWidgetComponent"), &Z_Registration_Info_UClass_UVREditorCameraWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorCameraWidgetComponent), 3690027930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorCameraWidgetComponent_h_3543552683(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorCameraWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorCameraWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
