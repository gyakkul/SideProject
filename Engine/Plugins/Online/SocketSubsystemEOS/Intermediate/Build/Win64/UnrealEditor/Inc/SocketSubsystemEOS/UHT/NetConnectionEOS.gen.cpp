// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NetConnectionEOS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnectionEOS() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetConnectionEOS();
	SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetConnectionEOS_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SocketSubsystemEOS();
// End Cross Module References
	void UNetConnectionEOS::StaticRegisterNativesUNetConnectionEOS()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetConnectionEOS);
	UClass* Z_Construct_UClass_UNetConnectionEOS_NoRegister()
	{
		return UNetConnectionEOS::StaticClass();
	}
	struct Z_Construct_UClass_UNetConnectionEOS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetConnectionEOS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketSubsystemEOS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnectionEOS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetConnectionEOS.h" },
		{ "ModuleRelativePath", "Private/NetConnectionEOS.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetConnectionEOS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetConnectionEOS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetConnectionEOS_Statics::ClassParams = {
		&UNetConnectionEOS::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetConnectionEOS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnectionEOS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetConnectionEOS()
	{
		if (!Z_Registration_Info_UClass_UNetConnectionEOS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetConnectionEOS.OuterSingleton, Z_Construct_UClass_UNetConnectionEOS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetConnectionEOS.OuterSingleton;
	}
	template<> SOCKETSUBSYSTEMEOS_API UClass* StaticClass<UNetConnectionEOS>()
	{
		return UNetConnectionEOS::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetConnectionEOS);
	UNetConnectionEOS::~UNetConnectionEOS() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetConnectionEOS, UNetConnectionEOS::StaticClass, TEXT("UNetConnectionEOS"), &Z_Registration_Info_UClass_UNetConnectionEOS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetConnectionEOS), 736318304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_2865630599(TEXT("/Script/SocketSubsystemEOS"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
