// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/RCBehaviourBlueprintNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourBlueprintNode() {}
// Cross Module References
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourBlueprintNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourBlueprintNode_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	DEFINE_FUNCTION(URCBehaviourBlueprintNode::execOnPassed)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPassed_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourBlueprintNode::execPreExecute)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreExecute_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourBlueprintNode::execExecute)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourBlueprintNode::execIsSupported)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSupported_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	struct RCBehaviourBlueprintNode_eventExecute_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourBlueprintNode_eventExecute_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourBlueprintNode_eventIsSupported_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourBlueprintNode_eventIsSupported_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourBlueprintNode_eventOnPassed_Parms
	{
		URCBehaviour* InBehaviour;
	};
	struct RCBehaviourBlueprintNode_eventPreExecute_Parms
	{
		URCBehaviour* InBehaviour;
	};
	static FName NAME_URCBehaviourBlueprintNode_Execute = FName(TEXT("Execute"));
	bool URCBehaviourBlueprintNode::Execute(URCBehaviour* InBehaviour) const
	{
		RCBehaviourBlueprintNode_eventExecute_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourBlueprintNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourBlueprintNode_Execute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourBlueprintNode_IsSupported = FName(TEXT("IsSupported"));
	bool URCBehaviourBlueprintNode::IsSupported(URCBehaviour* InBehaviour) const
	{
		RCBehaviourBlueprintNode_eventIsSupported_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourBlueprintNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourBlueprintNode_IsSupported),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourBlueprintNode_OnPassed = FName(TEXT("OnPassed"));
	void URCBehaviourBlueprintNode::OnPassed(URCBehaviour* InBehaviour) const
	{
		RCBehaviourBlueprintNode_eventOnPassed_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourBlueprintNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourBlueprintNode_OnPassed),&Parms);
	}
	static FName NAME_URCBehaviourBlueprintNode_PreExecute = FName(TEXT("PreExecute"));
	void URCBehaviourBlueprintNode::PreExecute(URCBehaviour* InBehaviour) const
	{
		RCBehaviourBlueprintNode_eventPreExecute_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourBlueprintNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourBlueprintNode_PreExecute),&Parms);
	}
	void URCBehaviourBlueprintNode::StaticRegisterNativesURCBehaviourBlueprintNode()
	{
		UClass* Class = URCBehaviourBlueprintNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &URCBehaviourBlueprintNode::execExecute },
			{ "IsSupported", &URCBehaviourBlueprintNode::execIsSupported },
			{ "OnPassed", &URCBehaviourBlueprintNode::execOnPassed },
			{ "PreExecute", &URCBehaviourBlueprintNode::execPreExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourBlueprintNode_eventExecute_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourBlueprintNode_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourBlueprintNode_eventExecute_Parms), &Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourBlueprintNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourBlueprintNode, nullptr, "Execute", nullptr, nullptr, sizeof(RCBehaviourBlueprintNode_eventExecute_Parms), Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourBlueprintNode_eventIsSupported_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourBlueprintNode_eventIsSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourBlueprintNode_eventIsSupported_Parms), &Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourBlueprintNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourBlueprintNode, nullptr, "IsSupported", nullptr, nullptr, sizeof(RCBehaviourBlueprintNode_eventIsSupported_Parms), Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBehaviour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourBlueprintNode_eventOnPassed_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::NewProp_InBehaviour,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourBlueprintNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourBlueprintNode, nullptr, "OnPassed", nullptr, nullptr, sizeof(RCBehaviourBlueprintNode_eventOnPassed_Parms), Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBehaviour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourBlueprintNode_eventPreExecute_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::NewProp_InBehaviour,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourBlueprintNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourBlueprintNode, nullptr, "PreExecute", nullptr, nullptr, sizeof(RCBehaviourBlueprintNode_eventPreExecute_Parms), Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourBlueprintNode);
	UClass* Z_Construct_UClass_URCBehaviourBlueprintNode_NoRegister()
	{
		return URCBehaviourBlueprintNode::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourBlueprintNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviourNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URCBehaviourBlueprintNode_Execute, "Execute" }, // 1675320165
		{ &Z_Construct_UFunction_URCBehaviourBlueprintNode_IsSupported, "IsSupported" }, // 2244214810
		{ &Z_Construct_UFunction_URCBehaviourBlueprintNode_OnPassed, "OnPassed" }, // 10486482
		{ &Z_Construct_UFunction_URCBehaviourBlueprintNode_PreExecute, "PreExecute" }, // 3821160482
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base blueprint class for behaviour node which holds the logic to execute behaviour \n */" },
		{ "IncludePath", "Behaviour/RCBehaviourBlueprintNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourBlueprintNode.h" },
		{ "ToolTip", "Base blueprint class for behaviour node which holds the logic to execute behaviour" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourBlueprintNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::ClassParams = {
		&URCBehaviourBlueprintNode::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourBlueprintNode()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourBlueprintNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourBlueprintNode.OuterSingleton, Z_Construct_UClass_URCBehaviourBlueprintNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourBlueprintNode.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourBlueprintNode>()
	{
		return URCBehaviourBlueprintNode::StaticClass();
	}
	URCBehaviourBlueprintNode::URCBehaviourBlueprintNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourBlueprintNode);
	URCBehaviourBlueprintNode::~URCBehaviourBlueprintNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourBlueprintNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourBlueprintNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourBlueprintNode, URCBehaviourBlueprintNode::StaticClass, TEXT("URCBehaviourBlueprintNode"), &Z_Registration_Info_UClass_URCBehaviourBlueprintNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourBlueprintNode), 3482030574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourBlueprintNode_h_3912486085(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourBlueprintNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourBlueprintNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
