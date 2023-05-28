// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controller/RCController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCController() {}
// Cross Module References
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyInContainer();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCController();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCController::StaticRegisterNativesURCController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCController);
	UClass* Z_Construct_UClass_URCController_NoRegister()
	{
		return URCController::StaticClass();
	}
	struct Z_Construct_UClass_URCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Behaviours_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behaviours_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Behaviours;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCVirtualPropertyInContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Remote Control Controller. Container for Behaviours and Actions\n */" },
		{ "IncludePath", "Controller/RCController.h" },
		{ "ModuleRelativePath", "Public/Controller/RCController.h" },
		{ "ToolTip", "Remote Control Controller. Container for Behaviours and Actions" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCController_Statics::NewProp_Behaviours_ElementProp = { "Behaviours", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URCBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCController_Statics::NewProp_Behaviours_MetaData[] = {
		{ "Comment", "/** Set of the behaviours */" },
		{ "ModuleRelativePath", "Public/Controller/RCController.h" },
		{ "ToolTip", "Set of the behaviours" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URCController_Statics::NewProp_Behaviours = { "Behaviours", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCController, Behaviours), METADATA_PARAMS(Z_Construct_UClass_URCController_Statics::NewProp_Behaviours_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCController_Statics::NewProp_Behaviours_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCController_Statics::NewProp_Behaviours_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCController_Statics::NewProp_Behaviours,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCController_Statics::ClassParams = {
		&URCController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCController()
	{
		if (!Z_Registration_Info_UClass_URCController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCController.OuterSingleton, Z_Construct_UClass_URCController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCController.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCController>()
	{
		return URCController::StaticClass();
	}
	URCController::URCController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCController);
	URCController::~URCController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCController, URCController::StaticClass, TEXT("URCController"), &Z_Registration_Info_UClass_URCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCController), 1419903177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_2772579433(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
