// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMUnitNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMUnitNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMUnitNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMUnitNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMUnitNode::execGetStructDefaultValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStructDefaultValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMUnitNode::execGetMethodName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMethodName();
		P_NATIVE_END;
	}
	void URigVMUnitNode::StaticRegisterNativesURigVMUnitNode()
	{
		UClass* Class = URigVMUnitNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMethodName", &URigVMUnitNode::execGetMethodName },
			{ "GetStructDefaultValue", &URigVMUnitNode::execGetStructDefaultValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics
	{
		struct RigVMUnitNode_eventGetMethodName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMUnitNode_eventGetMethodName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMUnitNode" },
		{ "Comment", "// Returns the name of the declared RIGVM_METHOD\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMUnitNode.h" },
		{ "ToolTip", "Returns the name of the declared RIGVM_METHOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMUnitNode, nullptr, "GetMethodName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::RigVMUnitNode_eventGetMethodName_Parms), Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMUnitNode_GetMethodName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMUnitNode_GetMethodName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics
	{
		struct RigVMUnitNode_eventGetStructDefaultValue_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMUnitNode_eventGetStructDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMUnitNode" },
		{ "Comment", "// Returns the default value for the struct as text\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMUnitNode.h" },
		{ "ToolTip", "Returns the default value for the struct as text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMUnitNode, nullptr, "GetStructDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::RigVMUnitNode_eventGetStructDefaultValue_Parms), Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMUnitNode);
	UClass* Z_Construct_UClass_URigVMUnitNode_NoRegister()
	{
		return URigVMUnitNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMUnitNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MethodName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MethodName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMUnitNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMUnitNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMUnitNode_GetMethodName, "GetMethodName" }, // 3205178314
		{ &Z_Construct_UFunction_URigVMUnitNode_GetStructDefaultValue, "GetStructDefaultValue" }, // 2408661286
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMUnitNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Struct Node represents a Function Invocation of a RIGVM_METHOD\n * declared on a USTRUCT. Struct Nodes have input / output pins for all\n * struct UPROPERTY members.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMUnitNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMUnitNode.h" },
		{ "ToolTip", "The Struct Node represents a Function Invocation of a RIGVM_METHOD\ndeclared on a USTRUCT. Struct Nodes have input / output pins for all\nstruct UPROPERTY members." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_ScriptStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMUnitNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_ScriptStruct = { "ScriptStruct", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMUnitNode, ScriptStruct_DEPRECATED), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_ScriptStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_ScriptStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_MethodName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMUnitNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_MethodName = { "MethodName", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMUnitNode, MethodName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_MethodName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_MethodName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMUnitNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_ScriptStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMUnitNode_Statics::NewProp_MethodName,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMUnitNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMUnitNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMUnitNode_Statics::ClassParams = {
		&URigVMUnitNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_URigVMUnitNode_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUnitNode_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMUnitNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUnitNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMUnitNode()
	{
		if (!Z_Registration_Info_UClass_URigVMUnitNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMUnitNode.OuterSingleton, Z_Construct_UClass_URigVMUnitNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMUnitNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMUnitNode>()
	{
		return URigVMUnitNode::StaticClass();
	}
	URigVMUnitNode::URigVMUnitNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMUnitNode);
	URigVMUnitNode::~URigVMUnitNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMUnitNode, URigVMUnitNode::StaticClass, TEXT("URigVMUnitNode"), &Z_Registration_Info_UClass_URigVMUnitNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMUnitNode), 2363314225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_756369228(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
