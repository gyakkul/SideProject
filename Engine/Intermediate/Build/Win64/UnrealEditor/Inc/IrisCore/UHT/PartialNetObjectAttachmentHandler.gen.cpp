// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartialNetObjectAttachmentHandler() {}
// Cross Module References
	IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler();
	IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler();
	IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UPartialNetObjectAttachmentHandlerConfig::StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartialNetObjectAttachmentHandlerConfig);
	UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister()
	{
		return UPartialNetObjectAttachmentHandlerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCountSplitThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BitCountSplitThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_BitCountSplitThreshold_MetaData[] = {
		{ "Comment", "/** How many bits a payload should have to recommend a split. Should be higher than MaxPartBitCount as splitting adds overhead. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ToolTip", "How many bits a payload should have to recommend a split. Should be higher than MaxPartBitCount as splitting adds overhead." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_BitCountSplitThreshold = { "BitCountSplitThreshold", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPartialNetObjectAttachmentHandlerConfig, BitCountSplitThreshold), METADATA_PARAMS(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_BitCountSplitThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_BitCountSplitThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_BitCountSplitThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartialNetObjectAttachmentHandlerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::ClassParams = {
		&UPartialNetObjectAttachmentHandlerConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig()
	{
		if (!Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton, Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UPartialNetObjectAttachmentHandlerConfig>()
	{
		return UPartialNetObjectAttachmentHandlerConfig::StaticClass();
	}
	UPartialNetObjectAttachmentHandlerConfig::UPartialNetObjectAttachmentHandlerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartialNetObjectAttachmentHandlerConfig);
	UPartialNetObjectAttachmentHandlerConfig::~UPartialNetObjectAttachmentHandlerConfig() {}
	void UPartialNetObjectAttachmentHandler::StaticRegisterNativesUPartialNetObjectAttachmentHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartialNetObjectAttachmentHandler);
	UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister()
	{
		return UPartialNetObjectAttachmentHandler::StaticClass();
	}
	struct Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequentialPartialNetBlobHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NetBlobHandler that can split and assemble very large NetObjectAttachments.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ToolTip", "NetBlobHandler that can split and assemble very large NetObjectAttachments." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartialNetObjectAttachmentHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::ClassParams = {
		&UPartialNetObjectAttachmentHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler()
	{
		if (!Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton, Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UPartialNetObjectAttachmentHandler>()
	{
		return UPartialNetObjectAttachmentHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartialNetObjectAttachmentHandler);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig, UPartialNetObjectAttachmentHandlerConfig::StaticClass, TEXT("UPartialNetObjectAttachmentHandlerConfig"), &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartialNetObjectAttachmentHandlerConfig), 1448909364U) },
		{ Z_Construct_UClass_UPartialNetObjectAttachmentHandler, UPartialNetObjectAttachmentHandler::StaticClass, TEXT("UPartialNetObjectAttachmentHandler"), &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartialNetObjectAttachmentHandler), 1899525201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_4086081505(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
