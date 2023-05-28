// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Action/RCAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCAction();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCAction::StaticRegisterNativesURCAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCAction);
	UClass* Z_Construct_UClass_URCAction_NoRegister()
	{
		return URCAction::StaticClass();
	}
	struct Z_Construct_UClass_URCAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedFieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedFieldId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PresetWeakPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for remote control action \n */" },
		{ "IncludePath", "Action/RCAction.h" },
		{ "ModuleRelativePath", "Public/Action/RCAction.h" },
		{ "ToolTip", "Base class for remote control action" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCAction_Statics::NewProp_ExposedFieldId_MetaData[] = {
		{ "Comment", "/** Exposed Property or Function field Id*/" },
		{ "ModuleRelativePath", "Public/Action/RCAction.h" },
		{ "ToolTip", "Exposed Property or Function field Id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCAction_Statics::NewProp_ExposedFieldId = { "ExposedFieldId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCAction, ExposedFieldId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URCAction_Statics::NewProp_ExposedFieldId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCAction_Statics::NewProp_ExposedFieldId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCAction_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Action Id */" },
		{ "ModuleRelativePath", "Public/Action/RCAction.h" },
		{ "ToolTip", "Action Id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCAction_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCAction, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URCAction_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCAction_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCAction_Statics::NewProp_PresetWeakPtr_MetaData[] = {
		{ "Comment", "/** Reference to preset */" },
		{ "ModuleRelativePath", "Public/Action/RCAction.h" },
		{ "ToolTip", "Reference to preset" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URCAction_Statics::NewProp_PresetWeakPtr = { "PresetWeakPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCAction, PresetWeakPtr), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCAction_Statics::NewProp_PresetWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCAction_Statics::NewProp_PresetWeakPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCAction_Statics::NewProp_ExposedFieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCAction_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCAction_Statics::NewProp_PresetWeakPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCAction_Statics::ClassParams = {
		&URCAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCAction()
	{
		if (!Z_Registration_Info_UClass_URCAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCAction.OuterSingleton, Z_Construct_UClass_URCAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCAction.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCAction>()
	{
		return URCAction::StaticClass();
	}
	URCAction::URCAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCAction);
	URCAction::~URCAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCAction, URCAction::StaticClass, TEXT("URCAction"), &Z_Registration_Info_UClass_URCAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCAction), 203963905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_1366928285(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
