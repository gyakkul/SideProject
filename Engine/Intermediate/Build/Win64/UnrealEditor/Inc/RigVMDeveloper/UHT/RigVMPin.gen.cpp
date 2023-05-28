// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMPin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMInjectionInfo();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMInjectionInfo_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLink_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMUnitNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMInjectionInfo::execGetPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMInjectionInfo::execGetGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetGraph();
		P_NATIVE_END;
	}
	void URigVMInjectionInfo::StaticRegisterNativesURigVMInjectionInfo()
	{
		UClass* Class = URigVMInjectionInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraph", &URigVMInjectionInfo::execGetGraph },
			{ "GetPin", &URigVMInjectionInfo::execGetPin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics
	{
		struct RigVMInjectionInfo_eventGetGraph_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMInjectionInfo_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMInjectionInfo" },
		{ "Comment", "// Returns the graph of this injected node.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the graph of this injected node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMInjectionInfo, nullptr, "GetGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::RigVMInjectionInfo_eventGetGraph_Parms), Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMInjectionInfo_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMInjectionInfo_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics
	{
		struct RigVMInjectionInfo_eventGetPin_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMInjectionInfo_eventGetPin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMInjectionInfo" },
		{ "Comment", "// Returns the pin of this injected node.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the pin of this injected node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMInjectionInfo, nullptr, "GetPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::RigVMInjectionInfo_eventGetPin_Parms), Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMInjectionInfo_GetPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMInjectionInfo_GetPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMInjectionInfo);
	UClass* Z_Construct_UClass_URigVMInjectionInfo_NoRegister()
	{
		return URigVMInjectionInfo::StaticClass();
	}
	struct Z_Construct_UClass_URigVMInjectionInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInjectedAsInput_MetaData[];
#endif
		static void NewProp_bInjectedAsInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInjectedAsInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMInjectionInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMInjectionInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMInjectionInfo_GetGraph, "GetGraph" }, // 1317527465
		{ &Z_Construct_UFunction_URigVMInjectionInfo_GetPin, "GetPin" }, // 2285644893
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMInjectionInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Injected Info is used for injecting a node on a pin.\n * Injected nodes are not visible to the user, but they are normal\n * nodes on the graph.\n */" },
		{ "IncludePath", "RigVMModel/RigVMPin.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "The Injected Info is used for injecting a node on a pin.\nInjected nodes are not visible to the user, but they are normal\nnodes on the graph." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_UnitNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_UnitNode = { "UnitNode", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMInjectionInfo, UnitNode_DEPRECATED), Z_Construct_UClass_URigVMUnitNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_UnitNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_UnitNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMInjectionInfo, Node), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_bInjectedAsInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	void Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_bInjectedAsInput_SetBit(void* Obj)
	{
		((URigVMInjectionInfo*)Obj)->bInjectedAsInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_bInjectedAsInput = { "bInjectedAsInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMInjectionInfo), &Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_bInjectedAsInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_bInjectedAsInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_bInjectedAsInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_InputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_InputPin = { "InputPin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMInjectionInfo, InputPin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_InputPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_InputPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_OutputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMInjectionInfo, OutputPin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_OutputPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_OutputPin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMInjectionInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_UnitNode,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_bInjectedAsInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_InputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMInjectionInfo_Statics::NewProp_OutputPin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMInjectionInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMInjectionInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMInjectionInfo_Statics::ClassParams = {
		&URigVMInjectionInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMInjectionInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInjectionInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMInjectionInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInjectionInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMInjectionInfo()
	{
		if (!Z_Registration_Info_UClass_URigVMInjectionInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMInjectionInfo.OuterSingleton, Z_Construct_UClass_URigVMInjectionInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMInjectionInfo.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMInjectionInfo>()
	{
		return URigVMInjectionInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMInjectionInfo);
	URigVMInjectionInfo::~URigVMInjectionInfo() {}
	DEFINE_FUNCTION(URigVMPin::execGetGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMNode**)Z_Param__Result=P_THIS->GetNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetTargetLinks)
	{
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMLink*>*)Z_Param__Result=P_THIS->GetTargetLinks(Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetSourceLinks)
	{
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMLink*>*)Z_Param__Result=P_THIS->GetSourceLinks(Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetLinkedTargetPins)
	{
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetLinkedTargetPins(Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetLinkedSourcePins)
	{
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetLinkedSourcePins(Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetLinks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMLink*>*)Z_Param__Result=P_THIS->GetLinks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsLinkedTo)
	{
		P_GET_OBJECT(URigVMPin,Z_Param_InPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkedTo(Z_Param_InPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execFindSubPin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPinPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->FindSubPin(Z_Param_InPinPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetSubPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetSubPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetOriginalPinFromInjectedNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetOriginalPinFromInjectedNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execFindLinkForPin)
	{
		P_GET_OBJECT(URigVMPin,Z_Param_InOtherPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMLink**)Z_Param__Result=P_THIS->FindLinkForPin(Z_Param_InOtherPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetPinForLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetPinForLink();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsRootPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRootPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetRootPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetRootPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetParentPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetParentPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetEnum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnum**)Z_Param__Result=P_THIS->GetEnum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetScriptStruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptStruct**)Z_Param__Result=P_THIS->GetScriptStruct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetCPPTypeObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetCPPTypeObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetToolTipText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetToolTipText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetCustomWidgetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCustomWidgetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetDefaultValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefaultValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsFixedSizeArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFixedSizeArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execContainsWildCardSubPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsWildCardSubPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsWildCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWildCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsExecuteContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecuteContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsStringType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStringType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetArrayElementCppType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetArrayElementCppType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetCPPType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCPPType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetArraySize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetArraySize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetAbsolutePinIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbsolutePinIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetPinIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPinIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsLazy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLazy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsReferenceCountedContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReferenceCountedContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsDynamicArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDynamicArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsArrayElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsArrayElement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsUObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsStructMember)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStructMember();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsStruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStruct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsEnum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execRequiresWatch)
	{
		P_GET_UBOOL(Z_Param_bCheckExposedPinChain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequiresWatch(Z_Param_bCheckExposedPinChain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsDefinedAsConstant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDefinedAsConstant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execIsExpanded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExpanded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERigVMPinDirection*)Z_Param__Result=P_THIS->GetDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetSegmentPath)
	{
		P_GET_UBOOL(Z_Param_bIncludeRootPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSegmentPath(Z_Param_bIncludeRootPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetSubPinPath)
	{
		P_GET_OBJECT(URigVMPin,Z_Param_InParentPin);
		P_GET_UBOOL(Z_Param_bIncludeParentPinName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSubPinPath(Z_Param_InParentPin,Z_Param_bIncludeParentPinName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMPin::execGetPinPath)
	{
		P_GET_UBOOL(Z_Param_bUseNodePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPinPath(Z_Param_bUseNodePath);
		P_NATIVE_END;
	}
	void URigVMPin::StaticRegisterNativesURigVMPin()
	{
		UClass* Class = URigVMPin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsWildCardSubPin", &URigVMPin::execContainsWildCardSubPin },
			{ "FindLinkForPin", &URigVMPin::execFindLinkForPin },
			{ "FindSubPin", &URigVMPin::execFindSubPin },
			{ "GetAbsolutePinIndex", &URigVMPin::execGetAbsolutePinIndex },
			{ "GetArrayElementCppType", &URigVMPin::execGetArrayElementCppType },
			{ "GetArraySize", &URigVMPin::execGetArraySize },
			{ "GetCPPType", &URigVMPin::execGetCPPType },
			{ "GetCPPTypeObject", &URigVMPin::execGetCPPTypeObject },
			{ "GetCustomWidgetName", &URigVMPin::execGetCustomWidgetName },
			{ "GetDefaultValue", &URigVMPin::execGetDefaultValue },
			{ "GetDirection", &URigVMPin::execGetDirection },
			{ "GetDisplayName", &URigVMPin::execGetDisplayName },
			{ "GetEnum", &URigVMPin::execGetEnum },
			{ "GetGraph", &URigVMPin::execGetGraph },
			{ "GetLinkedSourcePins", &URigVMPin::execGetLinkedSourcePins },
			{ "GetLinkedTargetPins", &URigVMPin::execGetLinkedTargetPins },
			{ "GetLinks", &URigVMPin::execGetLinks },
			{ "GetNode", &URigVMPin::execGetNode },
			{ "GetOriginalPinFromInjectedNode", &URigVMPin::execGetOriginalPinFromInjectedNode },
			{ "GetParentPin", &URigVMPin::execGetParentPin },
			{ "GetPinForLink", &URigVMPin::execGetPinForLink },
			{ "GetPinIndex", &URigVMPin::execGetPinIndex },
			{ "GetPinPath", &URigVMPin::execGetPinPath },
			{ "GetRootPin", &URigVMPin::execGetRootPin },
			{ "GetScriptStruct", &URigVMPin::execGetScriptStruct },
			{ "GetSegmentPath", &URigVMPin::execGetSegmentPath },
			{ "GetSourceLinks", &URigVMPin::execGetSourceLinks },
			{ "GetSubPinPath", &URigVMPin::execGetSubPinPath },
			{ "GetSubPins", &URigVMPin::execGetSubPins },
			{ "GetTargetLinks", &URigVMPin::execGetTargetLinks },
			{ "GetToolTipText", &URigVMPin::execGetToolTipText },
			{ "IsArray", &URigVMPin::execIsArray },
			{ "IsArrayElement", &URigVMPin::execIsArrayElement },
			{ "IsDefinedAsConstant", &URigVMPin::execIsDefinedAsConstant },
			{ "IsDynamicArray", &URigVMPin::execIsDynamicArray },
			{ "IsEnum", &URigVMPin::execIsEnum },
			{ "IsExecuteContext", &URigVMPin::execIsExecuteContext },
			{ "IsExpanded", &URigVMPin::execIsExpanded },
			{ "IsFixedSizeArray", &URigVMPin::execIsFixedSizeArray },
			{ "IsInterface", &URigVMPin::execIsInterface },
			{ "IsLazy", &URigVMPin::execIsLazy },
			{ "IsLinkedTo", &URigVMPin::execIsLinkedTo },
			{ "IsReferenceCountedContainer", &URigVMPin::execIsReferenceCountedContainer },
			{ "IsRootPin", &URigVMPin::execIsRootPin },
			{ "IsStringType", &URigVMPin::execIsStringType },
			{ "IsStruct", &URigVMPin::execIsStruct },
			{ "IsStructMember", &URigVMPin::execIsStructMember },
			{ "IsUObject", &URigVMPin::execIsUObject },
			{ "IsWildCard", &URigVMPin::execIsWildCard },
			{ "RequiresWatch", &URigVMPin::execRequiresWatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics
	{
		struct RigVMPin_eventContainsWildCardSubPin_Parms
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
	void Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventContainsWildCardSubPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventContainsWildCardSubPin_Parms), &Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if any of the subpins is a wildcard\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if any of the subpins is a wildcard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "ContainsWildCardSubPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::RigVMPin_eventContainsWildCardSubPin_Parms), Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics
	{
		struct RigVMPin_eventFindLinkForPin_Parms
		{
			const URigVMPin* InOtherPin;
			URigVMLink* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOtherPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOtherPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::NewProp_InOtherPin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::NewProp_InOtherPin = { "InOtherPin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventFindLinkForPin_Parms, InOtherPin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::NewProp_InOtherPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::NewProp_InOtherPin_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventFindLinkForPin_Parms, ReturnValue), Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::NewProp_InOtherPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the link that represents the connection\n// between this pin and InOtherPin. nullptr is returned\n// if the pins are not connected.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the link that represents the connection\nbetween this pin and InOtherPin. nullptr is returned\nif the pins are not connected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "FindLinkForPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::RigVMPin_eventFindLinkForPin_Parms), Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_FindLinkForPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_FindLinkForPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_FindSubPin_Statics
	{
		struct RigVMPin_eventFindSubPin_Parms
		{
			FString InPinPath;
			URigVMPin* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPinPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPinPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::NewProp_InPinPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::NewProp_InPinPath = { "InPinPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventFindSubPin_Parms, InPinPath), METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::NewProp_InPinPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::NewProp_InPinPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventFindSubPin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::NewProp_InPinPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns a SubPin given a name / path or nullptr.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns a SubPin given a name / path or nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "FindSubPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::RigVMPin_eventFindSubPin_Parms), Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_FindSubPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_FindSubPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics
	{
		struct RigVMPin_eventGetAbsolutePinIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetAbsolutePinIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the absolute index of the Pin within the node / parent Pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the absolute index of the Pin within the node / parent Pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetAbsolutePinIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::RigVMPin_eventGetAbsolutePinIndex_Parms), Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics
	{
		struct RigVMPin_eventGetArrayElementCppType_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetArrayElementCppType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the C++ data type of an element of the Pin array\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the C++ data type of an element of the Pin array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetArrayElementCppType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::RigVMPin_eventGetArrayElementCppType_Parms), Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetArrayElementCppType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetArrayElementCppType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetArraySize_Statics
	{
		struct RigVMPin_eventGetArraySize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetArraySize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the number of elements within an array Pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the number of elements within an array Pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetArraySize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::RigVMPin_eventGetArraySize_Parms), Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetArraySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetArraySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetCPPType_Statics
	{
		struct RigVMPin_eventGetCPPType_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetCPPType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the C++ data type of the pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the C++ data type of the pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetCPPType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::RigVMPin_eventGetCPPType_Parms), Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetCPPType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetCPPType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics
	{
		struct RigVMPin_eventGetCPPTypeObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetCPPTypeObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the struct of the data type of the Pin,\n// or nullptr otherwise.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the struct of the data type of the Pin,\nor nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetCPPTypeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::RigVMPin_eventGetCPPTypeObject_Parms), Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetCPPTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetCPPTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics
	{
		struct RigVMPin_eventGetCustomWidgetName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetCustomWidgetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the name of a custom widget to be used\n// for editing the Pin.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the name of a custom widget to be used\nfor editing the Pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetCustomWidgetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::RigVMPin_eventGetCustomWidgetName_Parms), Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetCustomWidgetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetCustomWidgetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics
	{
		struct RigVMPin_eventGetDefaultValue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the default value of the Pin as a string.\n// Note that this value is computed based on the Pin's\n// SubPins - so for example for a FVector typed Pin\n// the default value is actually composed out of the\n// default values of the X, Y and Z SubPins.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the default value of the Pin as a string.\nNote that this value is computed based on the Pin's\nSubPins - so for example for a FVector typed Pin\nthe default value is actually composed out of the\ndefault values of the X, Y and Z SubPins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::RigVMPin_eventGetDefaultValue_Parms), Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetDirection_Statics
	{
		struct RigVMPin_eventGetDirection_Parms
		{
			ERigVMPinDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigVMPin_GetDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigVMPin_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetDirection_Parms, ReturnValue), Z_Construct_UEnum_RigVM_ERigVMPinDirection, METADATA_PARAMS(nullptr, 0) }; // 4092277362
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the direction of the pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the direction of the pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetDirection_Statics::RigVMPin_eventGetDirection_Parms), Z_Construct_UFunction_URigVMPin_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics
	{
		struct RigVMPin_eventGetDisplayName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the display label of the pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the display label of the pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::RigVMPin_eventGetDisplayName_Parms), Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetEnum_Statics
	{
		struct RigVMPin_eventGetEnum_Parms
		{
			UEnum* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetEnum_Parms, ReturnValue), Z_Construct_UClass_UEnum, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the enum of the data type of the Pin,\n// or nullptr otherwise.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the enum of the data type of the Pin,\nor nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetEnum", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetEnum_Statics::RigVMPin_eventGetEnum_Parms), Z_Construct_UFunction_URigVMPin_GetEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetGraph_Statics
	{
		struct RigVMPin_eventGetGraph_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the graph of this Pin.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the graph of this Pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetGraph_Statics::RigVMPin_eventGetGraph_Parms), Z_Construct_UFunction_URigVMPin_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics
	{
		struct RigVMPin_eventGetLinkedSourcePins_Parms
		{
			bool bRecursive;
			TArray<URigVMPin*> ReturnValue;
		};
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigVMPin_eventGetLinkedSourcePins_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventGetLinkedSourcePins_Parms), &Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetLinkedSourcePins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns all of the linked source Pins,\n// using this Pin as the target.\n" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns all of the linked source Pins,\nusing this Pin as the target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetLinkedSourcePins", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::RigVMPin_eventGetLinkedSourcePins_Parms), Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics
	{
		struct RigVMPin_eventGetLinkedTargetPins_Parms
		{
			bool bRecursive;
			TArray<URigVMPin*> ReturnValue;
		};
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigVMPin_eventGetLinkedTargetPins_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventGetLinkedTargetPins_Parms), &Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetLinkedTargetPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns all of the linked target Pins,\n// using this Pin as the source.\n" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns all of the linked target Pins,\nusing this Pin as the source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetLinkedTargetPins", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::RigVMPin_eventGetLinkedTargetPins_Parms), Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetLinks_Statics
	{
		struct RigVMPin_eventGetLinks_Parms
		{
			TArray<URigVMLink*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetLinks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetLinks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMPin_GetLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetLinks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetLinks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetLinks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns all of the links linked to this Pin.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns all of the links linked to this Pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetLinks", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetLinks_Statics::RigVMPin_eventGetLinks_Parms), Z_Construct_UFunction_URigVMPin_GetLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetNode_Statics
	{
		struct RigVMPin_eventGetNode_Parms
		{
			URigVMNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetNode_Parms, ReturnValue), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the node of this Pin.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the node of this Pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetNode_Statics::RigVMPin_eventGetNode_Parms), Z_Construct_UFunction_URigVMPin_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics
	{
		struct RigVMPin_eventGetOriginalPinFromInjectedNode_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetOriginalPinFromInjectedNode_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the original pin for a pin on an injected\n// node. This can be used to determine where a link\n// should go in the user interface\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the original pin for a pin on an injected\nnode. This can be used to determine where a link\nshould go in the user interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetOriginalPinFromInjectedNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::RigVMPin_eventGetOriginalPinFromInjectedNode_Parms), Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetParentPin_Statics
	{
		struct RigVMPin_eventGetParentPin_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetParentPin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the parent Pin - or nullptr if the Pin\n// is nested directly below a node.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the parent Pin - or nullptr if the Pin\nis nested directly below a node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetParentPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::RigVMPin_eventGetParentPin_Parms), Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetParentPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetParentPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics
	{
		struct RigVMPin_eventGetPinForLink_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetPinForLink_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the pin to be used for a link.\n// This might differ from this actual pin, since\n// the pin might contain injected nodes.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the pin to be used for a link.\nThis might differ from this actual pin, since\nthe pin might contain injected nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetPinForLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::RigVMPin_eventGetPinForLink_Parms), Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetPinForLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetPinForLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics
	{
		struct RigVMPin_eventGetPinIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetPinIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the index of the Pin within the node / parent Pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the index of the Pin within the node / parent Pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetPinIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::RigVMPin_eventGetPinIndex_Parms), Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetPinIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetPinIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetPinPath_Statics
	{
		struct RigVMPin_eventGetPinPath_Parms
		{
			bool bUseNodePath;
			FString ReturnValue;
		};
		static void NewProp_bUseNodePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNodePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::NewProp_bUseNodePath_SetBit(void* Obj)
	{
		((RigVMPin_eventGetPinPath_Parms*)Obj)->bUseNodePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::NewProp_bUseNodePath = { "bUseNodePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventGetPinPath_Parms), &Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::NewProp_bUseNodePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetPinPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::NewProp_bUseNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns a . separated path containing all names of the pin and its owners,\n// this includes the node name, for example \"Node.Color.R\"\n" },
		{ "CPP_Default_bUseNodePath", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns a . separated path containing all names of the pin and its owners,\nthis includes the node name, for example \"Node.Color.R\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetPinPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::RigVMPin_eventGetPinPath_Parms), Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetPinPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetPinPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetRootPin_Statics
	{
		struct RigVMPin_eventGetRootPin_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetRootPin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the top-most parent Pin, so for example\n// for \"Node.Transform.Translation.X\" this returns\n// the Pin for \"Node.Transform\".\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the top-most parent Pin, so for example\nfor \"Node.Transform.Translation.X\" this returns\nthe Pin for \"Node.Transform\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetRootPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::RigVMPin_eventGetRootPin_Parms), Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetRootPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetRootPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics
	{
		struct RigVMPin_eventGetScriptStruct_Parms
		{
			UScriptStruct* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetScriptStruct_Parms, ReturnValue), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the struct of the data type of the Pin,\n// or nullptr otherwise.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the struct of the data type of the Pin,\nor nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetScriptStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::RigVMPin_eventGetScriptStruct_Parms), Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetScriptStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetScriptStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics
	{
		struct RigVMPin_eventGetSegmentPath_Parms
		{
			bool bIncludeRootPin;
			FString ReturnValue;
		};
		static void NewProp_bIncludeRootPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeRootPin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::NewProp_bIncludeRootPin_SetBit(void* Obj)
	{
		((RigVMPin_eventGetSegmentPath_Parms*)Obj)->bIncludeRootPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::NewProp_bIncludeRootPin = { "bIncludeRootPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventGetSegmentPath_Parms), &Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::NewProp_bIncludeRootPin_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetSegmentPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::NewProp_bIncludeRootPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns a . separated path containing all names of the pin within its main\n// memory owner / storage. This is typically used to create an offset pointer\n// within memory (FRigVMRegisterOffset).\n// So for example for a PinPath such as \"Node.Transform.Translation.X\" the \n// corresponding SegmentPath is \"Translation.X\", since the transform is the\n// storage / memory.\n" },
		{ "CPP_Default_bIncludeRootPin", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns a . separated path containing all names of the pin within its main\nmemory owner / storage. This is typically used to create an offset pointer\nwithin memory (FRigVMRegisterOffset).\nSo for example for a PinPath such as \"Node.Transform.Translation.X\" the\ncorresponding SegmentPath is \"Translation.X\", since the transform is the\nstorage / memory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetSegmentPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::RigVMPin_eventGetSegmentPath_Parms), Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetSegmentPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetSegmentPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics
	{
		struct RigVMPin_eventGetSourceLinks_Parms
		{
			bool bRecursive;
			TArray<URigVMLink*> ReturnValue;
		};
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigVMPin_eventGetSourceLinks_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventGetSourceLinks_Parms), &Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetSourceLinks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns all of the source pins\n// using this Pin as the target.\n" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns all of the source pins\nusing this Pin as the target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetSourceLinks", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::RigVMPin_eventGetSourceLinks_Parms), Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetSourceLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetSourceLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics
	{
		struct RigVMPin_eventGetSubPinPath_Parms
		{
			const URigVMPin* InParentPin;
			bool bIncludeParentPinName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParentPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentPin;
		static void NewProp_bIncludeParentPinName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeParentPinName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_InParentPin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_InParentPin = { "InParentPin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetSubPinPath_Parms, InParentPin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_InParentPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_InParentPin_MetaData)) };
	void Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_bIncludeParentPinName_SetBit(void* Obj)
	{
		((RigVMPin_eventGetSubPinPath_Parms*)Obj)->bIncludeParentPinName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_bIncludeParentPinName = { "bIncludeParentPinName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventGetSubPinPath_Parms), &Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_bIncludeParentPinName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetSubPinPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_InParentPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_bIncludeParentPinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns a . separated path containing all names of the pin and its owners\n// until we hit the provided parent pin.\n" },
		{ "CPP_Default_bIncludeParentPinName", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns a . separated path containing all names of the pin and its owners\nuntil we hit the provided parent pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetSubPinPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::RigVMPin_eventGetSubPinPath_Parms), Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetSubPinPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetSubPinPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetSubPins_Statics
	{
		struct RigVMPin_eventGetSubPins_Parms
		{
			TArray<URigVMPin*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetSubPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns all of the SubPins of this one.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns all of the SubPins of this one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetSubPins", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::RigVMPin_eventGetSubPins_Parms), Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetSubPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetSubPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics
	{
		struct RigVMPin_eventGetTargetLinks_Parms
		{
			bool bRecursive;
			TArray<URigVMLink*> ReturnValue;
		};
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigVMPin_eventGetTargetLinks_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventGetTargetLinks_Parms), &Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetTargetLinks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns all of the target links,\n// using this Pin as the source.\n" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns all of the target links,\nusing this Pin as the source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetTargetLinks", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::RigVMPin_eventGetTargetLinks_Parms), Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetTargetLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetTargetLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics
	{
		struct RigVMPin_eventGetToolTipText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventGetToolTipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns the tooltip of this pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns the tooltip of this pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "GetToolTipText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::RigVMPin_eventGetToolTipText_Parms), Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_GetToolTipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_GetToolTipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsArray_Statics
	{
		struct RigVMPin_eventIsArray_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsArray_Parms), &Z_Construct_UFunction_URigVMPin_IsArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the data type of the Pin is an array\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the data type of the Pin is an array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsArray_Statics::RigVMPin_eventIsArray_Parms), Z_Construct_UFunction_URigVMPin_IsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics
	{
		struct RigVMPin_eventIsArrayElement_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsArrayElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsArrayElement_Parms), &Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the Pin is a SubPin within an array\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the Pin is a SubPin within an array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsArrayElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::RigVMPin_eventIsArrayElement_Parms), Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsArrayElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsArrayElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics
	{
		struct RigVMPin_eventIsDefinedAsConstant_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsDefinedAsConstant_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsDefinedAsConstant_Parms), &Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the pin is defined as a constant value / literal\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the pin is defined as a constant value / literal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsDefinedAsConstant", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::RigVMPin_eventIsDefinedAsConstant_Parms), Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics
	{
		struct RigVMPin_eventIsDynamicArray_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsDynamicArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsDynamicArray_Parms), &Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if this pin represents a dynamic array\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if this pin represents a dynamic array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsDynamicArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::RigVMPin_eventIsDynamicArray_Parms), Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsDynamicArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsDynamicArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsEnum_Statics
	{
		struct RigVMPin_eventIsEnum_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsEnum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsEnum_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsEnum_Parms), &Z_Construct_UFunction_URigVMPin_IsEnum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the data type of the Pin is a enum\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the data type of the Pin is a enum" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsEnum", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsEnum_Statics::RigVMPin_eventIsEnum_Parms), Z_Construct_UFunction_URigVMPin_IsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics
	{
		struct RigVMPin_eventIsExecuteContext_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsExecuteContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsExecuteContext_Parms), &Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the C++ data type is an execute context\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the C++ data type is an execute context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsExecuteContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::RigVMPin_eventIsExecuteContext_Parms), Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsExecuteContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsExecuteContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsExpanded_Statics
	{
		struct RigVMPin_eventIsExpanded_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsExpanded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsExpanded_Parms), &Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the pin is currently expanded\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the pin is currently expanded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsExpanded", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::RigVMPin_eventIsExpanded_Parms), Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics
	{
		struct RigVMPin_eventIsFixedSizeArray_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsFixedSizeArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsFixedSizeArray_Parms), &Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if this pin is an array that should be displayed as elements only\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if this pin is an array that should be displayed as elements only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsFixedSizeArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::RigVMPin_eventIsFixedSizeArray_Parms), Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsFixedSizeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsFixedSizeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsInterface_Statics
	{
		struct RigVMPin_eventIsInterface_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsInterface_Parms), &Z_Construct_UFunction_URigVMPin_IsInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the data type of the Pin is a interface\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the data type of the Pin is a interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsInterface_Statics::RigVMPin_eventIsInterface_Parms), Z_Construct_UFunction_URigVMPin_IsInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsLazy_Statics
	{
		struct RigVMPin_eventIsLazy_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsLazy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsLazy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsLazy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsLazy_Parms), &Z_Construct_UFunction_URigVMPin_IsLazy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsLazy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsLazy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsLazy_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if this pin's value may be executed lazily\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if this pin's value may be executed lazily" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsLazy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsLazy", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsLazy_Statics::RigVMPin_eventIsLazy_Parms), Z_Construct_UFunction_URigVMPin_IsLazy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsLazy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsLazy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsLazy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsLazy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsLazy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics
	{
		struct RigVMPin_eventIsLinkedTo_Parms
		{
			URigVMPin* InPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::NewProp_InPin = { "InPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMPin_eventIsLinkedTo_Parms, InPin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsLinkedTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsLinkedTo_Parms), &Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::NewProp_InPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if this Pin is linked to another Pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if this Pin is linked to another Pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsLinkedTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::RigVMPin_eventIsLinkedTo_Parms), Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsLinkedTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsLinkedTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics
	{
		struct RigVMPin_eventIsReferenceCountedContainer_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsReferenceCountedContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsReferenceCountedContainer_Parms), &Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if this data type is referenced counted\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if this data type is referenced counted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsReferenceCountedContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::RigVMPin_eventIsReferenceCountedContainer_Parms), Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsRootPin_Statics
	{
		struct RigVMPin_eventIsRootPin_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsRootPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsRootPin_Parms), &Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if this pin is a root pin\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if this pin is a root pin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsRootPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::RigVMPin_eventIsRootPin_Parms), Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsRootPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsRootPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsStringType_Statics
	{
		struct RigVMPin_eventIsStringType_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsStringType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsStringType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsStringType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsStringType_Parms), &Z_Construct_UFunction_URigVMPin_IsStringType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsStringType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsStringType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsStringType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the C++ data type is FString or FName\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the C++ data type is FString or FName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsStringType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsStringType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsStringType_Statics::RigVMPin_eventIsStringType_Parms), Z_Construct_UFunction_URigVMPin_IsStringType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsStringType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsStringType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsStringType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsStringType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsStringType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsStruct_Statics
	{
		struct RigVMPin_eventIsStruct_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsStruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsStruct_Parms), &Z_Construct_UFunction_URigVMPin_IsStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the data type of the Pin is a struct\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the data type of the Pin is a struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsStruct_Statics::RigVMPin_eventIsStruct_Parms), Z_Construct_UFunction_URigVMPin_IsStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsStructMember_Statics
	{
		struct RigVMPin_eventIsStructMember_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsStructMember_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsStructMember_Parms), &Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the Pin is a SubPin within a struct\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the Pin is a SubPin within a struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsStructMember", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::RigVMPin_eventIsStructMember_Parms), Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsStructMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsStructMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsUObject_Statics
	{
		struct RigVMPin_eventIsUObject_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsUObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsUObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsUObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsUObject_Parms), &Z_Construct_UFunction_URigVMPin_IsUObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsUObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsUObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsUObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the data type of the Pin is a uobject\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the data type of the Pin is a uobject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsUObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsUObject_Statics::RigVMPin_eventIsUObject_Parms), Z_Construct_UFunction_URigVMPin_IsUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsUObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsUObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsUObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_IsWildCard_Statics
	{
		struct RigVMPin_eventIsWildCard_Parms
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
	void Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventIsWildCard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventIsWildCard_Parms), &Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the C++ data type is unknown\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the C++ data type is unknown" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "IsWildCard", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::RigVMPin_eventIsWildCard_Parms), Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_IsWildCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_IsWildCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics
	{
		struct RigVMPin_eventRequiresWatch_Parms
		{
			bool bCheckExposedPinChain;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckExposedPinChain_MetaData[];
#endif
		static void NewProp_bCheckExposedPinChain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckExposedPinChain;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_bCheckExposedPinChain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_bCheckExposedPinChain_SetBit(void* Obj)
	{
		((RigVMPin_eventRequiresWatch_Parms*)Obj)->bCheckExposedPinChain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_bCheckExposedPinChain = { "bCheckExposedPinChain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventRequiresWatch_Parms), &Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_bCheckExposedPinChain_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_bCheckExposedPinChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_bCheckExposedPinChain_MetaData)) };
	void Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMPin_eventRequiresWatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMPin_eventRequiresWatch_Parms), &Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_bCheckExposedPinChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMPin" },
		{ "Comment", "// Returns true if the pin should be watched\n" },
		{ "CPP_Default_bCheckExposedPinChain", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "Returns true if the pin should be watched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMPin, nullptr, "RequiresWatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::RigVMPin_eventRequiresWatch_Parms), Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMPin_RequiresWatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMPin_RequiresWatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMPin);
	UClass* Z_Construct_UClass_URigVMPin_NoRegister()
	{
		return URigVMPin::StaticClass();
	}
	struct Z_Construct_UClass_URigVMPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConstant_MetaData[];
#endif
		static void NewProp_bIsConstant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresWatch_MetaData[];
#endif
		static void NewProp_bRequiresWatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresWatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicArray_MetaData[];
#endif
		static void NewProp_bIsDynamicArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CPPTypeObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPTypeObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomWidgetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomWidgetName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubPins;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InjectionInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InjectionInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InjectionInfos;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundVariablePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoundVariablePath;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMPin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMPin_ContainsWildCardSubPin, "ContainsWildCardSubPin" }, // 3076591358
		{ &Z_Construct_UFunction_URigVMPin_FindLinkForPin, "FindLinkForPin" }, // 2257033603
		{ &Z_Construct_UFunction_URigVMPin_FindSubPin, "FindSubPin" }, // 246169110
		{ &Z_Construct_UFunction_URigVMPin_GetAbsolutePinIndex, "GetAbsolutePinIndex" }, // 500673579
		{ &Z_Construct_UFunction_URigVMPin_GetArrayElementCppType, "GetArrayElementCppType" }, // 2742983520
		{ &Z_Construct_UFunction_URigVMPin_GetArraySize, "GetArraySize" }, // 1594278194
		{ &Z_Construct_UFunction_URigVMPin_GetCPPType, "GetCPPType" }, // 472124350
		{ &Z_Construct_UFunction_URigVMPin_GetCPPTypeObject, "GetCPPTypeObject" }, // 1984605137
		{ &Z_Construct_UFunction_URigVMPin_GetCustomWidgetName, "GetCustomWidgetName" }, // 2205932796
		{ &Z_Construct_UFunction_URigVMPin_GetDefaultValue, "GetDefaultValue" }, // 739285120
		{ &Z_Construct_UFunction_URigVMPin_GetDirection, "GetDirection" }, // 4053115133
		{ &Z_Construct_UFunction_URigVMPin_GetDisplayName, "GetDisplayName" }, // 1581356048
		{ &Z_Construct_UFunction_URigVMPin_GetEnum, "GetEnum" }, // 3902462949
		{ &Z_Construct_UFunction_URigVMPin_GetGraph, "GetGraph" }, // 3329702457
		{ &Z_Construct_UFunction_URigVMPin_GetLinkedSourcePins, "GetLinkedSourcePins" }, // 1870829382
		{ &Z_Construct_UFunction_URigVMPin_GetLinkedTargetPins, "GetLinkedTargetPins" }, // 1668579046
		{ &Z_Construct_UFunction_URigVMPin_GetLinks, "GetLinks" }, // 145497953
		{ &Z_Construct_UFunction_URigVMPin_GetNode, "GetNode" }, // 1345060717
		{ &Z_Construct_UFunction_URigVMPin_GetOriginalPinFromInjectedNode, "GetOriginalPinFromInjectedNode" }, // 1065191562
		{ &Z_Construct_UFunction_URigVMPin_GetParentPin, "GetParentPin" }, // 2993084422
		{ &Z_Construct_UFunction_URigVMPin_GetPinForLink, "GetPinForLink" }, // 2106737188
		{ &Z_Construct_UFunction_URigVMPin_GetPinIndex, "GetPinIndex" }, // 3517926744
		{ &Z_Construct_UFunction_URigVMPin_GetPinPath, "GetPinPath" }, // 601208240
		{ &Z_Construct_UFunction_URigVMPin_GetRootPin, "GetRootPin" }, // 2567122427
		{ &Z_Construct_UFunction_URigVMPin_GetScriptStruct, "GetScriptStruct" }, // 2152271827
		{ &Z_Construct_UFunction_URigVMPin_GetSegmentPath, "GetSegmentPath" }, // 2585915039
		{ &Z_Construct_UFunction_URigVMPin_GetSourceLinks, "GetSourceLinks" }, // 4037262454
		{ &Z_Construct_UFunction_URigVMPin_GetSubPinPath, "GetSubPinPath" }, // 143950019
		{ &Z_Construct_UFunction_URigVMPin_GetSubPins, "GetSubPins" }, // 881135666
		{ &Z_Construct_UFunction_URigVMPin_GetTargetLinks, "GetTargetLinks" }, // 3618702663
		{ &Z_Construct_UFunction_URigVMPin_GetToolTipText, "GetToolTipText" }, // 4244500327
		{ &Z_Construct_UFunction_URigVMPin_IsArray, "IsArray" }, // 1437275089
		{ &Z_Construct_UFunction_URigVMPin_IsArrayElement, "IsArrayElement" }, // 275759360
		{ &Z_Construct_UFunction_URigVMPin_IsDefinedAsConstant, "IsDefinedAsConstant" }, // 3748604609
		{ &Z_Construct_UFunction_URigVMPin_IsDynamicArray, "IsDynamicArray" }, // 3595543005
		{ &Z_Construct_UFunction_URigVMPin_IsEnum, "IsEnum" }, // 1714060968
		{ &Z_Construct_UFunction_URigVMPin_IsExecuteContext, "IsExecuteContext" }, // 819467354
		{ &Z_Construct_UFunction_URigVMPin_IsExpanded, "IsExpanded" }, // 582884203
		{ &Z_Construct_UFunction_URigVMPin_IsFixedSizeArray, "IsFixedSizeArray" }, // 876812664
		{ &Z_Construct_UFunction_URigVMPin_IsInterface, "IsInterface" }, // 649825302
		{ &Z_Construct_UFunction_URigVMPin_IsLazy, "IsLazy" }, // 3533599069
		{ &Z_Construct_UFunction_URigVMPin_IsLinkedTo, "IsLinkedTo" }, // 663820585
		{ &Z_Construct_UFunction_URigVMPin_IsReferenceCountedContainer, "IsReferenceCountedContainer" }, // 273587048
		{ &Z_Construct_UFunction_URigVMPin_IsRootPin, "IsRootPin" }, // 510304096
		{ &Z_Construct_UFunction_URigVMPin_IsStringType, "IsStringType" }, // 3699254923
		{ &Z_Construct_UFunction_URigVMPin_IsStruct, "IsStruct" }, // 3159209679
		{ &Z_Construct_UFunction_URigVMPin_IsStructMember, "IsStructMember" }, // 3312767271
		{ &Z_Construct_UFunction_URigVMPin_IsUObject, "IsUObject" }, // 1492770873
		{ &Z_Construct_UFunction_URigVMPin_IsWildCard, "IsWildCard" }, // 106694534
		{ &Z_Construct_UFunction_URigVMPin_RequiresWatch, "RequiresWatch" }, // 2352859435
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Pin represents a single connector / pin on a node in the RigVM model.\n * Pins can be connected based on rules. Pins also provide access to a 'PinPath',\n * which essentially represents . separated list of names to reach the pin within\n * the owning graph. PinPaths are unique.\n * In comparison to the EdGraph Pin the URigVMPin supports the concept of 'SubPins',\n * so child / parent relationships between pins. A FVector Pin for example might\n * have its X, Y and Z components as SubPins. Array Pins will have its elements as\n * SubPins, and so on.\n * A URigVMPin is owned solely by a URigVMNode.\n */" },
		{ "IncludePath", "RigVMModel/RigVMPin.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "The Pin represents a single connector / pin on a node in the RigVM model.\nPins can be connected based on rules. Pins also provide access to a 'PinPath',\nwhich essentially represents . separated list of names to reach the pin within\nthe owning graph. PinPaths are unique.\nIn comparison to the EdGraph Pin the URigVMPin supports the concept of 'SubPins',\nso child / parent relationships between pins. A FVector Pin for example might\nhave its X, Y and Z components as SubPins. Array Pins will have its elements as\nSubPins, and so on.\nA URigVMPin is owned solely by a URigVMNode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, DisplayName), METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_Direction_MetaData[] = {
		{ "Comment", "// if new members are added to the pin in the future \n// it is important to search for all existing usages of all members\n// to make sure things are copied/initialized properly\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "if new members are added to the pin in the future\nit is important to search for all existing usages of all members\nto make sure things are copied/initialized properly" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, Direction), Z_Construct_UEnum_RigVM_ERigVMPinDirection, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_Direction_MetaData)) }; // 4092277362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	void Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((URigVMPin*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMPin), &Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	void Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsConstant_SetBit(void* Obj)
	{
		((URigVMPin*)Obj)->bIsConstant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsConstant = { "bIsConstant", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMPin), &Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsConstant_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_bRequiresWatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	void Z_Construct_UClass_URigVMPin_Statics::NewProp_bRequiresWatch_SetBit(void* Obj)
	{
		((URigVMPin*)Obj)->bRequiresWatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_bRequiresWatch = { "bRequiresWatch", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMPin), &Z_Construct_UClass_URigVMPin_Statics::NewProp_bRequiresWatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_bRequiresWatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_bRequiresWatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsDynamicArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	void Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsDynamicArray_SetBit(void* Obj)
	{
		((URigVMPin*)Obj)->bIsDynamicArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsDynamicArray = { "bIsDynamicArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMPin), &Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsDynamicArray_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsDynamicArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsDynamicArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, CPPType), METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObject_MetaData[] = {
		{ "Comment", "// serialize object ptr here to keep track of the latest version of the type object,\n// type object can reference assets like user defined struct, which can be renamed\n// or moved to new locations, serializing the type object with the pin\n// ensure automatic update whenever those things happen\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
		{ "ToolTip", "serialize object ptr here to keep track of the latest version of the type object,\ntype object can reference assets like user defined struct, which can be renamed\nor moved to new locations, serializing the type object with the pin\nensure automatic update whenever those things happen" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObjectPath = { "CPPTypeObjectPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, CPPTypeObjectPath), METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_CustomWidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_CustomWidgetName = { "CustomWidgetName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, CustomWidgetName), METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_CustomWidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_CustomWidgetName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_SubPins_Inner = { "SubPins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_SubPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_SubPins = { "SubPins", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, SubPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_SubPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_SubPins_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_Links_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_Links_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_InjectionInfos_Inner = { "InjectionInfos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMInjectionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_InjectionInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_InjectionInfos = { "InjectionInfos", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, InjectionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_InjectionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_InjectionInfos_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMPin_Statics::NewProp_BoundVariablePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMPin.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMPin_Statics::NewProp_BoundVariablePath = { "BoundVariablePath", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMPin, BoundVariablePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::NewProp_BoundVariablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::NewProp_BoundVariablePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_bRequiresWatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_bIsDynamicArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_CPPTypeObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_CustomWidgetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_SubPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_SubPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_InjectionInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_InjectionInfos,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMPin_Statics::NewProp_BoundVariablePath,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMPin_Statics::ClassParams = {
		&URigVMPin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMPin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMPin()
	{
		if (!Z_Registration_Info_UClass_URigVMPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMPin.OuterSingleton, Z_Construct_UClass_URigVMPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMPin.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMPin>()
	{
		return URigVMPin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMPin);
	URigVMPin::~URigVMPin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMInjectionInfo, URigVMInjectionInfo::StaticClass, TEXT("URigVMInjectionInfo"), &Z_Registration_Info_UClass_URigVMInjectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMInjectionInfo), 1384969509U) },
		{ Z_Construct_UClass_URigVMPin, URigVMPin::StaticClass, TEXT("URigVMPin"), &Z_Registration_Info_UClass_URigVMPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMPin), 2351422733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_3772996224(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
