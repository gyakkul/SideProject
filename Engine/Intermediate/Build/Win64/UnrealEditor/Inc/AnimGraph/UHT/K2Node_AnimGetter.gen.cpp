// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_AnimGetter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AnimGetter() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_AnimGetter();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_AnimGetter_NoRegister();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FNodeSpawnData();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UField();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeSpawnData;
class UScriptStruct* FNodeSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeSpawnData, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("NodeSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_NodeSpawnData.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FNodeSpawnData>()
{
	return FNodeSpawnData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeSpawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CachedTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceStateNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AnimInstanceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Getter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Getter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetterContextString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GetterContextString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeSpawnData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle_MetaData[] = {
		{ "Comment", "// Title to use for the spawned node\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "Title to use for the spawned node" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle = { "CachedTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeSpawnData, CachedTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode_MetaData[] = {
		{ "Comment", "// The node the spawned getter accesses\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "The node the spawned getter accesses" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeSpawnData, SourceNode), Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode_MetaData[] = {
		{ "Comment", "// The state node the spawned getter accesses\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "The state node the spawned getter accesses" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode = { "SourceStateNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeSpawnData, SourceStateNode), Z_Construct_UClass_UAnimStateNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass_MetaData[] = {
		{ "Comment", "// The instance class the spawned getter is defined on\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "The instance class the spawned getter is defined on" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass = { "AnimInstanceClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeSpawnData, AnimInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint_MetaData[] = {
		{ "Comment", "// The blueprint the getter is valid within\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The blueprint the getter is valid within" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint = { "SourceBlueprint", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeSpawnData, SourceBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter_MetaData[] = {
		{ "Comment", "// The UFunction (as a UField) \n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "The UFunction (as a UField)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter = { "Getter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeSpawnData, Getter), Z_Construct_UClass_UField, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString_MetaData[] = {
		{ "Comment", "// String of combined valid contexts for the spawned getter\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "String of combined valid contexts for the spawned getter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString = { "GetterContextString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeSpawnData, GetterContextString), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeSpawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_CachedTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceStateNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_AnimInstanceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_SourceBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_Getter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewProp_GetterContextString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		&NewStructOps,
		"NodeSpawnData",
		sizeof(FNodeSpawnData),
		alignof(FNodeSpawnData),
		Z_Construct_UScriptStruct_FNodeSpawnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeSpawnData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeSpawnData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FNodeSpawnData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeSpawnData.InnerSingleton;
	}
	void UK2Node_AnimGetter::StaticRegisterNativesUK2Node_AnimGetter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_AnimGetter);
	UClass* Z_Construct_UClass_UK2Node_AnimGetter_NoRegister()
	{
		return UK2Node_AnimGetter::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AnimGetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceStateNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_GetterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAnimBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CachedTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Contexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Contexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AnimGetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AnimGetter.h" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData[] = {
		{ "Comment", "// The node that is required for the getter\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "The node that is required for the getter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AnimGetter, SourceNode), Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData[] = {
		{ "Comment", "// UAnimStateNode doesn't use the same hierarchy so we need to have a seperate property here to handle\n// those.\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "UAnimStateNode doesn't use the same hierarchy so we need to have a seperate property here to handle\nthose." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode = { "SourceStateNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AnimGetter, SourceStateNode), Z_Construct_UClass_UAnimStateNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData[] = {
		{ "Comment", "// The UAnimInstance derived class that implements the getter we are running\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "The UAnimInstance derived class that implements the getter we are running" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass = { "GetterClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AnimGetter, GetterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData[] = {
		{ "Comment", "// The anim blueprint that generated this getter\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The anim blueprint that generated this getter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint = { "SourceAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AnimGetter, SourceAnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData[] = {
		{ "Comment", "// Cached node title\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "Cached node title" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle = { "CachedTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AnimGetter, CachedTitle), METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData[] = {
		{ "Comment", "// List of valid contexts for the node\n" },
		{ "ModuleRelativePath", "Public/K2Node_AnimGetter.h" },
		{ "ToolTip", "List of valid contexts for the node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AnimGetter, Contexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_AnimGetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceStateNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_GetterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_CachedTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimGetter_Statics::NewProp_Contexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AnimGetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AnimGetter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AnimGetter_Statics::ClassParams = {
		&UK2Node_AnimGetter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_AnimGetter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimGetter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimGetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AnimGetter()
	{
		if (!Z_Registration_Info_UClass_UK2Node_AnimGetter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AnimGetter.OuterSingleton, Z_Construct_UClass_UK2Node_AnimGetter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_AnimGetter.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UK2Node_AnimGetter>()
	{
		return UK2Node_AnimGetter::StaticClass();
	}
	UK2Node_AnimGetter::UK2Node_AnimGetter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AnimGetter);
	UK2Node_AnimGetter::~UK2Node_AnimGetter() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_AnimGetter)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_Statics::ScriptStructInfo[] = {
		{ FNodeSpawnData::StaticStruct, Z_Construct_UScriptStruct_FNodeSpawnData_Statics::NewStructOps, TEXT("NodeSpawnData"), &Z_Registration_Info_UScriptStruct_NodeSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeSpawnData), 4157171654U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AnimGetter, UK2Node_AnimGetter::StaticClass, TEXT("UK2Node_AnimGetter"), &Z_Registration_Info_UClass_UK2Node_AnimGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AnimGetter), 2833975787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_2751311609(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimGetter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
