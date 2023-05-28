// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientPilotBlackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPilotBlackboard() {}
// Cross Module References
	CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotBlackboard();
	CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotBlackboard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClientPilot();
// End Cross Module References
	void UClientPilotBlackboard::StaticRegisterNativesUClientPilotBlackboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClientPilotBlackboard);
	UClass* Z_Construct_UClass_UClientPilotBlackboard_NoRegister()
	{
		return UClientPilotBlackboard::StaticClass();
	}
	struct Z_Construct_UClass_UClientPilotBlackboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientPilotBlackboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClientPilot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientPilotBlackboard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClientPilotBlackboard.h" },
		{ "ModuleRelativePath", "Public/ClientPilotBlackboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientPilotBlackboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientPilotBlackboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClientPilotBlackboard_Statics::ClassParams = {
		&UClientPilotBlackboard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClientPilotBlackboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientPilotBlackboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientPilotBlackboard()
	{
		if (!Z_Registration_Info_UClass_UClientPilotBlackboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClientPilotBlackboard.OuterSingleton, Z_Construct_UClass_UClientPilotBlackboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClientPilotBlackboard.OuterSingleton;
	}
	template<> CLIENTPILOT_API UClass* StaticClass<UClientPilotBlackboard>()
	{
		return UClientPilotBlackboard::StaticClass();
	}
	UClientPilotBlackboard::UClientPilotBlackboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientPilotBlackboard);
	UClientPilotBlackboard::~UClientPilotBlackboard() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClientPilotBlackboard, UClientPilotBlackboard::StaticClass, TEXT("UClientPilotBlackboard"), &Z_Registration_Info_UClass_UClientPilotBlackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClientPilotBlackboard), 3592401375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_3918537055(TEXT("/Script/ClientPilot"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
