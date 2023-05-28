// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Action/RCPropertyAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCPropertyAction() {}
// Cross Module References
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCAction();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyAction();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCPropertyAction::StaticRegisterNativesURCPropertyAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCPropertyAction);
	UClass* Z_Construct_UClass_URCPropertyAction_NoRegister()
	{
		return URCPropertyAction::StaticClass();
	}
	struct Z_Construct_UClass_URCPropertyAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySelfContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertySelfContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCPropertyAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCAction,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCPropertyAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property Action which is set property value from the action to exposed property\n */" },
		{ "IncludePath", "Action/RCPropertyAction.h" },
		{ "ModuleRelativePath", "Public/Action/RCPropertyAction.h" },
		{ "ToolTip", "Property Action which is set property value from the action to exposed property" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCPropertyAction_Statics::NewProp_PropertySelfContainer_MetaData[] = {
		{ "Comment", "/** Virtual Property Container */" },
		{ "ModuleRelativePath", "Public/Action/RCPropertyAction.h" },
		{ "ToolTip", "Virtual Property Container" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCPropertyAction_Statics::NewProp_PropertySelfContainer = { "PropertySelfContainer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCPropertyAction, PropertySelfContainer), Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCPropertyAction_Statics::NewProp_PropertySelfContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyAction_Statics::NewProp_PropertySelfContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCPropertyAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCPropertyAction_Statics::NewProp_PropertySelfContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCPropertyAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCPropertyAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCPropertyAction_Statics::ClassParams = {
		&URCPropertyAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCPropertyAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCPropertyAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCPropertyAction()
	{
		if (!Z_Registration_Info_UClass_URCPropertyAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCPropertyAction.OuterSingleton, Z_Construct_UClass_URCPropertyAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCPropertyAction.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCPropertyAction>()
	{
		return URCPropertyAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCPropertyAction);
	URCPropertyAction::~URCPropertyAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCPropertyAction, URCPropertyAction::StaticClass, TEXT("URCPropertyAction"), &Z_Registration_Info_UClass_URCPropertyAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCPropertyAction), 2735694150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_1428242048(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
