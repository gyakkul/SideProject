// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/RCBehaviourOnValueChangedNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourOnValueChangedNode() {}
// Cross Module References
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourOnValueChangedNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourOnValueChangedNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	DEFINE_FUNCTION(URCBehaviourOnValueChangedNode::execIsSupported)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSupported_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourOnValueChangedNode::execExecute)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	struct RCBehaviourOnValueChangedNode_eventExecute_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourOnValueChangedNode_eventExecute_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourOnValueChangedNode_eventIsSupported_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourOnValueChangedNode_eventIsSupported_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_URCBehaviourOnValueChangedNode_Execute = FName(TEXT("Execute"));
	bool URCBehaviourOnValueChangedNode::Execute(URCBehaviour* InBehaviour) const
	{
		RCBehaviourOnValueChangedNode_eventExecute_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourOnValueChangedNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourOnValueChangedNode_Execute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourOnValueChangedNode_IsSupported = FName(TEXT("IsSupported"));
	bool URCBehaviourOnValueChangedNode::IsSupported(URCBehaviour* InBehaviour) const
	{
		RCBehaviourOnValueChangedNode_eventIsSupported_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourOnValueChangedNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourOnValueChangedNode_IsSupported),&Parms);
		return !!Parms.ReturnValue;
	}
	void URCBehaviourOnValueChangedNode::StaticRegisterNativesURCBehaviourOnValueChangedNode()
	{
		UClass* Class = URCBehaviourOnValueChangedNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &URCBehaviourOnValueChangedNode::execExecute },
			{ "IsSupported", &URCBehaviourOnValueChangedNode::execIsSupported },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourOnValueChangedNode_eventExecute_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourOnValueChangedNode_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourOnValueChangedNode_eventExecute_Parms), &Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "//~ Begin URCBehaviourNode interface\n" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RCBehaviourOnValueChangedNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourOnValueChangedNode, nullptr, "Execute", nullptr, nullptr, sizeof(RCBehaviourOnValueChangedNode_eventExecute_Parms), Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourOnValueChangedNode_eventIsSupported_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourOnValueChangedNode_eventIsSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourOnValueChangedNode_eventIsSupported_Parms), &Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RCBehaviourOnValueChangedNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourOnValueChangedNode, nullptr, "IsSupported", nullptr, nullptr, sizeof(RCBehaviourOnValueChangedNode_eventIsSupported_Parms), Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourOnValueChangedNode);
	UClass* Z_Construct_UClass_URCBehaviourOnValueChangedNode_NoRegister()
	{
		return URCBehaviourOnValueChangedNode::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviourNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URCBehaviourOnValueChangedNode_Execute, "Execute" }, // 2467904428
		{ &Z_Construct_UFunction_URCBehaviourOnValueChangedNode_IsSupported, "IsSupported" }, // 3398711840
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * On Value Changed Behaviour Node\n *\n * This behaviour always returns true and thus executes all actions any time the Controller value is modified\n */" },
		{ "IncludePath", "Behaviour/Builtin/RCBehaviourOnValueChangedNode.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RCBehaviourOnValueChangedNode.h" },
		{ "ToolTip", "On Value Changed Behaviour Node\n\nThis behaviour always returns true and thus executes all actions any time the Controller value is modified" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourOnValueChangedNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::ClassParams = {
		&URCBehaviourOnValueChangedNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourOnValueChangedNode()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourOnValueChangedNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourOnValueChangedNode.OuterSingleton, Z_Construct_UClass_URCBehaviourOnValueChangedNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourOnValueChangedNode.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourOnValueChangedNode>()
	{
		return URCBehaviourOnValueChangedNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourOnValueChangedNode);
	URCBehaviourOnValueChangedNode::~URCBehaviourOnValueChangedNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourOnValueChangedNode, URCBehaviourOnValueChangedNode::StaticClass, TEXT("URCBehaviourOnValueChangedNode"), &Z_Registration_Info_UClass_URCBehaviourOnValueChangedNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourOnValueChangedNode), 3407423627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_1937001706(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RCBehaviourOnValueChangedNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
