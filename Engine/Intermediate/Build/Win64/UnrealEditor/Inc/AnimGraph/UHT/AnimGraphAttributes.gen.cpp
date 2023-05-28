// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphAttributes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphAttributes() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphAttributes();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphAttributes_NoRegister();
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend();
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphAttributeDesc();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode;
	static UEnum* EAnimGraphAttributesDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EAnimGraphAttributesDisplayMode"));
		}
		return Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode.OuterSingleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimGraphAttributesDisplayMode>()
	{
		return EAnimGraphAttributesDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::Enumerators[] = {
		{ "EAnimGraphAttributesDisplayMode::HideOnPins", (int64)EAnimGraphAttributesDisplayMode::HideOnPins },
		{ "EAnimGraphAttributesDisplayMode::ShowOnPins", (int64)EAnimGraphAttributesDisplayMode::ShowOnPins },
		{ "EAnimGraphAttributesDisplayMode::Automatic", (int64)EAnimGraphAttributesDisplayMode::Automatic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "Automatic.Comment", "// Automatically calculate visibility based on graph connectivity/usage\n" },
		{ "Automatic.Name", "EAnimGraphAttributesDisplayMode::Automatic" },
		{ "Automatic.ToolTip", "Automatically calculate visibility based on graph connectivity/usage" },
		{ "HideOnPins.Comment", "// Always hide on pins\n" },
		{ "HideOnPins.Name", "EAnimGraphAttributesDisplayMode::HideOnPins" },
		{ "HideOnPins.ToolTip", "Always hide on pins" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
		{ "ShowOnPins.Comment", "// Always show on pins\n" },
		{ "ShowOnPins.Name", "EAnimGraphAttributesDisplayMode::ShowOnPins" },
		{ "ShowOnPins.ToolTip", "Always show on pins" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		"EAnimGraphAttributesDisplayMode",
		"EAnimGraphAttributesDisplayMode",
		Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode.InnerSingleton, Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimGraphAttributeBlend;
	static UEnum* EAnimGraphAttributeBlend_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimGraphAttributeBlend.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimGraphAttributeBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EAnimGraphAttributeBlend"));
		}
		return Z_Registration_Info_UEnum_EAnimGraphAttributeBlend.OuterSingleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimGraphAttributeBlend>()
	{
		return EAnimGraphAttributeBlend_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::Enumerators[] = {
		{ "EAnimGraphAttributeBlend::Blendable", (int64)EAnimGraphAttributeBlend::Blendable },
		{ "EAnimGraphAttributeBlend::NonBlendable", (int64)EAnimGraphAttributeBlend::NonBlendable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::Enum_MetaDataParams[] = {
		{ "Blendable.Comment", "// Attribute is subject to weighted blends as it flows through the graph\n" },
		{ "Blendable.Name", "EAnimGraphAttributeBlend::Blendable" },
		{ "Blendable.ToolTip", "Attribute is subject to weighted blends as it flows through the graph" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
		{ "NonBlendable.Comment", "// Attribute is not blended. Corresponds to messaging between two nodes that are not necessarily directly connected.\n" },
		{ "NonBlendable.Name", "EAnimGraphAttributeBlend::NonBlendable" },
		{ "NonBlendable.ToolTip", "Attribute is not blended. Corresponds to messaging between two nodes that are not necessarily directly connected." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		"EAnimGraphAttributeBlend",
		"EAnimGraphAttributeBlend",
		Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend()
	{
		if (!Z_Registration_Info_UEnum_EAnimGraphAttributeBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimGraphAttributeBlend.InnerSingleton, Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimGraphAttributeBlend.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc;
class UScriptStruct* FAnimGraphAttributeDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("AnimGraphAttributeDesc"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FAnimGraphAttributeDesc>()
{
	return FAnimGraphAttributeDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTipText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DisplayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Blend_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Description of an attribute\n" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
		{ "ToolTip", "Description of an attribute" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphAttributeDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Icon_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Icon_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_ToolTipText_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_ToolTipText = { "ToolTipText", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, ToolTipText), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_ToolTipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_ToolTipText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, Color), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Color_MetaData)) }; // 3007839000
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayMode_MetaData[] = {
		{ "Comment", "// How the attribute is displayed in the graph. This overrides any settings per node type.\n" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
		{ "ToolTip", "How the attribute is displayed in the graph. This overrides any settings per node type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, DisplayMode), Z_Construct_UEnum_AnimGraph_EAnimGraphAttributesDisplayMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayMode_MetaData)) }; // 4204779332
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Blend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Blend_MetaData[] = {
		{ "Comment", "// Blendability of the attribute\n" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
		{ "ToolTip", "Blendability of the attribute" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, Blend), Z_Construct_UEnum_AnimGraph_EAnimGraphAttributeBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Blend_MetaData)) }; // 80789050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Comment", "// How to sort the attribute\n" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
		{ "ToolTip", "How to sort the attribute" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphAttributeDesc, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_SortOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_ToolTipText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_DisplayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Blend_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewProp_SortOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		&NewStructOps,
		"AnimGraphAttributeDesc",
		sizeof(FAnimGraphAttributeDesc),
		alignof(FAnimGraphAttributeDesc),
		Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphAttributeDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc.InnerSingleton, Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc.InnerSingleton;
	}
	void UAnimGraphAttributes::StaticRegisterNativesUAnimGraphAttributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphAttributes);
	UClass* Z_Construct_UClass_UAnimGraphAttributes_NoRegister()
	{
		return UAnimGraphAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphAttributes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphAttributes.h" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimGraphAttributeDesc, METADATA_PARAMS(nullptr, 0) }; // 3716000679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "Comment", "// All attributes\n" },
		{ "ModuleRelativePath", "Public/AnimGraphAttributes.h" },
		{ "ToolTip", "All attributes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphAttributes, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphAttributes_Statics::NewProp_Attributes_MetaData)) }; // 3716000679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphAttributes_Statics::NewProp_Attributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphAttributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphAttributes_Statics::ClassParams = {
		&UAnimGraphAttributes::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphAttributes_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphAttributes()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphAttributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphAttributes.OuterSingleton, Z_Construct_UClass_UAnimGraphAttributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphAttributes.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphAttributes>()
	{
		return UAnimGraphAttributes::StaticClass();
	}
	UAnimGraphAttributes::UAnimGraphAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphAttributes);
	UAnimGraphAttributes::~UAnimGraphAttributes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::EnumInfo[] = {
		{ EAnimGraphAttributesDisplayMode_StaticEnum, TEXT("EAnimGraphAttributesDisplayMode"), &Z_Registration_Info_UEnum_EAnimGraphAttributesDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4204779332U) },
		{ EAnimGraphAttributeBlend_StaticEnum, TEXT("EAnimGraphAttributeBlend"), &Z_Registration_Info_UEnum_EAnimGraphAttributeBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 80789050U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::ScriptStructInfo[] = {
		{ FAnimGraphAttributeDesc::StaticStruct, Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics::NewStructOps, TEXT("AnimGraphAttributeDesc"), &Z_Registration_Info_UScriptStruct_AnimGraphAttributeDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGraphAttributeDesc), 3716000679U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphAttributes, UAnimGraphAttributes::StaticClass, TEXT("UAnimGraphAttributes"), &Z_Registration_Info_UClass_UAnimGraphAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphAttributes), 3924367348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_2396262504(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
