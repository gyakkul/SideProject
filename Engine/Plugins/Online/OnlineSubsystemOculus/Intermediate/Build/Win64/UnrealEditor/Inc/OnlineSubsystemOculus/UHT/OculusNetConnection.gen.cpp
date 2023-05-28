// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusNetConnection() {}
// Cross Module References
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusNetConnection();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusNetConnection_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemOculus();
// End Cross Module References
	void UOculusNetConnection::StaticRegisterNativesUOculusNetConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusNetConnection);
	UClass* Z_Construct_UClass_UOculusNetConnection_NoRegister()
	{
		return UOculusNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_UOculusNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusNetConnection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OculusNetConnection.h" },
		{ "ModuleRelativePath", "Classes/OculusNetConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusNetConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusNetConnection_Statics::ClassParams = {
		&UOculusNetConnection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOculusNetConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusNetConnection()
	{
		if (!Z_Registration_Info_UClass_UOculusNetConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusNetConnection.OuterSingleton, Z_Construct_UClass_UOculusNetConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusNetConnection.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<UOculusNetConnection>()
	{
		return UOculusNetConnection::StaticClass();
	}
	UOculusNetConnection::UOculusNetConnection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusNetConnection);
	UOculusNetConnection::~UOculusNetConnection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetConnection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetConnection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusNetConnection, UOculusNetConnection::StaticClass, TEXT("UOculusNetConnection"), &Z_Registration_Info_UClass_UOculusNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusNetConnection), 2649565530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetConnection_h_3883254652(TEXT("/Script/OnlineSubsystemOculus"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusNetConnection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
