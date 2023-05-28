// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectRuntime.h"
#include "InstancedStruct.h"
#include "SmartObjectTypes.h"
#include "WorldConditionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectRuntime() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectComponent_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRuntime();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotStateData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotTransform();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotView();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserHandle();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQueryState();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectSlotState;
	static UEnum* ESmartObjectSlotState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectSlotState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectSlotState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectSlotState"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectSlotState.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectSlotState>()
	{
		return ESmartObjectSlotState_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::Enumerators[] = {
		{ "ESmartObjectSlotState::Invalid", (int64)ESmartObjectSlotState::Invalid },
		{ "ESmartObjectSlotState::Free", (int64)ESmartObjectSlotState::Free },
		{ "ESmartObjectSlotState::Claimed", (int64)ESmartObjectSlotState::Claimed },
		{ "ESmartObjectSlotState::Occupied", (int64)ESmartObjectSlotState::Occupied },
		{ "ESmartObjectSlotState::Disabled", (int64)ESmartObjectSlotState::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::Enum_MetaDataParams[] = {
		{ "Claimed.Comment", "/** Slot is claimed but interaction is not active yet */" },
		{ "Claimed.Name", "ESmartObjectSlotState::Claimed" },
		{ "Claimed.ToolTip", "Slot is claimed but interaction is not active yet" },
		{ "Comment", "/**\n * Enumeration to represent the runtime state of a slot\n */" },
		{ "Disabled.Comment", "/** Slot can no longer be claimed or used since the parent object and its slot are disabled (e.g. instance tags) */" },
		{ "Disabled.Name", "ESmartObjectSlotState::Disabled" },
		{ "Disabled.ToolTip", "Slot can no longer be claimed or used since the parent object and its slot are disabled (e.g. instance tags)" },
		{ "Free.Comment", "/** Slot is available */" },
		{ "Free.Name", "ESmartObjectSlotState::Free" },
		{ "Free.ToolTip", "Slot is available" },
		{ "Invalid.Name", "ESmartObjectSlotState::Invalid" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "Occupied.Comment", "/** Slot is claimed and interaction is active */" },
		{ "Occupied.Name", "ESmartObjectSlotState::Occupied" },
		{ "Occupied.ToolTip", "Slot is claimed and interaction is active" },
		{ "ToolTip", "Enumeration to represent the runtime state of a slot" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectSlotState",
		"ESmartObjectSlotState",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectSlotState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectSlotState.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectSlotState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle;
class UScriptStruct* FSmartObjectClaimHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectClaimHandle, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectClaimHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectClaimHandle>()
{
	return FSmartObjectClaimHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct describing a reservation between a user and a smart object slot.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Struct describing a reservation between a user and a smart object slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectClaimHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SmartObjectHandle_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Handle to the Smart Object where the claimed slot belongs to.  */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Handle to the Smart Object where the claimed slot belongs to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SmartObjectHandle = { "SmartObjectHandle", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectClaimHandle, SmartObjectHandle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SmartObjectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SmartObjectHandle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Handle of the claimed slot. */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Handle of the claimed slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectClaimHandle, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SlotHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SlotHandle_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_UserHandle_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Handle describing the user which claimed the slot. */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Handle describing the user which claimed the slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_UserHandle = { "UserHandle", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectClaimHandle, UserHandle), Z_Construct_UScriptStruct_FSmartObjectUserHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_UserHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_UserHandle_MetaData)) }; // 2906428898
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SmartObjectHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_SlotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewProp_UserHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectClaimHandle",
		sizeof(FSmartObjectClaimHandle),
		alignof(FSmartObjectClaimHandle),
		Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSmartObjectSlotTransform>() == std::is_polymorphic<FSmartObjectSlotStateData>(), "USTRUCT FSmartObjectSlotTransform cannot be polymorphic unless super FSmartObjectSlotStateData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform;
class UScriptStruct* FSmartObjectSlotTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotTransform, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotTransform"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotTransform>()
{
	return FSmartObjectSlotTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime data holding the final slot transform (i.e. parent transform applied on slot local offset and rotation)\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Runtime data holding the final slot transform (i.e. parent transform applied on slot local offset and rotation)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSlotStateData,
		&NewStructOps,
		"SmartObjectSlotTransform",
		sizeof(FSmartObjectSlotTransform),
		alignof(FSmartObjectSlotTransform),
		Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot;
class UScriptStruct* FSmartObjectRuntimeSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectRuntimeSlot"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectRuntimeSlot>()
{
	return FSmartObjectRuntimeSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreconditionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreconditionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct to store and manage state of a runtime instance associated to a given slot definition\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Struct to store and manage state of a runtime instance associated to a given slot definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectRuntimeSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::NewProp_PreconditionState_MetaData[] = {
		{ "Comment", "/** World condition runtime state. */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "World condition runtime state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::NewProp_PreconditionState = { "PreconditionState", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRuntimeSlot, PreconditionState), Z_Construct_UScriptStruct_FWorldConditionQueryState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::NewProp_PreconditionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::NewProp_PreconditionState_MetaData)) }; // 873620186
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::NewProp_PreconditionState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectRuntimeSlot",
		sizeof(FSmartObjectRuntimeSlot),
		alignof(FSmartObjectRuntimeSlot),
		Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectRuntime;
class UScriptStruct* FSmartObjectRuntime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectRuntime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectRuntime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectRuntime, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectRuntime"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectRuntime.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectRuntime>()
{
	return FSmartObjectRuntime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreconditionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreconditionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwnerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialEntryData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpatialEntryData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct to store and manage state of a runtime instance associated to a given smart object definition\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Struct to store and manage state of a runtime instance associated to a given smart object definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectRuntime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_PreconditionState_MetaData[] = {
		{ "Comment", "/** World condition runtime state. */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "World condition runtime state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_PreconditionState = { "PreconditionState", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRuntime, PreconditionState), Z_Construct_UScriptStruct_FWorldConditionQueryState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_PreconditionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_PreconditionState_MetaData)) }; // 873620186
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_Definition_MetaData[] = {
		{ "Comment", "/** Associated smart object definition */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Associated smart object definition" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRuntime, Definition), Z_Construct_UClass_USmartObjectDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_Definition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "Comment", "/** Component that owns the Smart Object. May be empty if the parent Actor is not loaded. */" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Component that owns the Smart Object. May be empty if the parent Actor is not loaded." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRuntime, OwnerComponent), Z_Construct_UClass_USmartObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_OwnerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_SpatialEntryData_MetaData[] = {
		{ "BaseStruct", "/Script/SmartObjectsModule.SmartObjectSpatialEntryData" },
		{ "Category", "SmartObject" },
		{ "Comment", "/** Spatial representation data associated to the current instance */" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
		{ "ToolTip", "Spatial representation data associated to the current instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_SpatialEntryData = { "SpatialEntryData", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRuntime, SpatialEntryData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_SpatialEntryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_SpatialEntryData_MetaData)) }; // 3026308664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_PreconditionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_OwnerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewProp_SpatialEntryData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectRuntime",
		sizeof(FSmartObjectRuntime),
		alignof(FSmartObjectRuntime),
		Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRuntime()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectRuntime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectRuntime.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectRuntime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotView;
class UScriptStruct* FSmartObjectSlotView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotView, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotView"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotView.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotView>()
{
	return FSmartObjectSlotView::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartObjectRuntime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotView>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotView",
		sizeof(FSmartObjectSlotView),
		alignof(FSmartObjectSlotView),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotView()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotView.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotView.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotView.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_Statics::EnumInfo[] = {
		{ ESmartObjectSlotState_StaticEnum, TEXT("ESmartObjectSlotState"), &Z_Registration_Info_UEnum_ESmartObjectSlotState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2281464799U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectClaimHandle::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics::NewStructOps, TEXT("SmartObjectClaimHandle"), &Z_Registration_Info_UScriptStruct_SmartObjectClaimHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectClaimHandle), 931449528U) },
		{ FSmartObjectSlotTransform::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics::NewStructOps, TEXT("SmartObjectSlotTransform"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotTransform), 2472659666U) },
		{ FSmartObjectRuntimeSlot::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics::NewStructOps, TEXT("SmartObjectRuntimeSlot"), &Z_Registration_Info_UScriptStruct_SmartObjectRuntimeSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectRuntimeSlot), 1274014954U) },
		{ FSmartObjectRuntime::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics::NewStructOps, TEXT("SmartObjectRuntime"), &Z_Registration_Info_UScriptStruct_SmartObjectRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectRuntime), 815902710U) },
		{ FSmartObjectSlotView::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics::NewStructOps, TEXT("SmartObjectSlotView"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotView), 1705834506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_3196808835(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
