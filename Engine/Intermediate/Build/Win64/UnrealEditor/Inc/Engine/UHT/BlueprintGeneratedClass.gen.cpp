// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGeneratedClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeToCodeAssociation;
class UScriptStruct* FNodeToCodeAssociation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeToCodeAssociation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NodeToCodeAssociation"));
	}
	return Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNodeToCodeAssociation>()
{
	return FNodeToCodeAssociation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeToCodeAssociation>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NodeToCodeAssociation",
		sizeof(FNodeToCodeAssociation),
		alignof(FNodeToCodeAssociation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.InnerSingleton, Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction;
class UScriptStruct* FDebuggingInfoForSingleFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DebuggingInfoForSingleFunction"));
	}
	return Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebuggingInfoForSingleFunction>()
{
	return FDebuggingInfoForSingleFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebuggingInfoForSingleFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebuggingInfoForSingleFunction",
		sizeof(FDebuggingInfoForSingleFunction),
		alignof(FDebuggingInfoForSingleFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.InnerSingleton, Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame;
class UScriptStruct* FPointerToUberGraphFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerToUberGraphFrame, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PointerToUberGraphFrame"));
	}
	return Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPointerToUberGraphFrame>()
{
	return FPointerToUberGraphFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerToUberGraphFrame>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PointerToUberGraphFrame",
		sizeof(FPointerToUberGraphFrame),
		alignof(FPointerToUberGraphFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.InnerSingleton, Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintDebugData;
class UScriptStruct* FBlueprintDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDebugData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintDebugData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintDebugData>()
{
	return FBlueprintDebugData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintDebugData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintDebugData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintDebugData",
		sizeof(FBlueprintDebugData),
		alignof(FBlueprintDebugData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintDebugData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintDebugData.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintDebugData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventGraphFastCallPair;
class UScriptStruct* FEventGraphFastCallPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventGraphFastCallPair, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EventGraphFastCallPair"));
	}
	return Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEventGraphFastCallPair>()
{
	return FEventGraphFastCallPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionToPatch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionToPatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventGraphCallOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventGraphCallOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventGraphFastCallPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch = { "FunctionToPatch", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventGraphFastCallPair, FunctionToPatch), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset = { "EventGraphCallOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventGraphFastCallPair, EventGraphCallOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EventGraphFastCallPair",
		sizeof(FEventGraphFastCallPair),
		alignof(FEventGraphFastCallPair),
		Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair()
	{
		if (!Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.InnerSingleton, Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo;
class UScriptStruct* FBlueprintComponentChangedPropertyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentChangedPropertyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintComponentChangedPropertyInfo>()
{
	return FBlueprintComponentChangedPropertyInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyScope_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyScope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single changed Blueprint component property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "A single changed Blueprint component property." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentChangedPropertyInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** The name of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The name of the changed property." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** The array index of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The array index of the changed property." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData[] = {
		{ "Comment", "/** The parent struct (owner) of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The parent struct (owner) of the changed property." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope = { "PropertyScope", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyScope), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintComponentChangedPropertyInfo",
		sizeof(FBlueprintComponentChangedPropertyInfo),
		alignof(FBlueprintComponentChangedPropertyInfo),
		Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData;
class UScriptStruct* FBlueprintCookedComponentInstancingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintCookedComponentInstancingData"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintCookedComponentInstancingData>()
{
	return FBlueprintCookedComponentInstancingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangedPropertyList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangedPropertyList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangedPropertyList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidCookedData_MetaData[];
#endif
		static void NewProp_bHasValidCookedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidCookedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cooked data for a Blueprint component template. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Cooked data for a Blueprint component template." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCookedComponentInstancingData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner = { "ChangedPropertyList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, METADATA_PARAMS(nullptr, 0) }; // 740480405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData[] = {
		{ "Comment", "/** List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList = { "ChangedPropertyList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintCookedComponentInstancingData, ChangedPropertyList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData)) }; // 740480405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_MetaData[] = {
		{ "Comment", "/** Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context." },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_SetBit(void* Obj)
	{
		((FBlueprintCookedComponentInstancingData*)Obj)->bHasValidCookedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData = { "bHasValidCookedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlueprintCookedComponentInstancingData), &Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintCookedComponentInstancingData",
		sizeof(FBlueprintCookedComponentInstancingData),
		alignof(FBlueprintCookedComponentInstancingData),
		Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPComponentClassOverride;
class UScriptStruct* FBPComponentClassOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPComponentClassOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPComponentClassOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPComponentClassOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BPComponentClassOverride"));
	}
	return Z_Registration_Info_UScriptStruct_BPComponentClassOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPComponentClassOverride>()
{
	return FBPComponentClassOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Utility struct to store class overrides for components. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Utility struct to store class overrides for components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPComponentClassOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** The component name an override is being specified for. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The component name an override is being specified for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBPComponentClassOverride, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Comment", "/** The class to use when constructing the component. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The class to use when constructing the component." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBPComponentClassOverride, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BPComponentClassOverride",
		sizeof(FBPComponentClassOverride),
		alignof(FBPComponentClassOverride),
		Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_BPComponentClassOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPComponentClassOverride.InnerSingleton, Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPComponentClassOverride.InnerSingleton;
	}
	void UBlueprintGeneratedClass::StaticRegisterNativesUBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister()
	{
		return UBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumReplicatedProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNativizedParent_MetaData[];
#endif
		static void NewProp_bHasNativizedParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNativizedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCookedComponentInstancingData_MetaData[];
#endif
		static void NewProp_bHasCookedComponentInstancingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCookedComponentInstancingData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSparseClassDataSerializable_MetaData[];
#endif
		static void NewProp_bIsSparseClassDataSerializable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSparseClassDataSerializable;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicBindingObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBindingObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicBindingObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTemplates;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Timelines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timelines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Timelines;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentClassOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClassOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentClassOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimpleConstructionScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InheritableComponentHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UberGraphFramePointerProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UberGraphFramePointerProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UberGraphFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UberGraphFunction;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_FastCallPairs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastCallPairs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FastCallPairs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridenArchetypeForCDO_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverridenArchetypeForCDO;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyGuids_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyGuids_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyGuids_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertyGuids;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CalledFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalledFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CalledFunctions;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookedPropertyGuids_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CookedPropertyGuids_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedPropertyGuids_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CookedPropertyGuids;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CookedComponentInstancingData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CookedComponentInstancingData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/BlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties = { "NumReplicatedProperties", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, NumReplicatedProperties), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_SetBit(void* Obj)
	{
		((UBlueprintGeneratedClass*)Obj)->bHasNativizedParent_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent = { "bHasNativizedParent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_MetaData[] = {
		{ "Comment", "/** Flag used to indicate if this class has data to support the component instancing fast path. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag used to indicate if this class has data to support the component instancing fast path." },
	};
#endif
	void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_SetBit(void* Obj)
	{
		((UBlueprintGeneratedClass*)Obj)->bHasCookedComponentInstancingData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData = { "bHasCookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_MetaData[] = {
		{ "Comment", "/** Used to check if this class has sparse data that can be serialized. This will be false when loading the data if it hasn't already been saved out. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Used to check if this class has sparse data that can be serialized. This will be false when loading the data if it hasn't already been saved out." },
	};
#endif
	void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_SetBit(void* Obj)
	{
		((UBlueprintGeneratedClass*)Obj)->bIsSparseClassDataSerializable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable = { "bIsSparseClassDataSerializable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner = { "DynamicBindingObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData[] = {
		{ "Comment", "/** Array of objects containing information for dynamically binding delegates to functions in this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of objects containing information for dynamically binding delegates to functions in this blueprint" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects = { "DynamicBindingObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, DynamicBindingObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData[] = {
		{ "Comment", "/** Array of component template objects, used by AddComponent function */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of component template objects, used by AddComponent function" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner = { "Timelines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData[] = {
		{ "Comment", "/** Array of templates for timelines that should be created */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of templates for timelines that should be created" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines = { "Timelines", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, Timelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_Inner = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBPComponentClassOverride, METADATA_PARAMS(nullptr, 0) }; // 2564178139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_MetaData[] = {
		{ "Comment", "/** Array of blueprint overrides of component classes in parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of blueprint overrides of component classes in parent classes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentClassOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_MetaData)) }; // 2564178139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData[] = {
		{ "Comment", "/** 'Simple' construction script - graph of components to instance */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "'Simple' construction script - graph of components to instance" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript = { "SimpleConstructionScript", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData[] = {
		{ "Comment", "/** Stores data to override (in children classes) components (created by SCS) from parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler = { "InheritableComponentHandler", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty = { "UberGraphFramePointerProperty", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFramePointerProperty_DEPRECATED), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction = { "UberGraphFunction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner = { "FastCallPairs", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEventGraphFastCallPair, METADATA_PARAMS(nullptr, 0) }; // 3977839285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData[] = {
		{ "Comment", "// This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\n// It is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\nIt is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs = { "FastCallPairs", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, FastCallPairs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData)) }; // 3977839285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO = { "OverridenArchetypeForCDO", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, OverridenArchetypeForCDO), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp = { "PropertyGuids", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp = { "PropertyGuids_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData[] = {
		{ "Comment", "/** Property guid map */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Property guid map" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids = { "PropertyGuids", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, PropertyGuids), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_Inner = { "CalledFunctions", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions = { "CalledFunctions", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, CalledFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_ValueProp = { "CookedPropertyGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_Key_KeyProp = { "CookedPropertyGuids_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_MetaData[] = {
		{ "Comment", "/** Property guid map (if any), for use only when this BP is cooked */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Property guid map (if any), for use only when this BP is cooked" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids = { "CookedPropertyGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, CookedPropertyGuids), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(nullptr, 0) }; // 3484312318
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp = { "CookedComponentInstancingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "Comment", "// Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\n// Note: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\nNote: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, CookedComponentInstancingData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData)) }; // 3484312318
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, CachedCookedMetaDataPtr), Z_Construct_UClass_UClassCookedMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CachedCookedMetaDataPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CachedCookedMetaDataPtr_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams = {
		&UBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlueprintGeneratedClass>()
	{
		return UBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGeneratedClass);
	UBlueprintGeneratedClass::~UBlueprintGeneratedClass() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintGeneratedClass)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ScriptStructInfo[] = {
		{ FNodeToCodeAssociation::StaticStruct, Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::NewStructOps, TEXT("NodeToCodeAssociation"), &Z_Registration_Info_UScriptStruct_NodeToCodeAssociation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeToCodeAssociation), 2307765062U) },
		{ FDebuggingInfoForSingleFunction::StaticStruct, Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::NewStructOps, TEXT("DebuggingInfoForSingleFunction"), &Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebuggingInfoForSingleFunction), 3556887750U) },
		{ FPointerToUberGraphFrame::StaticStruct, Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::NewStructOps, TEXT("PointerToUberGraphFrame"), &Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointerToUberGraphFrame), 1521809969U) },
		{ FBlueprintDebugData::StaticStruct, Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::NewStructOps, TEXT("BlueprintDebugData"), &Z_Registration_Info_UScriptStruct_BlueprintDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintDebugData), 2535246939U) },
		{ FEventGraphFastCallPair::StaticStruct, Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewStructOps, TEXT("EventGraphFastCallPair"), &Z_Registration_Info_UScriptStruct_EventGraphFastCallPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventGraphFastCallPair), 3977839285U) },
		{ FBlueprintComponentChangedPropertyInfo::StaticStruct, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewStructOps, TEXT("BlueprintComponentChangedPropertyInfo"), &Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintComponentChangedPropertyInfo), 740480405U) },
		{ FBlueprintCookedComponentInstancingData::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewStructOps, TEXT("BlueprintCookedComponentInstancingData"), &Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCookedComponentInstancingData), 3484312318U) },
		{ FBPComponentClassOverride::StaticStruct, Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewStructOps, TEXT("BPComponentClassOverride"), &Z_Registration_Info_UScriptStruct_BPComponentClassOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPComponentClassOverride), 2564178139U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintGeneratedClass, UBlueprintGeneratedClass::StaticClass, TEXT("UBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintGeneratedClass), 719945643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_3089502192(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
