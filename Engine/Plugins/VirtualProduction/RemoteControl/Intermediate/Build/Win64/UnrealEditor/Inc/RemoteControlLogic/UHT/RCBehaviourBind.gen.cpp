// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/Bind/RCBehaviourBind.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCBehaviourBind() {}
// Cross Module References
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourBind();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviourBind_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCBehaviourBind::StaticRegisterNativesURCBehaviourBind()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCBehaviourBind);
	UClass* Z_Construct_UClass_URCBehaviourBind_NoRegister()
	{
		return URCBehaviourBind::StaticClass();
	}
	struct Z_Construct_UClass_URCBehaviourBind_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCBehaviourBind_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCBehaviourBind_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * [Bind Behaviour]\n * \n * Binds a given Controller with multiple exposed properties.\n * Any changes to the value of the controller are directly propagated to the linked properties by Bind Behaviour. \n */" },
		{ "IncludePath", "Behaviour/Builtin/Bind/RCBehaviourBind.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Bind/RCBehaviourBind.h" },
		{ "ToolTip", "[Bind Behaviour]\n\nBinds a given Controller with multiple exposed properties.\nAny changes to the value of the controller are directly propagated to the linked properties by Bind Behaviour." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCBehaviourBind_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCBehaviourBind>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCBehaviourBind_Statics::ClassParams = {
		&URCBehaviourBind::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCBehaviourBind_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCBehaviourBind_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCBehaviourBind()
	{
		if (!Z_Registration_Info_UClass_URCBehaviourBind.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCBehaviourBind.OuterSingleton, Z_Construct_UClass_URCBehaviourBind_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCBehaviourBind.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCBehaviourBind>()
	{
		return URCBehaviourBind::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCBehaviourBind);
	URCBehaviourBind::~URCBehaviourBind() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Bind_RCBehaviourBind_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Bind_RCBehaviourBind_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCBehaviourBind, URCBehaviourBind::StaticClass, TEXT("URCBehaviourBind"), &Z_Registration_Info_UClass_URCBehaviourBind, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCBehaviourBind), 341049788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Bind_RCBehaviourBind_h_1297154138(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Bind_RCBehaviourBind_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Bind_RCBehaviourBind_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
