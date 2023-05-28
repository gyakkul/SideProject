// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/ControlRigSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSettings() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigEditorSettings();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigEditorSettings_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSettings();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSettings_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool;
class UScriptStruct* FControlRigSettingsPerPinBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigSettingsPerPinBool"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigSettingsPerPinBool>()
{
	return FControlRigSettingsPerPinBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Values_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSettingsPerPinBool>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_ValueProp = { "Values", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_Key_KeyProp = { "Values_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigSettingsPerPinBool, Values), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigSettingsPerPinBool",
		sizeof(FControlRigSettingsPerPinBool),
		alignof(FControlRigSettingsPerPinBool),
		Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.InnerSingleton;
	}
	void UControlRigSettings::StaticRegisterNativesUControlRigSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSettings);
	UClass* Z_Construct_UClass_UControlRigSettings_NoRegister()
	{
		return UControlRigSettings::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShapeLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultShapeLibrary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default ControlRig settings.\n */" },
		{ "DisplayName", "Control Rig" },
		{ "IncludePath", "Settings/ControlRigSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "Default ControlRig settings." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultShapeLibrary_MetaData[] = {
		{ "Category", "Shapes" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultShapeLibrary = { "DefaultShapeLibrary", nullptr, (EPropertyFlags)0x0014000800004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigSettings, DefaultShapeLibrary), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultShapeLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultShapeLibrary_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultShapeLibrary,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSettings_Statics::ClassParams = {
		&UControlRigSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UControlRigSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSettings_Statics::PropPointers), 0),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigSettings()
	{
		if (!Z_Registration_Info_UClass_UControlRigSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSettings.OuterSingleton, Z_Construct_UClass_UControlRigSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSettings.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigSettings>()
	{
		return UControlRigSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSettings);
	UControlRigSettings::~UControlRigSettings() {}
	void UControlRigEditorSettings::StaticRegisterNativesUControlRigEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigEditorSettings);
	UClass* Z_Construct_UClass_UControlRigEditorSettings_NoRegister()
	{
		return UControlRigEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLinkMutableNodes_MetaData[];
#endif
		static void NewProp_bAutoLinkMutableNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLinkMutableNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetControlsOnCompile_MetaData[];
#endif
		static void NewProp_bResetControlsOnCompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetControlsOnCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetControlsOnPinValueInteraction_MetaData[];
#endif
		static void NewProp_bResetControlsOnPinValueInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetControlsOnPinValueInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUndoForPoseInteraction_MetaData[];
#endif
		static void NewProp_bEnableUndoForPoseInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUndoForPoseInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetControlTransformsOnCompile_MetaData[];
#endif
		static void NewProp_bResetControlTransformsOnCompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetControlTransformsOnCompile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigUnitPinExpansion_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RigUnitPinExpansion_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigUnitPinExpansion_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RigUnitPinExpansion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionEventBorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstructionEventBorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsSolveBorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardsSolveBorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsAndForwardsBorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardsAndForwardsBorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowStackedHierarchy_MetaData[];
#endif
		static void NewProp_bShowStackedHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStackedHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_4_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_5_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_6_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_7_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_8_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_9_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_9;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSnippet_0_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeSnippet_0;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Customize Control Rig Editor.\n */" },
		{ "DisplayName", "Control Rig Editor" },
		{ "IncludePath", "Settings/ControlRigSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "Customize Control Rig Editor." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked mutable nodes (nodes with an execute pin)\n// will be hooked up automatically.\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked mutable nodes (nodes with an execute pin)\nwill be hooked up automatically." },
	};
#endif
	void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit(void* Obj)
	{
		((UControlRigEditorSettings*)Obj)->bAutoLinkMutableNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bAutoLinkMutableNodes = { "bAutoLinkMutableNodes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked all controls will return to their initial\n// value as the user hits the Compile button.\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked all controls will return to their initial\nvalue as the user hits the Compile button." },
	};
#endif
	void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile_SetBit(void* Obj)
	{
		((UControlRigEditorSettings*)Obj)->bResetControlsOnCompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile = { "bResetControlsOnCompile", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked all controls will return to their initial\n// value as the user interacts with a pin value\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked all controls will return to their initial\nvalue as the user interacts with a pin value" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction_SetBit(void* Obj)
	{
		((UControlRigEditorSettings*)Obj)->bResetControlsOnPinValueInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction = { "bResetControlsOnPinValueInteraction", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked any hierarchy interaction within the Control Rig\n// Editor will be stored on the undo stack\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked any hierarchy interaction within the Control Rig\nEditor will be stored on the undo stack" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction_SetBit(void* Obj)
	{
		((UControlRigEditorSettings*)Obj)->bEnableUndoForPoseInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction = { "bEnableUndoForPoseInteraction", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile_MetaData[] = {
		{ "Category", "Compilation" },
		{ "Comment", "/**\n\x09 * When checked controls will be reset during a manual compilation\n\x09 * (when pressing the Compile button)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When checked controls will be reset during a manual compilation\n(when pressing the Compile button)" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile_SetBit(void* Obj)
	{
		((UControlRigEditorSettings*)Obj)->bResetControlTransformsOnCompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile = { "bResetControlTransformsOnCompile", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_ValueProp = { "RigUnitPinExpansion", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool, METADATA_PARAMS(nullptr, 0) }; // 3894616717
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_Key_KeyProp = { "RigUnitPinExpansion_Key", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_MetaData[] = {
		{ "Category", "NodeGraph" },
		{ "Comment", "/**\n\x09 * A map which remembers the expansion setting for each rig unit pin.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "A map which remembers the expansion setting for each rig unit pin." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion = { "RigUnitPinExpansion", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, RigUnitPinExpansion), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_MetaData)) }; // 3894616717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_ConstructionEventBorderColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * The border color of the viewport when entering \"Construction Event\" mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The border color of the viewport when entering \"Construction Event\" mode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_ConstructionEventBorderColor = { "ConstructionEventBorderColor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, ConstructionEventBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_ConstructionEventBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_ConstructionEventBorderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsSolveBorderColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * The border color of the viewport when entering \"Backwards Solve\" mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The border color of the viewport when entering \"Backwards Solve\" mode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsSolveBorderColor = { "BackwardsSolveBorderColor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, BackwardsSolveBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsSolveBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsSolveBorderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsAndForwardsBorderColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * The border color of the viewport when entering \"Backwards And Forwards\" mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The border color of the viewport when entering \"Backwards And Forwards\" mode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsAndForwardsBorderColor = { "BackwardsAndForwardsBorderColor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, BackwardsAndForwardsBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsAndForwardsBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsAndForwardsBorderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n\x09 * Option to toggle displaying the stacked hierarchy items.\n\x09 * Note that changing this option potentially requires to re-open the editors in question. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "Option to toggle displaying the stacked hierarchy items.\nNote that changing this option potentially requires to re-open the editors in question." },
	};
#endif
	void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy_SetBit(void* Obj)
	{
		((UControlRigEditorSettings*)Obj)->bShowStackedHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy = { "bShowStackedHierarchy", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n \x09 * The maximum number of stacked items in the view \n \x09 * Note that changing this option potentially requires to re-open the editors in question. \n \x09 */" },
		{ "EditCondition", "bShowStackedHierarchy" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The maximum number of stacked items in the view\nNote that changing this option potentially requires to re-open the editors in question." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, MaxStackSize), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_MaxStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_MaxStackSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_1_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09 * The default node snippet to create when pressing 1 + Left Mouse Button\n\x09 */" },
		{ "DisplayName", "1" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 1 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_1 = { "NodeSnippet_1", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_1), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_2_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 2 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "2" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 2 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_2 = { "NodeSnippet_2", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_2), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_3_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 3 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "3" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 3 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_3 = { "NodeSnippet_3", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_3), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_4_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 4 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "4" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 4 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_4 = { "NodeSnippet_4", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_4), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_5_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 5 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "5" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 5 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_5 = { "NodeSnippet_5", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_5), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_6_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 6 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "6" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 6 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_6 = { "NodeSnippet_6", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_6), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_7_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 7 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "7" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 7 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_7 = { "NodeSnippet_7", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_7), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_7_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_8_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 8 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "8" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 8 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_8 = { "NodeSnippet_8", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_8), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_9_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 9 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "9" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 9 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_9 = { "NodeSnippet_9", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_9), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_9_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_0_MetaData[] = {
		{ "Category", "Snippets" },
		{ "Comment", "/**\n\x09* The default node snippet to create when pressing 0 + Left Mouse Button\n\x09*/" },
		{ "DisplayName", "0" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The default node snippet to create when pressing 0 + Left Mouse Button" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_0 = { "NodeSnippet_0", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditorSettings, NodeSnippet_0), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_0_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bAutoLinkMutableNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_ConstructionEventBorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsSolveBorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsAndForwardsBorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_MaxStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_NodeSnippet_0,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigEditorSettings_Statics::ClassParams = {
		&UControlRigEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UControlRigEditorSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::PropPointers), 0),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UControlRigEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigEditorSettings.OuterSingleton, Z_Construct_UClass_UControlRigEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigEditorSettings.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigEditorSettings>()
	{
		return UControlRigEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigEditorSettings);
	UControlRigEditorSettings::~UControlRigEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ScriptStructInfo[] = {
		{ FControlRigSettingsPerPinBool::StaticStruct, Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewStructOps, TEXT("ControlRigSettingsPerPinBool"), &Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSettingsPerPinBool), 3894616717U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSettings, UControlRigSettings::StaticClass, TEXT("UControlRigSettings"), &Z_Registration_Info_UClass_UControlRigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSettings), 1424722120U) },
		{ Z_Construct_UClass_UControlRigEditorSettings, UControlRigEditorSettings::StaticClass, TEXT("UControlRigEditorSettings"), &Z_Registration_Info_UClass_UControlRigEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigEditorSettings), 3392640072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_3048533886(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
