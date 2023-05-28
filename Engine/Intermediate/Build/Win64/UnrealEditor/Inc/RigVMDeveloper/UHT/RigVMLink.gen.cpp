// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMLink.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMLink() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLink();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLink_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMLink::execGetPinPathRepresentation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPinPathRepresentation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMLink::execGetOppositePin)
	{
		P_GET_OBJECT(URigVMPin,Z_Param_InPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetOppositePin(Z_Param_InPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMLink::execGetTargetPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetTargetPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMLink::execGetSourcePin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetSourcePin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMLink::execGetGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMLink::execGetLinkIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLinkIndex();
		P_NATIVE_END;
	}
	void URigVMLink::StaticRegisterNativesURigVMLink()
	{
		UClass* Class = URigVMLink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraph", &URigVMLink::execGetGraph },
			{ "GetLinkIndex", &URigVMLink::execGetLinkIndex },
			{ "GetOppositePin", &URigVMLink::execGetOppositePin },
			{ "GetPinPathRepresentation", &URigVMLink::execGetPinPathRepresentation },
			{ "GetSourcePin", &URigVMLink::execGetSourcePin },
			{ "GetTargetPin", &URigVMLink::execGetTargetPin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMLink_GetGraph_Statics
	{
		struct RigVMLink_eventGetGraph_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMLink_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLink_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLink_GetGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLink_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLink_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLink" },
		{ "Comment", "// Returns the Link's owning Graph/\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
		{ "ToolTip", "Returns the Link's owning Graph/" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLink_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLink, nullptr, "GetGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLink_GetGraph_Statics::RigVMLink_eventGetGraph_Parms), Z_Construct_UFunction_URigVMLink_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLink_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLink_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLink_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics
	{
		struct RigVMLink_eventGetLinkIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLink_eventGetLinkIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLink" },
		{ "Comment", "// Returns the current index of this Link within its owning Graph.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
		{ "ToolTip", "Returns the current index of this Link within its owning Graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLink, nullptr, "GetLinkIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::RigVMLink_eventGetLinkIndex_Parms), Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLink_GetLinkIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLink_GetLinkIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics
	{
		struct RigVMLink_eventGetOppositePin_Parms
		{
			const URigVMPin* InPin;
			URigVMPin* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::NewProp_InPin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::NewProp_InPin = { "InPin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLink_eventGetOppositePin_Parms, InPin), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::NewProp_InPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::NewProp_InPin_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLink_eventGetOppositePin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::NewProp_InPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLink" },
		{ "Comment", "// Returns the opposite Pin of this Link given one of its edges (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
		{ "ToolTip", "Returns the opposite Pin of this Link given one of its edges (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLink, nullptr, "GetOppositePin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::RigVMLink_eventGetOppositePin_Parms), Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLink_GetOppositePin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLink_GetOppositePin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics
	{
		struct RigVMLink_eventGetPinPathRepresentation_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLink_eventGetPinPathRepresentation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLink" },
		{ "Comment", "// Returns a string representation of the Link,\n// for example: \"NodeA.Color.R -> NodeB.Translation.X\"\n// note: can be split again using SplitPinPathRepresentation\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
		{ "ToolTip", "Returns a string representation of the Link,\nfor example: \"NodeA.Color.R -> NodeB.Translation.X\"\nnote: can be split again using SplitPinPathRepresentation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLink, nullptr, "GetPinPathRepresentation", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::RigVMLink_eventGetPinPathRepresentation_Parms), Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics
	{
		struct RigVMLink_eventGetSourcePin_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLink_eventGetSourcePin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLink" },
		{ "Comment", "// Returns the source Pin of this Link (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
		{ "ToolTip", "Returns the source Pin of this Link (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLink, nullptr, "GetSourcePin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::RigVMLink_eventGetSourcePin_Parms), Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLink_GetSourcePin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLink_GetSourcePin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics
	{
		struct RigVMLink_eventGetTargetPin_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLink_eventGetTargetPin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLink" },
		{ "Comment", "// Returns the target Pin of this Link (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
		{ "ToolTip", "Returns the target Pin of this Link (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLink, nullptr, "GetTargetPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::RigVMLink_eventGetTargetPin_Parms), Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLink_GetTargetPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLink_GetTargetPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMLink);
	UClass* Z_Construct_UClass_URigVMLink_NoRegister()
	{
		return URigVMLink::StaticClass();
	}
	struct Z_Construct_UClass_URigVMLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePinPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePinPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPinPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPinPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMLink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMLink_GetGraph, "GetGraph" }, // 2927250732
		{ &Z_Construct_UFunction_URigVMLink_GetLinkIndex, "GetLinkIndex" }, // 2344754455
		{ &Z_Construct_UFunction_URigVMLink_GetOppositePin, "GetOppositePin" }, // 1804119131
		{ &Z_Construct_UFunction_URigVMLink_GetPinPathRepresentation, "GetPinPathRepresentation" }, // 2743410949
		{ &Z_Construct_UFunction_URigVMLink_GetSourcePin, "GetSourcePin" }, // 3012468337
		{ &Z_Construct_UFunction_URigVMLink_GetTargetPin, "GetTargetPin" }, // 3702180756
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMLink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Link represents a connection between two Pins\n * within a Graph. The Link can be accessed on the \n * Graph itself - or through the URigVMPin::GetLinks()\n * method.\n */" },
		{ "IncludePath", "RigVMModel/RigVMLink.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
		{ "ToolTip", "The Link represents a connection between two Pins\nwithin a Graph. The Link can be accessed on the\nGraph itself - or through the URigVMPin::GetLinks()\nmethod." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMLink_Statics::NewProp_SourcePinPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMLink_Statics::NewProp_SourcePinPath = { "SourcePinPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMLink, SourcePinPath), METADATA_PARAMS(Z_Construct_UClass_URigVMLink_Statics::NewProp_SourcePinPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMLink_Statics::NewProp_SourcePinPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMLink_Statics::NewProp_TargetPinPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMLink.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMLink_Statics::NewProp_TargetPinPath = { "TargetPinPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMLink, TargetPinPath), METADATA_PARAMS(Z_Construct_UClass_URigVMLink_Statics::NewProp_TargetPinPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMLink_Statics::NewProp_TargetPinPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMLink_Statics::NewProp_SourcePinPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMLink_Statics::NewProp_TargetPinPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMLink_Statics::ClassParams = {
		&URigVMLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMLink_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMLink()
	{
		if (!Z_Registration_Info_UClass_URigVMLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMLink.OuterSingleton, Z_Construct_UClass_URigVMLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMLink.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMLink>()
	{
		return URigVMLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMLink);
	URigVMLink::~URigVMLink() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMLink)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMLink, URigVMLink::StaticClass, TEXT("URigVMLink"), &Z_Registration_Info_UClass_URigVMLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMLink), 2752908739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_869658352(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
