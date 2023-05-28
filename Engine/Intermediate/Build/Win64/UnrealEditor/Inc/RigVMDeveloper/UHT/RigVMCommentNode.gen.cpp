// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMCommentNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMCommentNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCommentNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCommentNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMCommentNode::execGetCommentColorBubble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCommentColorBubble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMCommentNode::execGetCommentBubbleVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCommentBubbleVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMCommentNode::execGetCommentFontSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCommentFontSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMCommentNode::execGetCommentText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCommentText();
		P_NATIVE_END;
	}
	void URigVMCommentNode::StaticRegisterNativesURigVMCommentNode()
	{
		UClass* Class = URigVMCommentNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCommentBubbleVisible", &URigVMCommentNode::execGetCommentBubbleVisible },
			{ "GetCommentColorBubble", &URigVMCommentNode::execGetCommentColorBubble },
			{ "GetCommentFontSize", &URigVMCommentNode::execGetCommentFontSize },
			{ "GetCommentText", &URigVMCommentNode::execGetCommentText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics
	{
		struct RigVMCommentNode_eventGetCommentBubbleVisible_Parms
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
	void Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMCommentNode_eventGetCommentBubbleVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMCommentNode_eventGetCommentBubbleVisible_Parms), &Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMCommentNode" },
		{ "Comment", "// Returns the current user provided bubble visibility of this comment.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
		{ "ToolTip", "Returns the current user provided bubble visibility of this comment." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMCommentNode, nullptr, "GetCommentBubbleVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::RigVMCommentNode_eventGetCommentBubbleVisible_Parms), Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics
	{
		struct RigVMCommentNode_eventGetCommentColorBubble_Parms
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
	void Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMCommentNode_eventGetCommentColorBubble_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMCommentNode_eventGetCommentColorBubble_Parms), &Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMCommentNode" },
		{ "Comment", "// Returns the current user provided bubble color inheritance of this comment.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
		{ "ToolTip", "Returns the current user provided bubble color inheritance of this comment." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMCommentNode, nullptr, "GetCommentColorBubble", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::RigVMCommentNode_eventGetCommentColorBubble_Parms), Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics
	{
		struct RigVMCommentNode_eventGetCommentFontSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMCommentNode_eventGetCommentFontSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMCommentNode" },
		{ "Comment", "// Returns the current user provided font size of this comment.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
		{ "ToolTip", "Returns the current user provided font size of this comment." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMCommentNode, nullptr, "GetCommentFontSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::RigVMCommentNode_eventGetCommentFontSize_Parms), Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics
	{
		struct RigVMCommentNode_eventGetCommentText_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMCommentNode_eventGetCommentText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMCommentNode" },
		{ "Comment", "// Returns the current user provided text of this comment.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
		{ "ToolTip", "Returns the current user provided text of this comment." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMCommentNode, nullptr, "GetCommentText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::RigVMCommentNode_eventGetCommentText_Parms), Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMCommentNode_GetCommentText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMCommentNode_GetCommentText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMCommentNode);
	UClass* Z_Construct_UClass_URigVMCommentNode_NoRegister()
	{
		return URigVMCommentNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMCommentNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommentText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBubbleVisible_MetaData[];
#endif
		static void NewProp_bBubbleVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBubbleVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorBubble_MetaData[];
#endif
		static void NewProp_bColorBubble_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorBubble;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMCommentNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMCommentNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMCommentNode_GetCommentBubbleVisible, "GetCommentBubbleVisible" }, // 2915832383
		{ &Z_Construct_UFunction_URigVMCommentNode_GetCommentColorBubble, "GetCommentColorBubble" }, // 2776327350
		{ &Z_Construct_UFunction_URigVMCommentNode_GetCommentFontSize, "GetCommentFontSize" }, // 4157142086
		{ &Z_Construct_UFunction_URigVMCommentNode_GetCommentText, "GetCommentText" }, // 236864903
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCommentNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Comment Nodes can be used to annotate a Graph by adding\n * colored grouping as well as user provided text.\n * Comment Nodes are purely cosmetic and don't contribute\n * to the runtime result of the Graph / Function.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMCommentNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
		{ "ToolTip", "Comment Nodes can be used to annotate a Graph by adding\ncolored grouping as well as user provided text.\nComment Nodes are purely cosmetic and don't contribute\nto the runtime result of the Graph / Function." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_CommentText_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_CommentText = { "CommentText", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMCommentNode, CommentText), METADATA_PARAMS(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_CommentText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_CommentText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_FontSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMCommentNode, FontSize), METADATA_PARAMS(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bBubbleVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
	};
#endif
	void Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bBubbleVisible_SetBit(void* Obj)
	{
		((URigVMCommentNode*)Obj)->bBubbleVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bBubbleVisible = { "bBubbleVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMCommentNode), &Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bBubbleVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bBubbleVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bBubbleVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bColorBubble_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCommentNode.h" },
	};
#endif
	void Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bColorBubble_SetBit(void* Obj)
	{
		((URigVMCommentNode*)Obj)->bColorBubble = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bColorBubble = { "bColorBubble", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMCommentNode), &Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bColorBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bColorBubble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bColorBubble_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMCommentNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_CommentText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bBubbleVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCommentNode_Statics::NewProp_bColorBubble,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMCommentNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMCommentNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMCommentNode_Statics::ClassParams = {
		&URigVMCommentNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMCommentNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCommentNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMCommentNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCommentNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMCommentNode()
	{
		if (!Z_Registration_Info_UClass_URigVMCommentNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMCommentNode.OuterSingleton, Z_Construct_UClass_URigVMCommentNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMCommentNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMCommentNode>()
	{
		return URigVMCommentNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMCommentNode);
	URigVMCommentNode::~URigVMCommentNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMCommentNode, URigVMCommentNode::StaticClass, TEXT("URigVMCommentNode"), &Z_Registration_Info_UClass_URigVMCommentNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMCommentNode), 1215566281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_3347676101(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
