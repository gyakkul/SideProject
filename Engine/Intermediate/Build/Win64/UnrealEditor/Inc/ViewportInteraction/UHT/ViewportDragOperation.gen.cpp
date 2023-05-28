// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportDragOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportDragOperation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FDraggingTransformableData();
// End Cross Module References
	void UViewportDragOperation::StaticRegisterNativesUViewportDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportDragOperation);
	UClass* Z_Construct_UClass_UViewportDragOperation_NoRegister()
	{
		return UViewportDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UViewportDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for interactable drag calculations\n */" },
		{ "IncludePath", "ViewportDragOperation.h" },
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "Base class for interactable drag calculations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportDragOperation_Statics::ClassParams = {
		&UViewportDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportDragOperation()
	{
		if (!Z_Registration_Info_UClass_UViewportDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportDragOperation.OuterSingleton, Z_Construct_UClass_UViewportDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportDragOperation.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportDragOperation>()
	{
		return UViewportDragOperation::StaticClass();
	}
	UViewportDragOperation::UViewportDragOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportDragOperation);
	UViewportDragOperation::~UViewportDragOperation() {}
	void UViewportDragOperationComponent::StaticRegisterNativesUViewportDragOperationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportDragOperationComponent);
	UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister()
	{
		return UViewportDragOperationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UViewportDragOperationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragOperation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragOperationSubclass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DragOperationSubclass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportDragOperationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperationComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Container component for UViewportDragOperation that can be used by objects in the world that are draggable and implement the ViewportInteractableInterface\n */" },
		{ "IncludePath", "ViewportDragOperation.h" },
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "Container component for UViewportDragOperation that can be used by objects in the world that are draggable and implement the ViewportInteractableInterface" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation_MetaData[] = {
		{ "Comment", "/** The actual dragging implementation */" },
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "The actual dragging implementation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation = { "DragOperation", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportDragOperationComponent, DragOperation), Z_Construct_UClass_UViewportDragOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass_MetaData[] = {
		{ "Comment", "/** The next class that will be used as drag operation */" },
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "The next class that will be used as drag operation" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass = { "DragOperationSubclass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportDragOperationComponent, DragOperationSubclass), Z_Construct_UClass_UClass, Z_Construct_UClass_UViewportDragOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportDragOperationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportDragOperationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportDragOperationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportDragOperationComponent_Statics::ClassParams = {
		&UViewportDragOperationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UViewportDragOperationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportDragOperationComponent()
	{
		if (!Z_Registration_Info_UClass_UViewportDragOperationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportDragOperationComponent.OuterSingleton, Z_Construct_UClass_UViewportDragOperationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportDragOperationComponent.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportDragOperationComponent>()
	{
		return UViewportDragOperationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportDragOperationComponent);
	UViewportDragOperationComponent::~UViewportDragOperationComponent() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DraggingTransformableData;
class UScriptStruct* FDraggingTransformableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DraggingTransformableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DraggingTransformableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDraggingTransformableData, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("DraggingTransformableData"));
	}
	return Z_Registration_Info_UScriptStruct_DraggingTransformableData.OuterSingleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FDraggingTransformableData>()
{
	return FDraggingTransformableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDraggingTransformableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data structure that holds all arguments that can be used while dragging a transformable.\n */" },
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "Data structure that holds all arguments that can be used while dragging a transformable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDraggingTransformableData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"DraggingTransformableData",
		sizeof(FDraggingTransformableData),
		alignof(FDraggingTransformableData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDraggingTransformableData()
	{
		if (!Z_Registration_Info_UScriptStruct_DraggingTransformableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DraggingTransformableData.InnerSingleton, Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DraggingTransformableData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_Statics::ScriptStructInfo[] = {
		{ FDraggingTransformableData::StaticStruct, Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::NewStructOps, TEXT("DraggingTransformableData"), &Z_Registration_Info_UScriptStruct_DraggingTransformableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDraggingTransformableData), 1245914230U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportDragOperation, UViewportDragOperation::StaticClass, TEXT("UViewportDragOperation"), &Z_Registration_Info_UClass_UViewportDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportDragOperation), 4091118636U) },
		{ Z_Construct_UClass_UViewportDragOperationComponent, UViewportDragOperationComponent::StaticClass, TEXT("UViewportDragOperationComponent"), &Z_Registration_Info_UClass_UViewportDragOperationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportDragOperationComponent), 2004346242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_2997151681(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
