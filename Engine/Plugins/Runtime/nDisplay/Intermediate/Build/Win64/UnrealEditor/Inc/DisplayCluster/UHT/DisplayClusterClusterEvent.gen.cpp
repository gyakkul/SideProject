// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cluster/DisplayClusterClusterEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterClusterEvent() {}
// Cross Module References
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase;
class UScriptStruct* FDisplayClusterClusterEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterClusterEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterClusterEventBase>()
{
	return FDisplayClusterClusterEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSystemEvent_MetaData[];
#endif
		static void NewProp_bIsSystemEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDiscardOnRepeat_MetaData[];
#endif
		static void NewProp_bShouldDiscardOnRepeat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDiscardOnRepeat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////\n// Common cluster event data\n//////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "/\n Common cluster event data\n/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterClusterEventBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bIsSystemEvent_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Is nDisplay internal event (should never be true for end users)\n" },
		{ "DisplayName", "Is Sytem Event. 'True' is reserved for nDisplay internals." },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Is nDisplay internal event (should never be true for end users)" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bIsSystemEvent_SetBit(void* Obj)
	{
		((FDisplayClusterClusterEventBase*)Obj)->bIsSystemEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bIsSystemEvent = { "bIsSystemEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterClusterEventBase), &Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bIsSystemEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bIsSystemEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bIsSystemEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bShouldDiscardOnRepeat_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Should older events with the same Name/Type/Category (for JSON) or ID (for binary) be discarded if a new one received\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Should older events with the same Name/Type/Category (for JSON) or ID (for binary) be discarded if a new one received" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bShouldDiscardOnRepeat_SetBit(void* Obj)
	{
		((FDisplayClusterClusterEventBase*)Obj)->bShouldDiscardOnRepeat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bShouldDiscardOnRepeat = { "bShouldDiscardOnRepeat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterClusterEventBase), &Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bShouldDiscardOnRepeat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bShouldDiscardOnRepeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bShouldDiscardOnRepeat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bIsSystemEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewProp_bShouldDiscardOnRepeat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		&NewStructOps,
		"DisplayClusterClusterEventBase",
		sizeof(FDisplayClusterClusterEventBase),
		alignof(FDisplayClusterClusterEventBase),
		Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterClusterEventJson>() == std::is_polymorphic<FDisplayClusterClusterEventBase>(), "USTRUCT FDisplayClusterClusterEventJson cannot be polymorphic unless super FDisplayClusterClusterEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson;
class UScriptStruct* FDisplayClusterClusterEventJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterClusterEventJson"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterClusterEventJson>()
{
	return FDisplayClusterClusterEventJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////\n// Cluster event JSON\n//////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "/\n Cluster event JSON\n/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterClusterEventJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Event name (used for discarding outdated events)\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Event name (used for discarding outdated events)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterClusterEventJson, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Event type (used for discarding outdated events)\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Event type (used for discarding outdated events)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterClusterEventJson, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Event category (used for discarding outdated events)\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Event category (used for discarding outdated events)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterClusterEventJson, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Event parameters\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Event parameters" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterClusterEventJson, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase,
		&NewStructOps,
		"DisplayClusterClusterEventJson",
		sizeof(FDisplayClusterClusterEventJson),
		alignof(FDisplayClusterClusterEventJson),
		Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterClusterEventBinary>() == std::is_polymorphic<FDisplayClusterClusterEventBase>(), "USTRUCT FDisplayClusterClusterEventBinary cannot be polymorphic unless super FDisplayClusterClusterEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary;
class UScriptStruct* FDisplayClusterClusterEventBinary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterClusterEventBinary"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterClusterEventBinary>()
{
	return FDisplayClusterClusterEventBinary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////\n// Cluster event BINARY\n//////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "/\n Cluster event BINARY\n/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterClusterEventBinary>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Event ID (used for discarding outdated events)\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Event ID (used for discarding outdated events)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterClusterEventBinary, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventData_Inner = { "EventData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventData_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Binary event data\n" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterClusterEvent.h" },
		{ "ToolTip", "Binary event data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterClusterEventBinary, EventData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewProp_EventData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase,
		&NewStructOps,
		"DisplayClusterClusterEventBinary",
		sizeof(FDisplayClusterClusterEventBinary),
		alignof(FDisplayClusterClusterEventBinary),
		Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterClusterEvent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterClusterEvent_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterClusterEventBase::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterClusterEventBase_Statics::NewStructOps, TEXT("DisplayClusterClusterEventBase"), &Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterClusterEventBase), 656113396U) },
		{ FDisplayClusterClusterEventJson::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson_Statics::NewStructOps, TEXT("DisplayClusterClusterEventJson"), &Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterClusterEventJson), 62572603U) },
		{ FDisplayClusterClusterEventBinary::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary_Statics::NewStructOps, TEXT("DisplayClusterClusterEventBinary"), &Z_Registration_Info_UScriptStruct_DisplayClusterClusterEventBinary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterClusterEventBinary), 1904386298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterClusterEvent_h_1046951719(TEXT("/Script/DisplayCluster"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterClusterEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterClusterEvent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
