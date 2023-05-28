// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMNotifications.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMNotifications() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UEnum* Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType();
	RIGVMDEVELOPER_API UFunction* Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMGraphNotifType;
	static UEnum* ERigVMGraphNotifType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMGraphNotifType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMGraphNotifType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("ERigVMGraphNotifType"));
		}
		return Z_Registration_Info_UEnum_ERigVMGraphNotifType.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UEnum* StaticEnum<ERigVMGraphNotifType>()
	{
		return ERigVMGraphNotifType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::Enumerators[] = {
		{ "ERigVMGraphNotifType::GraphChanged", (int64)ERigVMGraphNotifType::GraphChanged },
		{ "ERigVMGraphNotifType::NodeAdded", (int64)ERigVMGraphNotifType::NodeAdded },
		{ "ERigVMGraphNotifType::NodeRemoved", (int64)ERigVMGraphNotifType::NodeRemoved },
		{ "ERigVMGraphNotifType::NodeSelected", (int64)ERigVMGraphNotifType::NodeSelected },
		{ "ERigVMGraphNotifType::NodeDeselected", (int64)ERigVMGraphNotifType::NodeDeselected },
		{ "ERigVMGraphNotifType::NodeSelectionChanged", (int64)ERigVMGraphNotifType::NodeSelectionChanged },
		{ "ERigVMGraphNotifType::NodePositionChanged", (int64)ERigVMGraphNotifType::NodePositionChanged },
		{ "ERigVMGraphNotifType::NodeSizeChanged", (int64)ERigVMGraphNotifType::NodeSizeChanged },
		{ "ERigVMGraphNotifType::NodeColorChanged", (int64)ERigVMGraphNotifType::NodeColorChanged },
		{ "ERigVMGraphNotifType::PinAdded", (int64)ERigVMGraphNotifType::PinAdded },
		{ "ERigVMGraphNotifType::PinRemoved", (int64)ERigVMGraphNotifType::PinRemoved },
		{ "ERigVMGraphNotifType::PinRenamed", (int64)ERigVMGraphNotifType::PinRenamed },
		{ "ERigVMGraphNotifType::PinExpansionChanged", (int64)ERigVMGraphNotifType::PinExpansionChanged },
		{ "ERigVMGraphNotifType::PinWatchedChanged", (int64)ERigVMGraphNotifType::PinWatchedChanged },
		{ "ERigVMGraphNotifType::PinArraySizeChanged", (int64)ERigVMGraphNotifType::PinArraySizeChanged },
		{ "ERigVMGraphNotifType::PinDefaultValueChanged", (int64)ERigVMGraphNotifType::PinDefaultValueChanged },
		{ "ERigVMGraphNotifType::PinDirectionChanged", (int64)ERigVMGraphNotifType::PinDirectionChanged },
		{ "ERigVMGraphNotifType::PinTypeChanged", (int64)ERigVMGraphNotifType::PinTypeChanged },
		{ "ERigVMGraphNotifType::PinIndexChanged", (int64)ERigVMGraphNotifType::PinIndexChanged },
		{ "ERigVMGraphNotifType::LinkAdded", (int64)ERigVMGraphNotifType::LinkAdded },
		{ "ERigVMGraphNotifType::LinkRemoved", (int64)ERigVMGraphNotifType::LinkRemoved },
		{ "ERigVMGraphNotifType::CommentTextChanged", (int64)ERigVMGraphNotifType::CommentTextChanged },
		{ "ERigVMGraphNotifType::RerouteCompactnessChanged", (int64)ERigVMGraphNotifType::RerouteCompactnessChanged },
		{ "ERigVMGraphNotifType::VariableAdded", (int64)ERigVMGraphNotifType::VariableAdded },
		{ "ERigVMGraphNotifType::VariableRemoved", (int64)ERigVMGraphNotifType::VariableRemoved },
		{ "ERigVMGraphNotifType::VariableRenamed", (int64)ERigVMGraphNotifType::VariableRenamed },
		{ "ERigVMGraphNotifType::InteractionBracketOpened", (int64)ERigVMGraphNotifType::InteractionBracketOpened },
		{ "ERigVMGraphNotifType::InteractionBracketClosed", (int64)ERigVMGraphNotifType::InteractionBracketClosed },
		{ "ERigVMGraphNotifType::InteractionBracketCanceled", (int64)ERigVMGraphNotifType::InteractionBracketCanceled },
		{ "ERigVMGraphNotifType::PinBoundVariableChanged", (int64)ERigVMGraphNotifType::PinBoundVariableChanged },
		{ "ERigVMGraphNotifType::NodeRenamed", (int64)ERigVMGraphNotifType::NodeRenamed },
		{ "ERigVMGraphNotifType::NodeReferenceChanged", (int64)ERigVMGraphNotifType::NodeReferenceChanged },
		{ "ERigVMGraphNotifType::NodeCategoryChanged", (int64)ERigVMGraphNotifType::NodeCategoryChanged },
		{ "ERigVMGraphNotifType::NodeKeywordsChanged", (int64)ERigVMGraphNotifType::NodeKeywordsChanged },
		{ "ERigVMGraphNotifType::NodeDescriptionChanged", (int64)ERigVMGraphNotifType::NodeDescriptionChanged },
		{ "ERigVMGraphNotifType::VariableRemappingChanged", (int64)ERigVMGraphNotifType::VariableRemappingChanged },
		{ "ERigVMGraphNotifType::LibraryTemplateChanged", (int64)ERigVMGraphNotifType::LibraryTemplateChanged },
		{ "ERigVMGraphNotifType::FunctionAccessChanged", (int64)ERigVMGraphNotifType::FunctionAccessChanged },
		{ "ERigVMGraphNotifType::Invalid", (int64)ERigVMGraphNotifType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Graph Notification Type is used to differentiate\n * between all of the changes that can happen within a graph.\n */" },
		{ "CommentTextChanged.Comment", "// A link has been removed (Subject == URigVMLink)\n" },
		{ "CommentTextChanged.Name", "ERigVMGraphNotifType::CommentTextChanged" },
		{ "CommentTextChanged.ToolTip", "A link has been removed (Subject == URigVMLink)" },
		{ "FunctionAccessChanged.Comment", "// The definition of a library node's template has changed (Subject == URigVMLibraryNode)\n" },
		{ "FunctionAccessChanged.Name", "ERigVMGraphNotifType::FunctionAccessChanged" },
		{ "FunctionAccessChanged.ToolTip", "The definition of a library node's template has changed (Subject == URigVMLibraryNode)" },
		{ "GraphChanged.Name", "ERigVMGraphNotifType::GraphChanged" },
		{ "InteractionBracketCanceled.Comment", "// A bracket has been opened (Subject == nullptr)\n" },
		{ "InteractionBracketCanceled.Name", "ERigVMGraphNotifType::InteractionBracketCanceled" },
		{ "InteractionBracketCanceled.ToolTip", "A bracket has been opened (Subject == nullptr)" },
		{ "InteractionBracketClosed.Comment", "// A bracket has been opened (Subject == nullptr)\n" },
		{ "InteractionBracketClosed.Name", "ERigVMGraphNotifType::InteractionBracketClosed" },
		{ "InteractionBracketClosed.ToolTip", "A bracket has been opened (Subject == nullptr)" },
		{ "InteractionBracketOpened.Comment", "// A variable has been renamed (Subject == URigVMVariableNode)\n" },
		{ "InteractionBracketOpened.Name", "ERigVMGraphNotifType::InteractionBracketOpened" },
		{ "InteractionBracketOpened.ToolTip", "A variable has been renamed (Subject == URigVMVariableNode)" },
		{ "Invalid.Comment", "// The function has been made public/private (Subject == URigVMLibraryNode)\n" },
		{ "Invalid.Name", "ERigVMGraphNotifType::Invalid" },
		{ "Invalid.ToolTip", "The function has been made public/private (Subject == URigVMLibraryNode)" },
		{ "LibraryTemplateChanged.Comment", "// A function reference node's remapping has changed (Subject == URigVMFunctionReferenceNode)\n" },
		{ "LibraryTemplateChanged.Name", "ERigVMGraphNotifType::LibraryTemplateChanged" },
		{ "LibraryTemplateChanged.ToolTip", "A function reference node's remapping has changed (Subject == URigVMFunctionReferenceNode)" },
		{ "LinkAdded.Comment", "// A pin's index has changed (Subject == URigVMPin)\n" },
		{ "LinkAdded.Name", "ERigVMGraphNotifType::LinkAdded" },
		{ "LinkAdded.ToolTip", "A pin's index has changed (Subject == URigVMPin)" },
		{ "LinkRemoved.Comment", "// A link has been added (Subject == URigVMLink)\n" },
		{ "LinkRemoved.Name", "ERigVMGraphNotifType::LinkRemoved" },
		{ "LinkRemoved.ToolTip", "A link has been added (Subject == URigVMLink)" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNotifications.h" },
		{ "NodeAdded.Comment", "// The graph has changed / a new graph has been picked (Subject == nullptr)\n" },
		{ "NodeAdded.Name", "ERigVMGraphNotifType::NodeAdded" },
		{ "NodeAdded.ToolTip", "The graph has changed / a new graph has been picked (Subject == nullptr)" },
		{ "NodeCategoryChanged.Comment", "// A node has changed it's referenced function\n" },
		{ "NodeCategoryChanged.Name", "ERigVMGraphNotifType::NodeCategoryChanged" },
		{ "NodeCategoryChanged.ToolTip", "A node has changed it's referenced function" },
		{ "NodeColorChanged.Comment", "// A node's size has changed (Subject == URigVMNode)\n" },
		{ "NodeColorChanged.Name", "ERigVMGraphNotifType::NodeColorChanged" },
		{ "NodeColorChanged.ToolTip", "A node's size has changed (Subject == URigVMNode)" },
		{ "NodeDescriptionChanged.Comment", "// A node's keywords have changed (Subject == URigVMNode)\n" },
		{ "NodeDescriptionChanged.Name", "ERigVMGraphNotifType::NodeDescriptionChanged" },
		{ "NodeDescriptionChanged.ToolTip", "A node's keywords have changed (Subject == URigVMNode)" },
		{ "NodeDeselected.Comment", "// A node has been selected (Subject == URigVMNode)\n" },
		{ "NodeDeselected.Name", "ERigVMGraphNotifType::NodeDeselected" },
		{ "NodeDeselected.ToolTip", "A node has been selected (Subject == URigVMNode)" },
		{ "NodeKeywordsChanged.Comment", "// A node's category has changed (Subject == URigVMNode)\n" },
		{ "NodeKeywordsChanged.Name", "ERigVMGraphNotifType::NodeKeywordsChanged" },
		{ "NodeKeywordsChanged.ToolTip", "A node's category has changed (Subject == URigVMNode)" },
		{ "NodePositionChanged.Comment", "// The set of selected nodes has changed (Subject == nullptr)\n" },
		{ "NodePositionChanged.Name", "ERigVMGraphNotifType::NodePositionChanged" },
		{ "NodePositionChanged.ToolTip", "The set of selected nodes has changed (Subject == nullptr)" },
		{ "NodeReferenceChanged.Comment", "// A node has been renamed in the graph (Subject == URigVMNode)\n" },
		{ "NodeReferenceChanged.Name", "ERigVMGraphNotifType::NodeReferenceChanged" },
		{ "NodeReferenceChanged.ToolTip", "A node has been renamed in the graph (Subject == URigVMNode)" },
		{ "NodeRemoved.Comment", "// A node has been added to the graph (Subject == URigVMNode)\n" },
		{ "NodeRemoved.Name", "ERigVMGraphNotifType::NodeRemoved" },
		{ "NodeRemoved.ToolTip", "A node has been added to the graph (Subject == URigVMNode)" },
		{ "NodeRenamed.Comment", "// A pin has been bound or unbound to / from a variable (Subject == URigVMPin)\n" },
		{ "NodeRenamed.Name", "ERigVMGraphNotifType::NodeRenamed" },
		{ "NodeRenamed.ToolTip", "A pin has been bound or unbound to / from a variable (Subject == URigVMPin)" },
		{ "NodeSelected.Comment", "// A node has been removed from the graph (Subject == URigVMNode)\n" },
		{ "NodeSelected.Name", "ERigVMGraphNotifType::NodeSelected" },
		{ "NodeSelected.ToolTip", "A node has been removed from the graph (Subject == URigVMNode)" },
		{ "NodeSelectionChanged.Comment", "// A node has been deselected (Subject == URigVMNode)\n" },
		{ "NodeSelectionChanged.Name", "ERigVMGraphNotifType::NodeSelectionChanged" },
		{ "NodeSelectionChanged.ToolTip", "A node has been deselected (Subject == URigVMNode)" },
		{ "NodeSizeChanged.Comment", "// A node's position has changed (Subject == URigVMNode)\n" },
		{ "NodeSizeChanged.Name", "ERigVMGraphNotifType::NodeSizeChanged" },
		{ "NodeSizeChanged.ToolTip", "A node's position has changed (Subject == URigVMNode)" },
		{ "PinAdded.Comment", "// A node's color has changed (Subject == URigVMNode)\n" },
		{ "PinAdded.Name", "ERigVMGraphNotifType::PinAdded" },
		{ "PinAdded.ToolTip", "A node's color has changed (Subject == URigVMNode)" },
		{ "PinArraySizeChanged.Comment", "// A pin's watch state has changed (Subject == URigVMPin)\n" },
		{ "PinArraySizeChanged.Name", "ERigVMGraphNotifType::PinArraySizeChanged" },
		{ "PinArraySizeChanged.ToolTip", "A pin's watch state has changed (Subject == URigVMPin)" },
		{ "PinBoundVariableChanged.Comment", "// A bracket has been canceled (Subject == nullptr)\n" },
		{ "PinBoundVariableChanged.Name", "ERigVMGraphNotifType::PinBoundVariableChanged" },
		{ "PinBoundVariableChanged.ToolTip", "A bracket has been canceled (Subject == nullptr)" },
		{ "PinDefaultValueChanged.Comment", "// An array pin's size has changed (Subject == URigVMPin)\n" },
		{ "PinDefaultValueChanged.Name", "ERigVMGraphNotifType::PinDefaultValueChanged" },
		{ "PinDefaultValueChanged.ToolTip", "An array pin's size has changed (Subject == URigVMPin)" },
		{ "PinDirectionChanged.Comment", "// A pin's default value has changed (Subject == URigVMPin)\n" },
		{ "PinDirectionChanged.Name", "ERigVMGraphNotifType::PinDirectionChanged" },
		{ "PinDirectionChanged.ToolTip", "A pin's default value has changed (Subject == URigVMPin)" },
		{ "PinExpansionChanged.Comment", "// A pin has been renamed (Subject == URigVMPin)\n" },
		{ "PinExpansionChanged.Name", "ERigVMGraphNotifType::PinExpansionChanged" },
		{ "PinExpansionChanged.ToolTip", "A pin has been renamed (Subject == URigVMPin)" },
		{ "PinIndexChanged.Comment", "// A pin's data type has changed (Subject == URigVMPin)\n" },
		{ "PinIndexChanged.Name", "ERigVMGraphNotifType::PinIndexChanged" },
		{ "PinIndexChanged.ToolTip", "A pin's data type has changed (Subject == URigVMPin)" },
		{ "PinRemoved.Comment", "// A pin has been added to a given node (Subject == URigVMPin)\n" },
		{ "PinRemoved.Name", "ERigVMGraphNotifType::PinRemoved" },
		{ "PinRemoved.ToolTip", "A pin has been added to a given node (Subject == URigVMPin)" },
		{ "PinRenamed.Comment", "// A pin has been removed from a given node (Subject == URigVMPin)\n" },
		{ "PinRenamed.Name", "ERigVMGraphNotifType::PinRenamed" },
		{ "PinRenamed.ToolTip", "A pin has been removed from a given node (Subject == URigVMPin)" },
		{ "PinTypeChanged.Comment", "// A pin's direction has changed (Subject == URigVMPin)\n" },
		{ "PinTypeChanged.Name", "ERigVMGraphNotifType::PinTypeChanged" },
		{ "PinTypeChanged.ToolTip", "A pin's direction has changed (Subject == URigVMPin)" },
		{ "PinWatchedChanged.Comment", "// A pin's expansion state has changed(Subject == URigVMPin)\n" },
		{ "PinWatchedChanged.Name", "ERigVMGraphNotifType::PinWatchedChanged" },
		{ "PinWatchedChanged.ToolTip", "A pin's expansion state has changed(Subject == URigVMPin)" },
		{ "RerouteCompactnessChanged.Comment", "// A comment node's text has changed (Subject == URigVMCommentNode)\n" },
		{ "RerouteCompactnessChanged.Name", "ERigVMGraphNotifType::RerouteCompactnessChanged" },
		{ "RerouteCompactnessChanged.ToolTip", "A comment node's text has changed (Subject == URigVMCommentNode)" },
		{ "ToolTip", "The Graph Notification Type is used to differentiate\nbetween all of the changes that can happen within a graph." },
		{ "VariableAdded.Comment", "// A reroute node's compactness has changed (Subject == URigVMRerouteNode)\n" },
		{ "VariableAdded.Name", "ERigVMGraphNotifType::VariableAdded" },
		{ "VariableAdded.ToolTip", "A reroute node's compactness has changed (Subject == URigVMRerouteNode)" },
		{ "VariableRemappingChanged.Comment", "// A node's description has changed (Subject == URigVMNode)\n" },
		{ "VariableRemappingChanged.Name", "ERigVMGraphNotifType::VariableRemappingChanged" },
		{ "VariableRemappingChanged.ToolTip", "A node's description has changed (Subject == URigVMNode)" },
		{ "VariableRemoved.Comment", "// A variable has been added (Subject == URigVMVariableNode)\n" },
		{ "VariableRemoved.Name", "ERigVMGraphNotifType::VariableRemoved" },
		{ "VariableRemoved.ToolTip", "A variable has been added (Subject == URigVMVariableNode)" },
		{ "VariableRenamed.Comment", "// A variable has been removed (Subject == URigVMVariableNode)\n" },
		{ "VariableRenamed.Name", "ERigVMGraphNotifType::VariableRenamed" },
		{ "VariableRenamed.ToolTip", "A variable has been removed (Subject == URigVMVariableNode)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		"ERigVMGraphNotifType",
		"ERigVMGraphNotifType",
		Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMGraphNotifType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMGraphNotifType.InnerSingleton, Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMGraphNotifType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics
	{
		struct _Script_RigVMDeveloper_eventRigVMGraphModifiedDynamicEvent_Parms
		{
			ERigVMGraphNotifType NotifType;
			URigVMGraph* Graph;
			UObject* Subject;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotifType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType = { "NotifType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RigVMDeveloper_eventRigVMGraphModifiedDynamicEvent_Parms, NotifType), Z_Construct_UEnum_RigVMDeveloper_ERigVMGraphNotifType, METADATA_PARAMS(nullptr, 0) }; // 131164843
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RigVMDeveloper_eventRigVMGraphModifiedDynamicEvent_Parms, Graph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RigVMDeveloper_eventRigVMGraphModifiedDynamicEvent_Parms, Subject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Subject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// A dynamic delegate for subscribing / reacting to graph modifications (used for Python integration).\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNotifications.h" },
		{ "ToolTip", "A dynamic delegate for subscribing / reacting to graph modifications (used for Python integration)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RigVMDeveloper, nullptr, "RigVMGraphModifiedDynamicEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::_Script_RigVMDeveloper_eventRigVMGraphModifiedDynamicEvent_Parms), Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RigVMDeveloper_RigVMGraphModifiedDynamicEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRigVMGraphModifiedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& RigVMGraphModifiedDynamicEvent, ERigVMGraphNotifType NotifType, URigVMGraph* Graph, UObject* Subject)
{
	struct _Script_RigVMDeveloper_eventRigVMGraphModifiedDynamicEvent_Parms
	{
		ERigVMGraphNotifType NotifType;
		URigVMGraph* Graph;
		UObject* Subject;
	};
	_Script_RigVMDeveloper_eventRigVMGraphModifiedDynamicEvent_Parms Parms;
	Parms.NotifType=NotifType;
	Parms.Graph=Graph;
	Parms.Subject=Subject;
	RigVMGraphModifiedDynamicEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h_Statics::EnumInfo[] = {
		{ ERigVMGraphNotifType_StaticEnum, TEXT("ERigVMGraphNotifType"), &Z_Registration_Info_UEnum_ERigVMGraphNotifType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 131164843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h_1573924165(TEXT("/Script/RigVMDeveloper"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
