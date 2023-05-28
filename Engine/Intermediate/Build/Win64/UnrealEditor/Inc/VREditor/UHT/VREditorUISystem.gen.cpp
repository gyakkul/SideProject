// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VREditorUISystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorUISystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorUISystem();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorUISystem_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVRRadialMenuHandler_NoRegister();
	VREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVRButton();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRButton;
class UScriptStruct* FVRButton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRButton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRButton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRButton, (UObject*)Z_Construct_UPackage__Script_VREditor(), TEXT("VRButton"));
	}
	return Z_Registration_Info_UScriptStruct_VRButton.OuterSingleton;
}
template<> VREDITOR_API UScriptStruct* StaticStruct<FVRButton>()
{
	return FVRButton::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ButtonWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRButton_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure to keep track of all relevant interaction and animation elements of a VR Button */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Structure to keep track of all relevant interaction and animation elements of a VR Button" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRButton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRButton>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget_MetaData[] = {
		{ "Comment", "/** Pointer to button */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Pointer to button" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget = { "ButtonWidget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRButton, ButtonWidget), Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRButton_Statics::NewProp_ButtonWidget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRButton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
		nullptr,
		&NewStructOps,
		"VRButton",
		sizeof(FVRButton),
		alignof(FVRButton),
		Z_Construct_UScriptStruct_FVRButton_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRButton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRButton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRButton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRButton()
	{
		if (!Z_Registration_Info_UScriptStruct_VRButton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRButton.InnerSingleton, Z_Construct_UScriptStruct_FVRButton_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRButton.InnerSingleton;
	}
	void UVREditorUISystem::StaticRegisterNativesUVREditorUISystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorUISystem);
	UClass* Z_Construct_UClass_UVREditorUISystem_NoRegister()
	{
		return UVREditorUISystem::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorUISystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloatingUIs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FloatingUIs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingUIs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FloatingUIs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewWindowInfo_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewWindowInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWindowInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PreviewWindowInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoDisplayPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InfoDisplayPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickRadialMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QuickRadialMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DraggingUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DraggingUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPickerUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorPickerUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UIInteractor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRButtons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRButtons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRButtons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialMenuHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RadialMenuHandler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorUISystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * VR Editor user interface manager\n */" },
		{ "IncludePath", "UI/VREditorUISystem.h" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "VR Editor user interface manager" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode_MetaData[] = {
		{ "Comment", "/** Owning object */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Owning object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_ValueProp = { "FloatingUIs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AVREditorFloatingUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_Key_KeyProp = { "FloatingUIs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_MetaData[] = {
		{ "Comment", "/** All of the floating UIs.  These may or may not be visible (spawned) */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "All of the floating UIs.  These may or may not be visible (spawned)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs = { "FloatingUIs", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, FloatingUIs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_ValueProp = { "PreviewWindowInfo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_Key_KeyProp = { "PreviewWindowInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_MetaData[] = {
		{ "Comment", "/** All of the preview window info. */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "All of the preview window info." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo = { "PreviewWindowInfo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, PreviewWindowInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel_MetaData[] = {
		{ "Comment", "/** Our Quick Menu UI */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Our Quick Menu UI" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel = { "InfoDisplayPanel", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, InfoDisplayPanel), Z_Construct_UClass_AVREditorFloatingUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu_MetaData[] = {
		{ "Comment", "/** The Radial Menu UI */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The Radial Menu UI" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu = { "QuickRadialMenu", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, QuickRadialMenu), Z_Construct_UClass_AVREditorRadialFloatingUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI_MetaData[] = {
		{ "Comment", "/** The current UI that is being dragged */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The current UI that is being dragged" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI = { "DraggingUI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, DraggingUI), Z_Construct_UClass_AVREditorDockableWindow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI_MetaData[] = {
		{ "Comment", "/** The color picker dockable window */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The color picker dockable window" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI = { "ColorPickerUI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, ColorPickerUI), Z_Construct_UClass_AVREditorDockableWindow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor_MetaData[] = {
		{ "Comment", "/** Interactor that has a laser and is generally interacting with the scene */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Interactor that has a laser and is generally interacting with the scene" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor = { "LaserInteractor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, LaserInteractor), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor_MetaData[] = {
		{ "Comment", "/** Interactor that usually accesses UI and other helper functionality */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "Interactor that usually accesses UI and other helper functionality" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor = { "UIInteractor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, UIInteractor), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_Inner = { "VRButtons", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVRButton, METADATA_PARAMS(nullptr, 0) }; // 955471191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_MetaData[] = {
		{ "Comment", "/** All buttons created for the radial and quick menus */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "All buttons created for the radial and quick menus" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons = { "VRButtons", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, VRButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_MetaData)) }; // 955471191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler_MetaData[] = {
		{ "Comment", "/** The add-on that handles radial menu switching */" },
		{ "ModuleRelativePath", "UI/VREditorUISystem.h" },
		{ "ToolTip", "The add-on that handles radial menu switching" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler = { "RadialMenuHandler", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorUISystem, RadialMenuHandler), Z_Construct_UClass_UVRRadialMenuHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorUISystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_FloatingUIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_PreviewWindowInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_InfoDisplayPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_QuickRadialMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_DraggingUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_ColorPickerUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_LaserInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_UIInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_VRButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorUISystem_Statics::NewProp_RadialMenuHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorUISystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorUISystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorUISystem_Statics::ClassParams = {
		&UVREditorUISystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorUISystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorUISystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorUISystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorUISystem()
	{
		if (!Z_Registration_Info_UClass_UVREditorUISystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorUISystem.OuterSingleton, Z_Construct_UClass_UVREditorUISystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorUISystem.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorUISystem>()
	{
		return UVREditorUISystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorUISystem);
	UVREditorUISystem::~UVREditorUISystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_Statics::ScriptStructInfo[] = {
		{ FVRButton::StaticStruct, Z_Construct_UScriptStruct_FVRButton_Statics::NewStructOps, TEXT("VRButton"), &Z_Registration_Info_UScriptStruct_VRButton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRButton), 955471191U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorUISystem, UVREditorUISystem::StaticClass, TEXT("UVREditorUISystem"), &Z_Registration_Info_UClass_UVREditorUISystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorUISystem), 1727510732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_3316070750(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorUISystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
