// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeSkeletalMeshFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UEnum* Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType;
	static UEnum* EInterchangeSkeletalMeshContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, (UObject*)Z_Construct_UPackage__Script_InterchangeFactoryNodes(), TEXT("EInterchangeSkeletalMeshContentType"));
		}
		return Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UEnum* StaticEnum<EInterchangeSkeletalMeshContentType>()
	{
		return EInterchangeSkeletalMeshContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enumerators[] = {
		{ "EInterchangeSkeletalMeshContentType::All", (int64)EInterchangeSkeletalMeshContentType::All },
		{ "EInterchangeSkeletalMeshContentType::Geometry", (int64)EInterchangeSkeletalMeshContentType::Geometry },
		{ "EInterchangeSkeletalMeshContentType::SkinningWeights", (int64)EInterchangeSkeletalMeshContentType::SkinningWeights },
		{ "EInterchangeSkeletalMeshContentType::MAX", (int64)EInterchangeSkeletalMeshContentType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enum_MetaDataParams[] = {
		{ "All.DisplayName", "Geometry and Skinning Weights." },
		{ "All.Name", "EInterchangeSkeletalMeshContentType::All" },
		{ "All.ToolTip", "Import all skelatl mesh content: geometry, skinning and weights." },
		{ "BlueprintType", "true" },
		{ "Geometry.DisplayName", "Geometry Only" },
		{ "Geometry.Name", "EInterchangeSkeletalMeshContentType::Geometry" },
		{ "Geometry.ToolTip", "Import the skeletal mesh geometry only (will create a default skeleton, or map the geometry to the existing one). Morph and LOD can be imported with it." },
		{ "MAX.Name", "EInterchangeSkeletalMeshContentType::MAX" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "SkinningWeights.DisplayName", "Skinning Weights Only" },
		{ "SkinningWeights.Name", "EInterchangeSkeletalMeshContentType::SkinningWeights" },
		{ "SkinningWeights.ToolTip", "Import the skeletal mesh skinning and weights only (no geometry will be imported). Morph and LOD will not be imported with this settings." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
		nullptr,
		"EInterchangeSkeletalMeshContentType",
		"EInterchangeSkeletalMeshContentType",
		Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.InnerSingleton, Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomBoneInfluenceLimit)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomBoneInfluenceLimit(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomBoneInfluenceLimit)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomBoneInfluenceLimit(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomMorphThresholdPosition)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMorphThresholdPosition(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomMorphThresholdPosition)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMorphThresholdPosition(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdUV)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomThresholdUV(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdUV)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomThresholdUV(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdTangentNormal)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomThresholdTangentNormal(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdTangentNormal)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomThresholdTangentNormal(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdPosition)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomThresholdPosition(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdPosition)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomThresholdPosition(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomUseHighPrecisionSkinWeights)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomUseHighPrecisionSkinWeights(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomUseHighPrecisionSkinWeights)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomUseHighPrecisionSkinWeights(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomImportContentType)
	{
		P_GET_ENUM_REF(EInterchangeSkeletalMeshContentType,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomImportContentType((EInterchangeSkeletalMeshContentType&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomImportContentType)
	{
		P_GET_ENUM_REF(EInterchangeSkeletalMeshContentType,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomImportContentType((EInterchangeSkeletalMeshContentType&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomPhysicAssetSoftObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomPhysicAssetSoftObjectPath(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomPhysicAssetSoftObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomPhysicAssetSoftObjectPath(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomCreatePhysicsAsset)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomCreatePhysicsAsset(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomCreatePhysicsAsset)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomCreatePhysicsAsset(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomImportMorphTarget)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomImportMorphTarget(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomImportMorphTarget)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomImportMorphTarget(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execSetCustomSkeletonSoftObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetCustomSkeletonSoftObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletalMeshFactoryNode::execInitializeSkeletalMeshNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSkeletalMeshNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetClass);
		P_NATIVE_END;
	}
	void UInterchangeSkeletalMeshFactoryNode::StaticRegisterNativesUInterchangeSkeletalMeshFactoryNode()
	{
		UClass* Class = UInterchangeSkeletalMeshFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomBoneInfluenceLimit", &UInterchangeSkeletalMeshFactoryNode::execGetCustomBoneInfluenceLimit },
			{ "GetCustomCreatePhysicsAsset", &UInterchangeSkeletalMeshFactoryNode::execGetCustomCreatePhysicsAsset },
			{ "GetCustomImportContentType", &UInterchangeSkeletalMeshFactoryNode::execGetCustomImportContentType },
			{ "GetCustomImportMorphTarget", &UInterchangeSkeletalMeshFactoryNode::execGetCustomImportMorphTarget },
			{ "GetCustomMorphThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execGetCustomMorphThresholdPosition },
			{ "GetCustomPhysicAssetSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execGetCustomPhysicAssetSoftObjectPath },
			{ "GetCustomSkeletonSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execGetCustomSkeletonSoftObjectPath },
			{ "GetCustomThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdPosition },
			{ "GetCustomThresholdTangentNormal", &UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdTangentNormal },
			{ "GetCustomThresholdUV", &UInterchangeSkeletalMeshFactoryNode::execGetCustomThresholdUV },
			{ "GetCustomUseHighPrecisionSkinWeights", &UInterchangeSkeletalMeshFactoryNode::execGetCustomUseHighPrecisionSkinWeights },
			{ "GetObjectClass", &UInterchangeSkeletalMeshFactoryNode::execGetObjectClass },
			{ "InitializeSkeletalMeshNode", &UInterchangeSkeletalMeshFactoryNode::execInitializeSkeletalMeshNode },
			{ "SetCustomBoneInfluenceLimit", &UInterchangeSkeletalMeshFactoryNode::execSetCustomBoneInfluenceLimit },
			{ "SetCustomCreatePhysicsAsset", &UInterchangeSkeletalMeshFactoryNode::execSetCustomCreatePhysicsAsset },
			{ "SetCustomImportContentType", &UInterchangeSkeletalMeshFactoryNode::execSetCustomImportContentType },
			{ "SetCustomImportMorphTarget", &UInterchangeSkeletalMeshFactoryNode::execSetCustomImportMorphTarget },
			{ "SetCustomMorphThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execSetCustomMorphThresholdPosition },
			{ "SetCustomPhysicAssetSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execSetCustomPhysicAssetSoftObjectPath },
			{ "SetCustomSkeletonSoftObjectPath", &UInterchangeSkeletalMeshFactoryNode::execSetCustomSkeletonSoftObjectPath },
			{ "SetCustomThresholdPosition", &UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdPosition },
			{ "SetCustomThresholdTangentNormal", &UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdTangentNormal },
			{ "SetCustomThresholdUV", &UInterchangeSkeletalMeshFactoryNode::execSetCustomThresholdUV },
			{ "SetCustomUseHighPrecisionSkinWeights", &UInterchangeSkeletalMeshFactoryNode::execSetCustomUseHighPrecisionSkinWeights },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Query The maximum number of bone influences to allow each vertex in this mesh to use.\n\x09 * If set higher than the limit determined by the project settings, it has no effect.\n\x09 * If set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query The maximum number of bone influences to allow each vertex in this mesh to use.\nIf set higher than the limit determined by the project settings, it has no effect.\nIf set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomBoneInfluenceLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomBoneInfluenceLimit_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms
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
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query weather the skeletal mesh factory should create a physics asset. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query weather the skeletal mesh factory should create a physics asset. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomCreatePhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomCreatePhysicsAsset_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms
		{
			EInterchangeSkeletalMeshContentType AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms, AttributeValue), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(nullptr, 0) }; // 3928654180
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh import content type. The content type is use by the factory to import partial or full translated content. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh import content type. The content type is use by the factory to import partial or full translated content. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomImportContentType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportContentType_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms
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
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query weather the skeletal mesh factory should create the morph target. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query weather the skeletal mesh factory should create the morph target. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomImportMorphTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomImportMorphTarget_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold to compare vertex position equality when computing morph target deltas. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold to compare vertex position equality when computing morph target deltas." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomMorphThresholdPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomMorphThresholdPosition_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query a physics asset the skeletal mesh factory should use. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query a physics asset the skeletal mesh factory should use. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomPhysicAssetSoftObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomPhysicAssetSoftObjectPath_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh factory skeleton UObject. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh factory skeleton UObject. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomSkeletonSoftObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold use to decide if two vertex position are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold use to decide if two vertex position are equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomThresholdPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdPosition_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold use to decide if two normal, tangents or bi-normals are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold use to decide if two normal, tangents or bi-normals are equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomThresholdTangentNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdTangentNormal_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh threshold use to decide if two UVs are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh threshold use to decide if two UVs are equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomThresholdUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomThresholdUV_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms
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
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Query the skeletal mesh UseHighPrecisionSkinWeights. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Query the skeletal mesh UseHighPrecisionSkinWeights." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetCustomUseHighPrecisionSkinWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::InterchangeSkeletalMeshFactoryNode_eventGetCustomUseHighPrecisionSkinWeights_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventGetObjectClass_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::InterchangeSkeletalMeshFactoryNode_eventGetObjectClass_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms, UniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms, DisplayLabel), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_DisplayLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_DisplayLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_InAssetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_InAssetClass = { "InAssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms, InAssetClass), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_InAssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_InAssetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_DisplayLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::NewProp_InAssetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Initialize node data\n\x09 * @param: UniqueID - The uniqueId for this node\n\x09 * @param DisplayLabel - The name of the node\n\x09 * @param InAssetClass - The class the SkeletalMesh factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Initialize node data\n@param: UniqueID - The uniqueId for this node\n@param DisplayLabel - The name of the node\n@param InAssetClass - The class the SkeletalMesh factory will create for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "InitializeSkeletalMeshNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::InterchangeSkeletalMeshFactoryNode_eventInitializeSkeletalMeshNode_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Set The maximum number of bone influences to allow each vertex in this mesh to use.\n\x09 * If set higher than the limit determined by the project settings, it has no effect.\n\x09 * If set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set The maximum number of bone influences to allow each vertex in this mesh to use.\nIf set higher than the limit determined by the project settings, it has no effect.\nIf set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomBoneInfluenceLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomBoneInfluenceLimit_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set weather the skeletal mesh factory should create a physics asset. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the skeletal mesh factory should create a physics asset. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomCreatePhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomCreatePhysicsAsset_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms
		{
			EInterchangeSkeletalMeshContentType AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms, AttributeValue), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue_MetaData)) }; // 3928654180
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh import content type. The content type is use by the factory to import partial or full translated content. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh import content type. The content type is use by the factory to import partial or full translated content. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomImportContentType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportContentType_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set weather the skeletal mesh factory should create the morph target. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set weather the skeletal mesh factory should create the morph target. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomImportMorphTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomImportMorphTarget_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold to compare vertex position equality when computing morph target deltas. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold to compare vertex position equality when computing morph target deltas." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomMorphThresholdPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomMorphThresholdPosition_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms
		{
			FSoftObjectPath AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set a physics asset the skeletal mesh factory should use. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set a physics asset the skeletal mesh factory should use. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomPhysicAssetSoftObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomPhysicAssetSoftObjectPath_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms
		{
			FSoftObjectPath AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh factory skeleton UObject. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh factory skeleton UObject. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomSkeletonSoftObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold use to decide if two vertex position are equal. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold use to decide if two vertex position are equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomThresholdPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdPosition_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold use to decide if two normal, tangents or bi-normals are equal. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold use to decide if two normal, tangents or bi-normals are equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomThresholdTangentNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdTangentNormal_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh threshold use to decide if two UVs are equal. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh threshold use to decide if two UVs are equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomThresholdUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomThresholdUV_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics
	{
		struct InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMesh" },
		{ "Comment", "/** Set the skeletal mesh UseHighPrecisionSkinWeights. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
		{ "ToolTip", "Set the skeletal mesh UseHighPrecisionSkinWeights." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, nullptr, "SetCustomUseHighPrecisionSkinWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::InterchangeSkeletalMeshFactoryNode_eventSetCustomUseHighPrecisionSkinWeights_Parms), Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister()
	{
		return UInterchangeSkeletalMeshFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeMeshFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit, "GetCustomBoneInfluenceLimit" }, // 2803651412
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset, "GetCustomCreatePhysicsAsset" }, // 217749127
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType, "GetCustomImportContentType" }, // 3464330826
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget, "GetCustomImportMorphTarget" }, // 2854392665
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition, "GetCustomMorphThresholdPosition" }, // 1055049662
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath, "GetCustomPhysicAssetSoftObjectPath" }, // 3592756933
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath, "GetCustomSkeletonSoftObjectPath" }, // 1923361015
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition, "GetCustomThresholdPosition" }, // 1929871173
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal, "GetCustomThresholdTangentNormal" }, // 3563041764
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV, "GetCustomThresholdUV" }, // 766694742
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights, "GetCustomUseHighPrecisionSkinWeights" }, // 637205582
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_GetObjectClass, "GetObjectClass" }, // 2519886831
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode, "InitializeSkeletalMeshNode" }, // 967536221
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit, "SetCustomBoneInfluenceLimit" }, // 4132743025
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset, "SetCustomCreatePhysicsAsset" }, // 1330257869
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType, "SetCustomImportContentType" }, // 812315853
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget, "SetCustomImportMorphTarget" }, // 56277903
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition, "SetCustomMorphThresholdPosition" }, // 1989881684
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath, "SetCustomPhysicAssetSoftObjectPath" }, // 3687483365
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath, "SetCustomSkeletonSoftObjectPath" }, // 2118931264
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition, "SetCustomThresholdPosition" }, // 2433204452
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal, "SetCustomThresholdTangentNormal" }, // 4093333300
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV, "SetCustomThresholdUV" }, // 816370482
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights, "SetCustomUseHighPrecisionSkinWeights" }, // 1167147306
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeSkeletalMeshFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalMeshFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::ClassParams = {
		&UInterchangeSkeletalMeshFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSkeletalMeshFactoryNode>()
	{
		return UInterchangeSkeletalMeshFactoryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshFactoryNode);
	UInterchangeSkeletalMeshFactoryNode::~UInterchangeSkeletalMeshFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::EnumInfo[] = {
		{ EInterchangeSkeletalMeshContentType_StaticEnum, TEXT("EInterchangeSkeletalMeshContentType"), &Z_Registration_Info_UEnum_EInterchangeSkeletalMeshContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3928654180U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode, UInterchangeSkeletalMeshFactoryNode::StaticClass, TEXT("UInterchangeSkeletalMeshFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshFactoryNode), 90449242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_3225388511(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
