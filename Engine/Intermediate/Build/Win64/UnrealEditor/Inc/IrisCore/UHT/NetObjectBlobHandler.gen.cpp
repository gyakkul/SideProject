// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Iris/ReplicationSystem/NetBlob/NetObjectBlobHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectBlobHandler() {}
// Cross Module References
	IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectBlobHandler();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectBlobHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UNetObjectBlobHandler::StaticRegisterNativesUNetObjectBlobHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectBlobHandler);
	UClass* Z_Construct_UClass_UNetObjectBlobHandler_NoRegister()
	{
		return UNetObjectBlobHandler::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectBlobHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectBlobHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetBlobHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectBlobHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NetBlobHandler used for huge replicated objects. This blob will be split into PartialNetBlobs.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/NetObjectBlobHandler.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetObjectBlobHandler.h" },
		{ "ToolTip", "NetBlobHandler used for huge replicated objects. This blob will be split into PartialNetBlobs." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectBlobHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectBlobHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectBlobHandler_Statics::ClassParams = {
		&UNetObjectBlobHandler::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectBlobHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectBlobHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectBlobHandler()
	{
		if (!Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton, Z_Construct_UClass_UNetObjectBlobHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectBlobHandler>()
	{
		return UNetObjectBlobHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectBlobHandler);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectBlobHandler, UNetObjectBlobHandler::StaticClass, TEXT("UNetObjectBlobHandler"), &Z_Registration_Info_UClass_UNetObjectBlobHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectBlobHandler), 854357080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_3830189578(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
