// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "../../Source/Runtime/Engine/Public/AlphaBlend.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMontage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNotifyEventType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageSubStepResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlendArgs();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimMontageInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPoint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointMarker();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMontageBlendSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSlotAnimationTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FCompositeSection>() == std::is_polymorphic<FAnimLinkableElement>(), "USTRUCT FCompositeSection cannot be polymorphic unless super FAnimLinkableElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositeSection;
class UScriptStruct* FCompositeSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositeSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeSection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CompositeSection"));
	}
	return Z_Registration_Info_UScriptStruct_CompositeSection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompositeSection>()
{
	return FCompositeSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositeSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextSectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MetaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Section data for each track. Reference of data will be stored in the child class for the way they want\n * AnimComposite vs AnimMontage have different requirement for the actual data reference\n * This only contains composite section information. (vertical sequences)\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Section data for each track. Reference of data will be stored in the child class for the way they want\nAnimComposite vs AnimMontage have different requirement for the actual data reference\nThis only contains composite section information. (vertical sequences)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeSection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Section Name */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Section Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeSection, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** Start Time **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Start Time *" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeSection, StartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Should this animation loop. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Should this animation loop." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName = { "NextSectionName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeSection, NextSectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeSection, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimLinkableElement,
		&NewStructOps,
		"CompositeSection",
		sizeof(FCompositeSection),
		alignof(FCompositeSection),
		Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositeSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositeSection.InnerSingleton, Z_Construct_UScriptStruct_FCompositeSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositeSection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotAnimationTrack;
class UScriptStruct* FSlotAnimationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotAnimationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotAnimationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotAnimationTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SlotAnimationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_SlotAnimationTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSlotAnimationTrack>()
{
	return FSlotAnimationTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Each slot data referenced by Animation Slot \n * contains slot name, and animation data \n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Each slot data referenced by Animation Slot\ncontains slot name, and animation data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotAnimationTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlotAnimationTrack, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack = { "AnimTrack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlotAnimationTrack, AnimTrack), Z_Construct_UScriptStruct_FAnimTrack, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack_MetaData)) }; // 2065631623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SlotAnimationTrack",
		sizeof(FSlotAnimationTrack),
		alignof(FSlotAnimationTrack),
		Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotAnimationTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_SlotAnimationTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotAnimationTrack.InnerSingleton, Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlotAnimationTrack.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBranchingPoint>() == std::is_polymorphic<FAnimLinkableElement>(), "USTRUCT FBranchingPoint cannot be polymorphic unless super FAnimLinkableElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BranchingPoint;
class UScriptStruct* FBranchingPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BranchingPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BranchingPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPoint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPoint"));
	}
	return Z_Registration_Info_UScriptStruct_BranchingPoint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchingPoint>()
{
	return FBranchingPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBranchingPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerTimeOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Remove FBranchingPoint when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Remove FBranchingPoint when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "BranchingPoint" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchingPoint, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchingPoint, DisplayTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset_MetaData[] = {
		{ "Comment", "/** An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset = { "TriggerTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchingPoint, TriggerTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimLinkableElement,
		&NewStructOps,
		"BranchingPoint",
		sizeof(FBranchingPoint),
		alignof(FBranchingPoint),
		Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchingPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_BranchingPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BranchingPoint.InnerSingleton, Z_Construct_UScriptStruct_FBranchingPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BranchingPoint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimNotifyEventType;
	static UEnum* EAnimNotifyEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNotifyEventType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimNotifyEventType"));
		}
		return Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimNotifyEventType::Type>()
	{
		return EAnimNotifyEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enumerators[] = {
		{ "EAnimNotifyEventType::Begin", (int64)EAnimNotifyEventType::Begin },
		{ "EAnimNotifyEventType::End", (int64)EAnimNotifyEventType::End },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enum_MetaDataParams[] = {
		{ "Begin.Comment", "/** */" },
		{ "Begin.Name", "EAnimNotifyEventType::Begin" },
		{ "Comment", "/**  */" },
		{ "End.Comment", "/** */" },
		{ "End.Name", "EAnimNotifyEventType::End" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimNotifyEventType",
		"EAnimNotifyEventType::Type",
		Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimNotifyEventType()
	{
		if (!Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageBlendMode;
	static UEnum* EMontageBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageBlendMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMontageBlendMode"));
		}
		return Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMontageBlendMode>()
	{
		return EMontageBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMontageBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enumerators[] = {
		{ "EMontageBlendMode::Standard", (int64)EMontageBlendMode::Standard },
		{ "EMontageBlendMode::Inertialization", (int64)EMontageBlendMode::Inertialization },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "Inertialization.Comment", "//Uses inertialization. Requires an inertialization node somewhere in the graph after any slot node used by this montage.\n" },
		{ "Inertialization.Name", "EMontageBlendMode::Inertialization" },
		{ "Inertialization.ToolTip", "Uses inertialization. Requires an inertialization node somewhere in the graph after any slot node used by this montage." },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "Standard.Comment", "//Uses standard weight based blend\n" },
		{ "Standard.Name", "EMontageBlendMode::Standard" },
		{ "Standard.ToolTip", "Uses standard weight based blend" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMontageBlendMode",
		"EMontageBlendMode",
		Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMontageBlendMode()
	{
		if (!Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton, Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BranchingPointMarker;
class UScriptStruct* FBranchingPointMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BranchingPointMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BranchingPointMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPointMarker, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPointMarker"));
	}
	return Z_Registration_Info_UScriptStruct_BranchingPointMarker.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchingPointMarker>()
{
	return FBranchingPointMarker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBranchingPointMarker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NotifyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyEventType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyEventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** AnimNotifies marked as BranchingPoints will create these markers on their Begin/End times.\n\x09They create stopping points when the Montage is being ticked to dispatch events. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "AnimNotifies marked as BranchingPoints will create these markers on their Begin/End times.\n      They create stopping points when the Montage is being ticked to dispatch events." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPointMarker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex = { "NotifyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchingPointMarker, NotifyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime = { "TriggerTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchingPointMarker, TriggerTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType = { "NotifyEventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchingPointMarker, NotifyEventType), Z_Construct_UEnum_Engine_EAnimNotifyEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType_MetaData)) }; // 1663578401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BranchingPointMarker",
		sizeof(FBranchingPointMarker),
		alignof(FBranchingPointMarker),
		Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointMarker()
	{
		if (!Z_Registration_Info_UScriptStruct_BranchingPointMarker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BranchingPointMarker.InnerSingleton, Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BranchingPointMarker.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageSubStepResult;
	static UEnum* EMontageSubStepResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageSubStepResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMontageSubStepResult"));
		}
		return Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMontageSubStepResult>()
	{
		return EMontageSubStepResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enumerators[] = {
		{ "EMontageSubStepResult::Moved", (int64)EMontageSubStepResult::Moved },
		{ "EMontageSubStepResult::NotMoved", (int64)EMontageSubStepResult::NotMoved },
		{ "EMontageSubStepResult::InvalidSection", (int64)EMontageSubStepResult::InvalidSection },
		{ "EMontageSubStepResult::InvalidMontage", (int64)EMontageSubStepResult::InvalidMontage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enum_MetaDataParams[] = {
		{ "InvalidMontage.Name", "EMontageSubStepResult::InvalidMontage" },
		{ "InvalidSection.Name", "EMontageSubStepResult::InvalidSection" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "Moved.Name", "EMontageSubStepResult::Moved" },
		{ "NotMoved.Name", "EMontageSubStepResult::NotMoved" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMontageSubStepResult",
		"EMontageSubStepResult",
		Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMontageSubStepResult()
	{
		if (!Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton, Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MontageBlendSettings;
class UScriptStruct* FMontageBlendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MontageBlendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MontageBlendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontageBlendSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MontageBlendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MontageBlendSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMontageBlendSettings>()
{
	return FMontageBlendSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMontageBlendSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blend;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Montage blend settings. Can be used to overwrite default Montage settings on Play/Stop\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Montage blend settings. Can be used to overwrite default Montage settings on Play/Stop" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontageBlendSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Blend Profile to use for this blend */" },
		{ "DisplayAfter", "Blend" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend Profile to use for this blend" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMontageBlendSettings, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_Blend_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** AlphaBlend options (time, curve, etc.) */" },
		{ "DisplayAfter", "BlendMode" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "AlphaBlend options (time, curve, etc.)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMontageBlendSettings, Blend), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_Blend_MetaData)) }; // 131481067
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Type of blend mode (Standard vs Inertial) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Type of blend mode (Standard vs Inertial)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMontageBlendSettings, BlendMode), Z_Construct_UEnum_Engine_EMontageBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode_MetaData)) }; // 948517738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MontageBlendSettings",
		sizeof(FMontageBlendSettings),
		alignof(FMontageBlendSettings),
		Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMontageBlendSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MontageBlendSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MontageBlendSettings.InnerSingleton, Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MontageBlendSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimMontageInstance;
class UScriptStruct* FAnimMontageInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimMontageInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimMontageInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimMontageInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimMontageInstance"));
	}
	return Z_Registration_Info_UScriptStruct_AnimMontageInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimMontageInstance>()
{
	return FAnimMontageInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimMontageInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[];
#endif
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendTimeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBlendTimeMultiplier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NextSections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrevSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrevSections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStateBranchingPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStateBranchingPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStateBranchingPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableRootMotionCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisableRootMotionCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimMontageInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage_MetaData[] = {
		{ "Comment", "// Montage reference\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Montage reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((FAnimMontageInstance*)Obj)->bPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimMontageInstance), &Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier_MetaData[] = {
		{ "Comment", "// Blend Time multiplier to allow extending and narrowing blendtimes\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend Time multiplier to allow extending and narrowing blendtimes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier = { "DefaultBlendTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, DefaultBlendTimeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_Inner = { "NextSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_MetaData[] = {
		{ "Comment", "// list of next sections per section - index of array is section id\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "list of next sections per section - index of array is section id" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections = { "NextSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, NextSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_Inner = { "PrevSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_MetaData[] = {
		{ "Comment", "// list of prev sections per section - index of array is section id\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "list of prev sections per section - index of array is section id" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections = { "PrevSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, PrevSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_Inner = { "ActiveStateBranchingPoints", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_MetaData[] = {
		{ "Comment", "/** Currently Active AnimNotifyState, stored as a copy of the event as we need to\n\x09\x09""call NotifyEnd on the event after a deletion in the editor. After this the event\n\x09\x09is removed correctly. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Currently Active AnimNotifyState, stored as a copy of the event as we need to\n              call NotifyEnd on the event after a deletion in the editor. After this the event\n              is removed correctly." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints = { "ActiveStateBranchingPoints", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, ActiveStateBranchingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, Blend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend_MetaData)) }; // 3900153020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount = { "DisableRootMotionCount", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimMontageInstance, DisableRootMotionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimMontageInstance",
		sizeof(FAnimMontageInstance),
		alignof(FAnimMontageInstance),
		Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimMontageInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimMontageInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimMontageInstance.InnerSingleton, Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimMontageInstance.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimMontage::execCreateSlotAnimationAsDynamicMontage_WithBlendSettings)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendInSettings);
		P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendOutSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTriggerTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_Out_BlendInSettings,Z_Param_Out_BlendOutSettings,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_InBlendOutTriggerTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execIsValidSectionName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidSectionName(Z_Param_InSectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execGetNumSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execGetSectionName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSectionName(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execGetSectionIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSectionIndex(Z_Param_InSectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execGetDefaultBlendOutTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefaultBlendOutTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execGetDefaultBlendInTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefaultBlendInTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execGetBlendOutArgs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAlphaBlendArgs*)Z_Param__Result=P_THIS->GetBlendOutArgs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimMontage::execGetBlendInArgs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAlphaBlendArgs*)Z_Param__Result=P_THIS->GetBlendInArgs();
		P_NATIVE_END;
	}
	void UAnimMontage::StaticRegisterNativesUAnimMontage()
	{
		UClass* Class = UAnimMontage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSlotAnimationAsDynamicMontage_WithBlendSettings", &UAnimMontage::execCreateSlotAnimationAsDynamicMontage_WithBlendSettings },
			{ "GetBlendInArgs", &UAnimMontage::execGetBlendInArgs },
			{ "GetBlendOutArgs", &UAnimMontage::execGetBlendOutArgs },
			{ "GetDefaultBlendInTime", &UAnimMontage::execGetDefaultBlendInTime },
			{ "GetDefaultBlendOutTime", &UAnimMontage::execGetDefaultBlendOutTime },
			{ "GetNumSections", &UAnimMontage::execGetNumSections },
			{ "GetSectionIndex", &UAnimMontage::execGetSectionIndex },
			{ "GetSectionName", &UAnimMontage::execGetSectionName },
			{ "IsValidSectionName", &UAnimMontage::execIsValidSectionName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics
	{
		struct AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms
		{
			UAnimSequenceBase* Asset;
			FName SlotNodeName;
			FMontageBlendSettings BlendInSettings;
			FMontageBlendSettings BlendOutSettings;
			float InPlayRate;
			int32 LoopCount;
			float InBlendOutTriggerTime;
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendInSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOutSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTriggerTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings = { "BlendInSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, BlendInSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings_MetaData)) }; // 1515019043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings = { "BlendOutSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, BlendOutSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData)) }; // 1515019043
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InBlendOutTriggerTime = { "InBlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, InBlendOutTriggerTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_SlotNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InBlendOutTriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Utility function to create dynamic montage from AnimSequence with blend in settings */" },
		{ "CPP_Default_InBlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Utility function to create dynamic montage from AnimSequence with blend in settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "CreateSlotAnimationAsDynamicMontage_WithBlendSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms), Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics
	{
		struct AnimMontage_eventGetBlendInArgs_Parms
		{
			FAlphaBlendArgs ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetBlendInArgs_Parms, ReturnValue), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(nullptr, 0) }; // 131481067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetBlendInArgs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::AnimMontage_eventGetBlendInArgs_Parms), Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetBlendInArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics
	{
		struct AnimMontage_eventGetBlendOutArgs_Parms
		{
			FAlphaBlendArgs ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetBlendOutArgs_Parms, ReturnValue), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(nullptr, 0) }; // 131481067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetBlendOutArgs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::AnimMontage_eventGetBlendOutArgs_Parms), Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics
	{
		struct AnimMontage_eventGetDefaultBlendInTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetDefaultBlendInTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetDefaultBlendInTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::AnimMontage_eventGetDefaultBlendInTime_Parms), Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics
	{
		struct AnimMontage_eventGetDefaultBlendOutTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetDefaultBlendOutTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetDefaultBlendOutTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::AnimMontage_eventGetDefaultBlendOutTime_Parms), Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics
	{
		struct AnimMontage_eventGetNumSections_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Returns the number of sections this montage has */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Returns the number of sections this montage has" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetNumSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::AnimMontage_eventGetNumSections_Parms), Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics
	{
		struct AnimMontage_eventGetSectionIndex_Parms
		{
			FName InSectionName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetSectionIndex_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetSectionIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_InSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get SectionIndex from SectionName. Returns INDEX_None if not found */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Get SectionIndex from SectionName. Returns INDEX_None if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetSectionIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::AnimMontage_eventGetSectionIndex_Parms), Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetSectionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics
	{
		struct AnimMontage_eventGetSectionName_Parms
		{
			int32 SectionIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetSectionName_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventGetSectionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get SectionName from SectionIndex. Returns NAME_None if not found */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Get SectionName from SectionIndex. Returns NAME_None if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetSectionName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::AnimMontage_eventGetSectionName_Parms), Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetSectionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics
	{
		struct AnimMontage_eventIsValidSectionName_Parms
		{
			FName InSectionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSectionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimMontage_eventIsValidSectionName_Parms, InSectionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimMontage_eventIsValidSectionName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimMontage_eventIsValidSectionName_Parms), &Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_InSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** @return true if valid section */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "@return true if valid section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "IsValidSectionName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::AnimMontage_eventIsValidSectionName_Parms), Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_IsValidSectionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimMontage);
	UClass* Z_Construct_UClass_UAnimMontage_NoRegister()
	{
		return UAnimMontage::StaticClass();
	}
	struct Z_Construct_UClass_UAnimMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendModeIn_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendModeIn_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendModeIn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendModeOut_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendModeOut_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendModeOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOut;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTriggerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SyncGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SyncSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompositeSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompositeSections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotAnimTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotAnimTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotAnimTracks;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchingPoints;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotionTranslation_MetaData[];
#endif
		static void NewProp_bEnableRootMotionTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotionTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotionRotation_MetaData[];
#endif
		static void NewProp_bEnableRootMotionRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotionRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoBlendOut_MetaData[];
#endif
		static void NewProp_bEnableAutoBlendOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoBlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfileIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfileIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfileOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfileOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointMarkers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchingPointMarkers;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BranchingPointStateNotifyIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointStateNotifyIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchingPointStateNotifyIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStretchCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStretchCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStretchCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TimeStretchCurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompositeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimMontage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings, "CreateSlotAnimationAsDynamicMontage_WithBlendSettings" }, // 3226564780
		{ &Z_Construct_UFunction_UAnimMontage_GetBlendInArgs, "GetBlendInArgs" }, // 1749584009
		{ &Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs, "GetBlendOutArgs" }, // 3486145023
		{ &Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime, "GetDefaultBlendInTime" }, // 2836880243
		{ &Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime, "GetDefaultBlendOutTime" }, // 1441931847
		{ &Z_Construct_UFunction_UAnimMontage_GetNumSections, "GetNumSections" }, // 728052936
		{ &Z_Construct_UFunction_UAnimMontage_GetSectionIndex, "GetSectionIndex" }, // 1672721811
		{ &Z_Construct_UFunction_UAnimMontage_GetSectionName, "GetSectionName" }, // 2674131462
		{ &Z_Construct_UFunction_UAnimMontage_IsValidSectionName, "IsValidSectionName" }, // 449241693
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Any property you're adding to AnimMontage and parent class has to be considered for Child Asset\n *\n * Child Asset is considered to be only asset mapping feature using everything else in the class\n * For example, you can just use all parent's setting  for the montage, but only remap assets\n * This isn't magic bullet unfortunately and it is consistent effort of keeping the data synced with parent\n * If you add new property, please make sure those property has to be copied for children.\n * If it does, please add the copy in the function RefreshParentAssetData\n */" },
		{ "HideCategories", "UObject Length" },
		{ "IncludePath", "Animation/AnimMontage.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Any property you're adding to AnimMontage and parent class has to be considered for Child Asset\n\nChild Asset is considered to be only asset mapping feature using everything else in the class\nFor example, you can just use all parent's setting  for the montage, but only remap assets\nThis isn't magic bullet unfortunately and it is consistent effort of keeping the data synced with parent\nIf you add new property, please make sure those property has to be copied for children.\nIf it does, please add the copy in the function RefreshParentAssetData" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn = { "BlendModeIn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendModeIn), Z_Construct_UEnum_Engine_EMontageBlendMode, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn_MetaData)) }; // 948517738
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut = { "BlendModeOut", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendModeOut), Z_Construct_UEnum_Engine_EMontageBlendMode, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut_MetaData)) }; // 948517738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** Blend in option. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend in option." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn_MetaData)) }; // 3900153020
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** Blend out option. This is only used when it blends out itself. If it's interrupted by other montages, it will use new montage's BlendIn option to blend out. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend out option. This is only used when it blends out itself. If it's interrupted by other montages, it will use new montage's BlendIn option to blend out." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendOut), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut_MetaData)) }; // 3900153020
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** Time from Sequence End to trigger blend out.\n\x09 * <0 means using BlendOutTime, so BlendOut finishes as Montage ends.\n\x09 * >=0 means using 'SequenceEnd - BlendOutTriggerTime' to trigger blend out. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Time from Sequence End to trigger blend out.\n<0 means using BlendOutTime, so BlendOut finishes as Montage ends.\n>=0 means using 'SequenceEnd - BlendOutTriggerTime' to trigger blend out." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime = { "BlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendOutTriggerTime), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup_MetaData[] = {
		{ "Category", "SyncGroup" },
		{ "Comment", "/** If you're using marker based sync for this montage, make sure to add sync group name. For now we only support one group */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If you're using marker based sync for this montage, make sure to add sync group name. For now we only support one group" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, SyncGroup), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex_MetaData[] = {
		{ "Category", "SyncGroup" },
		{ "Comment", "/** wip: until we have UI working */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "wip: until we have UI working" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex = { "SyncSlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, SyncSlotIndex), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData = { "MarkerData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, MarkerData), Z_Construct_UScriptStruct_FMarkerSyncData, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData_MetaData)) }; // 3354664481
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_Inner = { "CompositeSections", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCompositeSection, METADATA_PARAMS(nullptr, 0) }; // 2306930693
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_MetaData[] = {
		{ "Comment", "// composite section. \n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "composite section." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections = { "CompositeSections", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, CompositeSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_MetaData)) }; // 2306930693
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_Inner = { "SlotAnimTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSlotAnimationTrack, METADATA_PARAMS(nullptr, 0) }; // 2985159043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_MetaData[] = {
		{ "Comment", "// slot data, each slot contains anim track\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "slot data, each slot contains anim track" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks = { "SlotAnimTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, SlotAnimTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_MetaData)) }; // 2985159043
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_Inner = { "BranchingPoints", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBranchingPoint, METADATA_PARAMS(nullptr, 0) }; // 1421592732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_MetaData[] = {
		{ "Comment", "// Remove this when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Remove this when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints = { "BranchingPoints", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BranchingPoints_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_MetaData)) }; // 1421592732
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_MetaData[] = {
		{ "Comment", "/** If this is on, it will allow extracting root motion translation. DEPRECATED in 4.5 root motion is controlled by anim sequences **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If this is on, it will allow extracting root motion translation. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
#endif
	void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_SetBit(void* Obj)
	{
		((UAnimMontage*)Obj)->bEnableRootMotionTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation = { "bEnableRootMotionTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_MetaData[] = {
		{ "Comment", "/** If this is on, it will allow extracting root motion rotation. DEPRECATED in 4.5 root motion is controlled by anim sequences **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If this is on, it will allow extracting root motion rotation. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
#endif
	void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_SetBit(void* Obj)
	{
		((UAnimMontage*)Obj)->bEnableRootMotionRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation = { "bEnableRootMotionRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** When it hits end, it automatically blends out. If this is false, it won't blend out but keep the last pose until stopped explicitly */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "When it hits end, it automatically blends out. If this is false, it won't blend out but keep the last pose until stopped explicitly" },
	};
#endif
	void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_SetBit(void* Obj)
	{
		((UAnimMontage*)Obj)->bEnableAutoBlendOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut = { "bEnableAutoBlendOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileIn_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** The blend profile to use. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "The blend profile to use." },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileIn = { "BlendProfileIn", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendProfileIn), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** The blend profile to use. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "The blend profile to use." },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileOut = { "BlendProfileOut", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BlendProfileOut), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock_MetaData[] = {
		{ "Comment", "/** Root Bone will be locked to that position when extracting root motion. DEPRECATED in 4.5 root motion is controlled by anim sequences **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Root Bone will be locked to that position when extracting root motion. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock = { "RootMotionRootLock", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock_MetaData)) }; // 2118872410
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/** Preview Base pose for additive BlendSpace **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose = { "PreviewBasePose", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_Inner = { "BranchingPointMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBranchingPointMarker, METADATA_PARAMS(nullptr, 0) }; // 1346374840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_MetaData[] = {
		{ "Comment", "/** Cached list of Branching Point markers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Cached list of Branching Point markers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers = { "BranchingPointMarkers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BranchingPointMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_MetaData)) }; // 1346374840
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_Inner = { "BranchingPointStateNotifyIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_MetaData[] = {
		{ "Comment", "/** Keep track of which AnimNotify_State are marked as BranchingPoints, so we can update their state when the Montage is ticked */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Keep track of which AnimNotify_State are marked as BranchingPoints, so we can update their state when the Montage is ticked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices = { "BranchingPointStateNotifyIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, BranchingPointStateNotifyIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/** Time stretch curve will only be used when the montage has a non-default play rate  */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Time stretch curve will only be used when the montage has a non-default play rate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve = { "TimeStretchCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, TimeStretchCurve), Z_Construct_UScriptStruct_FTimeStretchCurve, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve_MetaData)) }; // 483823241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/** Name of optional TimeStretchCurveName to look for in Montage. Time stretch curve will only be used when the montage has a non-default play rate */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Name of optional TimeStretchCurveName to look for in Montage. Time stretch curve will only be used when the montage has a non-default play rate" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName = { "TimeStretchCurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimMontage, TimeStretchCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimMontage_Statics::ClassParams = {
		&UAnimMontage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimMontage()
	{
		if (!Z_Registration_Info_UClass_UAnimMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimMontage.OuterSingleton, Z_Construct_UClass_UAnimMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimMontage.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimMontage>()
	{
		return UAnimMontage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMontage);
	UAnimMontage::~UAnimMontage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::EnumInfo[] = {
		{ EAnimNotifyEventType_StaticEnum, TEXT("EAnimNotifyEventType"), &Z_Registration_Info_UEnum_EAnimNotifyEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1663578401U) },
		{ EMontageBlendMode_StaticEnum, TEXT("EMontageBlendMode"), &Z_Registration_Info_UEnum_EMontageBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 948517738U) },
		{ EMontageSubStepResult_StaticEnum, TEXT("EMontageSubStepResult"), &Z_Registration_Info_UEnum_EMontageSubStepResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1268584905U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ScriptStructInfo[] = {
		{ FCompositeSection::StaticStruct, Z_Construct_UScriptStruct_FCompositeSection_Statics::NewStructOps, TEXT("CompositeSection"), &Z_Registration_Info_UScriptStruct_CompositeSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositeSection), 2306930693U) },
		{ FSlotAnimationTrack::StaticStruct, Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewStructOps, TEXT("SlotAnimationTrack"), &Z_Registration_Info_UScriptStruct_SlotAnimationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotAnimationTrack), 2985159043U) },
		{ FBranchingPoint::StaticStruct, Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewStructOps, TEXT("BranchingPoint"), &Z_Registration_Info_UScriptStruct_BranchingPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBranchingPoint), 1421592732U) },
		{ FBranchingPointMarker::StaticStruct, Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewStructOps, TEXT("BranchingPointMarker"), &Z_Registration_Info_UScriptStruct_BranchingPointMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBranchingPointMarker), 1346374840U) },
		{ FMontageBlendSettings::StaticStruct, Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewStructOps, TEXT("MontageBlendSettings"), &Z_Registration_Info_UScriptStruct_MontageBlendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMontageBlendSettings), 1515019043U) },
		{ FAnimMontageInstance::StaticStruct, Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewStructOps, TEXT("AnimMontageInstance"), &Z_Registration_Info_UScriptStruct_AnimMontageInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimMontageInstance), 423667104U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimMontage, UAnimMontage::StaticClass, TEXT("UAnimMontage"), &Z_Registration_Info_UClass_UAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimMontage), 267789659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_3437401611(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
