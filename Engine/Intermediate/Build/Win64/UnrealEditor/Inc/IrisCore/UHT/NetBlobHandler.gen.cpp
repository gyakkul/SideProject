// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/NetBlob/NetBlobHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBlobHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler();
	IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UNetBlobHandler::StaticRegisterNativesUNetBlobHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetBlobHandler);
	UClass* Z_Construct_UClass_UNetBlobHandler_NoRegister()
	{
		return UNetBlobHandler::StaticClass();
	}
	struct Z_Construct_UClass_UNetBlobHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetBlobHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetBlobHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UNetBlobHandler is responsible for creating and processing a single type of NetBlob.\n * If the handler should be able to receive blobs it needs to be configured in\n * UNetBlobHandlerDefinitions and registered to the UReplicationSystem on both the\n * sending and receiving side.\n * @see UReplicationSystem::RegisterNetBlobHandler\n * @note Certain handlers such as NetRPCHandler, PartialNetObjectAttachmentHandler and NetObjectBlobHandler will be registered automatically.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/NetBlobHandler.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/NetBlobHandler.h" },
		{ "ToolTip", "A UNetBlobHandler is responsible for creating and processing a single type of NetBlob.\nIf the handler should be able to receive blobs it needs to be configured in\nUNetBlobHandlerDefinitions and registered to the UReplicationSystem on both the\nsending and receiving side.\n@see UReplicationSystem::RegisterNetBlobHandler\n@note Certain handlers such as NetRPCHandler, PartialNetObjectAttachmentHandler and NetObjectBlobHandler will be registered automatically." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetBlobHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetBlobHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetBlobHandler_Statics::ClassParams = {
		&UNetBlobHandler::StaticClass,
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
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UNetBlobHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetBlobHandler()
	{
		if (!Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton, Z_Construct_UClass_UNetBlobHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetBlobHandler>()
	{
		return UNetBlobHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetBlobHandler);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetBlobHandler, UNetBlobHandler::StaticClass, TEXT("UNetBlobHandler"), &Z_Registration_Info_UClass_UNetBlobHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetBlobHandler), 4114334243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_750774940(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
