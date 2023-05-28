// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	static FName NAME_UEditorUtilityWidget_Run = FName(TEXT("Run"));
	void UEditorUtilityWidget::Run()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorUtilityWidget_Run),NULL);
	}
	void UEditorUtilityWidget::StaticRegisterNativesUEditorUtilityWidget()
	{
	}
	struct Z_Construct_UFunction_UEditorUtilityWidget_Run_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityWidget_Run_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "// The default action called when the widget is invoked if bAutoRunDefaultAction=true (it is never called otherwise)\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ToolTip", "The default action called when the widget is invoked if bAutoRunDefaultAction=true (it is never called otherwise)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityWidget_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityWidget, nullptr, "Run", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityWidget_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityWidget_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityWidget_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityWidget_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityWidget);
	UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister()
	{
		return UEditorUtilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TabDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HelpText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysReregisterWithWindowsMenu_MetaData[];
#endif
		static void NewProp_bAlwaysReregisterWithWindowsMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysReregisterWithWindowsMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRunDefaultAction_MetaData[];
#endif
		static void NewProp_bAutoRunDefaultAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRunDefaultAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUtilityWidget_Run, "Run" }, // 4075016902
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityWidget.h" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_TabDisplayName_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** The display name for tabs spawned with this widget */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ToolTip", "The display name for tabs spawned with this widget" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_TabDisplayName = { "TabDisplayName", nullptr, (EPropertyFlags)0x0020090000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityWidget, TabDisplayName), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_TabDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_TabDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x0020090000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityWidget, HelpText), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should this widget always be re-added to the windows menu once it's opened\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ToolTip", "Should this widget always be re-added to the windows menu once it's opened" },
	};
#endif
	void Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_SetBit(void* Obj)
	{
		((UEditorUtilityWidget*)Obj)->bAlwaysReregisterWithWindowsMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu = { "bAlwaysReregisterWithWindowsMenu", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorUtilityWidget), &Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should this blueprint automatically run OnDefaultActionClicked, or should it open up a details panel to edit properties and/or offer multiple buttons\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidget.h" },
		{ "ToolTip", "Should this blueprint automatically run OnDefaultActionClicked, or should it open up a details panel to edit properties and/or offer multiple buttons" },
	};
#endif
	void Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_SetBit(void* Obj)
	{
		((UEditorUtilityWidget*)Obj)->bAutoRunDefaultAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction = { "bAutoRunDefaultAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorUtilityWidget), &Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_TabDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_HelpText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAlwaysReregisterWithWindowsMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidget_Statics::NewProp_bAutoRunDefaultAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityWidget_Statics::ClassParams = {
		&UEditorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorUtilityWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityWidget()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityWidget.OuterSingleton, Z_Construct_UClass_UEditorUtilityWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityWidget.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityWidget>()
	{
		return UEditorUtilityWidget::StaticClass();
	}
	UEditorUtilityWidget::UEditorUtilityWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityWidget);
	UEditorUtilityWidget::~UEditorUtilityWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityWidget, UEditorUtilityWidget::StaticClass, TEXT("UEditorUtilityWidget"), &Z_Registration_Info_UClass_UEditorUtilityWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityWidget), 186259890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_411800488(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
