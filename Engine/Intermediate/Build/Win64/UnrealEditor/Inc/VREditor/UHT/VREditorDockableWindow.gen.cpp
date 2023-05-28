// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VREditorDockableWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorDockableWindow() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI();
	VREDITOR_API UClass* Z_Construct_UClass_UDockableWindowDragOperation();
	VREDITOR_API UClass* Z_Construct_UClass_UDockableWindowDragOperation_NoRegister();
// End Cross Module References
	void AVREditorDockableWindow::StaticRegisterNativesAVREditorDockableWindow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorDockableWindow);
	UClass* Z_Construct_UClass_AVREditorDockableWindow_NoRegister()
	{
		return AVREditorDockableWindow::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorDockableWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DockButtonMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DockButtonMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBarMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionBarMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButtonMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CloseButtonMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DockButtonMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DockButtonMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBarMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionBarMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBarTranslucentMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionBarTranslucentMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButtonMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CloseButtonMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButtonTranslucentMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CloseButtonTranslucentMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragOperationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragOperationComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorDockableWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorFloatingUI,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An interactive floating UI panel that can be dragged around\n */" },
		{ "IncludePath", "UI/VREditorDockableWindow.h" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An interactive floating UI panel that can be dragged around" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent_MetaData[] = {
		{ "Comment", "/** Mesh underneath the window for docking it to the world */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Mesh underneath the window for docking it to the world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent = { "DockButtonMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, DockButtonMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent_MetaData[] = {
		{ "Comment", "/** Mesh underneath the window for easy selecting and dragging */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Mesh underneath the window for easy selecting and dragging" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent = { "SelectionBarMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent_MetaData[] = {
		{ "Comment", "/** Mesh that represents the close button for this UI */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Mesh that represents the close button for this UI" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent = { "CloseButtonMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID_MetaData[] = {
		{ "Comment", "/** Dock Button dynamic material  (opaque) */" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Dock Button dynamic material  (opaque)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID = { "DockButtonMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, DockButtonMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID_MetaData[] = {
		{ "Comment", "/** Selection bar dynamic material  (opaque) */" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Selection bar dynamic material  (opaque)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID = { "SelectionBarMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID_MetaData[] = {
		{ "Comment", "/** Select bar dynamic material (translucent) */" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Select bar dynamic material (translucent)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID = { "SelectionBarTranslucentMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarTranslucentMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID_MetaData[] = {
		{ "Comment", "/** Close button dynamic material  (opaque) */" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Close button dynamic material  (opaque)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID = { "CloseButtonMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID_MetaData[] = {
		{ "Comment", "/** Close button dynamic material (translucent) */" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Close button dynamic material (translucent)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID = { "CloseButtonTranslucentMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonTranslucentMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent = { "DragOperationComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorDockableWindow, DragOperationComponent), Z_Construct_UClass_UViewportDragOperationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorDockableWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVREditorDockableWindow_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UViewportInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AVREditorDockableWindow, IViewportInteractableInterface), false },  // 2490261028
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorDockableWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorDockableWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorDockableWindow_Statics::ClassParams = {
		&AVREditorDockableWindow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorDockableWindow_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorDockableWindow()
	{
		if (!Z_Registration_Info_UClass_AVREditorDockableWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorDockableWindow.OuterSingleton, Z_Construct_UClass_AVREditorDockableWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorDockableWindow.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorDockableWindow>()
	{
		return AVREditorDockableWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorDockableWindow);
	AVREditorDockableWindow::~AVREditorDockableWindow() {}
	void UDockableWindowDragOperation::StaticRegisterNativesUDockableWindowDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDockableWindowDragOperation);
	UClass* Z_Construct_UClass_UDockableWindowDragOperation_NoRegister()
	{
		return UDockableWindowDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDockableWindowDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDockableWindowDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDockableWindowDragOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Calculation for dragging a dockable window\n */" },
		{ "IncludePath", "UI/VREditorDockableWindow.h" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Calculation for dragging a dockable window" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDockableWindowDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDockableWindowDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDockableWindowDragOperation_Statics::ClassParams = {
		&UDockableWindowDragOperation::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDockableWindowDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDockableWindowDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDockableWindowDragOperation()
	{
		if (!Z_Registration_Info_UClass_UDockableWindowDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDockableWindowDragOperation.OuterSingleton, Z_Construct_UClass_UDockableWindowDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDockableWindowDragOperation.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UDockableWindowDragOperation>()
	{
		return UDockableWindowDragOperation::StaticClass();
	}
	UDockableWindowDragOperation::UDockableWindowDragOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDockableWindowDragOperation);
	UDockableWindowDragOperation::~UDockableWindowDragOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorDockableWindow, AVREditorDockableWindow::StaticClass, TEXT("AVREditorDockableWindow"), &Z_Registration_Info_UClass_AVREditorDockableWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorDockableWindow), 2840201893U) },
		{ Z_Construct_UClass_UDockableWindowDragOperation, UDockableWindowDragOperation::StaticClass, TEXT("UDockableWindowDragOperation"), &Z_Registration_Info_UClass_UDockableWindowDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDockableWindowDragOperation), 1035133246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_885883221(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VREditorDockableWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
