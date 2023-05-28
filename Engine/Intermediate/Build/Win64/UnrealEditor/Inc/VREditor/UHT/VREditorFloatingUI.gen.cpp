// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VREditorFloatingUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorFloatingUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
	VREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext;
class UScriptStruct* FVREditorFloatingUICreationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext, (UObject*)Z_Construct_UPackage__Script_VREditor(), TEXT("VREditorFloatingUICreationContext"));
	}
	return Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext.OuterSingleton;
}
template<> VREDITOR_API UScriptStruct* StaticStruct<FVREditorFloatingUICreationContext>()
{
	return FVREditorFloatingUICreationContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelSpawnOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PanelSpawnOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PanelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PanelMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorUISize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EditorUISize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideWindowHandles_MetaData[];
#endif
		static void NewProp_bHideWindowHandles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideWindowHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaskOutWidgetBackground_MetaData[];
#endif
		static void NewProp_bMaskOutWidgetBackground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaskOutWidgetBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoCloseButton_MetaData[];
#endif
		static void NewProp_bNoCloseButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoCloseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creation parameters for AVREditorFloatingUI\n */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Creation parameters for AVREditorFloatingUI" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREditorFloatingUICreationContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "VR Mode UI" },
		{ "Comment", "/** Widget to open in the VR window. null to close an open window (if if matches the PanelID) */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Widget to open in the VR window. null to close an open window (if if matches the PanelID)" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREditorFloatingUICreationContext, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelID_MetaData[] = {
		{ "Category", "VR Mode UI" },
		{ "Comment", "/** ID that the UI system will use to identify the panel. MUST BE UNIQUE! */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "ID that the UI system will use to identify the panel. MUST BE UNIQUE!" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelID = { "PanelID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREditorFloatingUICreationContext, PanelID), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_ParentActor_MetaData[] = {
		{ "Category", "Virtual Production UI" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREditorFloatingUICreationContext, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_ParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_ParentActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSpawnOffset_MetaData[] = {
		{ "Category", "VR Mode UI" },
		{ "Comment", "/** Optional offset from HMD where the window opens. Pass FTransform::Identity for default logic - window will open at controller location. */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Optional offset from HMD where the window opens. Pass FTransform::Identity for default logic - window will open at controller location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSpawnOffset = { "PanelSpawnOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREditorFloatingUICreationContext, PanelSpawnOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSpawnOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSize_MetaData[] = {
		{ "Category", "VR Mode UI" },
		{ "Comment", "/** Panel size. Should match the size of the UMG passed in. */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Panel size. Should match the size of the UMG passed in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSize = { "PanelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREditorFloatingUICreationContext, PanelSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelMesh_MetaData[] = {
		{ "Category", "VR Mode UI" },
		{ "Comment", "/** Optional custom mesh to use for the VR window. */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Optional custom mesh to use for the VR window." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelMesh = { "PanelMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREditorFloatingUICreationContext, PanelMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_EditorUISize_MetaData[] = {
		{ "Category", "VR Mode UI" },
		{ "Comment", "/** Optional override for \"VREd.EditorUISize\". Leave at 0 for default. */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Optional override for \"VREd.EditorUISize\". Leave at 0 for default." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_EditorUISize = { "EditorUISize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREditorFloatingUICreationContext, EditorUISize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_EditorUISize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_EditorUISize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bHideWindowHandles_MetaData[] = {
		{ "Category", "VR Mode UI" },
		{ "Comment", "/** Turn off handles under window? (X-To-Close, movement bar...) */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Turn off handles under window? (X-To-Close, movement bar...)" },
	};
#endif
	void Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bHideWindowHandles_SetBit(void* Obj)
	{
		((FVREditorFloatingUICreationContext*)Obj)->bHideWindowHandles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bHideWindowHandles = { "bHideWindowHandles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVREditorFloatingUICreationContext), &Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bHideWindowHandles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bHideWindowHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bHideWindowHandles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bMaskOutWidgetBackground_MetaData[] = {
		{ "Category", "Virtual Production UI" },
		{ "Comment", "/** Turn off the widget's background to create a see-through look. */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Turn off the widget's background to create a see-through look." },
	};
#endif
	void Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bMaskOutWidgetBackground_SetBit(void* Obj)
	{
		((FVREditorFloatingUICreationContext*)Obj)->bMaskOutWidgetBackground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bMaskOutWidgetBackground = { "bMaskOutWidgetBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVREditorFloatingUICreationContext), &Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bMaskOutWidgetBackground_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bMaskOutWidgetBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bMaskOutWidgetBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bNoCloseButton_MetaData[] = {
		{ "Category", "Virtual Production UI" },
		{ "Comment", "/** If bHideWindowHandles is false, this window doesn't have a close button. (*/" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "If bHideWindowHandles is false, this window doesn't have a close button. (" },
	};
#endif
	void Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bNoCloseButton_SetBit(void* Obj)
	{
		((FVREditorFloatingUICreationContext*)Obj)->bNoCloseButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bNoCloseButton = { "bNoCloseButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVREditorFloatingUICreationContext), &Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bNoCloseButton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bNoCloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bNoCloseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_ParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSpawnOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_PanelMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_EditorUISize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bHideWindowHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bMaskOutWidgetBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewProp_bNoCloseButton,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
		nullptr,
		&NewStructOps,
		"VREditorFloatingUICreationContext",
		sizeof(FVREditorFloatingUICreationContext),
		alignof(FVREditorFloatingUICreationContext),
		Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext()
	{
		if (!Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext.InnerSingleton, Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext.InnerSingleton;
	}
	void AVREditorFloatingUI::StaticRegisterNativesAVREditorFloatingUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorFloatingUI);
	UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister()
	{
		return AVREditorFloatingUI::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorFloatingUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WindowMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_UserWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorFloatingUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an interactive floating UI panel in the VR Editor\n */" },
		{ "IncludePath", "UI/VREditorFloatingUI.h" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents an interactive floating UI panel in the VR Editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_CreationContext_MetaData[] = {
		{ "Comment", "/** All params used to create this panel if this panel has a UMG widget and was created via BP. Invalid otherwise. */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "All params used to create this panel if this panel has a UMG widget and was created via BP. Invalid otherwise." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_CreationContext = { "CreationContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorFloatingUI, CreationContext), Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_CreationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_CreationContext_MetaData)) }; // 1963716951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget_MetaData[] = {
		{ "Comment", "/** UMG user widget we're drawing, or nullptr if we're drawing a Slate widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "UMG user widget we're drawing, or nullptr if we're drawing a Slate widget" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorFloatingUI, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "Comment", "/** When in a spawned state, this is the widget component to represent the widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "When in a spawned state, this is the widget component to represent the widget" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorFloatingUI, WidgetComponent), Z_Construct_UClass_UVREditorWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData[] = {
		{ "Comment", "/** The floating window mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "The floating window mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent = { "WindowMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorFloatingUI, WindowMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass_MetaData[] = {
		{ "Comment", "/** Class of the UMG widget we're spawning */" },
		{ "ModuleRelativePath", "UI/VREditorFloatingUI.h" },
		{ "ToolTip", "Class of the UMG widget we're spawning" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass = { "UserWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorFloatingUI, UserWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorFloatingUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_CreationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WidgetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_WindowMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingUI_Statics::NewProp_UserWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorFloatingUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorFloatingUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorFloatingUI_Statics::ClassParams = {
		&AVREditorFloatingUI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorFloatingUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorFloatingUI()
	{
		if (!Z_Registration_Info_UClass_AVREditorFloatingUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorFloatingUI.OuterSingleton, Z_Construct_UClass_AVREditorFloatingUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorFloatingUI.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorFloatingUI>()
	{
		return AVREditorFloatingUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorFloatingUI);
	AVREditorFloatingUI::~AVREditorFloatingUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_Statics::ScriptStructInfo[] = {
		{ FVREditorFloatingUICreationContext::StaticStruct, Z_Construct_UScriptStruct_FVREditorFloatingUICreationContext_Statics::NewStructOps, TEXT("VREditorFloatingUICreationContext"), &Z_Registration_Info_UScriptStruct_VREditorFloatingUICreationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREditorFloatingUICreationContext), 1963716951U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorFloatingUI, AVREditorFloatingUI::StaticClass, TEXT("AVREditorFloatingUI"), &Z_Registration_Info_UClass_AVREditorFloatingUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorFloatingUI), 1278047712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_983371939(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
