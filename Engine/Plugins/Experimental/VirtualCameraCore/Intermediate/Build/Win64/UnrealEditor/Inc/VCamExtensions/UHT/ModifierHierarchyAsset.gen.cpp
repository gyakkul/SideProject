// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hierarchies/ModifierHierarchyAsset.h"
#include "Hierarchies/ModifierHierarchyRules.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierHierarchyAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierHierarchyAsset();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierHierarchyAsset_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierHierarchyRules_NoRegister();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FVCamModifierConnectionBinding();
// End Cross Module References
	DEFINE_FUNCTION(UModifierHierarchyAsset::execGetGroupsContainingModifier)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetGroupsContainingModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyAsset::execGetConnectionPointTargetForNode)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_GET_OBJECT(UVCamComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FVCamModifierConnectionBinding,Z_Param_Out_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetConnectionPointTargetForNode(Z_Param_GroupName,Z_Param_Component,Z_Param_Out_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyAsset::execGetModifierInNode)
	{
		P_GET_OBJECT(UVCamComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamModifier**)Z_Param__Result=P_THIS->GetModifierInNode(Z_Param_Component,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyAsset::execGetChildNodes)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetChildNodes(Z_Param_ParentGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyAsset::execGetParentNode)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChildNode);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetParentNode(Z_Param_ChildNode,Z_Param_Out_ParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierHierarchyAsset::execGetRootNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRootNode();
		P_NATIVE_END;
	}
	void UModifierHierarchyAsset::StaticRegisterNativesUModifierHierarchyAsset()
	{
		UClass* Class = UModifierHierarchyAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChildNodes", &UModifierHierarchyAsset::execGetChildNodes },
			{ "GetConnectionPointTargetForNode", &UModifierHierarchyAsset::execGetConnectionPointTargetForNode },
			{ "GetGroupsContainingModifier", &UModifierHierarchyAsset::execGetGroupsContainingModifier },
			{ "GetModifierInNode", &UModifierHierarchyAsset::execGetModifierInNode },
			{ "GetParentNode", &UModifierHierarchyAsset::execGetParentNode },
			{ "GetRootNode", &UModifierHierarchyAsset::execGetRootNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics
	{
		struct ModifierHierarchyAsset_eventGetChildNodes_Parms
		{
			FName ParentGroup;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::NewProp_ParentGroup = { "ParentGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetChildNodes_Parms, ParentGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetChildNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::NewProp_ParentGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets the child groups of the given group. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
		{ "ToolTip", "Gets the child groups of the given group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyAsset, nullptr, "GetChildNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::ModifierHierarchyAsset_eventGetChildNodes_Parms), Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics
	{
		struct ModifierHierarchyAsset_eventGetConnectionPointTargetForNode_Parms
		{
			FName GroupName;
			UVCamComponent* Component;
			FVCamModifierConnectionBinding Connection;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetConnectionPointTargetForNode_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetConnectionPointTargetForNode_Parms, Component), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetConnectionPointTargetForNode_Parms, Connection), Z_Construct_UScriptStruct_FVCamModifierConnectionBinding, METADATA_PARAMS(nullptr, 0) }; // 2632857393
	void Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierHierarchyAsset_eventGetConnectionPointTargetForNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ModifierHierarchyAsset_eventGetConnectionPointTargetForNode_Parms), &Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/**\n\x09 * Gets the connection point the modifier is configured to be bound to.\n\x09 * This function is optional to implement; it is valid for it to always return false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
		{ "ToolTip", "Gets the connection point the modifier is configured to be bound to.\nThis function is optional to implement; it is valid for it to always return false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyAsset, nullptr, "GetConnectionPointTargetForNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::ModifierHierarchyAsset_eventGetConnectionPointTargetForNode_Parms), Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics
	{
		struct ModifierHierarchyAsset_eventGetGroupsContainingModifier_Parms
		{
			UVCamModifier* Modifier;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetGroupsContainingModifier_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetGroupsContainingModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Utility function to get all groups which contain this modifier. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
		{ "ToolTip", "Utility function to get all groups which contain this modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyAsset, nullptr, "GetGroupsContainingModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::ModifierHierarchyAsset_eventGetGroupsContainingModifier_Parms), Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics
	{
		struct ModifierHierarchyAsset_eventGetModifierInNode_Parms
		{
			UVCamComponent* Component;
			FName GroupName;
			UVCamModifier* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetModifierInNode_Parms, Component), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetModifierInNode_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetModifierInNode_Parms, ReturnValue), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets all the modifiers on the component that belong in the given group. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
		{ "ToolTip", "Gets all the modifiers on the component that belong in the given group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyAsset, nullptr, "GetModifierInNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::ModifierHierarchyAsset_eventGetModifierInNode_Parms), Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics
	{
		struct ModifierHierarchyAsset_eventGetParentNode_Parms
		{
			FName ChildNode;
			FName ParentNode;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetParentNode_Parms, ChildNode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetParentNode_Parms, ParentNode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierHierarchyAsset_eventGetParentNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ModifierHierarchyAsset_eventGetParentNode_Parms), &Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ChildNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ParentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets the parent of this given group. Fails if called on the root node. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
		{ "ToolTip", "Gets the parent of this given group. Fails if called on the root node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyAsset, nullptr, "GetParentNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::ModifierHierarchyAsset_eventGetParentNode_Parms), Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics
	{
		struct ModifierHierarchyAsset_eventGetRootNode_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModifierHierarchyAsset_eventGetRootNode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Hierarchies" },
		{ "Comment", "/** Gets the root of the tree. */" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
		{ "ToolTip", "Gets the root of the tree." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierHierarchyAsset, nullptr, "GetRootNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::ModifierHierarchyAsset_eventGetRootNode_Parms), Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierHierarchyAsset);
	UClass* Z_Construct_UClass_UModifierHierarchyAsset_NoRegister()
	{
		return UModifierHierarchyAsset::StaticClass();
	}
	struct Z_Construct_UClass_UModifierHierarchyAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierHierarchyAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifierHierarchyAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifierHierarchyAsset_GetChildNodes, "GetChildNodes" }, // 2312015547
		{ &Z_Construct_UFunction_UModifierHierarchyAsset_GetConnectionPointTargetForNode, "GetConnectionPointTargetForNode" }, // 2637938075
		{ &Z_Construct_UFunction_UModifierHierarchyAsset_GetGroupsContainingModifier, "GetGroupsContainingModifier" }, // 1540760809
		{ &Z_Construct_UFunction_UModifierHierarchyAsset_GetModifierInNode, "GetModifierInNode" }, // 1012953054
		{ &Z_Construct_UFunction_UModifierHierarchyAsset_GetParentNode, "GetParentNode" }, // 1003854202
		{ &Z_Construct_UFunction_UModifierHierarchyAsset_GetRootNode, "GetRootNode" }, // 952793150
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierHierarchyAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An asset intended to be referenced by Slate widgets.\n *\n * Defines a tree hierarchy. Nodes are called groups.\n * A group consists of modifiers and (sub) groups.\n * \n * An example use case is if you want to have a button menu which should procedurally generate sub-button menus depending\n * on the modifiers in the component. \n * One group could be a Lens group which groups together modifiers that e.g. modify focal distance, filmback, and FOV.\n * The rules are defined generically enough so as modifiers are added or removed, the groupings also update accordingly.\n */" },
		{ "IncludePath", "Hierarchies/ModifierHierarchyAsset.h" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
		{ "ToolTip", "An asset intended to be referenced by Slate widgets.\n\nDefines a tree hierarchy. Nodes are called groups.\nA group consists of modifiers and (sub) groups.\n\nAn example use case is if you want to have a button menu which should procedurally generate sub-button menus depending\non the modifiers in the component.\nOne group could be a Lens group which groups together modifiers that e.g. modify focal distance, filmback, and FOV.\nThe rules are defined generically enough so as modifiers are added or removed, the groupings also update accordingly." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierHierarchyAsset_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hierarchies/ModifierHierarchyAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModifierHierarchyAsset_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x001600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModifierHierarchyAsset, Rules), Z_Construct_UClass_UModifierHierarchyRules_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModifierHierarchyAsset_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierHierarchyAsset_Statics::NewProp_Rules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModifierHierarchyAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierHierarchyAsset_Statics::NewProp_Rules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierHierarchyAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierHierarchyAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierHierarchyAsset_Statics::ClassParams = {
		&UModifierHierarchyAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModifierHierarchyAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModifierHierarchyAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModifierHierarchyAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierHierarchyAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierHierarchyAsset()
	{
		if (!Z_Registration_Info_UClass_UModifierHierarchyAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierHierarchyAsset.OuterSingleton, Z_Construct_UClass_UModifierHierarchyAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModifierHierarchyAsset.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UModifierHierarchyAsset>()
	{
		return UModifierHierarchyAsset::StaticClass();
	}
	UModifierHierarchyAsset::UModifierHierarchyAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierHierarchyAsset);
	UModifierHierarchyAsset::~UModifierHierarchyAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModifierHierarchyAsset, UModifierHierarchyAsset::StaticClass, TEXT("UModifierHierarchyAsset"), &Z_Registration_Info_UClass_UModifierHierarchyAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierHierarchyAsset), 1816026513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_1702837467(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
