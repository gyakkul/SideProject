// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourConditionalNode() {}
// Cross Module References
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourConditionalNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourConditionalNode_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	DEFINE_FUNCTION(URCBehaviourConditionalNode::execOnPassed)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPassed_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourConditionalNode::execIsSupported)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSupported_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourConditionalNode::execExecute)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	struct RCBehaviourConditionalNode_eventExecute_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourConditionalNode_eventExecute_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourConditionalNode_eventIsSupported_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourConditionalNode_eventIsSupported_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourConditionalNode_eventOnPassed_Parms
	{
		URCBehaviour* InBehaviour;
	};
	static FName NAME_URCBehaviourConditionalNode_Execute = FName(TEXT("Execute"));
	bool URCBehaviourConditionalNode::Execute(URCBehaviour* InBehaviour) const
	{
		RCBehaviourConditionalNode_eventExecute_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourConditionalNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourConditionalNode_Execute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourConditionalNode_IsSupported = FName(TEXT("IsSupported"));
	bool URCBehaviourConditionalNode::IsSupported(URCBehaviour* InBehaviour) const
	{
		RCBehaviourConditionalNode_eventIsSupported_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourConditionalNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourConditionalNode_IsSupported),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourConditionalNode_OnPassed = FName(TEXT("OnPassed"));
	void URCBehaviourConditionalNode::OnPassed(URCBehaviour* InBehaviour) const
	{
		RCBehaviourConditionalNode_eventOnPassed_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourConditionalNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourConditionalNode_OnPassed),&Parms);
	}
	void URCBehaviourConditionalNode::StaticRegisterNativesURCBehaviourConditionalNode()
	{
		UClass* Class = URCBehaviourConditionalNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &URCBehaviourConditionalNode::execExecute },
			{ "IsSupported", &URCBehaviourConditionalNode::execIsSupported },
			{ "OnPassed", &URCBehaviourConditionalNode::execOnPassed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBehaviour;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourConditionalNode_eventExecute_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourConditionalNode_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourConditionalNode_eventExecute_Parms), &Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "//~ Begin URCBehaviourNode interface\n" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourConditionalNode, nullptr, "Execute", nullptr, nullptr, sizeof(RCBehaviourConditionalNode_eventExecute_Parms), Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourConditionalNode_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourConditionalNode_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBehaviour;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourConditionalNode_eventIsSupported_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourConditionalNode_eventIsSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourConditionalNode_eventIsSupported_Parms), &Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourConditionalNode, nullptr, "IsSupported", nullptr, nullptr, sizeof(RCBehaviourConditionalNode_eventIsSupported_Parms), Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBehaviour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourConditionalNode_eventOnPassed_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::NewProp_InBehaviour,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourConditionalNode, nullptr, "OnPassed", nullptr, nullptr, sizeof(RCBehaviourConditionalNode_eventOnPassed_Parms), Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourConditionalNode);
	UClass* Z_Construct_UClass_URCBehaviourConditionalNode_NoRegister()
	{
		return URCBehaviourConditionalNode::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourConditionalNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourConditionalNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviourNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URCBehaviourConditionalNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URCBehaviourConditionalNode_Execute, "Execute" }, // 2926660003
		{ &Z_Construct_UFunction_URCBehaviourConditionalNode_IsSupported, "IsSupported" }, // 1310296094
		{ &Z_Construct_UFunction_URCBehaviourConditionalNode_OnPassed, "OnPassed" }, // 388072231
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourConditionalNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Compares given property value with controller property value\n */" },
		{ "IncludePath", "Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h" },
		{ "ToolTip", "Compares given property value with controller property value" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourConditionalNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourConditionalNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourConditionalNode_Statics::ClassParams = {
		&URCBehaviourConditionalNode::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourConditionalNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourConditionalNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourConditionalNode()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourConditionalNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourConditionalNode.OuterSingleton, Z_Construct_UClass_URCBehaviourConditionalNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourConditionalNode.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourConditionalNode>()
	{
		return URCBehaviourConditionalNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourConditionalNode);
	URCBehaviourConditionalNode::~URCBehaviourConditionalNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourConditionalNode, URCBehaviourConditionalNode::StaticClass, TEXT("URCBehaviourConditionalNode"), &Z_Registration_Info_UClass_URCBehaviourConditionalNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourConditionalNode), 4198407830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_2584232404(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
