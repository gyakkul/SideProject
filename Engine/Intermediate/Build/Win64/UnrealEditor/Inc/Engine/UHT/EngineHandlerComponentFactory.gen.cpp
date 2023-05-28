// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PacketHandlers/EngineHandlerComponentFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineHandlerComponentFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory();
	ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineHandlerComponentFactory::StaticRegisterNativesUEngineHandlerComponentFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineHandlerComponentFactory);
	UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister()
	{
		return UEngineHandlerComponentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEngineHandlerComponentFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory class for loading HandlerComponent's contained within Engine\n */" },
		{ "IncludePath", "PacketHandlers/EngineHandlerComponentFactory.h" },
		{ "ModuleRelativePath", "Classes/PacketHandlers/EngineHandlerComponentFactory.h" },
		{ "ToolTip", "Factory class for loading HandlerComponent's contained within Engine" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineHandlerComponentFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::ClassParams = {
		&UEngineHandlerComponentFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineHandlerComponentFactory()
	{
		if (!Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton, Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEngineHandlerComponentFactory>()
	{
		return UEngineHandlerComponentFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineHandlerComponentFactory);
	UEngineHandlerComponentFactory::~UEngineHandlerComponentFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEngineHandlerComponentFactory, UEngineHandlerComponentFactory::StaticClass, TEXT("UEngineHandlerComponentFactory"), &Z_Registration_Info_UClass_UEngineHandlerComponentFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineHandlerComponentFactory), 683224605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_1147225381(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
