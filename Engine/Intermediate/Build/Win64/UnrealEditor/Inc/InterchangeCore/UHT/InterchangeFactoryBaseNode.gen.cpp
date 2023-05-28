// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFactoryBaseNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReimportStrategyFlags;
	static UEnum* EReimportStrategyFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReimportStrategyFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReimportStrategyFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EReimportStrategyFlags"));
		}
		return Z_Registration_Info_UEnum_EReimportStrategyFlags.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UEnum* StaticEnum<EReimportStrategyFlags>()
	{
		return EReimportStrategyFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enumerators[] = {
		{ "EReimportStrategyFlags::ApplyNoProperties", (int64)EReimportStrategyFlags::ApplyNoProperties },
		{ "EReimportStrategyFlags::ApplyPipelineProperties", (int64)EReimportStrategyFlags::ApplyPipelineProperties },
		{ "EReimportStrategyFlags::ApplyEditorChangedProperties", (int64)EReimportStrategyFlags::ApplyEditorChangedProperties },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enum_MetaDataParams[] = {
		{ "ApplyEditorChangedProperties.Comment", "//Always apply all pipeline properties, but leave the properties modified in editor since the last import\n" },
		{ "ApplyEditorChangedProperties.Name", "EReimportStrategyFlags::ApplyEditorChangedProperties" },
		{ "ApplyEditorChangedProperties.ToolTip", "Always apply all pipeline properties, but leave the properties modified in editor since the last import" },
		{ "ApplyNoProperties.Comment", "//Do not apply any property when re-importing, simply change the source data\n" },
		{ "ApplyNoProperties.Name", "EReimportStrategyFlags::ApplyNoProperties" },
		{ "ApplyNoProperties.ToolTip", "Do not apply any property when re-importing, simply change the source data" },
		{ "ApplyPipelineProperties.Comment", "//Always apply all pipeline specified properties\n" },
		{ "ApplyPipelineProperties.Name", "EReimportStrategyFlags::ApplyPipelineProperties" },
		{ "ApplyPipelineProperties.ToolTip", "Always apply all pipeline specified properties" },
		{ "Comment", "// namespace UE::Interchange\n" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "namespace UE::Interchange" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		"EReimportStrategyFlags",
		"EReimportStrategyFlags",
		Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags()
	{
		if (!Z_Registration_Info_UEnum_EReimportStrategyFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReimportStrategyFlags.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReimportStrategyFlags.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetCustomReferenceObject)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomReferenceObject(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetCustomReferenceObject)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomReferenceObject(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execRemoveFactoryDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveFactoryDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execAddFactoryDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddFactoryDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetFactoryDependency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFactoryDependency(Z_Param_Index,Z_Param_Out_OutDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetFactoryDependencies)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFactoryDependencies(Z_Param_Out_OutDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetFactoryDependenciesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFactoryDependenciesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetCustomSubPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSubPath(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetCustomSubPath)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSubPath(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetReimportStrategyFlags)
	{
		P_GET_ENUM_REF(EReimportStrategyFlags,Z_Param_Out_ReimportStrategyFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReimportStrategyFlags((EReimportStrategyFlags&)(Z_Param_Out_ReimportStrategyFlags));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetReimportStrategyFlags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EReimportStrategyFlags*)Z_Param__Result=P_THIS->GetReimportStrategyFlags();
		P_NATIVE_END;
	}
	void UInterchangeFactoryBaseNode::StaticRegisterNativesUInterchangeFactoryBaseNode()
	{
		UClass* Class = UInterchangeFactoryBaseNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFactoryDependencyUid", &UInterchangeFactoryBaseNode::execAddFactoryDependencyUid },
			{ "GetCustomReferenceObject", &UInterchangeFactoryBaseNode::execGetCustomReferenceObject },
			{ "GetCustomSubPath", &UInterchangeFactoryBaseNode::execGetCustomSubPath },
			{ "GetFactoryDependencies", &UInterchangeFactoryBaseNode::execGetFactoryDependencies },
			{ "GetFactoryDependenciesCount", &UInterchangeFactoryBaseNode::execGetFactoryDependenciesCount },
			{ "GetFactoryDependency", &UInterchangeFactoryBaseNode::execGetFactoryDependency },
			{ "GetReimportStrategyFlags", &UInterchangeFactoryBaseNode::execGetReimportStrategyFlags },
			{ "RemoveFactoryDependencyUid", &UInterchangeFactoryBaseNode::execRemoveFactoryDependencyUid },
			{ "SetCustomReferenceObject", &UInterchangeFactoryBaseNode::execSetCustomReferenceObject },
			{ "SetCustomSubPath", &UInterchangeFactoryBaseNode::execSetCustomSubPath },
			{ "SetReimportStrategyFlags", &UInterchangeFactoryBaseNode::execSetReimportStrategyFlags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics
	{
		struct InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms
		{
			FString DependencyUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add one dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Add one dependency to this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "AddFactoryDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the custom ReferenceObject. The UObject this factory node has created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return the custom ReferenceObject. The UObject this factory node has created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetCustomReferenceObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics
	{
		struct InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the custom sub-path under PackageBasePath, where the assets will be created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return the custom sub-path under PackageBasePath, where the assets will be created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetCustomSubPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics
	{
		struct InterchangeFactoryBaseNode_eventGetFactoryDependencies_Parms
		{
			TArray<FString> OutDependencies;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "This function allow to retrieve the dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetFactoryDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependencies_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics
	{
		struct InterchangeFactoryBaseNode_eventGetFactoryDependenciesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependenciesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of factory dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of factory dependencies for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetFactoryDependenciesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependenciesCount_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics
	{
		struct InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms
		{
			int32 Index;
			FString OutDependency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms, OutDependency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_OutDependency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "This function allow to retrieve one dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetFactoryDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics
	{
		struct InterchangeFactoryBaseNode_eventGetReimportStrategyFlags_Parms
		{
			EReimportStrategyFlags ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetReimportStrategyFlags_Parms, ReturnValue), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(nullptr, 0) }; // 4003972788
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the reimport strategy flags.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return the reimport strategy flags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetReimportStrategyFlags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::InterchangeFactoryBaseNode_eventGetReimportStrategyFlags_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics
	{
		struct InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms
		{
			FString DependencyUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Remove one dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Remove one dependency from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "RemoveFactoryDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Set the custom ReferenceObject. The UObject this factory node has created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Set the custom ReferenceObject. The UObject this factory node has created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetCustomReferenceObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics
	{
		struct InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Set the custom sub-path under PackageBasePath where the assets will be created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Set the custom sub-path under PackageBasePath where the assets will be created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetCustomSubPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics
	{
		struct InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms
		{
			EReimportStrategyFlags ReimportStrategyFlags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReimportStrategyFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStrategyFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReimportStrategyFlags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags = { "ReimportStrategyFlags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms, ReimportStrategyFlags), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags_MetaData)) }; // 4003972788
	void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Change the reimport strategy flags.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Change the reimport strategy flags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetReimportStrategyFlags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFactoryBaseNode);
	UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister()
	{
		return UInterchangeFactoryBaseNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid, "AddFactoryDependencyUid" }, // 1705441229
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject, "GetCustomReferenceObject" }, // 2097493438
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath, "GetCustomSubPath" }, // 1039307085
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies, "GetFactoryDependencies" }, // 2023883582
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount, "GetFactoryDependenciesCount" }, // 1263799131
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency, "GetFactoryDependency" }, // 4138839349
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags, "GetReimportStrategyFlags" }, // 1763949747
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid, "RemoveFactoryDependencyUid" }, // 3822649962
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject, "SetCustomReferenceObject" }, // 3376504181
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath, "SetCustomSubPath" }, // 430120084
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags, "SetReimportStrategyFlags" }, // 2200975703
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This struct is used to store and retrieve key value attributes. The attributes are store in a generic FAttributeStorage which serialize the value in a TArray64<uint8>\n * See UE::Interchange::EAttributeTypes to know the supported template types\n * This is an abstract class. This is the base class of the interchange node graph format, all class in this format should derive from this class\n */" },
		{ "IncludePath", "Nodes/InterchangeFactoryBaseNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "This struct is used to store and retrieve key value attributes. The attributes are store in a generic FAttributeStorage which serialize the value in a TArray64<uint8>\nSee UE::Interchange::EAttributeTypes to know the supported template types\nThis is an abstract class. This is the base class of the interchange node graph format, all class in this format should derive from this class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFactoryBaseNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::ClassParams = {
		&UInterchangeFactoryBaseNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeFactoryBaseNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFactoryBaseNode.OuterSingleton, Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeFactoryBaseNode.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeFactoryBaseNode>()
	{
		return UInterchangeFactoryBaseNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFactoryBaseNode);
	UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::EnumInfo[] = {
		{ EReimportStrategyFlags_StaticEnum, TEXT("EReimportStrategyFlags"), &Z_Registration_Info_UEnum_EReimportStrategyFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4003972788U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFactoryBaseNode, UInterchangeFactoryBaseNode::StaticClass, TEXT("UInterchangeFactoryBaseNode"), &Z_Registration_Info_UClass_UInterchangeFactoryBaseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFactoryBaseNode), 2066869698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_2660328422(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
