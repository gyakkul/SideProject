// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hierarchies/ModifierHierarchyRules.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierHierarchyRules() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierHierarchyRules();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierHierarchyRules_NoRegister();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FVCamModifierConnectionBinding();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding;
class UScriptStruct* FVCamModifierConnectionBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding, (UObject*)Z_Construct_UPackage__Script_VCamExtensions(), TEXT("VCamModifierConnectionBinding"));
	}
	return Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding.OuterSingleton;
}
template<> VCAMEXTENSIONS_API UScriptStruct* StaticStruct<FVCamModifierConnectionBinding>()
{
	return FVCamModifierConnectionBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamModifierConnectionBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_Modifier_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamModifierConnectionBinding, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_Modifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_ConnectionPoint_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_ConnectionPoint = { "ConnectionPoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamModifierConnectionBinding, ConnectionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_ConnectionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_ConnectionPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewProp_ConnectionPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
		nullptr,
		&NewStructOps,
		"VCamModifierConnectionBinding",
		sizeof(FVCamModifierConnectionBinding),
		alignof(FVCamModifierConnectionBinding),
		Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamModifierConnectionBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding.InnerSingleton, Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding.InnerSingleton;
	}
	DEFINE_FUNCTION(UModifierHierarchyRules::execGetNodesContainingModifier)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetNodesContainingModifier_Implementation(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyRules::execGetConnectionPointTargetForNode)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_GET_OBJECT(UVCamComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FVCamModifierConnectionBinding,Z_Param_Out_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetConnectionPointTargetForNode_Implementation(Z_Param_GroupName,Z_Param_Component,Z_Param_Out_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyRules::execGetModifierInNode)
	{
		P_GET_OBJECT(UVCamComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_NodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamModifier**)Z_Param__Result=P_THIS->GetModifierInNode_Implementation(Z_Param_Component,Z_Param_NodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyRules::execGetChildNodes)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetChildNodes_Implementation(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyRules::execGetParentNode)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChildNode);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetParentNode_Implementation(Z_Param_ChildNode,Z_Param_Out_ParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyRules::execGetRootNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRootNode_Implementation();
		P_NATIVE_END;
	}
	struct ModifierHierarchyRules_eventGetChildNodes_Parms
	{
		FName Node;
		TSet<FName> ReturnValue;
	};
	struct ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms
	{
		FName GroupName;
		UVCamComponent* Component;
		FVCamModifierConnectionBinding Connection;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ModifierHierarchyRules_eventGetModifierInNode_Parms
	{
		UVCamComponent* Component;
		FName NodeName;
		UVCamModifier* ReturnValue;

		/** Constructor, initializes return property only **/
		ModifierHierarchyRules_eventGetModifierInNode_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct ModifierHierarchyRules_eventGetNodesContainingModifier_Parms
	{
		UVCamModifier* Modifier;
		TSet<FName> ReturnValue;
	};
	struct ModifierHierarchyRules_eventGetParentNode_Parms
	{
		FName ChildNode;
		FName ParentNode;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ModifierHierarchyRules_eventGetParentNode_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ModifierHierarchyRules_eventGetRootNode_Parms
	{
		FName ReturnValue;
	};
	static FName NAME_UModifierHierarchyRules_GetChildNodes = FName(TEXT("GetChildNodes"));
	TSet<FName> UModifierHierarchyRules::GetChildNodes(FName Node) const
	{
		ModifierHierarchyRules_eventGetChildNodes_Parms Parms;
		Parms.Node=Node;
		const_cast<UModifierHierarchyRules*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierHierarchyRules_GetChildNodes),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UModifierHierarchyRules_GetConnectionPointTargetForNode = FName(TEXT("GetConnectionPointTargetForNode"));
	bool UModifierHierarchyRules::GetConnectionPointTargetForNode(FName GroupName, UVCamComponent* Component, FVCamModifierConnectionBinding& Connection) const
	{
		ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms Parms;
		Parms.GroupName=GroupName;
		Parms.Component=Component;
		Parms.Connection=Connection;
		const_cast<UModifierHierarchyRules*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierHierarchyRules_GetConnectionPointTargetForNode),&Parms);
		Connection=Parms.Connection;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UModifierHierarchyRules_GetModifierInNode = FName(TEXT("GetModifierInNode"));
	UVCamModifier* UModifierHierarchyRules::GetModifierInNode(UVCamComponent* Component, FName NodeName) const
	{
		ModifierHierarchyRules_eventGetModifierInNode_Parms Parms;
		Parms.Component=Component;
		Parms.NodeName=NodeName;
		const_cast<UModifierHierarchyRules*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierHierarchyRules_GetModifierInNode),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UModifierHierarchyRules_GetNodesContainingModifier = FName(TEXT("GetNodesContainingModifier"));
	TSet<FName> UModifierHierarchyRules::GetNodesContainingModifier(UVCamModifier* Modifier) const
	{
		ModifierHierarchyRules_eventGetNodesContainingModifier_Parms Parms;
		Parms.Modifier=Modifier;
		const_cast<UModifierHierarchyRules*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierHierarchyRules_GetNodesContainingModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UModifierHierarchyRules_GetParentNode = FName(TEXT("GetParentNode"));
	bool UModifierHierarchyRules::GetParentNode(FName ChildNode, FName& ParentNode) const
	{
		ModifierHierarchyRules_eventGetParentNode_Parms Parms;
		Parms.ChildNode=ChildNode;
		Parms.ParentNode=ParentNode;
		const_cast<UModifierHierarchyRules*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierHierarchyRules_GetParentNode),&Parms);
		ParentNode=Parms.ParentNode;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UModifierHierarchyRules_GetRootNode = FName(TEXT("GetRootNode"));
	FName UModifierHierarchyRules::GetRootNode() const
	{
		ModifierHierarchyRules_eventGetRootNode_Parms Parms;
		const_cast<UModifierHierarchyRules*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModifierHierarchyRules_GetRootNode),&Parms);
		return Parms.ReturnValue;
	}
	void UModifierHierarchyRules::StaticRegisterNativesUModifierHierarchyRules()
	{
		UClass* Class = UModifierHierarchyRules::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChildNodes", &UModifierHierarchyRules::execGetChildNodes },
			{ "GetConnectionPointTargetForNode", &UModifierHierarchyRules::execGetConnectionPointTargetForNode },
			{ "GetModifierInNode", &UModifierHierarchyRules::execGetModifierInNode },
			{ "GetNodesContainingModifier", &UModifierHierarchyRules::execGetNodesContainingModifier },
			{ "GetParentNode", &UModifierHierarchyRules::execGetParentNode },
			{ "GetRootNode", &UModifierHierarchyRules::execGetRootNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_Node;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetChildNodes_Parms, Node), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetChildNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets the child groups of the given group. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
		{ "ToolTip", "Gets the child groups of the given group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyRules, nullptr, "GetChildNodes", nullptr, nullptr, sizeof(ModifierHierarchyRules_eventGetChildNodes_Parms), Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms, Component), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms, Connection), Z_Construct_UScriptStruct_FVCamModifierConnectionBinding, METADATA_PARAMS(nullptr, 0) }; // 2632857393
	void Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms), &Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/**\n\x09 * Gets the connection point the modifier is configured to be bound to, if any.\n\x09 * This function is optional to implement; it is valid for it to always return false.\n\x09 * @return Whether there is a connection point configured for this hierarchy node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
		{ "ToolTip", "Gets the connection point the modifier is configured to be bound to, if any.\nThis function is optional to implement; it is valid for it to always return false.\n@return Whether there is a connection point configured for this hierarchy node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyRules, nullptr, "GetConnectionPointTargetForNode", nullptr, nullptr, sizeof(ModifierHierarchyRules_eventGetConnectionPointTargetForNode_Parms), Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetModifierInNode_Parms, Component), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetModifierInNode_Parms, NodeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetModifierInNode_Parms, ReturnValue), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets all the modifiers on the component that belong in the given group. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
		{ "ToolTip", "Gets all the modifiers on the component that belong in the given group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyRules, nullptr, "GetModifierInNode", nullptr, nullptr, sizeof(ModifierHierarchyRules_eventGetModifierInNode_Parms), Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetNodesContainingModifier_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetNodesContainingModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Utility function to get all groups which contain this modifier. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
		{ "ToolTip", "Utility function to get all groups which contain this modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyRules, nullptr, "GetNodesContainingModifier", nullptr, nullptr, sizeof(ModifierHierarchyRules_eventGetNodesContainingModifier_Parms), Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildNode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetParentNode_Parms, ChildNode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetParentNode_Parms, ParentNode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierHierarchyRules_eventGetParentNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ModifierHierarchyRules_eventGetParentNode_Parms), &Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ChildNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ParentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets the parent of this given group. Fails if called on the root node. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
		{ "ToolTip", "Gets the parent of this given group. Fails if called on the root node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyRules, nullptr, "GetParentNode", nullptr, nullptr, sizeof(ModifierHierarchyRules_eventGetParentNode_Parms), Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyRules_eventGetRootNode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets the root of the tree. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
		{ "ToolTip", "Gets the root of the tree." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyRules, nullptr, "GetRootNode", nullptr, nullptr, sizeof(ModifierHierarchyRules_eventGetRootNode_Parms), Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierHierarchyRules);
	UClass* Z_Construct_UClass_UModifierHierarchyRules_NoRegister()
	{
		return UModifierHierarchyRules::StaticClass();
	}
	struct Z_Construct_UClass_UModifierHierarchyRules_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierHierarchyRules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifierHierarchyRules_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifierHierarchyRules_GetChildNodes, "GetChildNodes" }, // 103585067
		{ &Z_Construct_UFunction_UModifierHierarchyRules_GetConnectionPointTargetForNode, "GetConnectionPointTargetForNode" }, // 3325839489
		{ &Z_Construct_UFunction_UModifierHierarchyRules_GetModifierInNode, "GetModifierInNode" }, // 2294086496
		{ &Z_Construct_UFunction_UModifierHierarchyRules_GetNodesContainingModifier, "GetNodesContainingModifier" }, // 302523253
		{ &Z_Construct_UFunction_UModifierHierarchyRules_GetParentNode, "GetParentNode" }, // 3631115690
		{ &Z_Construct_UFunction_UModifierHierarchyRules_GetRootNode, "GetRootNode" }, // 1503024797
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierHierarchyRules_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a tree hierarchy. Each node is called a group.\n * A group consists of connections and (sub) groups. A connection is a modifier and a corresponding connection point.\n * \n * An example use case is if you want to have a button menu which should procedurally generate sub-button menus depending\n * on the modifiers in the component. \n * One group could be a Lens group which groups together modifiers that e.g. modify focal distance, filmback, and FOV.\n * The rules are defined generically enough so as modifiers are added or removed, the groupings also update accordingly.\n */" },
		{ "IncludePath", "Hierarchies/ModifierHierarchyRules.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyRules.h" },
		{ "ToolTip", "Defines a tree hierarchy. Each node is called a group.\nA group consists of connections and (sub) groups. A connection is a modifier and a corresponding connection point.\n\nAn example use case is if you want to have a button menu which should procedurally generate sub-button menus depending\non the modifiers in the component.\nOne group could be a Lens group which groups together modifiers that e.g. modify focal distance, filmback, and FOV.\nThe rules are defined generically enough so as modifiers are added or removed, the groupings also update accordingly." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierHierarchyRules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierHierarchyRules>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierHierarchyRules_Statics::ClassParams = {
		&UModifierHierarchyRules::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UModifierHierarchyRules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierHierarchyRules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierHierarchyRules()
	{
		if (!Z_Registration_Info_UClass_UModifierHierarchyRules.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierHierarchyRules.OuterSingleton, Z_Construct_UClass_UModifierHierarchyRules_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModifierHierarchyRules.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UModifierHierarchyRules>()
	{
		return UModifierHierarchyRules::StaticClass();
	}
	UModifierHierarchyRules::UModifierHierarchyRules(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierHierarchyRules);
	UModifierHierarchyRules::~UModifierHierarchyRules() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_Statics::ScriptStructInfo[] = {
		{ FVCamModifierConnectionBinding::StaticStruct, Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics::NewStructOps, TEXT("VCamModifierConnectionBinding"), &Z_Registration_Info_UScriptStruct_VCamModifierConnectionBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamModifierConnectionBinding), 2632857393U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModifierHierarchyRules, UModifierHierarchyRules::StaticClass, TEXT("UModifierHierarchyRules"), &Z_Registration_Info_UClass_UModifierHierarchyRules, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierHierarchyRules), 3571801905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_323093523(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
