// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECanCreateConnectionResponse();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphType;
	static UEnum* EGraphType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGraphType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGraphType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGraphType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGraphType"));
		}
		return Z_Registration_Info_UEnum_EGraphType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGraphType>()
	{
		return EGraphType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EGraphType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EGraphType_Statics::Enumerators[] = {
		{ "GT_Function", (int64)GT_Function },
		{ "GT_Ubergraph", (int64)GT_Ubergraph },
		{ "GT_Macro", (int64)GT_Macro },
		{ "GT_Animation", (int64)GT_Animation },
		{ "GT_StateMachine", (int64)GT_StateMachine },
		{ "GT_MAX", (int64)GT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EGraphType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Distinguishes between different graph types. Graphs can have different properties; for example: functions have one entry point, ubergraphs can have multiples. */" },
		{ "GT_Animation.Name", "GT_Animation" },
		{ "GT_Function.Name", "GT_Function" },
		{ "GT_Macro.Name", "GT_Macro" },
		{ "GT_MAX.Name", "GT_MAX" },
		{ "GT_StateMachine.Name", "GT_StateMachine" },
		{ "GT_Ubergraph.Name", "GT_Ubergraph" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "Distinguishes between different graph types. Graphs can have different properties; for example: functions have one entry point, ubergraphs can have multiples." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGraphType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EGraphType",
		"EGraphType",
		Z_Construct_UEnum_Engine_EGraphType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGraphType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EGraphType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGraphType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EGraphType()
	{
		if (!Z_Registration_Info_UEnum_EGraphType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphType.InnerSingleton, Z_Construct_UEnum_Engine_EGraphType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGraphType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECanCreateConnectionResponse;
	static UEnum* ECanCreateConnectionResponse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECanCreateConnectionResponse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECanCreateConnectionResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECanCreateConnectionResponse, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECanCreateConnectionResponse"));
		}
		return Z_Registration_Info_UEnum_ECanCreateConnectionResponse.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECanCreateConnectionResponse>()
	{
		return ECanCreateConnectionResponse_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::Enumerators[] = {
		{ "CONNECT_RESPONSE_MAKE", (int64)CONNECT_RESPONSE_MAKE },
		{ "CONNECT_RESPONSE_DISALLOW", (int64)CONNECT_RESPONSE_DISALLOW },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_A", (int64)CONNECT_RESPONSE_BREAK_OTHERS_A },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_B", (int64)CONNECT_RESPONSE_BREAK_OTHERS_B },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_AB", (int64)CONNECT_RESPONSE_BREAK_OTHERS_AB },
		{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE", (int64)CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE },
		{ "CONNECT_RESPONSE_MAKE_WITH_PROMOTION", (int64)CONNECT_RESPONSE_MAKE_WITH_PROMOTION },
		{ "CONNECT_RESPONSE_MAX", (int64)CONNECT_RESPONSE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** This is the type of response the graph editor should take when making a connection */" },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_A.Comment", "/** Break all existing connections on A and make the new connection (it's exclusive); display the message string as a warning/notice. */" },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_A.Name", "CONNECT_RESPONSE_BREAK_OTHERS_A" },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_A.ToolTip", "Break all existing connections on A and make the new connection (it's exclusive); display the message string as a warning/notice." },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_AB.Comment", "/** Break all existing connections on A and B, and make the new connection (it's exclusive); display the message string as a warning/notice. */" },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_AB.Name", "CONNECT_RESPONSE_BREAK_OTHERS_AB" },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_AB.ToolTip", "Break all existing connections on A and B, and make the new connection (it's exclusive); display the message string as a warning/notice." },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_B.Comment", "/** Break all existing connections on B and make the new connection (it's exclusive); display the message string as a warning/notice. */" },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_B.Name", "CONNECT_RESPONSE_BREAK_OTHERS_B" },
		{ "CONNECT_RESPONSE_BREAK_OTHERS_B.ToolTip", "Break all existing connections on B and make the new connection (it's exclusive); display the message string as a warning/notice." },
		{ "CONNECT_RESPONSE_DISALLOW.Comment", "/** Cannot make this connection; display the message string as an error. */" },
		{ "CONNECT_RESPONSE_DISALLOW.Name", "CONNECT_RESPONSE_DISALLOW" },
		{ "CONNECT_RESPONSE_DISALLOW.ToolTip", "Cannot make this connection; display the message string as an error." },
		{ "CONNECT_RESPONSE_MAKE.Comment", "/** Make the connection; there are no issues (message string is displayed if not empty). */" },
		{ "CONNECT_RESPONSE_MAKE.Name", "CONNECT_RESPONSE_MAKE" },
		{ "CONNECT_RESPONSE_MAKE.ToolTip", "Make the connection; there are no issues (message string is displayed if not empty)." },
		{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE.Comment", "/** Make the connection via an intermediate cast node, or some other conversion node. */" },
		{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE.Name", "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE" },
		{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE.ToolTip", "Make the connection via an intermediate cast node, or some other conversion node." },
		{ "CONNECT_RESPONSE_MAKE_WITH_PROMOTION.Comment", "/** Make the connection by promoting a lower type to a higher type. Ex: Connecting a Float -> Double, float should become a double */" },
		{ "CONNECT_RESPONSE_MAKE_WITH_PROMOTION.Name", "CONNECT_RESPONSE_MAKE_WITH_PROMOTION" },
		{ "CONNECT_RESPONSE_MAKE_WITH_PROMOTION.ToolTip", "Make the connection by promoting a lower type to a higher type. Ex: Connecting a Float -> Double, float should become a double" },
		{ "CONNECT_RESPONSE_MAX.Name", "CONNECT_RESPONSE_MAX" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This is the type of response the graph editor should take when making a connection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECanCreateConnectionResponse",
		"ECanCreateConnectionResponse",
		Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECanCreateConnectionResponse()
	{
		if (!Z_Registration_Info_UEnum_ECanCreateConnectionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECanCreateConnectionResponse.InnerSingleton, Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECanCreateConnectionResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction;
class UScriptStruct* FEdGraphSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphSchemaAction>()
{
	return FEdGraphSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MenuDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TooltipDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grouping_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Grouping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MenuDescriptionArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuDescriptionArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuDescriptionArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullSearchTitlesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullSearchTitlesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FullSearchTitlesArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullSearchKeywordsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullSearchKeywordsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FullSearchKeywordsArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullSearchCategoryArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullSearchCategoryArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FullSearchCategoryArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedMenuDescriptionArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedMenuDescriptionArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedMenuDescriptionArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchTitlesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchTitlesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchTitlesArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchKeywordsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchKeywordsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchKeywordsArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchCategoryArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchCategoryArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchCategoryArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure represents a context dependent action, with sufficient information for the schema to perform it. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This structure represents a context dependent action, with sufficient information for the schema to perform it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription_MetaData[] = {
		{ "Comment", "/** The menu text that should be displayed for this node in the creation menu. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "The menu text that should be displayed for this node in the creation menu." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription = { "MenuDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, MenuDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription_MetaData[] = {
		{ "Comment", "/** The tooltip text that should be displayed for this node in the creation menu. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "The tooltip text that should be displayed for this node in the creation menu." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription = { "TooltipDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, TooltipDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category_MetaData[] = {
		{ "Comment", "/** This is the UI centric category the action fits in (e.g., Functions, Variables). Use this instead of the NodeType.NodeCategory because multiple NodeCategories might visually belong together. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This is the UI centric category the action fits in (e.g., Functions, Variables). Use this instead of the NodeType.NodeCategory because multiple NodeCategories might visually belong together." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords_MetaData[] = {
		{ "Comment", "/** This is just an arbitrary dump of extra text that search will match on, in addition to the description and tooltip, e.g., Add might have the keyword Math. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This is just an arbitrary dump of extra text that search will match on, in addition to the description and tooltip, e.g., Add might have the keyword Math." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping_MetaData[] = {
		{ "Comment", "/** This is a priority number for overriding alphabetical order in the action list (higher value  == higher in the list). */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This is a priority number for overriding alphabetical order in the action list (higher value  == higher in the list)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping = { "Grouping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Grouping), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID_MetaData[] = {
		{ "Comment", "/** Section ID of the action list in which this action belongs. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "Section ID of the action list in which this action belongs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, SectionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_Inner = { "MenuDescriptionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray = { "MenuDescriptionArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, MenuDescriptionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_Inner = { "FullSearchTitlesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray = { "FullSearchTitlesArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchTitlesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_Inner = { "FullSearchKeywordsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray = { "FullSearchKeywordsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchKeywordsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_Inner = { "FullSearchCategoryArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray = { "FullSearchCategoryArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchCategoryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_Inner = { "LocalizedMenuDescriptionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray = { "LocalizedMenuDescriptionArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedMenuDescriptionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_Inner = { "LocalizedFullSearchTitlesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray = { "LocalizedFullSearchTitlesArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchTitlesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_Inner = { "LocalizedFullSearchKeywordsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray = { "LocalizedFullSearchKeywordsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchKeywordsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_Inner = { "LocalizedFullSearchCategoryArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray = { "LocalizedFullSearchCategoryArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchCategoryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, SearchText), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EdGraphSchemaAction",
		sizeof(FEdGraphSchemaAction),
		alignof(FEdGraphSchemaAction),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode;
class UScriptStruct* FEdGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_NewNode>()
{
	return FEdGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_NewNode",
		sizeof(FEdGraphSchemaAction_NewNode),
		alignof(FEdGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode.InnerSingleton;
	}
	void UEdGraphSchema::StaticRegisterNativesUEdGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema);
	UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister()
	{
		return UEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_Statics::ClassParams = {
		&UEdGraphSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEdGraphSchema>()
	{
		return UEdGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema);
	UEdGraphSchema::~UEdGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::EnumInfo[] = {
		{ EGraphType_StaticEnum, TEXT("EGraphType"), &Z_Registration_Info_UEnum_EGraphType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 443013784U) },
		{ ECanCreateConnectionResponse_StaticEnum, TEXT("ECanCreateConnectionResponse"), &Z_Registration_Info_UEnum_ECanCreateConnectionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1259413315U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FEdGraphSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewStructOps, TEXT("EdGraphSchemaAction"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction), 3808951167U) },
		{ FEdGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("EdGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_NewNode), 2765730668U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema, UEdGraphSchema::StaticClass, TEXT("UEdGraphSchema"), &Z_Registration_Info_UClass_UEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema), 2701127456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_1818846255(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
