// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/RCBehaviourNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCBehaviourNode::StaticRegisterNativesURCBehaviourNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourNode);
	UClass* Z_Construct_UClass_URCBehaviourNode_NoRegister()
	{
		return URCBehaviourNode::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BehaviorDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for behaviour node which holds the logic to execute behaviour \n */" },
		{ "IncludePath", "Behaviour/RCBehaviourNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourNode.h" },
		{ "ToolTip", "Base class for behaviour node which holds the logic to execute behaviour" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Remote Control Behavior" },
		{ "Comment", "/**\n\x09 * User-friendly display name for this Behavior, displayed in Action Panel's Header.\n\x09 * Custom behavior blueprints can set this value in defaults to update the display name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourNode.h" },
		{ "ToolTip", "User-friendly display name for this Behavior, displayed in Action Panel's Header.\nCustom behavior blueprints can set this value in defaults to update the display name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviourNode, DisplayName), METADATA_PARAMS(Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_BehaviorDescription_MetaData[] = {
		{ "Category", "Remote Control Behavior" },
		{ "Comment", "/**\n\x09 * Detailed description of what this behavior does, displayed in Action Panel's Header.\n\x09 * Custom behavior blueprints can set this value in defaults to update the display name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviour/RCBehaviourNode.h" },
		{ "ToolTip", "Detailed description of what this behavior does, displayed in Action Panel's Header.\nCustom behavior blueprints can set this value in defaults to update the display name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_BehaviorDescription = { "BehaviorDescription", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCBehaviourNode, BehaviorDescription), METADATA_PARAMS(Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_BehaviorDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_BehaviorDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCBehaviourNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCBehaviourNode_Statics::NewProp_BehaviorDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourNode_Statics::ClassParams = {
		&URCBehaviourNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCBehaviourNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourNode()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourNode.OuterSingleton, Z_Construct_UClass_URCBehaviourNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourNode.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourNode>()
	{
		return URCBehaviourNode::StaticClass();
	}
	URCBehaviourNode::URCBehaviourNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourNode);
	URCBehaviourNode::~URCBehaviourNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourNode, URCBehaviourNode::StaticClass, TEXT("URCBehaviourNode"), &Z_Registration_Info_UClass_URCBehaviourNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourNode), 2598699542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_2395722454(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviourNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
