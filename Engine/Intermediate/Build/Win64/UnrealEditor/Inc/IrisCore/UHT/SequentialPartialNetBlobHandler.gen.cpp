// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequentialPartialNetBlobHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler();
	IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler();
	IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig();
	IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void USequentialPartialNetBlobHandlerConfig::StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequentialPartialNetBlobHandlerConfig);
	UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister()
	{
		return USequentialPartialNetBlobHandlerConfig::StaticClass();
	}
	struct Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPartBitCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPartBitCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPartCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPartCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartBitCount_MetaData[] = {
		{ "Comment", "/** How many bits a PartialNetBlob payload can hold at most. Cannot exceed 65535, but anything near the max packet size is discouraged as it is unlikely to fit. Keep it a power of two. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ToolTip", "How many bits a PartialNetBlob payload can hold at most. Cannot exceed 65535, but anything near the max packet size is discouraged as it is unlikely to fit. Keep it a power of two." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartBitCount = { "MaxPartBitCount", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequentialPartialNetBlobHandlerConfig, MaxPartBitCount), METADATA_PARAMS(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartBitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartBitCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartCount_MetaData[] = {
		{ "Comment", "/** How many parts a NetBlob can be split into at most. If more parts are required the splitting will fail. Cannot exceed 65535. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ToolTip", "How many parts a NetBlob can be split into at most. If more parts are required the splitting will fail. Cannot exceed 65535." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartCount = { "MaxPartCount", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequentialPartialNetBlobHandlerConfig, MaxPartCount), METADATA_PARAMS(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartBitCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequentialPartialNetBlobHandlerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::ClassParams = {
		&USequentialPartialNetBlobHandlerConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig()
	{
		if (!Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton, Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<USequentialPartialNetBlobHandlerConfig>()
	{
		return USequentialPartialNetBlobHandlerConfig::StaticClass();
	}
	USequentialPartialNetBlobHandlerConfig::USequentialPartialNetBlobHandlerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequentialPartialNetBlobHandlerConfig);
	USequentialPartialNetBlobHandlerConfig::~USequentialPartialNetBlobHandlerConfig() {}
	void USequentialPartialNetBlobHandler::StaticRegisterNativesUSequentialPartialNetBlobHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequentialPartialNetBlobHandler);
	UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister()
	{
		return USequentialPartialNetBlobHandler::StaticClass();
	}
	struct Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetBlobHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequentialPartialNetBlobHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::ClassParams = {
		&USequentialPartialNetBlobHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler()
	{
		if (!Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton, Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<USequentialPartialNetBlobHandler>()
	{
		return USequentialPartialNetBlobHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequentialPartialNetBlobHandler);
	USequentialPartialNetBlobHandler::~USequentialPartialNetBlobHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig, USequentialPartialNetBlobHandlerConfig::StaticClass, TEXT("USequentialPartialNetBlobHandlerConfig"), &Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequentialPartialNetBlobHandlerConfig), 3758220868U) },
		{ Z_Construct_UClass_USequentialPartialNetBlobHandler, USequentialPartialNetBlobHandler::StaticClass, TEXT("USequentialPartialNetBlobHandler"), &Z_Registration_Info_UClass_USequentialPartialNetBlobHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequentialPartialNetBlobHandler), 2205465240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_3415828353(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
