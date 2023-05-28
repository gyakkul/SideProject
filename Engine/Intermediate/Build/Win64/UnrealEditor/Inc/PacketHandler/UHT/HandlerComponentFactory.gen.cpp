// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandlerComponentFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandlerComponentFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacketHandler();
// End Cross Module References
	void UHandlerComponentFactory::StaticRegisterNativesUHandlerComponentFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandlerComponentFactory);
	UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister()
	{
		return UHandlerComponentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHandlerComponentFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandlerComponentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UObject alternative for loading HandlerComponents without strict module dependency\n */" },
		{ "IncludePath", "HandlerComponentFactory.h" },
		{ "ModuleRelativePath", "Classes/HandlerComponentFactory.h" },
		{ "ToolTip", "A UObject alternative for loading HandlerComponents without strict module dependency" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandlerComponentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandlerComponentFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandlerComponentFactory_Statics::ClassParams = {
		&UHandlerComponentFactory::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandlerComponentFactory()
	{
		if (!Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton, Z_Construct_UClass_UHandlerComponentFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton;
	}
	template<> PACKETHANDLER_API UClass* StaticClass<UHandlerComponentFactory>()
	{
		return UHandlerComponentFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandlerComponentFactory);
	UHandlerComponentFactory::~UHandlerComponentFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHandlerComponentFactory, UHandlerComponentFactory::StaticClass, TEXT("UHandlerComponentFactory"), &Z_Registration_Info_UClass_UHandlerComponentFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandlerComponentFactory), 1300504504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_1458960077(TEXT("/Script/PacketHandler"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
