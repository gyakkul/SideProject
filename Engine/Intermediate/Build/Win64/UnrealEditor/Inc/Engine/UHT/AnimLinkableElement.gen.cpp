// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimLinkableElement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimLinkMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimLinkMethod;
	static UEnum* EAnimLinkMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimLinkMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimLinkMethod"));
		}
		return Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimLinkMethod::Type>()
	{
		return EAnimLinkMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::Enumerators[] = {
		{ "EAnimLinkMethod::Absolute", (int64)EAnimLinkMethod::Absolute },
		{ "EAnimLinkMethod::Relative", (int64)EAnimLinkMethod::Relative },
		{ "EAnimLinkMethod::Proportional", (int64)EAnimLinkMethod::Proportional },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "/** Element stays at a specific time without moving. */" },
		{ "Absolute.Name", "EAnimLinkMethod::Absolute" },
		{ "Absolute.ToolTip", "Element stays at a specific time without moving." },
		{ "Comment", "/** Supported types of time for a linked element */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "Proportional.Comment", "/** Element moves with its segment and will stay at a certain proportion through the segment. */" },
		{ "Proportional.Name", "EAnimLinkMethod::Proportional" },
		{ "Proportional.ToolTip", "Element moves with its segment and will stay at a certain proportion through the segment." },
		{ "Relative.Comment", "/** Element moves with its segment, but not when the segment changes size. */" },
		{ "Relative.Name", "EAnimLinkMethod::Relative" },
		{ "Relative.ToolTip", "Element moves with its segment, but not when the segment changes size." },
		{ "ToolTip", "Supported types of time for a linked element" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimLinkMethod",
		"EAnimLinkMethod::Type",
		Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimLinkMethod()
	{
		if (!Z_Registration_Info_UEnum_EAnimLinkMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimLinkMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimLinkMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimLinkableElement;
class UScriptStruct* FAnimLinkableElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLinkableElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimLinkableElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLinkableElement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimLinkableElement"));
	}
	return Z_Registration_Info_UScriptStruct_AnimLinkableElement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimLinkableElement>()
{
	return FAnimLinkableElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimLinkableElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinkedMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SegmentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLinkMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedLinkMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentBeginTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentBeginTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinkValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinkedSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to describe an element that can be linked to a segment in a montage or sequence.\n *\x09Usage: \n *\x09\x09Inherit from FAnimLinkableElement and make sure to call LinkMontage or LinkSequence\n *\x09\x09""both on creation and on loading the element. From there SetTime and GetTime should be\n *\x09\x09used to control where this element is in the montage or sequence.\n *\x09\n *\x09\x09""For more advanced usage, see this implementation used in FAnimNotifyEvent where\n *\x09\x09we have a secondary link to handle a duration\n *\x09\x09@see FAnimNotifyEvent\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "Used to describe an element that can be linked to a segment in a montage or sequence.\n   Usage:\n           Inherit from FAnimLinkableElement and make sure to call LinkMontage or LinkSequence\n           both on creation and on loading the element. From there SetTime and GetTime should be\n           used to control where this element is in the montage or sequence.\n\n           For more advanced usage, see this implementation used in FAnimNotifyEvent where\n           we have a secondary link to handle a duration\n           @see FAnimNotifyEvent" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLinkableElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedMontage_MetaData[] = {
		{ "Comment", "/** The montage that this element is currently linked to */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The montage that this element is currently linked to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedMontage = { "LinkedMontage", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "AnimLink" },
		{ "Comment", "/** The slot index we are currently using within LinkedMontage */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The slot index we are currently using within LinkedMontage" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SlotIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentIndex_MetaData[] = {
		{ "Comment", "/** The index of the segment we are linked to within the slot we are using */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The index of the segment we are linked to within the slot we are using" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentIndex = { "SegmentIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SegmentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkMethod_MetaData[] = {
		{ "Category", "AnimLink" },
		{ "Comment", "/** The method we are using to calculate our times */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The method we are using to calculate our times" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkMethod = { "LinkMethod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkMethod), Z_Construct_UEnum_Engine_EAnimLinkMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkMethod_MetaData)) }; // 1234428468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_CachedLinkMethod_MetaData[] = {
		{ "Comment", "/** Cached link method used to transform the time when LinkMethod changes, always relates to the currently stored time */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "Cached link method used to transform the time when LinkMethod changes, always relates to the currently stored time" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_CachedLinkMethod = { "CachedLinkMethod", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, CachedLinkMethod), Z_Construct_UEnum_Engine_EAnimLinkMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_CachedLinkMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_CachedLinkMethod_MetaData)) }; // 1234428468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentBeginTime_MetaData[] = {
		{ "Comment", "/** The absolute time in the montage that our currently linked segment begins */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The absolute time in the montage that our currently linked segment begins" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentBeginTime = { "SegmentBeginTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SegmentBeginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentBeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentBeginTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentLength_MetaData[] = {
		{ "Comment", "/** The absolute length of our currently linked segment */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The absolute length of our currently linked segment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkValue_MetaData[] = {
		{ "Comment", "/** The time of this montage. This will differ depending upon the method we are using to link the time for this element */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The time of this montage. This will differ depending upon the method we are using to link the time for this element" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkValue = { "LinkValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedSequence_MetaData[] = {
		{ "Category", "AnimLink" },
		{ "Comment", "/** \n\x09 * The Animation Sequence that this montage element will link to, when the sequence changes\n\x09 * in either length or rate; the element will correctly place itself in relation to the sequence\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
		{ "ToolTip", "The Animation Sequence that this montage element will link to, when the sequence changes\nin either length or rate; the element will correctly place itself in relation to the sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedSequence = { "LinkedSequence", nullptr, (EPropertyFlags)0x00240c0000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkedSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_CachedLinkMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentBeginTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_SegmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewProp_LinkedSequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimLinkableElement",
		sizeof(FAnimLinkableElement),
		alignof(FAnimLinkableElement),
		Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimLinkableElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimLinkableElement.InnerSingleton, Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimLinkableElement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_Statics::EnumInfo[] = {
		{ EAnimLinkMethod_StaticEnum, TEXT("EAnimLinkMethod"), &Z_Registration_Info_UEnum_EAnimLinkMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1234428468U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_Statics::ScriptStructInfo[] = {
		{ FAnimLinkableElement::StaticStruct, Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewStructOps, TEXT("AnimLinkableElement"), &Z_Registration_Info_UScriptStruct_AnimLinkableElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimLinkableElement), 293831235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_3533584892(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
