// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorOnlyVCamModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorOnlyVCamModifier() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCoreEditor();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamBlueprintModifier();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UEditorOnlyVCamModifier();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UEditorOnlyVCamModifier_NoRegister();
// End Cross Module References
	void UEditorOnlyVCamModifier::StaticRegisterNativesUEditorOnlyVCamModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorOnlyVCamModifier);
	UClass* Z_Construct_UClass_UEditorOnlyVCamModifier_NoRegister()
	{
		return UEditorOnlyVCamModifier::StaticClass();
	}
	struct Z_Construct_UClass_UEditorOnlyVCamModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorOnlyVCamModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamBlueprintModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorOnlyVCamModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A modifier that only exists in uncooked builds.\n */" },
		{ "IncludePath", "EditorOnlyVCamModifier.h" },
		{ "ModuleRelativePath", "Public/EditorOnlyVCamModifier.h" },
		{ "ToolTip", "A modifier that only exists in uncooked builds." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorOnlyVCamModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorOnlyVCamModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorOnlyVCamModifier_Statics::ClassParams = {
		&UEditorOnlyVCamModifier::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorOnlyVCamModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorOnlyVCamModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorOnlyVCamModifier()
	{
		if (!Z_Registration_Info_UClass_UEditorOnlyVCamModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorOnlyVCamModifier.OuterSingleton, Z_Construct_UClass_UEditorOnlyVCamModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorOnlyVCamModifier.OuterSingleton;
	}
	template<> VCAMCOREEDITOR_API UClass* StaticClass<UEditorOnlyVCamModifier>()
	{
		return UEditorOnlyVCamModifier::StaticClass();
	}
	UEditorOnlyVCamModifier::UEditorOnlyVCamModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorOnlyVCamModifier);
	UEditorOnlyVCamModifier::~UEditorOnlyVCamModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorOnlyVCamModifier, UEditorOnlyVCamModifier::StaticClass, TEXT("UEditorOnlyVCamModifier"), &Z_Registration_Info_UClass_UEditorOnlyVCamModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorOnlyVCamModifier), 383687821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_535567532(TEXT("/Script/VCamCoreEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_EditorOnlyVCamModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
