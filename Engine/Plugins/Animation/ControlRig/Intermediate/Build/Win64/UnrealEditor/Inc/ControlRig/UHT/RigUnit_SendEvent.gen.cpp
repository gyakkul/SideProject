// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_SendEvent.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SendEvent() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigEvent();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SendEvent();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SendEvent>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SendEvent cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SendEvent;
class UScriptStruct* FRigUnit_SendEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SendEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SendEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SendEvent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SendEvent"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SendEvent_Execute;
		Arguments_FRigUnit_SendEvent_Execute.Emplace(TEXT("Event"), TEXT("ERigEvent"));
		Arguments_FRigUnit_SendEvent_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SendEvent_Execute.Emplace(TEXT("OffsetInSeconds"), TEXT("float"));
		Arguments_FRigUnit_SendEvent_Execute.Emplace(TEXT("bEnable"), TEXT("bool"));
		Arguments_FRigUnit_SendEvent_Execute.Emplace(TEXT("bOnlyDuringInteraction"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SendEvent::Execute"), &FRigUnit_SendEvent::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SendEvent.OuterSingleton, Arguments_FRigUnit_SendEvent_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SendEvent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SendEvent>()
{
	return FRigUnit_SendEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Event;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyDuringInteraction_MetaData[];
#endif
		static void NewProp_bOnlyDuringInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDuringInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * SendEvent is used to notify the engine / editor of a change that happend within the Control Rig.\n */" },
		{ "DisplayName", "Send Event" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SendEvent" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SendEvent.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "TemplateName", "Event,Notify,Notification" },
		{ "ToolTip", "SendEvent is used to notify the engine / editor of a change that happend within the Control Rig." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SendEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The event to send to the engine\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SendEvent.h" },
		{ "ToolTip", "The event to send to the engine" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SendEvent, Event), Z_Construct_UEnum_ControlRig_ERigEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Event_MetaData)) }; // 4200184063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to send the event for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SendEvent.h" },
		{ "ToolTip", "The item to send the event for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SendEvent, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_OffsetInSeconds_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The time offset to use for the send event\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SendEvent.h" },
		{ "ToolTip", "The time offset to use for the send event" },
		{ "UIMax", "1000" },
		{ "UIMin", "-1000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_OffsetInSeconds = { "OffsetInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SendEvent, OffsetInSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_OffsetInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_OffsetInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The event will be sent if this is checked\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SendEvent.h" },
		{ "ToolTip", "The event will be sent if this is checked" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FRigUnit_SendEvent*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SendEvent), &Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bOnlyDuringInteraction_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The event will be sent if this only during an interaction\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SendEvent.h" },
		{ "ToolTip", "The event will be sent if this only during an interaction" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bOnlyDuringInteraction_SetBit(void* Obj)
	{
		((FRigUnit_SendEvent*)Obj)->bOnlyDuringInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bOnlyDuringInteraction = { "bOnlyDuringInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SendEvent), &Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bOnlyDuringInteraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bOnlyDuringInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bOnlyDuringInteraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Event_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_OffsetInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewProp_bOnlyDuringInteraction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SendEvent",
		sizeof(FRigUnit_SendEvent),
		alignof(FRigUnit_SendEvent),
		Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SendEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SendEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SendEvent.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SendEvent.InnerSingleton;
	}

void FRigUnit_SendEvent::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SendEvent::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Event,
		Item,
		OffsetInSeconds,
		bEnable,
		bOnlyDuringInteraction
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SendEvent::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics::NewStructOps, TEXT("RigUnit_SendEvent"), &Z_Registration_Info_UScriptStruct_RigUnit_SendEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SendEvent), 2909246664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h_1609952827(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
