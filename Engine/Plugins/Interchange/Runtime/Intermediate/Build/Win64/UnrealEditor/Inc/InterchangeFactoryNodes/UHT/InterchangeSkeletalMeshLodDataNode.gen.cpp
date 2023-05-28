// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeSkeletalMeshLodDataNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshLodDataNode() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execRemoveAllMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAllMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execRemoveMeshUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMeshUid(Z_Param_MeshName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execAddMeshUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddMeshUid(Z_Param_MeshName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execGetMeshUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutMeshNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMeshUids(Z_Param_Out_OutMeshNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execGetMeshUidsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMeshUidsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execSetCustomSkeletonUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonUid(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execGetCustomSkeletonUid)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonUid(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeSkeletalMeshLodDataNode::StaticRegisterNativesUInterchangeSkeletalMeshLodDataNode()
	{
		UClass* Class = UInterchangeSkeletalMeshLodDataNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMeshUid", &UInterchangeSkeletalMeshLodDataNode::execAddMeshUid },
			{ "GetCustomSkeletonUid", &UInterchangeSkeletalMeshLodDataNode::execGetCustomSkeletonUid },
			{ "GetMeshUids", &UInterchangeSkeletalMeshLodDataNode::execGetMeshUids },
			{ "GetMeshUidsCount", &UInterchangeSkeletalMeshLodDataNode::execGetMeshUidsCount },
			{ "RemoveAllMeshes", &UInterchangeSkeletalMeshLodDataNode::execRemoveAllMeshes },
			{ "RemoveMeshUid", &UInterchangeSkeletalMeshLodDataNode::execRemoveMeshUid },
			{ "SetCustomSkeletonUid", &UInterchangeSkeletalMeshLodDataNode::execSetCustomSkeletonUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics
	{
		struct InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms
		{
			FString MeshName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms, MeshName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Add one mesh geometry use to create this LOD geometry. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Add one mesh geometry use to create this LOD geometry. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "AddMeshUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics
	{
		struct InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/** Query the LOD skeletal mesh factory skeleton reference. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Query the LOD skeletal mesh factory skeleton reference. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "GetCustomSkeletonUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics
	{
		struct InterchangeSkeletalMeshLodDataNode_eventGetMeshUids_Parms
		{
			TArray<FString> OutMeshNames;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeshNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames_Inner = { "OutMeshNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames = { "OutMeshNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventGetMeshUids_Parms, OutMeshNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Query all mesh geometry this LOD will be made of. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Query all mesh geometry this LOD will be made of. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "GetMeshUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::InterchangeSkeletalMeshLodDataNode_eventGetMeshUids_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics
	{
		struct InterchangeSkeletalMeshLodDataNode_eventGetMeshUidsCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventGetMeshUidsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Return the number of mesh geometry this LOD will be made of. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Return the number of mesh geometry this LOD will be made of. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "GetMeshUidsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::InterchangeSkeletalMeshLodDataNode_eventGetMeshUidsCount_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics
	{
		struct InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Remove all mesh geometry use to create this LOD geometry. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Remove all mesh geometry use to create this LOD geometry. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "RemoveAllMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics
	{
		struct InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms
		{
			FString MeshName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms, MeshName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Remove one mesh geometry use to create this LOD geometry. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Remove one mesh geometry use to create this LOD geometry. Mesh uids can be either a scene or a mesh node. If its a scene it mean we want the mesh factory to bake the geo payload with the global transform of the scene node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "RemoveMeshUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics
	{
		struct InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/** Set the LOD skeletal mesh factory skeleton reference. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Set the LOD skeletal mesh factory skeleton reference. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "SetCustomSkeletonUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshLodDataNode);
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister()
	{
		return UInterchangeSkeletalMeshLodDataNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid, "AddMeshUid" }, // 2488923557
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid, "GetCustomSkeletonUid" }, // 4015422844
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids, "GetMeshUids" }, // 237982625
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount, "GetMeshUidsCount" }, // 3339049238
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes, "RemoveAllMeshes" }, // 1126548217
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid, "RemoveMeshUid" }, // 1414585347
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid, "SetCustomSkeletonUid" }, // 3678405839
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeSkeletalMeshLodDataNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "ns UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalMeshLodDataNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::ClassParams = {
		&UInterchangeSkeletalMeshLodDataNode::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSkeletalMeshLodDataNode>()
	{
		return UInterchangeSkeletalMeshLodDataNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshLodDataNode);
	UInterchangeSkeletalMeshLodDataNode::~UInterchangeSkeletalMeshLodDataNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, UInterchangeSkeletalMeshLodDataNode::StaticClass, TEXT("UInterchangeSkeletalMeshLodDataNode"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshLodDataNode), 2521235494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_505618353(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
