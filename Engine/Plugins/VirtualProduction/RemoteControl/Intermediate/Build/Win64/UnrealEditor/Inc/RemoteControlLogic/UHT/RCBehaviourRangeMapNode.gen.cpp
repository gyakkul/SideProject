// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/RangeMap/RCBehaviourRangeMapNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourRangeMapNode() {}
// Cross Module References
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourRangeMapNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourRangeMapNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	DEFINE_FUNCTION(URCBehaviourRangeMapNode::execOnPassed)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPassed_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourRangeMapNode::execIsSupported)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSupported_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourRangeMapNode::execExecute)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	struct RCBehaviourRangeMapNode_eventExecute_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourRangeMapNode_eventExecute_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourRangeMapNode_eventIsSupported_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourRangeMapNode_eventIsSupported_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourRangeMapNode_eventOnPassed_Parms
	{
		URCBehaviour* InBehaviour;
	};
	static FName NAME_URCBehaviourRangeMapNode_Execute = FName(TEXT("Execute"));
	bool URCBehaviourRangeMapNode::Execute(URCBehaviour* InBehaviour) const
	{
		RCBehaviourRangeMapNode_eventExecute_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourRangeMapNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourRangeMapNode_Execute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourRangeMapNode_IsSupported = FName(TEXT("IsSupported"));
	bool URCBehaviourRangeMapNode::IsSupported(URCBehaviour* InBehaviour) const
	{
		RCBehaviourRangeMapNode_eventIsSupported_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourRangeMapNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourRangeMapNode_IsSupported),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourRangeMapNode_OnPassed = FName(TEXT("OnPassed"));
	void URCBehaviourRangeMapNode::OnPassed(URCBehaviour* InBehaviour) const
	{
		RCBehaviourRangeMapNode_eventOnPassed_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourRangeMapNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourRangeMapNode_OnPassed),&Parms);
	}
	void URCBehaviourRangeMapNode::StaticRegisterNativesURCBehaviourRangeMapNode()
	{
		UClass* Class = URCBehaviourRangeMapNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &URCBehaviourRangeMapNode::execExecute },
			{ "IsSupported", &URCBehaviourRangeMapNode::execIsSupported },
			{ "OnPassed", &URCBehaviourRangeMapNode::execOnPassed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourRangeMapNode_eventExecute_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourRangeMapNode_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourRangeMapNode_eventExecute_Parms), &Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "//~ Begin URCBehaviourNode interface\n" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCBehaviourRangeMapNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourRangeMapNode, nullptr, "Execute", nullptr, nullptr, sizeof(RCBehaviourRangeMapNode_eventExecute_Parms), Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourRangeMapNode_eventIsSupported_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourRangeMapNode_eventIsSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourRangeMapNode_eventIsSupported_Parms), &Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCBehaviourRangeMapNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourRangeMapNode, nullptr, "IsSupported", nullptr, nullptr, sizeof(RCBehaviourRangeMapNode_eventIsSupported_Parms), Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBehaviour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourRangeMapNode_eventOnPassed_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::NewProp_InBehaviour,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCBehaviourRangeMapNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourRangeMapNode, nullptr, "OnPassed", nullptr, nullptr, sizeof(RCBehaviourRangeMapNode_eventOnPassed_Parms), Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourRangeMapNode);
	UClass* Z_Construct_UClass_URCBehaviourRangeMapNode_NoRegister()
	{
		return URCBehaviourRangeMapNode::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourRangeMapNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviourNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URCBehaviourRangeMapNode_Execute, "Execute" }, // 3895520917
		{ &Z_Construct_UFunction_URCBehaviourRangeMapNode_IsSupported, "IsSupported" }, // 245612866
		{ &Z_Construct_UFunction_URCBehaviourRangeMapNode_OnPassed, "OnPassed" }, // 2263808625
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Uses the given properties and values to limit the values of the Controller and perform lerp operations for the values.\n */" },
		{ "IncludePath", "Behaviour/Builtin/RangeMap/RCBehaviourRangeMapNode.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCBehaviourRangeMapNode.h" },
		{ "ToolTip", "Uses the given properties and values to limit the values of the Controller and perform lerp operations for the values." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourRangeMapNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::ClassParams = {
		&URCBehaviourRangeMapNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourRangeMapNode()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourRangeMapNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourRangeMapNode.OuterSingleton, Z_Construct_UClass_URCBehaviourRangeMapNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourRangeMapNode.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourRangeMapNode>()
	{
		return URCBehaviourRangeMapNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourRangeMapNode);
	URCBehaviourRangeMapNode::~URCBehaviourRangeMapNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCBehaviourRangeMapNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCBehaviourRangeMapNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourRangeMapNode, URCBehaviourRangeMapNode::StaticClass, TEXT("URCBehaviourRangeMapNode"), &Z_Registration_Info_UClass_URCBehaviourRangeMapNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourRangeMapNode), 3656395999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCBehaviourRangeMapNode_h_4087589508(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCBehaviourRangeMapNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCBehaviourRangeMapNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
