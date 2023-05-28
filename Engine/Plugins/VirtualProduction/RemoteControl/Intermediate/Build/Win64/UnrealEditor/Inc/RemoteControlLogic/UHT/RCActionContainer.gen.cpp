// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Action/RCActionContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCActionContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCAction_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCActionContainer();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCActionContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCActionContainer::StaticRegisterNativesURCActionContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCActionContainer);
	UClass* Z_Construct_UClass_URCActionContainer_NoRegister()
	{
		return URCActionContainer::StaticClass();
	}
	struct Z_Construct_UClass_URCActionContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionContainers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionContainers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActionContainers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PresetWeakPtr;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCActionContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCActionContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Container for created actions\n */" },
		{ "IncludePath", "Action/RCActionContainer.h" },
		{ "ModuleRelativePath", "Public/Action/RCActionContainer.h" },
		{ "ToolTip", "Container for created actions" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCActionContainer_Statics::NewProp_ActionContainers_ElementProp = { "ActionContainers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URCActionContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCActionContainer_Statics::NewProp_ActionContainers_MetaData[] = {
		{ "Comment", "/** Set of child action container */" },
		{ "ModuleRelativePath", "Public/Action/RCActionContainer.h" },
		{ "ToolTip", "Set of child action container" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URCActionContainer_Statics::NewProp_ActionContainers = { "ActionContainers", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCActionContainer, ActionContainers), METADATA_PARAMS(Z_Construct_UClass_URCActionContainer_Statics::NewProp_ActionContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCActionContainer_Statics::NewProp_ActionContainers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCActionContainer_Statics::NewProp_PresetWeakPtr_MetaData[] = {
		{ "Comment", "/** Reference to Preset */" },
		{ "ModuleRelativePath", "Public/Action/RCActionContainer.h" },
		{ "ToolTip", "Reference to Preset" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URCActionContainer_Statics::NewProp_PresetWeakPtr = { "PresetWeakPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCActionContainer, PresetWeakPtr), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCActionContainer_Statics::NewProp_PresetWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCActionContainer_Statics::NewProp_PresetWeakPtr_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCActionContainer_Statics::NewProp_Actions_ElementProp = { "Actions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URCAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCActionContainer_Statics::NewProp_Actions_MetaData[] = {
		{ "Comment", "/** The list of Actions present in this container */" },
		{ "ModuleRelativePath", "Public/Action/RCActionContainer.h" },
		{ "ToolTip", "The list of Actions present in this container" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URCActionContainer_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCActionContainer, Actions), METADATA_PARAMS(Z_Construct_UClass_URCActionContainer_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCActionContainer_Statics::NewProp_Actions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCActionContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCActionContainer_Statics::NewProp_ActionContainers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCActionContainer_Statics::NewProp_ActionContainers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCActionContainer_Statics::NewProp_PresetWeakPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCActionContainer_Statics::NewProp_Actions_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCActionContainer_Statics::NewProp_Actions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCActionContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCActionContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCActionContainer_Statics::ClassParams = {
		&URCActionContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCActionContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCActionContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCActionContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCActionContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCActionContainer()
	{
		if (!Z_Registration_Info_UClass_URCActionContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCActionContainer.OuterSingleton, Z_Construct_UClass_URCActionContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCActionContainer.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCActionContainer>()
	{
		return URCActionContainer::StaticClass();
	}
	URCActionContainer::URCActionContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCActionContainer);
	URCActionContainer::~URCActionContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCActionContainer, URCActionContainer::StaticClass, TEXT("URCActionContainer"), &Z_Registration_Info_UClass_URCActionContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCActionContainer), 3865940909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_1393622618(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
