// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Editor/ControlRigContextMenuContext.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigContextMenuContext() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigContextMenuContext();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigContextMenuContext_NoRegister();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext;
class UScriptStruct* FControlRigRigHierarchyDragAndDropContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigRigHierarchyDragAndDropContext"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigRigHierarchyDragAndDropContext>()
{
	return FControlRigRigHierarchyDragAndDropContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_DraggedElementKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DraggedElementKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DraggedElementKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetElementKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetElementKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigRigHierarchyDragAndDropContext>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_DraggedElementKeys_Inner = { "DraggedElementKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_DraggedElementKeys_MetaData[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_DraggedElementKeys = { "DraggedElementKeys", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigRigHierarchyDragAndDropContext, DraggedElementKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_DraggedElementKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_DraggedElementKeys_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_TargetElementKey_MetaData[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_TargetElementKey = { "TargetElementKey", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigRigHierarchyDragAndDropContext, TargetElementKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_TargetElementKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_TargetElementKey_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_DraggedElementKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_DraggedElementKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewProp_TargetElementKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigRigHierarchyDragAndDropContext",
		sizeof(FControlRigRigHierarchyDragAndDropContext),
		alignof(FControlRigRigHierarchyDragAndDropContext),
		Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext.InnerSingleton, Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext;
class UScriptStruct* FControlRigGraphNodeContextMenuContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigGraphNodeContextMenuContext"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigGraphNodeContextMenuContext>()
{
	return FControlRigGraphNodeContextMenuContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigGraphNodeContextMenuContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** The graph associated with this context. */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The graph associated with this context." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigGraphNodeContextMenuContext, Graph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** The node associated with this context. */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The node associated with this context." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigGraphNodeContextMenuContext, Node), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Pin_MetaData[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** The pin associated with this context; may be NULL when over a node. */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The pin associated with this context; may be NULL when over a node." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigGraphNodeContextMenuContext, Pin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Pin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewProp_Pin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigGraphNodeContextMenuContext",
		sizeof(FControlRigGraphNodeContextMenuContext),
		alignof(FControlRigGraphNodeContextMenuContext),
		Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext.InnerSingleton, Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext;
class UScriptStruct* FControlRigRigHierarchyToGraphDragAndDropContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigRigHierarchyToGraphDragAndDropContext"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigRigHierarchyToGraphDragAndDropContext>()
{
	return FControlRigRigHierarchyToGraphDragAndDropContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_DraggedElementKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DraggedElementKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DraggedElementKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigRigHierarchyToGraphDragAndDropContext>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewProp_DraggedElementKeys_Inner = { "DraggedElementKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewProp_DraggedElementKeys_MetaData[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewProp_DraggedElementKeys = { "DraggedElementKeys", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigRigHierarchyToGraphDragAndDropContext, DraggedElementKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewProp_DraggedElementKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewProp_DraggedElementKeys_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewProp_DraggedElementKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewProp_DraggedElementKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigRigHierarchyToGraphDragAndDropContext",
		sizeof(FControlRigRigHierarchyToGraphDragAndDropContext),
		alignof(FControlRigRigHierarchyToGraphDragAndDropContext),
		Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext.InnerSingleton, Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext.InnerSingleton;
	}
	DEFINE_FUNCTION(UControlRigContextMenuContext::execGetRigHierarchyToGraphDragAndDropContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FControlRigRigHierarchyToGraphDragAndDropContext*)Z_Param__Result=P_THIS->GetRigHierarchyToGraphDragAndDropContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigContextMenuContext::execGetGraphNodeContextMenuContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FControlRigGraphNodeContextMenuContext*)Z_Param__Result=P_THIS->GetGraphNodeContextMenuContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigContextMenuContext::execGetRigHierarchyDragAndDropContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FControlRigRigHierarchyDragAndDropContext*)Z_Param__Result=P_THIS->GetRigHierarchyDragAndDropContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigContextMenuContext::execIsAltDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAltDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigContextMenuContext::execGetControlRig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRig**)Z_Param__Result=P_THIS->GetControlRig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigContextMenuContext::execGetControlRigBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRigBlueprint**)Z_Param__Result=P_THIS->GetControlRigBlueprint();
		P_NATIVE_END;
	}
	void UControlRigContextMenuContext::StaticRegisterNativesUControlRigContextMenuContext()
	{
		UClass* Class = UControlRigContextMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControlRig", &UControlRigContextMenuContext::execGetControlRig },
			{ "GetControlRigBlueprint", &UControlRigContextMenuContext::execGetControlRigBlueprint },
			{ "GetGraphNodeContextMenuContext", &UControlRigContextMenuContext::execGetGraphNodeContextMenuContext },
			{ "GetRigHierarchyDragAndDropContext", &UControlRigContextMenuContext::execGetRigHierarchyDragAndDropContext },
			{ "GetRigHierarchyToGraphDragAndDropContext", &UControlRigContextMenuContext::execGetRigHierarchyToGraphDragAndDropContext },
			{ "IsAltDown", &UControlRigContextMenuContext::execIsAltDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics
	{
		struct ControlRigContextMenuContext_eventGetControlRig_Parms
		{
			UControlRig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigContextMenuContext_eventGetControlRig_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** Get the active control rig instance in the viewport */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "ToolTip", "Get the active control rig instance in the viewport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigContextMenuContext, nullptr, "GetControlRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::ControlRigContextMenuContext_eventGetControlRig_Parms), Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics
	{
		struct ControlRigContextMenuContext_eventGetControlRigBlueprint_Parms
		{
			UControlRigBlueprint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigContextMenuContext_eventGetControlRigBlueprint_Parms, ReturnValue), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** Get the control rig blueprint that we are editing */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "ToolTip", "Get the control rig blueprint that we are editing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigContextMenuContext, nullptr, "GetControlRigBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::ControlRigContextMenuContext_eventGetControlRigBlueprint_Parms), Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics
	{
		struct ControlRigContextMenuContext_eventGetGraphNodeContextMenuContext_Parms
		{
			FControlRigGraphNodeContextMenuContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigContextMenuContext_eventGetGraphNodeContextMenuContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext, METADATA_PARAMS(nullptr, 0) }; // 1639773847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** Returns context for graph node context menu */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "ToolTip", "Returns context for graph node context menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigContextMenuContext, nullptr, "GetGraphNodeContextMenuContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::ControlRigContextMenuContext_eventGetGraphNodeContextMenuContext_Parms), Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics
	{
		struct ControlRigContextMenuContext_eventGetRigHierarchyDragAndDropContext_Parms
		{
			FControlRigRigHierarchyDragAndDropContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigContextMenuContext_eventGetRigHierarchyDragAndDropContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext, METADATA_PARAMS(nullptr, 0) }; // 4037812848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** Returns context for a drag & drop action that contains source and target element keys */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "ToolTip", "Returns context for a drag & drop action that contains source and target element keys" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigContextMenuContext, nullptr, "GetRigHierarchyDragAndDropContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::ControlRigContextMenuContext_eventGetRigHierarchyDragAndDropContext_Parms), Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics
	{
		struct ControlRigContextMenuContext_eventGetRigHierarchyToGraphDragAndDropContext_Parms
		{
			FControlRigRigHierarchyToGraphDragAndDropContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigContextMenuContext_eventGetRigHierarchyToGraphDragAndDropContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext, METADATA_PARAMS(nullptr, 0) }; // 2234542393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** Returns context for the menu that shows up when drag and drop from Rig Hierarchy to the Rig Graph*/" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "ToolTip", "Returns context for the menu that shows up when drag and drop from Rig Hierarchy to the Rig Graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigContextMenuContext, nullptr, "GetRigHierarchyToGraphDragAndDropContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::ControlRigContextMenuContext_eventGetRigHierarchyToGraphDragAndDropContext_Parms), Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics
	{
		struct ControlRigContextMenuContext_eventIsAltDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigContextMenuContext_eventIsAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigContextMenuContext_eventIsAltDown_Parms), &Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigEditorExtensions" },
		{ "Comment", "/** Returns true if either alt key is down */" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
		{ "ToolTip", "Returns true if either alt key is down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigContextMenuContext, nullptr, "IsAltDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::ControlRigContextMenuContext_eventIsAltDown_Parms), Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigContextMenuContext);
	UClass* Z_Construct_UClass_UControlRigContextMenuContext_NoRegister()
	{
		return UControlRigContextMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigContextMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigContextMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigContextMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRig, "GetControlRig" }, // 1213415059
		{ &Z_Construct_UFunction_UControlRigContextMenuContext_GetControlRigBlueprint, "GetControlRigBlueprint" }, // 789001529
		{ &Z_Construct_UFunction_UControlRigContextMenuContext_GetGraphNodeContextMenuContext, "GetGraphNodeContextMenuContext" }, // 3714780266
		{ &Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyDragAndDropContext, "GetRigHierarchyDragAndDropContext" }, // 1534753285
		{ &Z_Construct_UFunction_UControlRigContextMenuContext_GetRigHierarchyToGraphDragAndDropContext, "GetRigHierarchyToGraphDragAndDropContext" }, // 3127448893
		{ &Z_Construct_UFunction_UControlRigContextMenuContext_IsAltDown, "IsAltDown" }, // 1537150565
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigContextMenuContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Editor/ControlRigContextMenuContext.h" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigContextMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigContextMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigContextMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigContextMenuContext_Statics::ClassParams = {
		&UControlRigContextMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigContextMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigContextMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigContextMenuContext()
	{
		if (!Z_Registration_Info_UClass_UControlRigContextMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigContextMenuContext.OuterSingleton, Z_Construct_UClass_UControlRigContextMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigContextMenuContext.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigContextMenuContext>()
	{
		return UControlRigContextMenuContext::StaticClass();
	}
	UControlRigContextMenuContext::UControlRigContextMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigContextMenuContext);
	UControlRigContextMenuContext::~UControlRigContextMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_Statics::ScriptStructInfo[] = {
		{ FControlRigRigHierarchyDragAndDropContext::StaticStruct, Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics::NewStructOps, TEXT("ControlRigRigHierarchyDragAndDropContext"), &Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyDragAndDropContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigRigHierarchyDragAndDropContext), 4037812848U) },
		{ FControlRigGraphNodeContextMenuContext::StaticStruct, Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics::NewStructOps, TEXT("ControlRigGraphNodeContextMenuContext"), &Z_Registration_Info_UScriptStruct_ControlRigGraphNodeContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigGraphNodeContextMenuContext), 1639773847U) },
		{ FControlRigRigHierarchyToGraphDragAndDropContext::StaticStruct, Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics::NewStructOps, TEXT("ControlRigRigHierarchyToGraphDragAndDropContext"), &Z_Registration_Info_UScriptStruct_ControlRigRigHierarchyToGraphDragAndDropContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigRigHierarchyToGraphDragAndDropContext), 2234542393U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigContextMenuContext, UControlRigContextMenuContext::StaticClass, TEXT("UControlRigContextMenuContext"), &Z_Registration_Info_UClass_UControlRigContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigContextMenuContext), 2843251219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_3621997291(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
