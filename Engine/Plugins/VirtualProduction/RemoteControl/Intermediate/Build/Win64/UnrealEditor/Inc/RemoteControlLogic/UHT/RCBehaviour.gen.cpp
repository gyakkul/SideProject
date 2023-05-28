// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/RCBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviour() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCActionContainer_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCBehaviour::StaticRegisterNativesURCBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviour);
	UClass* Z_Construct_UClass_URCBehaviour_NoRegister()
	{
		return URCBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourNodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BehaviourNodeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBehaviourBlueprintClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideBehaviourBlueprintClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ControllerWeakPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBehaviourNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedBehaviourNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteBehavioursDuringPreChange_MetaData[];
#endif
		static void NewProp_bExecuteBehavioursDuringPreChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteBehavioursDuringPreChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for remote control behaviour.\n *\n * Behaviour is container for:\n * - Set of behaviour conditions\n * - And associated actions which should be executed if that is passed the behaviour\n *\n * Behaviour can be extended in Blueprints or CPP classes\n */" },
		{ "IncludePath", "Behaviour/RCBehaviour.h" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Base class for remote control behaviour.\n\nBehaviour is container for:\n- Set of behaviour conditions\n- And associated actions which should be executed if that is passed the behaviour\n\nBehaviour can be extended in Blueprints or CPP classes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_BehaviourNodeClass_MetaData[] = {
		{ "Comment", "/** Associated cpp behaviour */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Associated cpp behaviour" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_BehaviourNodeClass = { "BehaviourNodeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviour, BehaviourNodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URCBehaviourNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_BehaviourNodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_BehaviourNodeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_OverrideBehaviourBlueprintClassPath_MetaData[] = {
		{ "Comment", "/** Class path to associated blueprint class behaviour */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Class path to associated blueprint class behaviour" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_OverrideBehaviourBlueprintClassPath = { "OverrideBehaviourBlueprintClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviour, OverrideBehaviourBlueprintClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_OverrideBehaviourBlueprintClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_OverrideBehaviourBlueprintClassPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Behaviour Id */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Behaviour Id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviour, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_ActionContainer_MetaData[] = {
		{ "Comment", "/** Action container which is associated with current behaviour */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Action container which is associated with current behaviour" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_ActionContainer = { "ActionContainer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviour, ActionContainer), Z_Construct_UClass_URCActionContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_ActionContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_ActionContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_ControllerWeakPtr_MetaData[] = {
		{ "Comment", "/** Reference to controller virtual property with this behaviour */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Reference to controller virtual property with this behaviour" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_ControllerWeakPtr = { "ControllerWeakPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviour, ControllerWeakPtr), Z_Construct_UClass_URCController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_ControllerWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_ControllerWeakPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_CachedBehaviourNode_MetaData[] = {
		{ "Comment", "/** Cached behaviour node */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Cached behaviour node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_CachedBehaviourNode = { "CachedBehaviourNode", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviour, CachedBehaviourNode), Z_Construct_UClass_URCBehaviourNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_CachedBehaviourNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_CachedBehaviourNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "/** Whether this Behaviour is currently enabled. \n\x09* If disabled, it will be not evaluated when the associated Controller changes */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Whether this Behaviour is currently enabled.\nIf disabled, it will be not evaluated when the associated Controller changes" },
	};
#endif
	void Z_Construct_UClass_URCBehaviour_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((URCBehaviour*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URCBehaviour), &Z_Construct_UClass_URCBehaviour_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviour_Statics::NewProp_bExecuteBehavioursDuringPreChange_MetaData[] = {
		{ "Comment", "/** Indicates whether we want a behavour to trigger during live scrubbing of values.\n\x09* For example, for a light intensity value controlled via Bind behavour we want the bound properties to update live even while the float widget is being scrubbed by the user. */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviour.h" },
		{ "ToolTip", "Indicates whether we want a behavour to trigger during live scrubbing of values.\nFor example, for a light intensity value controlled via Bind behavour we want the bound properties to update live even while the float widget is being scrubbed by the user." },
	};
#endif
	void Z_Construct_UClass_URCBehaviour_Statics::NewProp_bExecuteBehavioursDuringPreChange_SetBit(void* Obj)
	{
		((URCBehaviour*)Obj)->bExecuteBehavioursDuringPreChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URCBehaviour_Statics::NewProp_bExecuteBehavioursDuringPreChange = { "bExecuteBehavioursDuringPreChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URCBehaviour), &Z_Construct_UClass_URCBehaviour_Statics::NewProp_bExecuteBehavioursDuringPreChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::NewProp_bExecuteBehavioursDuringPreChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::NewProp_bExecuteBehavioursDuringPreChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_BehaviourNodeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_OverrideBehaviourBlueprintClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_ActionContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_ControllerWeakPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_CachedBehaviourNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviour_Statics::NewProp_bExecuteBehavioursDuringPreChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviour_Statics::ClassParams = {
		&URCBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviour()
	{
		if (!Z_Registration_Info_UClass_URCBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviour.OuterSingleton, Z_Construct_UClass_URCBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviour.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviour>()
	{
		return URCBehaviour::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviour);
	URCBehaviour::~URCBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviour, URCBehaviour::StaticClass, TEXT("URCBehaviour"), &Z_Registration_Info_UClass_URCBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviour), 840392485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_1844670252(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
