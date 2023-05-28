// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DemoNetConnection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetConnection();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDemoNetConnection::StaticRegisterNativesUDemoNetConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemoNetConnection);
	UClass* Z_Construct_UClass_UDemoNetConnection_NoRegister()
	{
		return UDemoNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_UDemoNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetConnection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simulated network connection for recording and playing back game sessions.\n */" },
		{ "IncludePath", "Engine/DemoNetConnection.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetConnection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simulated network connection for recording and playing back game sessions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoNetConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemoNetConnection_Statics::ClassParams = {
		&UDemoNetConnection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDemoNetConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoNetConnection()
	{
		if (!Z_Registration_Info_UClass_UDemoNetConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemoNetConnection.OuterSingleton, Z_Construct_UClass_UDemoNetConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDemoNetConnection.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDemoNetConnection>()
	{
		return UDemoNetConnection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoNetConnection);
	UDemoNetConnection::~UDemoNetConnection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetConnection)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDemoNetConnection, UDemoNetConnection::StaticClass, TEXT("UDemoNetConnection"), &Z_Registration_Info_UClass_UDemoNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemoNetConnection), 577770229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_1106943058(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
