// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Action/Bind/RCPropertyBindAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCPropertyBindAction() {}
// Cross Module References
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCController_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyAction();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyBindAction();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyBindAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCPropertyBindAction::StaticRegisterNativesURCPropertyBindAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCPropertyBindAction);
	UClass* Z_Construct_UClass_URCPropertyBindAction_NoRegister()
	{
		return URCPropertyBindAction::StaticClass();
	}
	struct Z_Construct_UClass_URCPropertyBindAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCPropertyBindAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCPropertyAction,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCPropertyBindAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property Bind Action specifically for Bind Behaviour\n */" },
		{ "IncludePath", "Action/Bind/RCPropertyBindAction.h" },
		{ "ModuleRelativePath", "Public/Action/Bind/RCPropertyBindAction.h" },
		{ "ToolTip", "Property Bind Action specifically for Bind Behaviour" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCPropertyBindAction_Statics::NewProp_Controller_MetaData[] = {
		{ "Comment", "/** The Controller that drives us */" },
		{ "ModuleRelativePath", "Public/Action/Bind/RCPropertyBindAction.h" },
		{ "ToolTip", "The Controller that drives us" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCPropertyBindAction_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCPropertyBindAction, Controller), Z_Construct_UClass_URCController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCPropertyBindAction_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyBindAction_Statics::NewProp_Controller_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCPropertyBindAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCPropertyBindAction_Statics::NewProp_Controller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCPropertyBindAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCPropertyBindAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCPropertyBindAction_Statics::ClassParams = {
		&URCPropertyBindAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCPropertyBindAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyBindAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCPropertyBindAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyBindAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCPropertyBindAction()
	{
		if (!Z_Registration_Info_UClass_URCPropertyBindAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCPropertyBindAction.OuterSingleton, Z_Construct_UClass_URCPropertyBindAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCPropertyBindAction.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCPropertyBindAction>()
	{
		return URCPropertyBindAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCPropertyBindAction);
	URCPropertyBindAction::~URCPropertyBindAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCPropertyBindAction, URCPropertyBindAction::StaticClass, TEXT("URCPropertyBindAction"), &Z_Registration_Info_UClass_URCPropertyBindAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCPropertyBindAction), 1331847640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_3897891288(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
