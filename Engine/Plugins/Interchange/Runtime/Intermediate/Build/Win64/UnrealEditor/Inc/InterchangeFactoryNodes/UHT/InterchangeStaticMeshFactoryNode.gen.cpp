// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeStaticMeshFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomMaxLumenMeshCards)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMaxLumenMeshCards(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomMaxLumenMeshCards)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMaxLumenMeshCards(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldReplacementMesh)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDistanceFieldReplacementMesh(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldReplacementMesh)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDistanceFieldReplacementMesh(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldResolutionScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDistanceFieldResolutionScale(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldResolutionScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDistanceFieldResolutionScale(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomBuildScale3D)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomBuildScale3D(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomBuildScale3D)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomBuildScale3D(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomDstLightmapIndex)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDstLightmapIndex(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomDstLightmapIndex)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDstLightmapIndex(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomSrcLightmapIndex)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSrcLightmapIndex(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomSrcLightmapIndex)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSrcLightmapIndex(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomMinLightmapResolution)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMinLightmapResolution(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomMinLightmapResolution)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMinLightmapResolution(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomSupportFaceRemap)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSupportFaceRemap(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomSupportFaceRemap)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSupportFaceRemap(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomGenerateDistanceFieldAsIfTwoSided)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomGenerateDistanceFieldAsIfTwoSided(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomGenerateDistanceFieldAsIfTwoSided)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomGenerateDistanceFieldAsIfTwoSided(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomGenerateLightmapUVs)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomGenerateLightmapUVs(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomGenerateLightmapUVs)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomGenerateLightmapUVs(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomBuildReversedIndexBuffer)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomBuildReversedIndexBuffer(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomBuildReversedIndexBuffer)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomBuildReversedIndexBuffer(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execRemoveSocketUd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SocketUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSocketUd(Z_Param_SocketUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execAddSocketUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InSocketUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSocketUids(Z_Param_Out_InSocketUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execAddSocketUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SocketUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSocketUid(Z_Param_SocketUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetSocketUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutSocketUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSocketUids(Z_Param_Out_OutSocketUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetSocketUidCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSocketUidCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomBuildNanite)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomBuildNanite(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomBuildNanite)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomBuildNanite(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execInitializeStaticMeshNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStaticMeshNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetClass);
		P_NATIVE_END;
	}
	void UInterchangeStaticMeshFactoryNode::StaticRegisterNativesUInterchangeStaticMeshFactoryNode()
	{
		UClass* Class = UInterchangeStaticMeshFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSocketUid", &UInterchangeStaticMeshFactoryNode::execAddSocketUid },
			{ "AddSocketUids", &UInterchangeStaticMeshFactoryNode::execAddSocketUids },
			{ "GetCustomBuildNanite", &UInterchangeStaticMeshFactoryNode::execGetCustomBuildNanite },
			{ "GetCustomBuildReversedIndexBuffer", &UInterchangeStaticMeshFactoryNode::execGetCustomBuildReversedIndexBuffer },
			{ "GetCustomBuildScale3D", &UInterchangeStaticMeshFactoryNode::execGetCustomBuildScale3D },
			{ "GetCustomDistanceFieldReplacementMesh", &UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldReplacementMesh },
			{ "GetCustomDistanceFieldResolutionScale", &UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldResolutionScale },
			{ "GetCustomDstLightmapIndex", &UInterchangeStaticMeshFactoryNode::execGetCustomDstLightmapIndex },
			{ "GetCustomGenerateDistanceFieldAsIfTwoSided", &UInterchangeStaticMeshFactoryNode::execGetCustomGenerateDistanceFieldAsIfTwoSided },
			{ "GetCustomGenerateLightmapUVs", &UInterchangeStaticMeshFactoryNode::execGetCustomGenerateLightmapUVs },
			{ "GetCustomMaxLumenMeshCards", &UInterchangeStaticMeshFactoryNode::execGetCustomMaxLumenMeshCards },
			{ "GetCustomMinLightmapResolution", &UInterchangeStaticMeshFactoryNode::execGetCustomMinLightmapResolution },
			{ "GetCustomSrcLightmapIndex", &UInterchangeStaticMeshFactoryNode::execGetCustomSrcLightmapIndex },
			{ "GetCustomSupportFaceRemap", &UInterchangeStaticMeshFactoryNode::execGetCustomSupportFaceRemap },
			{ "GetObjectClass", &UInterchangeStaticMeshFactoryNode::execGetObjectClass },
			{ "GetSocketUidCount", &UInterchangeStaticMeshFactoryNode::execGetSocketUidCount },
			{ "GetSocketUids", &UInterchangeStaticMeshFactoryNode::execGetSocketUids },
			{ "InitializeStaticMeshNode", &UInterchangeStaticMeshFactoryNode::execInitializeStaticMeshNode },
			{ "RemoveSocketUd", &UInterchangeStaticMeshFactoryNode::execRemoveSocketUd },
			{ "SetCustomBuildNanite", &UInterchangeStaticMeshFactoryNode::execSetCustomBuildNanite },
			{ "SetCustomBuildReversedIndexBuffer", &UInterchangeStaticMeshFactoryNode::execSetCustomBuildReversedIndexBuffer },
			{ "SetCustomBuildScale3D", &UInterchangeStaticMeshFactoryNode::execSetCustomBuildScale3D },
			{ "SetCustomDistanceFieldReplacementMesh", &UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldReplacementMesh },
			{ "SetCustomDistanceFieldResolutionScale", &UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldResolutionScale },
			{ "SetCustomDstLightmapIndex", &UInterchangeStaticMeshFactoryNode::execSetCustomDstLightmapIndex },
			{ "SetCustomGenerateDistanceFieldAsIfTwoSided", &UInterchangeStaticMeshFactoryNode::execSetCustomGenerateDistanceFieldAsIfTwoSided },
			{ "SetCustomGenerateLightmapUVs", &UInterchangeStaticMeshFactoryNode::execSetCustomGenerateLightmapUVs },
			{ "SetCustomMaxLumenMeshCards", &UInterchangeStaticMeshFactoryNode::execSetCustomMaxLumenMeshCards },
			{ "SetCustomMinLightmapResolution", &UInterchangeStaticMeshFactoryNode::execSetCustomMinLightmapResolution },
			{ "SetCustomSrcLightmapIndex", &UInterchangeStaticMeshFactoryNode::execSetCustomSrcLightmapIndex },
			{ "SetCustomSupportFaceRemap", &UInterchangeStaticMeshFactoryNode::execSetCustomSupportFaceRemap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms
		{
			FString SocketUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SocketUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_SocketUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_SocketUid = { "SocketUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms, SocketUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_SocketUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_SocketUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_SocketUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "AddSocketUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms
		{
			TArray<FString> InSocketUids;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSocketUids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSocketUids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InSocketUids;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids_Inner = { "InSocketUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids = { "InSocketUids", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms, InSocketUids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "AddSocketUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get weather the static mesh factory should set the nanite build settings. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get weather the static mesh factory should set the nanite build settings. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomBuildNanite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get weather the static mesh should build build a reverse index buffer. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get weather the static mesh should build build a reverse index buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomBuildReversedIndexBuffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms
		{
			FVector AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the static mesh local scale applied when building the static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the static mesh local scale applied when building the static mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomBuildScale3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms
		{
			FSoftObjectPath AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the static mesh local scale applied when building the static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the static mesh local scale applied when building the static mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomDistanceFieldReplacementMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Get the Scale to apply to the mesh when allocating the distance field volume texture.\n\x09 * The default scale is 1, which is assuming that the mesh will be placed unscaled in the world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the Scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which is assuming that the mesh will be placed unscaled in the world." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomDistanceFieldResolutionScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get weather the static mesh ... (TODO add documentation) */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomDstLightmapIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Get Whether to generate the distance field treating every triangle hit as a front face.  \n\x09 * When enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get Whether to generate the distance field treating every triangle hit as a front face.\nWhen enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomGenerateDistanceFieldAsIfTwoSided", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get weather the static mesh should build build a reverse index buffer. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get weather the static mesh should build build a reverse index buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomGenerateLightmapUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Max Lumen mesh cards to generate for this mesh.\n\x09 * More cards means that surface will have better coverage, but will result in increased runtime overhead.\n\x09 * Set to 0 in order to disable mesh card generation for this mesh.\n\x09 * Default is 12.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Max Lumen mesh cards to generate for this mesh.\nMore cards means that surface will have better coverage, but will result in increased runtime overhead.\nSet to 0 in order to disable mesh card generation for this mesh.\nDefault is 12." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomMaxLumenMeshCards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get weather the static mesh ... (TODO add documentation) */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomMinLightmapResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get weather the static mesh ... (TODO add documentation) */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomSrcLightmapIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get weather the static mesh ... (TODO add documentation) */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomSupportFaceRemap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetObjectClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::InterchangeStaticMeshFactoryNode_eventGetObjectClass_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetSocketUidCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetSocketUidCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Return The number of socket UIDs this static mesh has.*/" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Return The number of socket UIDs this static mesh has." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetSocketUidCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::InterchangeStaticMeshFactoryNode_eventGetSocketUidCount_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventGetSocketUids_Parms
		{
			TArray<FString> OutSocketUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSocketUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSocketUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids_Inner = { "OutSocketUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids = { "OutSocketUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetSocketUids_Parms, OutSocketUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetSocketUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::InterchangeStaticMeshFactoryNode_eventGetSocketUids_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms
		{
			FString UniqueID;
			FString DisplayLabel;
			FString InAssetClass;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms, UniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms, DisplayLabel), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_DisplayLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_DisplayLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_InAssetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_InAssetClass = { "InAssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms, InAssetClass), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_InAssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_InAssetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_DisplayLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_InAssetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Initialize node data\n\x09 * @param UniqueID - The uniqueId for this node\n\x09 * @param DisplayLabel - The name of the node\n\x09 * @param InAssetClass - The class the StaticMesh factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Initialize node data\n@param UniqueID - The uniqueId for this node\n@param DisplayLabel - The name of the node\n@param InAssetClass - The class the StaticMesh factory will create for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "InitializeStaticMeshNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms
		{
			FString SocketUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SocketUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_SocketUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_SocketUid = { "SocketUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms, SocketUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_SocketUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_SocketUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_SocketUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "RemoveSocketUd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set weather the static mesh factory should set the nanite build settings. Return false if the attribute was not set.*/" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the static mesh factory should set the nanite build settings. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomBuildNanite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set weather the static mesh should build build a reverse index buffer. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the static mesh should build build a reverse index buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomBuildReversedIndexBuffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms
		{
			FVector AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the static mesh local scale applied when building the static mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the static mesh local scale applied when building the static mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomBuildScale3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms
		{
			FSoftObjectPath AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the static mesh local scale applied when building the static mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the static mesh local scale applied when building the static mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomDistanceFieldReplacementMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set the Scale to apply to the mesh when allocating the distance field volume texture.\n\x09 * The default scale is 1, which is assuming that the mesh will be placed unscaled in the world.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the Scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which is assuming that the mesh will be placed unscaled in the world." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomDistanceFieldResolutionScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms
		{
			int32 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set weather the static mesh ... (TODO add documentation) */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomDstLightmapIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set Whether to generate the distance field treating every triangle hit as a front face.\n\x09 * When enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set Whether to generate the distance field treating every triangle hit as a front face.\nWhen enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomGenerateDistanceFieldAsIfTwoSided", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set weather the static mesh should build build a reverse index buffer. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the static mesh should build build a reverse index buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomGenerateLightmapUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms
		{
			int32 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Max Lumen mesh cards to generate for this mesh.\n\x09 * More cards means that surface will have better coverage, but will result in increased runtime overhead.\n\x09 * Set to 0 in order to disable mesh card generation for this mesh.\n\x09 * Default is 12.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Max Lumen mesh cards to generate for this mesh.\nMore cards means that surface will have better coverage, but will result in increased runtime overhead.\nSet to 0 in order to disable mesh card generation for this mesh.\nDefault is 12." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomMaxLumenMeshCards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms
		{
			int32 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set weather the static mesh ... (TODO add documentation) */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomMinLightmapResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms
		{
			int32 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set weather the static mesh ... (TODO add documentation) */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomSrcLightmapIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics
	{
		struct InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set weather the static mesh ... (TODO add documentation) */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the static mesh ... (TODO add documentation)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomSupportFaceRemap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister()
	{
		return UInterchangeStaticMeshFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeMeshFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid, "AddSocketUid" }, // 3211050875
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids, "AddSocketUids" }, // 3732559132
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite, "GetCustomBuildNanite" }, // 3700930233
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer, "GetCustomBuildReversedIndexBuffer" }, // 1969297105
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D, "GetCustomBuildScale3D" }, // 3801633161
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh, "GetCustomDistanceFieldReplacementMesh" }, // 2315018046
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale, "GetCustomDistanceFieldResolutionScale" }, // 3060061237
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex, "GetCustomDstLightmapIndex" }, // 2961887681
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided, "GetCustomGenerateDistanceFieldAsIfTwoSided" }, // 2821935111
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs, "GetCustomGenerateLightmapUVs" }, // 772291832
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards, "GetCustomMaxLumenMeshCards" }, // 1944616647
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution, "GetCustomMinLightmapResolution" }, // 3092499276
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex, "GetCustomSrcLightmapIndex" }, // 4065020390
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap, "GetCustomSupportFaceRemap" }, // 3192128223
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass, "GetObjectClass" }, // 2992613289
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount, "GetSocketUidCount" }, // 1189189153
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids, "GetSocketUids" }, // 235381664
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode, "InitializeStaticMeshNode" }, // 400306993
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd, "RemoveSocketUd" }, // 1740343954
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite, "SetCustomBuildNanite" }, // 3197610265
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer, "SetCustomBuildReversedIndexBuffer" }, // 308044900
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D, "SetCustomBuildScale3D" }, // 1395641454
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh, "SetCustomDistanceFieldReplacementMesh" }, // 2001741307
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale, "SetCustomDistanceFieldResolutionScale" }, // 446164933
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex, "SetCustomDstLightmapIndex" }, // 4232912803
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided, "SetCustomGenerateDistanceFieldAsIfTwoSided" }, // 2932097508
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs, "SetCustomGenerateLightmapUVs" }, // 4077106831
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards, "SetCustomMaxLumenMeshCards" }, // 3037167758
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution, "SetCustomMinLightmapResolution" }, // 660045445
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex, "SetCustomSrcLightmapIndex" }, // 1089456894
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap, "SetCustomSupportFaceRemap" }, // 2733442083
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace UE\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeStaticMeshFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStaticMeshFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::ClassParams = {
		&UInterchangeStaticMeshFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeStaticMeshFactoryNode>()
	{
		return UInterchangeStaticMeshFactoryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshFactoryNode);
	UInterchangeStaticMeshFactoryNode::~UInterchangeStaticMeshFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, UInterchangeStaticMeshFactoryNode::StaticClass, TEXT("UInterchangeStaticMeshFactoryNode"), &Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshFactoryNode), 1259972353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_170957249(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
