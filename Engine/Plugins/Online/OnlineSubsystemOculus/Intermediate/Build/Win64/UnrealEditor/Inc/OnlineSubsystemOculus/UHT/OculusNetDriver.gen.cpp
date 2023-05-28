// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusNetDriver() {}
// Cross Module References
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusNetDriver();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusNetDriver_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemOculus();
// End Cross Module References
	void UOculusNetDriver::StaticRegisterNativesUOculusNetDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusNetDriver);
	UClass* Z_Construct_UClass_UOculusNetDriver_NoRegister()
	{
		return UOculusNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UOculusNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusNetDriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OculusNetDriver.h" },
		{ "ModuleRelativePath", "Classes/OculusNetDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusNetDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusNetDriver_Statics::ClassParams = {
		&UOculusNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UOculusNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusNetDriver()
	{
		if (!Z_Registration_Info_UClass_UOculusNetDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusNetDriver.OuterSingleton, Z_Construct_UClass_UOculusNetDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusNetDriver.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<UOculusNetDriver>()
	{
		return UOculusNetDriver::StaticClass();
	}
	UOculusNetDriver::UOculusNetDriver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusNetDriver);
	UOculusNetDriver::~UOculusNetDriver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusNetDriver, UOculusNetDriver::StaticClass, TEXT("UOculusNetDriver"), &Z_Registration_Info_UClass_UOculusNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusNetDriver), 4005546917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetDriver_h_771502116(TEXT("/Script/OnlineSubsystemOculus"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
