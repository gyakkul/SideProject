// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientPilotComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPilotComponent() {}
// Cross Module References
	CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotComponent();
	CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClientPilot();
// End Cross Module References
	void UClientPilotComponent::StaticRegisterNativesUClientPilotComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClientPilotComponent);
	UClass* Z_Construct_UClass_UClientPilotComponent_NoRegister()
	{
		return UClientPilotComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClientPilotComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientPilotComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClientPilot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientPilotComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClientPilotComponent.h" },
		{ "ModuleRelativePath", "Public/ClientPilotComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientPilotComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientPilotComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClientPilotComponent_Statics::ClassParams = {
		&UClientPilotComponent::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClientPilotComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientPilotComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientPilotComponent()
	{
		if (!Z_Registration_Info_UClass_UClientPilotComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClientPilotComponent.OuterSingleton, Z_Construct_UClass_UClientPilotComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClientPilotComponent.OuterSingleton;
	}
	template<> CLIENTPILOT_API UClass* StaticClass<UClientPilotComponent>()
	{
		return UClientPilotComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientPilotComponent);
	UClientPilotComponent::~UClientPilotComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClientPilotComponent, UClientPilotComponent::StaticClass, TEXT("UClientPilotComponent"), &Z_Registration_Info_UClass_UClientPilotComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClientPilotComponent), 562956754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_4221577698(TEXT("/Script/ClientPilot"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
