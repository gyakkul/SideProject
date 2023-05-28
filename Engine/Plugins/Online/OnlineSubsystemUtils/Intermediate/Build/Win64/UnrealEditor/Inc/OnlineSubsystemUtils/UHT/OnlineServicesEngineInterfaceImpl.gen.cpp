// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OnlineServicesEngineInterfaceImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineServicesEngineInterfaceImpl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UOnlineServicesEngineInterfaceImpl::StaticRegisterNativesUOnlineServicesEngineInterfaceImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineServicesEngineInterfaceImpl);
	UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister()
	{
		return UOnlineServicesEngineInterfaceImpl::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineEngineInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implementation of UOnlineEngineInterface that uses Online Services (also known as Online Subsystem v2)\n */" },
		{ "IncludePath", "OnlineServicesEngineInterfaceImpl.h" },
		{ "ModuleRelativePath", "Private/OnlineServicesEngineInterfaceImpl.h" },
		{ "ToolTip", "Implementation of UOnlineEngineInterface that uses Online Services (also known as Online Subsystem v2)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineServicesEngineInterfaceImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::ClassParams = {
		&UOnlineServicesEngineInterfaceImpl::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl()
	{
		if (!Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton, Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineServicesEngineInterfaceImpl>()
	{
		return UOnlineServicesEngineInterfaceImpl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineServicesEngineInterfaceImpl);
	UOnlineServicesEngineInterfaceImpl::~UOnlineServicesEngineInterfaceImpl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl, UOnlineServicesEngineInterfaceImpl::StaticClass, TEXT("UOnlineServicesEngineInterfaceImpl"), &Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineServicesEngineInterfaceImpl), 1742588995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_744657191(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
