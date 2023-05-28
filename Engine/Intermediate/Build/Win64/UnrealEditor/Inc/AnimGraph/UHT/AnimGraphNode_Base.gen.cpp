// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_Base.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "K2Node.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_Base() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType();
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EBlueprintUsage();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintUsage;
	static UEnum* EBlueprintUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EBlueprintUsage, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EBlueprintUsage"));
		}
		return Z_Registration_Info_UEnum_EBlueprintUsage.OuterSingleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EBlueprintUsage>()
	{
		return EBlueprintUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::Enumerators[] = {
		{ "EBlueprintUsage::NoProperties", (int64)EBlueprintUsage::NoProperties },
		{ "EBlueprintUsage::DoesNotUseBlueprint", (int64)EBlueprintUsage::DoesNotUseBlueprint },
		{ "EBlueprintUsage::UsesBlueprint", (int64)EBlueprintUsage::UsesBlueprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::Enum_MetaDataParams[] = {
		{ "DoesNotUseBlueprint.Name", "EBlueprintUsage::DoesNotUseBlueprint" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "NoProperties.Name", "EBlueprintUsage::NoProperties" },
		{ "UsesBlueprint.Name", "EBlueprintUsage::UsesBlueprint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		"EBlueprintUsage",
		"EBlueprintUsage",
		Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraph_EBlueprintUsage()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintUsage.InnerSingleton, Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintUsage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType;
	static UEnum* EAnimGraphNodePropertyBindingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EAnimGraphNodePropertyBindingType"));
		}
		return Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType.OuterSingleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimGraphNodePropertyBindingType>()
	{
		return EAnimGraphNodePropertyBindingType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::Enumerators[] = {
		{ "EAnimGraphNodePropertyBindingType::None", (int64)EAnimGraphNodePropertyBindingType::None },
		{ "EAnimGraphNodePropertyBindingType::Property", (int64)EAnimGraphNodePropertyBindingType::Property },
		{ "EAnimGraphNodePropertyBindingType::Function", (int64)EAnimGraphNodePropertyBindingType::Function },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The type of a property binding */" },
		{ "Function.Name", "EAnimGraphNodePropertyBindingType::Function" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "None.Name", "EAnimGraphNodePropertyBindingType::None" },
		{ "Property.Name", "EAnimGraphNodePropertyBindingType::Property" },
		{ "ToolTip", "The type of a property binding" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		"EAnimGraphNodePropertyBindingType",
		"EAnimGraphNodePropertyBindingType",
		Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType()
	{
		if (!Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType.InnerSingleton, Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding;
class UScriptStruct* FAnimGraphNodePropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("AnimGraphNodePropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FAnimGraphNodePropertyBinding>()
{
	return FAnimGraphNodePropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromotedPinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PromotedPinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathAsText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PathAsText;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledContext_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CompiledContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledContextDesc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CompiledContextDesc;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBound_MetaData[];
#endif
		static void NewProp_bIsBound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPromotion_MetaData[];
#endif
		static void NewProp_bIsPromotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPromotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphNodePropertyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PinType_MetaData[] = {
		{ "Comment", "/** Pin type */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Pin type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PinType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PromotedPinType_MetaData[] = {
		{ "Comment", "/** Source type if the binding is a promotion */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Source type if the binding is a promotion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PromotedPinType = { "PromotedPinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, PromotedPinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PromotedPinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PromotedPinType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Property binding name */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Property binding name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PathAsText_MetaData[] = {
		{ "Comment", "/** The property path as text */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "The property path as text" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PathAsText = { "PathAsText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, PathAsText), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PathAsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PathAsText_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyPath_Inner = { "PropertyPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Comment", "/** The property path a pin is bound to */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "The property path a pin is bound to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, PropertyPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ContextId_MetaData[] = {
		{ "Comment", "/** The context of the binding */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "The context of the binding" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, ContextId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ContextId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ContextId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContext = { "CompiledContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, CompiledContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContextDesc_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContextDesc = { "CompiledContextDesc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, CompiledContextDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContextDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContextDesc_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Whether the binding is a function or not */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Whether the binding is a function or not" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphNodePropertyBinding, Type), Z_Construct_UEnum_AnimGraph_EAnimGraphNodePropertyBindingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_Type_MetaData)) }; // 676035284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsBound_MetaData[] = {
		{ "Comment", "/** Whether the pin is bound or not */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Whether the pin is bound or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsBound_SetBit(void* Obj)
	{
		((FAnimGraphNodePropertyBinding*)Obj)->bIsBound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsBound = { "bIsBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimGraphNodePropertyBinding), &Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsBound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsPromotion_MetaData[] = {
		{ "Comment", "/** Whether the pin binding is a promotion (e.g. bool->int) */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Whether the pin binding is a promotion (e.g. bool->int)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsPromotion_SetBit(void* Obj)
	{
		((FAnimGraphNodePropertyBinding*)Obj)->bIsPromotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsPromotion = { "bIsPromotion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimGraphNodePropertyBinding), &Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsPromotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsPromotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsPromotion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PromotedPinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PathAsText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_PropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_ContextId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_CompiledContextDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewProp_bIsPromotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		&NewStructOps,
		"AnimGraphNodePropertyBinding",
		sizeof(FAnimGraphNodePropertyBinding),
		alignof(FAnimGraphNodePropertyBinding),
		Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding.InnerSingleton;
	}
	void UAnimGraphNode_Base::StaticRegisterNativesUAnimGraphNode_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_Base);
	UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister()
	{
		return UAnimGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShowPinForProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowPinForProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowPinForProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyBindings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertyBindings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlwaysDynamicProperties_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysDynamicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AlwaysDynamicProperties;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintUsage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintUsage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlueprintUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialUpdateFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialUpdateFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BecomeRelevantFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BecomeRelevantFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * This is the base class for any animation graph nodes that generate or consume an animation pose in\n  * the animation blend graph.\n  *\n  * Any concrete implementations will be paired with a runtime graph node derived from FAnimNode_Base\n  */" },
		{ "IncludePath", "AnimGraphNode_Base.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "This is the base class for any animation graph nodes that generate or consume an animation pose in\nthe animation blend graph.\n\nAny concrete implementations will be paired with a runtime graph node derived from FAnimNode_Base" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_Inner = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) }; // 3358763809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, ShowPinForProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_MetaData)) }; // 3358763809
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings_ValueProp = { "PropertyBindings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding, METADATA_PARAMS(nullptr, 0) }; // 9874838
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings_Key_KeyProp = { "PropertyBindings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "Comment", "/** Map from property name->binding info */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Map from property name->binding info" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, PropertyBindings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings_MetaData)) }; // 9874838
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_AlwaysDynamicProperties_ElementProp = { "AlwaysDynamicProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_AlwaysDynamicProperties_MetaData[] = {
		{ "Comment", "/** Properties marked as always dynamic, so they can be set externally */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Properties marked as always dynamic, so they can be set externally" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_AlwaysDynamicProperties = { "AlwaysDynamicProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, AlwaysDynamicProperties), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_AlwaysDynamicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_AlwaysDynamicProperties_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage = { "BlueprintUsage", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, BlueprintUsage), Z_Construct_UEnum_AnimGraph_EBlueprintUsage, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_MetaData)) }; // 1321215638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_InitialUpdateFunction_MetaData[] = {
		{ "AllowFunctionLibraries", "" },
		{ "Category", "Functions" },
		{ "Comment", "// Function called before the node is updated for the first time\n" },
		{ "DisplayName", "On Initial Update" },
		{ "FunctionReference", "" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "PrototypeFunction", "/Script/AnimGraphRuntime.AnimExecutionContextLibrary.Prototype_ThreadSafeAnimUpdateCall" },
		{ "ToolTip", "Function called before the node is updated for the first time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_InitialUpdateFunction = { "InitialUpdateFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, InitialUpdateFunction), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_InitialUpdateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_InitialUpdateFunction_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BecomeRelevantFunction_MetaData[] = {
		{ "AllowFunctionLibraries", "" },
		{ "Category", "Functions" },
		{ "Comment", "// Function called when the node becomes relevant\n" },
		{ "DisplayName", "On Become Relevant" },
		{ "FunctionReference", "" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "PrototypeFunction", "/Script/AnimGraphRuntime.AnimExecutionContextLibrary.Prototype_ThreadSafeAnimUpdateCall" },
		{ "ToolTip", "Function called when the node becomes relevant" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BecomeRelevantFunction = { "BecomeRelevantFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, BecomeRelevantFunction), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BecomeRelevantFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BecomeRelevantFunction_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_UpdateFunction_MetaData[] = {
		{ "AllowFunctionLibraries", "" },
		{ "Category", "Functions" },
		{ "Comment", "// Function called when the node is updated\n" },
		{ "DisplayName", "On Update" },
		{ "FunctionReference", "" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "PrototypeFunction", "/Script/AnimGraphRuntime.AnimExecutionContextLibrary.Prototype_ThreadSafeAnimUpdateCall" },
		{ "ToolTip", "Function called when the node is updated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_UpdateFunction = { "UpdateFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, UpdateFunction), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_UpdateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_UpdateFunction_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Tag" },
		{ "Comment", "// Optional reference tag name. If this is set then this node can be referenced from elsewhere in this animation blueprint using an anim node reference\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Base.h" },
		{ "ToolTip", "Optional reference tag name. If this is set then this node can be referenced from elsewhere in this animation blueprint using an anim node reference" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Base, Tag), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_PropertyBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_AlwaysDynamicProperties_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_AlwaysDynamicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_InitialUpdateFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BecomeRelevantFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_UpdateFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_Tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::ClassParams = {
		&UAnimGraphNode_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_Base()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_Base.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_Base.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_Base>()
	{
		return UAnimGraphNode_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_Base);
	UAnimGraphNode_Base::~UAnimGraphNode_Base() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_Base)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::EnumInfo[] = {
		{ EBlueprintUsage_StaticEnum, TEXT("EBlueprintUsage"), &Z_Registration_Info_UEnum_EBlueprintUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1321215638U) },
		{ EAnimGraphNodePropertyBindingType_StaticEnum, TEXT("EAnimGraphNodePropertyBindingType"), &Z_Registration_Info_UEnum_EAnimGraphNodePropertyBindingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 676035284U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::ScriptStructInfo[] = {
		{ FAnimGraphNodePropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics::NewStructOps, TEXT("AnimGraphNodePropertyBinding"), &Z_Registration_Info_UScriptStruct_AnimGraphNodePropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGraphNodePropertyBinding), 9874838U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_Base, UAnimGraphNode_Base::StaticClass, TEXT("UAnimGraphNode_Base"), &Z_Registration_Info_UClass_UAnimGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_Base), 3497263952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_409162084(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
