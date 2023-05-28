// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationBlueprintEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBlueprintEditorSettings() {}
// Cross Module References
	ANIMATIONBLUEPRINTEDITOR_API UClass* Z_Construct_UClass_UAnimationBlueprintEditorSettings();
	ANIMATIONBLUEPRINTEDITOR_API UClass* Z_Construct_UClass_UAnimationBlueprintEditorSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimationBlueprintEditor();
// End Cross Module References
	void UAnimationBlueprintEditorSettings::StaticRegisterNativesUAnimationBlueprintEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationBlueprintEditorSettings);
	UClass* Z_Construct_UClass_UAnimationBlueprintEditorSettings_NoRegister()
	{
		return UAnimationBlueprintEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPoseWatchSelectedNodes_MetaData[];
#endif
		static void NewProp_bPoseWatchSelectedNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPoseWatchSelectedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGraphCornerText_MetaData[];
#endif
		static void NewProp_bShowGraphCornerText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGraphCornerText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for the Animation Blueprint Editor\n" },
		{ "IncludePath", "AnimationBlueprintEditorSettings.h" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintEditorSettings.h" },
		{ "ToolTip", "Settings for the Animation Blueprint Editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bPoseWatchSelectedNodes_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/** If true, automatically pose watch selected nodes. */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintEditorSettings.h" },
		{ "ToolTip", "If true, automatically pose watch selected nodes." },
	};
#endif
	void Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bPoseWatchSelectedNodes_SetBit(void* Obj)
	{
		((UAnimationBlueprintEditorSettings*)Obj)->bPoseWatchSelectedNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bPoseWatchSelectedNodes = { "bPoseWatchSelectedNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationBlueprintEditorSettings), &Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bPoseWatchSelectedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bPoseWatchSelectedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bPoseWatchSelectedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bShowGraphCornerText_MetaData[] = {
		{ "Category", "Graphs" },
		{ "Comment", "/** Whether to display the corner text in an animation graph. Changing this only affects newly opened graphs. */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintEditorSettings.h" },
		{ "ToolTip", "Whether to display the corner text in an animation graph. Changing this only affects newly opened graphs." },
	};
#endif
	void Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bShowGraphCornerText_SetBit(void* Obj)
	{
		((UAnimationBlueprintEditorSettings*)Obj)->bShowGraphCornerText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bShowGraphCornerText = { "bShowGraphCornerText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationBlueprintEditorSettings), &Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bShowGraphCornerText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bShowGraphCornerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bShowGraphCornerText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bPoseWatchSelectedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::NewProp_bShowGraphCornerText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBlueprintEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::ClassParams = {
		&UAnimationBlueprintEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBlueprintEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UAnimationBlueprintEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationBlueprintEditorSettings.OuterSingleton, Z_Construct_UClass_UAnimationBlueprintEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationBlueprintEditorSettings.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTEDITOR_API UClass* StaticClass<UAnimationBlueprintEditorSettings>()
	{
		return UAnimationBlueprintEditorSettings::StaticClass();
	}
	UAnimationBlueprintEditorSettings::UAnimationBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBlueprintEditorSettings);
	UAnimationBlueprintEditorSettings::~UAnimationBlueprintEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Public_AnimationBlueprintEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Public_AnimationBlueprintEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationBlueprintEditorSettings, UAnimationBlueprintEditorSettings::StaticClass, TEXT("UAnimationBlueprintEditorSettings"), &Z_Registration_Info_UClass_UAnimationBlueprintEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationBlueprintEditorSettings), 2840442669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Public_AnimationBlueprintEditorSettings_h_132729585(TEXT("/Script/AnimationBlueprintEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Public_AnimationBlueprintEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Public_AnimationBlueprintEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
