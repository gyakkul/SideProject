// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/AnimationBlueprintEditorOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBlueprintEditorOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UAnimationBlueprintEditorOptions();
	UNREALED_API UClass* Z_Construct_UClass_UAnimationBlueprintEditorOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimationBlueprintEditorOptions::StaticRegisterNativesUAnimationBlueprintEditorOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationBlueprintEditorOptions);
	UClass* Z_Construct_UClass_UAnimationBlueprintEditorOptions_NoRegister()
	{
		return UAnimationBlueprintEditorOptions::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnrelatedNodes_MetaData[];
#endif
		static void NewProp_bHideUnrelatedNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnrelatedNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/AnimationBlueprintEditorOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/AnimationBlueprintEditorOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::NewProp_bHideUnrelatedNodes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, fade nodes which are not connected to the selected nodes */" },
		{ "ModuleRelativePath", "Classes/Preferences/AnimationBlueprintEditorOptions.h" },
		{ "ToolTip", "If true, fade nodes which are not connected to the selected nodes" },
	};
#endif
	void Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::NewProp_bHideUnrelatedNodes_SetBit(void* Obj)
	{
		((UAnimationBlueprintEditorOptions*)Obj)->bHideUnrelatedNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::NewProp_bHideUnrelatedNodes = { "bHideUnrelatedNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimationBlueprintEditorOptions), &Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::NewProp_bHideUnrelatedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::NewProp_bHideUnrelatedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::NewProp_bHideUnrelatedNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::NewProp_bHideUnrelatedNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBlueprintEditorOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::ClassParams = {
		&UAnimationBlueprintEditorOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBlueprintEditorOptions()
	{
		if (!Z_Registration_Info_UClass_UAnimationBlueprintEditorOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationBlueprintEditorOptions.OuterSingleton, Z_Construct_UClass_UAnimationBlueprintEditorOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationBlueprintEditorOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimationBlueprintEditorOptions>()
	{
		return UAnimationBlueprintEditorOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBlueprintEditorOptions);
	UAnimationBlueprintEditorOptions::~UAnimationBlueprintEditorOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationBlueprintEditorOptions, UAnimationBlueprintEditorOptions::StaticClass, TEXT("UAnimationBlueprintEditorOptions"), &Z_Registration_Info_UClass_UAnimationBlueprintEditorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationBlueprintEditorOptions), 3853074565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_1427953468(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_AnimationBlueprintEditorOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
