// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/OnlineEngineInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineEngineInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UOnlineEngineInterface::StaticRegisterNativesUOnlineEngineInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineEngineInterface);
	UClass* Z_Construct_UClass_UOnlineEngineInterface_NoRegister()
	{
		return UOnlineEngineInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineEngineInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineEngineInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface class between engine and OnlineSubsystem to remove dependencies between the two\n * The real work is implemented in UOnlineEngineInterfaceImpl in OnlineSubsystemUtils\n * The expectation is that this basic group of functions will not expand/change and that \n * OnlineSubsystem can remain independent of the engine\n *\n * Games should not use this interface, use the OnlineSubsystem plugins directly\n *\n * Better functionality descriptions can be found in the OnlineSubsystem interfaces \n *\n * Adding code here is discouraged, there is probably a better way, talk to the OGS team\n */" },
		{ "IncludePath", "Net/OnlineEngineInterface.h" },
		{ "ModuleRelativePath", "Public/Net/OnlineEngineInterface.h" },
		{ "ToolTip", "Interface class between engine and OnlineSubsystem to remove dependencies between the two\nThe real work is implemented in UOnlineEngineInterfaceImpl in OnlineSubsystemUtils\nThe expectation is that this basic group of functions will not expand/change and that\nOnlineSubsystem can remain independent of the engine\n\nGames should not use this interface, use the OnlineSubsystem plugins directly\n\nBetter functionality descriptions can be found in the OnlineSubsystem interfaces\n\nAdding code here is discouraged, there is probably a better way, talk to the OGS team" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineEngineInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEngineInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEngineInterface_Statics::ClassParams = {
		&UOnlineEngineInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineEngineInterface()
	{
		if (!Z_Registration_Info_UClass_UOnlineEngineInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineEngineInterface.OuterSingleton, Z_Construct_UClass_UOnlineEngineInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineEngineInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UOnlineEngineInterface>()
	{
		return UOnlineEngineInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEngineInterface);
	UOnlineEngineInterface::~UOnlineEngineInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineEngineInterface, UOnlineEngineInterface::StaticClass, TEXT("UOnlineEngineInterface"), &Z_Registration_Info_UClass_UOnlineEngineInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineEngineInterface), 3849836627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_3288457924(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
