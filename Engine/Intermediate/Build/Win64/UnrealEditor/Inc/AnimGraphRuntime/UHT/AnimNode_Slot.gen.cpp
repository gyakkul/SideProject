// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_Slot.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Slot() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Slot>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Slot cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Slot;
class UScriptStruct* FAnimNode_Slot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Slot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Slot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Slot, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Slot"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Slot.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Slot>()
{
	return FAnimNode_Slot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Slot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdateSourcePose_MetaData[];
#endif
		static void NewProp_bAlwaysUpdateSourcePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdateSourcePose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// An animation slot node normally acts as a passthru, but a montage or PlaySlotAnimation call from\n// game code can cause an animation to blend in and be played on the slot temporarily, overriding the\n// Source input.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "An animation slot node normally acts as a passthru, but a montage or PlaySlotAnimation call from\ngame code can cause an animation to blend in and be played on the slot temporarily, overriding the\nSource input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Slot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// The source input, passed thru to the output unless a montage or slot animation is currently playing\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "The source input, passed thru to the output unless a montage or slot animation is currently playing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Slot, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The name of this slot, exposed to gameplay code, etc...\n" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "The name of this slot, exposed to gameplay code, etc..." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Slot, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Whether we should continue to update the source pose regardless of whether it would be used.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "Whether we should continue to update the source pose regardless of whether it would be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_SetBit(void* Obj)
	{
		((FAnimNode_Slot*)Obj)->bAlwaysUpdateSourcePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose = { "bAlwaysUpdateSourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Slot), &Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_Slot",
		sizeof(FAnimNode_Slot),
		alignof(FAnimNode_Slot),
		Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Slot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Slot.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Slot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_Slot::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewStructOps, TEXT("AnimNode_Slot"), &Z_Registration_Info_UScriptStruct_AnimNode_Slot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Slot), 3716480099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_3940715026(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
