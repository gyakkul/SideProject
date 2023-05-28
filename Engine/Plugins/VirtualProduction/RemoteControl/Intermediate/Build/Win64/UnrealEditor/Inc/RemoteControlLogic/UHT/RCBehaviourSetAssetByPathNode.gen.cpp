// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/Path/RCBehaviourSetAssetByPathNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourSetAssetByPathNode() {}
// Cross Module References
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourSetAssetByPathNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourSetAssetByPathNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	DEFINE_FUNCTION(URCBehaviourSetAssetByPathNode::execIsSupported)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSupported_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCBehaviourSetAssetByPathNode::execExecute)
	{
		P_GET_OBJECT(URCBehaviour,Z_Param_InBehaviour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute_Implementation(Z_Param_InBehaviour);
		P_NATIVE_END;
	}
	struct RCBehaviourSetAssetByPathNode_eventExecute_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourSetAssetByPathNode_eventExecute_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct RCBehaviourSetAssetByPathNode_eventIsSupported_Parms
	{
		URCBehaviour* InBehaviour;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		RCBehaviourSetAssetByPathNode_eventIsSupported_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_URCBehaviourSetAssetByPathNode_Execute = FName(TEXT("Execute"));
	bool URCBehaviourSetAssetByPathNode::Execute(URCBehaviour* InBehaviour) const
	{
		RCBehaviourSetAssetByPathNode_eventExecute_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourSetAssetByPathNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourSetAssetByPathNode_Execute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_URCBehaviourSetAssetByPathNode_IsSupported = FName(TEXT("IsSupported"));
	bool URCBehaviourSetAssetByPathNode::IsSupported(URCBehaviour* InBehaviour) const
	{
		RCBehaviourSetAssetByPathNode_eventIsSupported_Parms Parms;
		Parms.InBehaviour=InBehaviour;
		const_cast<URCBehaviourSetAssetByPathNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_URCBehaviourSetAssetByPathNode_IsSupported),&Parms);
		return !!Parms.ReturnValue;
	}
	void URCBehaviourSetAssetByPathNode::StaticRegisterNativesURCBehaviourSetAssetByPathNode()
	{
		UClass* Class = URCBehaviourSetAssetByPathNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &URCBehaviourSetAssetByPathNode::execExecute },
			{ "IsSupported", &URCBehaviourSetAssetByPathNode::execIsSupported },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourSetAssetByPathNode_eventExecute_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourSetAssetByPathNode_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourSetAssetByPathNode_eventExecute_Parms), &Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "//~ Begin URCBehaviourNode interface\n" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCBehaviourSetAssetByPathNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourSetAssetByPathNode, nullptr, "Execute", nullptr, nullptr, sizeof(RCBehaviourSetAssetByPathNode_eventExecute_Parms), Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::NewProp_InBehaviour = { "InBehaviour", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCBehaviourSetAssetByPathNode_eventIsSupported_Parms, InBehaviour), Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCBehaviourSetAssetByPathNode_eventIsSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCBehaviourSetAssetByPathNode_eventIsSupported_Parms), &Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::NewProp_InBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCBehaviourSetAssetByPathNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCBehaviourSetAssetByPathNode, nullptr, "IsSupported", nullptr, nullptr, sizeof(RCBehaviourSetAssetByPathNode_eventIsSupported_Parms), Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourSetAssetByPathNode);
	UClass* Z_Construct_UClass_URCBehaviourSetAssetByPathNode_NoRegister()
	{
		return URCBehaviourSetAssetByPathNode::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviourNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_Execute, "Execute" }, // 2511956323
		{ &Z_Construct_UFunction_URCBehaviourSetAssetByPathNode_IsSupported, "IsSupported" }, // 83385130
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes the string as a path and goes on to search for the Asset it is connected to, setting it to a Target Exposed Property.\n */" },
		{ "IncludePath", "Behaviour/Builtin/Path/RCBehaviourSetAssetByPathNode.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCBehaviourSetAssetByPathNode.h" },
		{ "ToolTip", "Takes the string as a path and goes on to search for the Asset it is connected to, setting it to a Target Exposed Property." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourSetAssetByPathNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::ClassParams = {
		&URCBehaviourSetAssetByPathNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourSetAssetByPathNode()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourSetAssetByPathNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourSetAssetByPathNode.OuterSingleton, Z_Construct_UClass_URCBehaviourSetAssetByPathNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourSetAssetByPathNode.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourSetAssetByPathNode>()
	{
		return URCBehaviourSetAssetByPathNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourSetAssetByPathNode);
	URCBehaviourSetAssetByPathNode::~URCBehaviourSetAssetByPathNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourSetAssetByPathNode, URCBehaviourSetAssetByPathNode::StaticClass, TEXT("URCBehaviourSetAssetByPathNode"), &Z_Registration_Info_UClass_URCBehaviourSetAssetByPathNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourSetAssetByPathNode), 464932147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_730207545(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCBehaviourSetAssetByPathNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
