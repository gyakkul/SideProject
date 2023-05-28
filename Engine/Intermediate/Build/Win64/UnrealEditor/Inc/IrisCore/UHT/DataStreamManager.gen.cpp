// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/DataStream/DataStreamManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStreamManager() {}
// Cross Module References
	IRISCORE_API UClass* Z_Construct_UClass_UDataStream();
	IRISCORE_API UClass* Z_Construct_UClass_UDataStreamManager();
	IRISCORE_API UClass* Z_Construct_UClass_UDataStreamManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UDataStreamManager::StaticRegisterNativesUDataStreamManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStreamManager);
	UClass* Z_Construct_UClass_UDataStreamManager_NoRegister()
	{
		return UDataStreamManager::StaticClass();
	}
	struct Z_Construct_UClass_UDataStreamManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataStreamManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataStream,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStreamManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The DataStreamManager contains all active DataStreams that may serialize data.\n * Calls to the DataStream interface functions will be forwarded to active streams.\n * Which streams will be automatically created or allowed to be manually created\n * need to be configured via UDataStreamDefinitions.\n */" },
		{ "IncludePath", "Iris/DataStream/DataStreamManager.h" },
		{ "ModuleRelativePath", "Public/Iris/DataStream/DataStreamManager.h" },
		{ "ToolTip", "The DataStreamManager contains all active DataStreams that may serialize data.\nCalls to the DataStream interface functions will be forwarded to active streams.\nWhich streams will be automatically created or allowed to be manually created\nneed to be configured via UDataStreamDefinitions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataStreamManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStreamManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStreamManager_Statics::ClassParams = {
		&UDataStreamManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataStreamManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataStreamManager()
	{
		if (!Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton, Z_Construct_UClass_UDataStreamManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataStreamManager.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UDataStreamManager>()
	{
		return UDataStreamManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStreamManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataStreamManager, UDataStreamManager::StaticClass, TEXT("UDataStreamManager"), &Z_Registration_Info_UClass_UDataStreamManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStreamManager), 465177898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_1050079734(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStreamManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
